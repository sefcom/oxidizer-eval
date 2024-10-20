long long uu_tail::follow::files::FileHandling::remove::h7d6c38afb34b5b1a(unsigned long long *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x1f8], Other Possible Types: char
    unsigned long long v1;  // [sp-0x1e8]
    char v2;  // [bp-0x1e0]
    char v3;  // [bp-0x1d8]
    char v4;  // [bp-0x1d0]
    char v5;  // [bp-0x1c8]
    char v6;  // [bp-0x1c0]
    char v7;  // [bp-0xf0]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long long v13;  // r14

    if (!(!(char)std::path::Path::is_absolute::h3431a23d91045560(a2, a3)) || !(!(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h80a37f5a3d4ae307(a2, a3, v9, v10, v11, v12)))
    {
LABEL_4adfea:
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a2, a3);
    }
    else
    {
        std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v2, a2, a3);
        if (*((long long *)&v2) != 0x8000000000000000)
        {
            v1 = *((long long *)&v4);
            *((int128_t *)&v0) = *((int128_t *)&v2);
        }
        else
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(*((long long *)&v3));
            goto LABEL_4adfea;
        }
    }
    hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::ha90212e10a15ea50(&v2, a1 + 24, core::hash::BuildHasher::hash_one::h239d8b83961d82a4(a1 + 56, &v0), &v0, v11, v12);
    v13 = *((long long *)&v5);
    if (v13 == 3)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    memcpy(&v7, &v6, 208);
    if (*((long long *)&v2))
        __rust_dealloc(*((long long *)&(&v2)[8]));
    *(a0) = v13;
    memcpy(a0 + 1, &v7, 208);
    if ((long long)v0)
    {
        __rust_dealloc((long long)(&v0)[8]);
        return a0;
    }
    return a0;
}
