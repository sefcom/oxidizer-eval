use std::fs;

use syn::{
    parse_file,
    visit::{self, Visit},
    ExprPath, ItemFn,
};

struct FnVisitor;

struct CallVisitor {
    fn_name: String,
}

impl<'ast> Visit<'ast> for FnVisitor {
    fn visit_item_fn(&mut self, node: &'ast ItemFn) {
        println!("Function with name={}", node.sig.ident);

        // Delegate to the default impl to visit any nested functions.
        let mut visitor = CallVisitor {
            fn_name: node.sig.ident.to_string(),
        };
        visit::visit_item_fn(&mut visitor, node);
    }
}

impl<'ast> Visit<'ast> for CallVisitor {
    fn visit_expr_call(&mut self, call: &'ast syn::ExprCall) {
        if let syn::Expr::Path(ExprPath { path, .. }) = &*call.func {
            let full_path: String = path
                .segments
                .iter()
                .map(|segment| segment.ident.to_string())
                .collect::<Vec<_>>()
                .join("::");

            println!("Function call to: {}", full_path);
        }
        visit::visit_expr_call(self, call);
    }

    fn visit_expr_macro(&mut self, mac_call: &'ast syn::ExprMacro) {
        println!("macro call to: {:?}", mac_call);
        visit::visit_expr_macro(self, mac_call);
    }

    fn visit_stmt_macro(&mut self, mac_call: &'ast syn::StmtMacro) {
        println!("macro call to: {:?}", mac_call);
        visit::visit_stmt_macro(self, mac_call);
    }
}

fn main() {
    let content =
        fs::read_to_string("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/rust-scanner/test.rs")
            .expect("Should have been able to read the file");
    let ast = parse_file(content.as_str()).unwrap();
    println!("{:?}", ast);
    FnVisitor.visit_file(&ast);
}
