long long uu_nl::SectionDelimiter::parse::h443ed3b3daa5d923(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x88]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14

    v3 = v2 | -0x100 | 3;
    if (a1 && a3)
    {
        core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&v0, a0, a1, a2, a3);
        v4 = core::iter::traits::iterator::Iterator::fold::h5f9dbf1290c98970(&v0);
        v5 = v4 * a3;
        if (v4 == 1)
        {
            v3 = v3 | -0x100 | v5 == a1 ^ 3;
        }
        else if (v4 == 2)
        {
            v3 = v3 | -0x100 | (v5 != a1) * 2 | 1;
        }
        else if (v4 == 3)
        {
            v3 = (-0x100 | v5 != a1) * 3 & 4294967295;
        }
    }
    return v3 & 4294967295;
}
