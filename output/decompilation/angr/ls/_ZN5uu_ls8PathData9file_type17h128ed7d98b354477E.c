long long uu_ls::PathData::file_type::h128ed7d98b354477(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::he9c14013ab1ff432(a0 + 248, a0, a1);
    return (*(v3) ? v3 + 1 : 0);
}
