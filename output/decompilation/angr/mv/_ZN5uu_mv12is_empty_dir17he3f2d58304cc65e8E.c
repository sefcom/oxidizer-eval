long long uu_mv::is_empty_dir::he3f2d58304cc65e8(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x18]
    char v4;  // [sp-0x10]
    unsigned long v8;  // rbx

    std::fs::read_dir::hac14a9f3c8669bd0(&v0, a0, a1);
    if (v4 != 2)
    {
        v3 = *((long long *)&v0);
        v4 = v1;
        v2 = 2;
        core::option::Option$LT$T$GT$::get_or_insert_with::h2664734a8f2b2304(&v2, &v3);
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$std..fs..ReadDir$GT$$GT$::h4d32aa70b54d5e21(&v2);
        return (unsigned int)(v8 & 0xffffffffffffff00 | !v2);
    }
    v2 = *((long long *)&v0);
    ::0x4e6560::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbb55e5b4020a58ba(&v2);
    return 0;
}
