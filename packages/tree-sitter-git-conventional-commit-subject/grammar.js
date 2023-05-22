const WORD = /[^()!:\r\n]+/;
module.exports = grammar({
  name: 'gitcommit',
  extras: () => [],
  rules: {
    source: ($) =>
      seq(
        $.type,
        optional($.scope),
        optional('!'),
        ':',
        $.message,
        optional(/\r?\n/)
      ),
    type: ($) => choice('feat', 'fix', WORD),
    scope: ($) => seq('(', WORD, ')'),
    message: ($) => /[^\r\n]*/,
  },
});
