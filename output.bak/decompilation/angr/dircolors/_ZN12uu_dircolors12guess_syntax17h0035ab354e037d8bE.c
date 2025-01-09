long long uu_dircolors::guess_syntax::h0035ab354e037d8b()
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long v4;  // rbx
    unsigned int v5;  // ebx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rdx

    std::env::var::hf348904178e4c0b9(&v0, "SHELL", 5);
    v5 = v4 | -0x100 | 3;
    if (!*((long long *)&v0))
    {
        v6 = *((long long *)&v2);
        if (v6)
        {
            v7 = std::path::Path::file_name::h79ecbb7850a9c7f3(*((long long *)&v1), v6);
            if (!v7 || !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4d9a6183eb8da898(v7, v8, "csh", 3) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4d9a6183eb8da898(v7, v8, "tcsh", 4))
                v5 = 0;
            else
                v5 = v7 | -0x100 | 1;
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hc131f7e15152f287(&v0);
    return v5;
}
