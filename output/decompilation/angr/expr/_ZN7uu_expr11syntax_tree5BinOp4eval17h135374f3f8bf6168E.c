long long uu_expr::syntax_tree::BinOp::eval(unsigned long long a0, char a1, char a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v1;  // rsi
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rcx

    if (!a1)
        return a0.eval(a2, a3, a4);
    v1 = a2;
    v2 = a3;
    v3 = a4;
    if (a1 == 1)
        return a0.eval(v1, a3, a4);
    return (unsigned long long)a0.eval(v1, a3, a4);
}
