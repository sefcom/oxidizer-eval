long long uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::hf0ac76e3c601f156(a0 + 72);
    if (*(v3) != 2)
        return v3;
    return 0;
}
