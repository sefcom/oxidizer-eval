void uu_expr::syntax_tree::Parser<S>::parse_expression()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rsi

    v1.parse_precedence(v2, 0);
    return;
}
