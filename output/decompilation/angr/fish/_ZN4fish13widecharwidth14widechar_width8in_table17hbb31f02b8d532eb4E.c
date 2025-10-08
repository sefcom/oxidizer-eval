char fish::widecharwidth::widechar_width::in_table(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    unsigned long v3;  // rax

    v0 = v3;
    v1 = a2;
    return !core::slice::<impl [T]>::binary_search_by(a0, a1, &v1);
}
