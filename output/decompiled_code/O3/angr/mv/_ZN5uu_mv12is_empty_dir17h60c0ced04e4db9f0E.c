long long uu_mv::is_empty_dir::h60c0ced04e4db9f0(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x18]
    char v4;  // [sp-0x10]
    unsigned long long v7;  // rdx
    unsigned long v9;  // rbx

    std::fs::read_dir::h7afa608426856b62(&v0, a0, a1);
    if (v4 != 2)
    {
        v3 = *((long long *)&v0);
        v4 = v1;
        v2 = 2;
        core::option::Option$LT$T$GT$::get_or_insert_with::h2b906adf115afada(&v2, &v3, v7);
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$std..fs..ReadDir$GT$$GT$::h640f10f94211a3ad(&v2);
        return (unsigned int)(v9 | -0x100 | !v2);
    }
    v2 = *((long long *)&v0);
    ::0x4e5940::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbed791a0d2ad8391(&v2);
    return 0;
}
