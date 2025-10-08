long long fish::ast::Populator::visit_argument(void* a0, unsigned int a1[3])
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // ecx
    unsigned int v5;  // edx

    v0 = v2;
    v3 = a0.unsource_leaves();
    v4 = 0;
    if (!(char)v3)
    {
        v3 = a0.consume_token_type(2);
        a1[1] = v3;
        a1[2] = v5;
        v4 = 1;
    }
    a1[0] = v4;
    return v3;
}
