void ruff_python_formatter::comments::visitor::CommentsVisitor::visit(unsigned long long a0[8], unsigned long long a1, unsigned long long a2)
{
    if (!a0.enter_node(a1, a2))
        a1.visit_source_order(a2, a0);
    a0.leave_node(a1, a2);
    core::ptr::drop_in_place<ruff_python_formatter::comments::visitor::CommentsVisitor>(a0[6], a0[7]);
    return;
}
