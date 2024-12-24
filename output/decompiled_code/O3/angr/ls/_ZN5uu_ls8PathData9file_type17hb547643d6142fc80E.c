long long uu_ls::PathData::file_type::hb547643d6142fc80(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::hf1ff3ee08f13073b(a0 + 248, a0, a1);
    if (*(v3))
        return v3 + 1;
    return 0;
}
