long long uu_dircolors::guess_syntax::h662e8957da3fffc5(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rbx

    std::env::var::h093de63095ef08bc(&v0, "SHELL", 5);
    v4 = vvar_21{reg 56} | -0x100 | 3;
    if (!*((long long *)&v0))
    {
        v5 = *((long long *)&v2);
        if (v5)
        {
            v8 = std::path::Path::file_name::h79ecbb7850a9c7f3(*((long long *)&v1), v5, v6, v7);
            if (!v8)
            {
                v4 = 0;
            }
            else
            {
                v4 = v4 | -0x100 | 1;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h65497383804d4e7c(v8, v6, "csh", 3))
                    v4 = (unsigned int)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h65497383804d4e7c(v8, v6, "tcsh", 4);
            }
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hdff0928b170de96b(&v0);
    return v4 & 4294967295;
}
