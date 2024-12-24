long long uu_mktemp::make_temp_dir::h09275fdf8f3f570a(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    int v0;  // [bp-0x148], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x140]
    unsigned long v2;  // [sp-0x138], Other Possible Types: unsigned long long
    int v3;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x128]
    unsigned long long v5;  // [sp-0x120]
    char v6;  // [bp-0x118]
    char v7;  // [bp-0x108]
    char v8;  // [bp-0x100]
    char v9;  // [bp-0xf0]
    unsigned long v10;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xe0]
    unsigned long v12;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xd0]
    unsigned long v14;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xc0]
    unsigned long long v16;  // [sp-0xb8]
    unsigned long long v17;  // [sp-0xb0]
    void* v18;  // [sp-0xa8]
    char v19;  // [bp-0x98]
    char v20;  // [bp-0x88]
    unsigned int v21;  // [sp-0x80]
    unsigned long long v22;  // [sp-0x78]
    unsigned long long v23;  // [sp-0x70]
    unsigned long long v24;  // [sp-0x68]
    unsigned long long v25;  // [sp-0x60]
    unsigned long long v26;  // [sp-0x58]
    unsigned short v27;  // [sp-0x50]
    int v28;  // [sp-0x48]
    unsigned long long v29;  // [sp-0x38]
    unsigned long v30;  // [bp+0x8]
    char v31;  // [bp+0x10]
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long v35;  // rdx
    unsigned long long v36;  // rax

    v10 = a3;
    v11 = a4;
    v12 = v30;
    v13 = *((long long *)&v31);
    v27 = 0;
    v21 = 0;
    v22 = a3;
    v23 = a4;
    v26 = a5;
    v24 = v12;
    v25 = v13;
    tempfile::Builder::tempdir_in::h5b8eb397a36f442d(&v19, &v21, a1, a2);
    if (v20 != 2)
    {
        tempfile::dir::TempDir::into_path::h0e296262c791daae(&v0, &v19);
        v34 = std::fs::set_permissions::h076f4f3a1df09519(&v0, 448, v33);
        if (!v34)
        {
            v36 = v2;
            a0[2] = v36;
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            return v36;
        }
        a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v34);
        a0[2] = v33;
        a0[0] = 0x8000000000000000;
        v36 = ::0x4bc1b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc121595709527856(&v0);
        return v36;
    }
    else
    {
        v32 = *((long long *)&v19);
        if ((char)::0x4bbd40::std::io::error::Error::kind::hb2ff5fa058639b3d(v32))
        {
            a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v32);
            a0[2] = v35;
            a0[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, "X", 1, a5);
        v0 = &v10;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc07670575eb29e7c;
        v2 = &v8;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &v12;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc07670575eb29e7c;
        v14 = &g_41f460;
        v15 = 3;
        v18 = 0;
        v16 = &v0;
        v17 = 3;
        core::option::Option$LT$T$GT$::map_or_else::hdb0749e3a6471f8c(&v6, &v14);
        ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v8);
        *((int128_t *)&v28) = *((int128_t *)&v6);
        v29 = *((long long *)&v7);
        std::path::Path::join::h1ece53f15265a6ba(&v6, a1, a2, &v28);
        *((int128_t *)&v0) = *((int128_t *)&(&v6)[8]);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h75aa138661dfc8f3(&v8, &v0);
        ::0x4bd680::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha829c9a0da0479c0(&v14, "directory", 9);
        v2 = v16;
        *((int128_t *)&v0) = *((int128_t *)&v14);
        *((int128_t *)&v3) = *((int128_t *)&v8);
        v5 = *((long long *)&v9);
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h5205c290019a1d4c(&v0);
        a0[2] = &g_536330;
        a0[0] = 0x8000000000000000;
        ::0x4bc1b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc121595709527856(&v6);
        v36 = ::0x4bc1d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8796f9393db4a06a(v32);
        return v36;
    }
}
