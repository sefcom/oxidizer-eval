fn ruff_python_formatter::comments::visitor::CommentsVisitor::visit(a0: &struct16, a1: i64, a2: i64) -> int {
    if !<ruff_python_formatter::comments::visitor::CommentsVisitor as ruff_python_ast::visitor::source_order::SourceOrderVisitor>::enter_node(a0, a1, a2) {
        ruff_python_ast::generated::AnyNodeRef::visit_source_order(a1 as u8, a2, a0);
    }
    <ruff_python_formatter::comments::visitor::CommentsVisitor as ruff_python_ast::visitor::source_order::SourceOrderVisitor>::leave_node(a0, a1, a2);
    return;
}
