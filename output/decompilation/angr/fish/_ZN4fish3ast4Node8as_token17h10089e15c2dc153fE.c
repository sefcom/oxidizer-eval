long long fish::ast::Node::as_token(unsigned long long a0)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x10]

    v0.kind(a0);
    if (*((int *)&v0) != 1)
        return 0;
    return *((long long *)&v1);
}
