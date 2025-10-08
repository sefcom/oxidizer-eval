long long ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::mark_unformatted(unsigned long a0, unsigned long a1)
{
    void* v1;  // rcx
    unsigned long v2;  // rax

    if (!a1)
        return v2;
    v1 = 0;
    do
    {
        *(8 + a0 + (char *)v1) = 0;
        v1 += 12;
    } while (a1 * 12 != v1);
    return a1 * 12;
}
