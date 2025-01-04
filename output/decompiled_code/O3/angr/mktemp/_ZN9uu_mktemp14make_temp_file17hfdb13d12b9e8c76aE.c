long long uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    char v0;  // [bp-0x190]
    char v1;  // [bp-0x180]
    char *v2;  // [sp-0x178]
    unsigned long long v3;  // [sp-0x170]
    struct struct_0 **v4;  // [sp-0x168], Other Possible Types: unsigned long long
    int v5;  // [sp-0x160], Other Possible Types: unsigned long long
    char *v6;  // [sp-0x158]
    unsigned long long v7;  // [sp-0x150]
    unsigned long long v8;  // [bp-0x148], Other Possible Types: unsigned long
    unsigned long long v9;  // [bp-0x140], Other Possible Types: char
    struct struct_0 **v10;  // [bp-0x138], Other Possible Types: char
    char v11;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x128], Other Possible Types: unsigned long
    char v13;  // [bp-0x120]
    int v14;  // [bp-0x118], Other Possible Types: char *
    char *v15;  // [sp-0x108]
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
    char *v30;  // [sp-0x78]
    unsigned long long v31;  // [sp-0x68]
    char *v32;  // [sp-0x58]
    char *v33;  // [sp-0x48]
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
    tempfile::Builder::tempfile_in::h727c1a87e0ab7b89(&v21, &v23, a1, a2);
    if (v22 == 2)
    {
        v36 = *((long long *)&v21);
        if ((char)::0x4bc760::std::io::error::Error::kind::hb2ff5fa058639b3d(v36))
        {
            a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v36);
            a0[2] = v39;
            a0[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v14, "X", 1, a5);
        v2 = &v17;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
        v4 = &v14;
        v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v6 = &v19;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
        v8 = &g_41f4d8;
        v9 = 3;
        v12 = 0;
        v10 = &v2;
        v11 = 3;
        core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&v0, &v8);
        ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v14);
        *((int128_t *)&v30) = *((int128_t *)&v0);
        v31 = *((long long *)&v1);
        std::path::Path::join::h5103fbfd94f4eefa(&v0, a1, a2, &v30);
        *((int128_t *)&v2) = *((int128_t *)&(&v0)[8]);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&v14, &v2);
        ::0x4be0b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&v8, "filei128", 4);
        v4 = v10;
        *((int128_t *)&v2) = *((int128_t *)&v8);
        v5 = v14;
        v7 = v15;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&v2);
        a0[2] = &g_536af0;
        a0[0] = 0x8000000000000000;
        ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&v0);
        v38 = ::0x4bcbf0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h023254833d2f52f9(v36);
        return v38;
    }
    else
    {
        *((int128_t *)&v33) = *((int128_t *)&v22);
        *((int128_t *)&v32) = *((int128_t *)&v21);
        tempfile::file::NamedTempFile$LT$F$GT$::keep::hb038e82cc04b888a(&v8, &v32, v37);
        if (!v8)
        {
            a0[2] = v12;
            *((int128_t *)&a0[0]) = *((int128_t *)&v10);
            v38 = ::0x4bcba0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h1cba195ba56b276e(*((int *)&v9));
            return v38;
        }
        v16 = *((long long *)&v13);
        *((int128_t *)&v15) = *((int128_t *)&v11);
        *((int128_t *)&v14) = *((int128_t *)&v9);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, (&v14)[1], v15);
        v4 = *((long long *)&v1);
        *((int128_t *)&v2) = *((int128_t *)&v0);
        v5 = 0x8000000000000000;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&v2);
        a0[2] = &g_536af0;
        a0[0] = 0x8000000000000000;
        v38 = core::ptr::drop_in_place$LT$tempfile..file..PersistError$GT$::h5034deea9c047d89(&v14, v40, v37);
        return v38;
    }
}
