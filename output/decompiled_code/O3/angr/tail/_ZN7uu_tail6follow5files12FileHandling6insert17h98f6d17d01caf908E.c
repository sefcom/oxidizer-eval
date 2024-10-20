long long uu_tail::follow::files::FileHandling::insert::h98f6d17d01caf908(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, void* a3, char a4, unsigned long a5)
{
    int v0;  // [sp-0x218], Other Possible Types: char
    unsigned long long v1;  // [sp-0x208]
    int v2;  // [sp-0x1f8]
    unsigned long long v3;  // [sp-0x1e8]
    char v4;  // [bp-0x1e0]
    char v5;  // [bp-0x1d8]
    char v6;  // [bp-0x1d0]
    char v7;  // [bp-0x108]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long v14;  // r15
    unsigned long long v15;  // r13
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rax

    if (!(!(char)std::path::Path::is_absolute::h3431a23d91045560(a1, a2)) || !(!(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h80a37f5a3d4ae307(a1, a2, v9, v10, v11, v12)))
    {
LABEL_4ade10:
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a1, a2);
        if (!a4)
            goto LABEL_4adeae;
    }
    else
    {
        std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v4, a1, a2);
        if (*((long long *)&v4) == 0x8000000000000000)
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(*((long long *)&v5));
            goto LABEL_4ade10;
        }
        v1 = *((long long *)&v6);
        *((int128_t *)&v0) = *((int128_t *)&v4);
        if (!a4)
        {
LABEL_4adeae:
            v3 = v1;
            v2 = v0;
            memcpy(&v4, a3, 216);
            v17 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4493643b55788f29(&v7, a0 + 1, &v2, &v4, v11, v12);
            if (*((int *)&v7) != 3)
            {
                v17 = _ZN4core3ptr53drop_in_place$LT$uu_tail..follow..files..PathData$GT$17hffa0768dddf9cf05E.llvm.893476530518564186(&v7);
                return v17;
            }
            return v17;
        }
    }
    v14 = v1;
    if (!v14)
    {
        v15 = 1;
    }
    else if (v14 < 0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    else
    {
        v15 = __rust_alloc(v14, 1);
        if (!v15)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    memcpy(v15, (long long)(&v0)[8], v14);
    v16 = a0[0];
    if (v16 != 0x8000000000000000 && v16)
        __rust_dealloc(a0[1]);
    a0[0] = v14;
    a0[1] = v15;
    a0[2] = v14;
    goto LABEL_4adeae;
}
