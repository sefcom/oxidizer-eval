long long uu_mktemp::make_temp_dir::h59267eff7d377883(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    char *v0;  // [bp-0x148]
    unsigned long long v1;  // [sp-0x140]
    char *v2;  // [sp-0x138], Other Possible Types: struct struct_0 **, unsigned long
    char *v3;  // [sp-0x130], Other Possible Types: unsigned long long
    char *v4;  // [sp-0x128]
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
    struct struct_0 **v16;  // [sp-0xb8]
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
    char *v28;  // [sp-0x48]
    unsigned long long v29;  // [sp-0x38]
    unsigned long v30;  // [bp+0x8]
    char v31;  // [bp+0x10]
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rax
    unsigned long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long v36;  // rdx

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
    tempfile::Builder::tempdir_in::haca47c72416a75c9(&v19, &v21, a1, a2);
    if (v20 != 2)
    {
        tempfile::dir::TempDir::into_path::h9cc8484f4c823eac(&v0, &v19);
        v33 = std::fs::set_permissions::h663416e852a125c9(&v0, 448);
        if (!v33)
        {
            v35 = v2;
            a0[2] = v35;
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            return v35;
        }
        a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v33);
        a0[2] = v36;
        a0[0] = 0x8000000000000000;
        v35 = ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4();
        return v35;
    }
    else
    {
        v32 = *((long long *)&v19);
        if ((char)::0x4bc760::std::io::error::Error::kind::hb2ff5fa058639b3d(v32))
        {
            a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v32);
            a0[2] = v34;
            a0[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, "X", 1, a5);
        v0 = &v10;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
        v2 = &v8;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &v12;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
        v14 = &g_41f4d8;
        v15 = 3;
        v18 = 0;
        v16 = &v0;
        v17 = 3;
        core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033();
        ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v8);
        *((int128_t *)&v28) = *((int128_t *)&v6);
        v29 = *((long long *)&v7);
        std::path::Path::join::h5103fbfd94f4eefa(&v6, a1, a2, &v28);
        *((int128_t *)&v0) = *((int128_t *)&(&v6)[8]);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&v8, &v0);
        ::0x4be0b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&v14, "directory", 9);
        v2 = v16;
        *((int128_t *)&v0) = *((int128_t *)&v14);
        *((int128_t *)&v3) = *((int128_t *)&v8);
        v5 = *((long long *)&v9);
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::hcdef1c0b923e2ad4(&v0);
        a0[2] = &g_536af0;
        a0[0] = 0x8000000000000000;
        ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4();
        v35 = ::0x4bcbf0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h023254833d2f52f9();
        return v35;
    }
}
