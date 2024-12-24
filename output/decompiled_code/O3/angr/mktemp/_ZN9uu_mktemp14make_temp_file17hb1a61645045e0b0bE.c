long long uu_mktemp::make_temp_file::hb1a61645045e0b0b(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    char v0;  // [bp-0x190]
    char v1;  // [bp-0x180]
    int v2;  // [sp-0x178], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0x170]
    unsigned long long v4;  // [sp-0x168]
    int v5;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x158]
    unsigned long long v7;  // [sp-0x150]
    unsigned long long v8;  // [bp-0x148], Other Possible Types: unsigned long
    char v9;  // [bp-0x140], Other Possible Types: unsigned long long
    char v10;  // [bp-0x138], Other Possible Types: unsigned long long
    char v11;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x128], Other Possible Types: unsigned long
    char v13;  // [bp-0x120]
    int v14;  // [bp-0x118], Other Possible Types: char
    int v15;  // [sp-0x108]
    unsigned long long v16;  // [sp-0xf8]
    unsigned long v17;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xe8]
    unsigned long v19;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0xd8]
    char v21;  // [bp-0xd0]
    char v22;  // [bp-0xc0]
    unsigned int v23;  // [sp-0xb0]
    unsigned long long v24;  // [sp-0xa8]
    unsigned long long v25;  // [sp-0xa0]
    unsigned long long v26;  // [sp-0x98]
    unsigned long long v27;  // [sp-0x90]
    unsigned long long v28;  // [sp-0x88]
    unsigned short v29;  // [sp-0x80]
    int v30;  // [sp-0x78]
    unsigned long long v31;  // [sp-0x68]
    int v32;  // [sp-0x58]
    int v33;  // [sp-0x48]
    unsigned long v34;  // [bp+0x8]
    char v35;  // [bp+0x10]
    unsigned long long v36;  // r14
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long v39;  // rdx
    unsigned long long v40;  // rsi

    v17 = a3;
    v18 = a4;
    v19 = v34;
    v20 = *((long long *)&v35);
    v29 = 0;
    v23 = 0;
    v24 = a3;
    v25 = a4;
    v28 = a5;
    v26 = v19;
    v27 = v20;
    tempfile::Builder::tempfile_in::hbf085e63de40d705(&v21, &v23, a1, a2);
    if (v22 == 2)
    {
        v36 = *((long long *)&v21);
        if ((char)::0x4bbd40::std::io::error::Error::kind::hb2ff5fa058639b3d(v36))
        {
            a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v36);
            a0[2] = v39;
            a0[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v14, "X", 1, a5);
        v2 = &v17;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc07670575eb29e7c;
        v4 = &v14;
        v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v6 = &v19;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc07670575eb29e7c;
        v8 = &g_41f460;
        v9 = 3;
        v12 = 0;
        v10 = &v2;
        v11 = 3;
        core::option::Option$LT$T$GT$::map_or_else::hdb0749e3a6471f8c(&v0, &v8);
        ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v14);
        *((int128_t *)&v30) = *((int128_t *)&v0);
        v31 = *((long long *)&v1);
        std::path::Path::join::h1ece53f15265a6ba(&v0, a1, a2, &v30);
        *((int128_t *)&v2) = *((int128_t *)&(&v0)[8]);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h75aa138661dfc8f3(&v14, &v2);
        ::0x4bd680::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha829c9a0da0479c0(&v8, "filei128", 4);
        v4 = v10;
        *((int128_t *)&v2) = *((int128_t *)&v8);
        v5 = v14;
        v7 = (long long)v15;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h5205c290019a1d4c(&v2);
        a0[2] = &g_536330;
        a0[0] = 0x8000000000000000;
        ::0x4bc1b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc121595709527856(&v0);
        v38 = ::0x4bc1d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8796f9393db4a06a(v36);
        return v38;
    }
    else
    {
        *((int128_t *)&v33) = *((int128_t *)&v22);
        *((int128_t *)&v32) = *((int128_t *)&v21);
        tempfile::file::NamedTempFile$LT$F$GT$::keep::hd83d9a9c8fe2a041(&v8, &v32, v37);
        if (!v8)
        {
            a0[2] = v12;
            *((int128_t *)&a0[0]) = *((int128_t *)&v10);
            v38 = ::0x4bc180::core::ptr::drop_in_place$LT$std..fs..File$GT$::h470e08fd8341b08d(*((int *)&v9));
            return v38;
        }
        v16 = *((long long *)&v13);
        *((int128_t *)&v15) = *((int128_t *)&v11);
        *((int128_t *)&v14) = *((int128_t *)&v9);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, (long long)(&v14)[8], (long long)v15);
        v4 = *((long long *)&v1);
        *((int128_t *)&v2) = *((int128_t *)&v0);
        v5 = 0x8000000000000000;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h5205c290019a1d4c(&v2);
        a0[2] = &g_536330;
        a0[0] = 0x8000000000000000;
        v38 = core::ptr::drop_in_place$LT$tempfile..file..PersistError$GT$::h0068c8f8fbe24795(&v14, v40, v37);
        return v38;
    }
}
