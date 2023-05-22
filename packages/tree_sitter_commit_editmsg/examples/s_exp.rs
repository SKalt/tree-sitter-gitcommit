use std::io::Read;

use tree_sitter;
use tree_sitter_commit_editmsg;

fn main() -> Result<(), std::io::Error> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_commit_editmsg::language())
        .unwrap();
    let mut input = String::new();
    std::io::stdin().read_to_string(&mut input)?;
    let result = parser.parse(input.as_str(), None).unwrap();
    eprintln!("{}", result.root_node().to_sexp());
    Ok(())
}
