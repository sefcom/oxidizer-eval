char ruff_python_formatter::comments::visitor::CommentsVisitor::can_skip(unsigned long long a0, unsigned int a1)
{
    struct_0 **v1;  // rax

    v1 = a0.get_or_insert_with(a0 + 16);
    if (!*(v1))
        return 1;
    return a1 <= *(v1)->field_0;
}
