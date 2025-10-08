long long fish::parse_constants::SourceRange::new(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    a0 >> 32.unwrap(&g_14dc938);
    a1 >> 32.unwrap(&g_14dc950);
    return a0 & 4294967295;
}
