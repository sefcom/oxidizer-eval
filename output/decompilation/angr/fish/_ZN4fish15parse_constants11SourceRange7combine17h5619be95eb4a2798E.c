long long fish::parse_constants::SourceRange::combine(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long v6;  // r14

    v0 = v2;
    v3 = a0.min(a2);
    v4 = a0.end(a1);
    v5 = v4.max(a2.end(a3));
    v6 = v3;
    0.unwrap(&g_14dc9c8);
    if (v5 < v6)
        core::option::expect_failed("Overflow", 8, &g_14dc9f8); /* do not return */
    v5 - v6 >> 32.unwrap(&g_14dc9e0);
    return v6 & 4294967295;
}
