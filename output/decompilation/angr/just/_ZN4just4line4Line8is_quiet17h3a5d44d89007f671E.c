long long just::line::Line::is_quiet(unsigned int *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = a0.first(a1);
    if (!v3)
        return 0;
    return just::line::Line::is_quiet::{{closure}}(v3, v4);
}
