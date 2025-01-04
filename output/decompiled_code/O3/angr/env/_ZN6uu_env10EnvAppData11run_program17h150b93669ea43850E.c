long long uu_env::EnvAppData::run_program::h150b93669ea43850(struct_1 *a0, struct_2 *a1, unsigned long long a2)
{
    struct struct_0 **v0;  // [sp-0x2d0], Other Possible Types: unsigned long long
    int v1;  // [sp-0x2c8], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0x2c0]
    char v3;  // [bp-0x2b8], Other Possible Types: unsigned long
    char v4;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x2a0]
    unsigned long v7;  // [sp-0x298], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x290]
    unsigned long long v9;  // [sp-0x288]
    int v10;  // [sp-0x280]
    unsigned long v11;  // [sp-0x270], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x268], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x260]
    unsigned long long v14;  // [sp-0x258]
    unsigned long long v15;  // [sp-0x248]
    unsigned long v16;  // [sp-0x240], Other Possible Types: unsigned long long
    struct struct_0 **v17;  // [sp-0x238]
    unsigned long long v18;  // [sp-0x230]
    char *v19;  // [sp-0x228], Other Possible Types: struct struct_0 **
    unsigned long long v20;  // [sp-0x220]
    struct struct_0 **v21;  // [sp-0x218], Other Possible Types: void*
    unsigned long long v22;  // [sp-0x210]
    struct struct_0 **v23;  // [sp-0x198], Other Possible Types: unsigned long long
    uint128_t *v24;  // [sp-0x190], Other Possible Types: int, unsigned long long
    struct struct_0 **v25;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x180], Other Possible Types: char
    void* v27;  // [sp-0x178]
    char v28;  // [bp-0x100]
    char v30;  // bpl
    uint128_t *v31;  // r14
    int v32;  // xmm0
    unsigned long long v33;  // r12
    unsigned long long v34;  // r15
    unsigned long long v35;  // rsi
    uint128_t *v36;  // rdx
    unsigned long long v37;  // rsi
    unsigned long long v38;  // rdx
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // ymm0
    unsigned long long v43;  // rax
    uint128_t *v44;  // rdx
    int v45;  // xmm0
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax
    unsigned int v48;  // edi
    void* v49;  // rax

    v14 = a1->field_58;
    if (!v14)
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v30 = a2;
    v31 = a1->field_50;
    v32 = *(v31);
    v10 = v32;
    v9 = 0x8000000000000000;
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbe16e6f3cec1002d(&v4, &v9, a2);
    std::process::Command::new::h075a12e329d1fe67(&v28, (long long)v10, (long long)(&v10)[8]);
    v15 = v31 + 1;
    std::process::Command::args::hea19ada20403eab5(&v28, v31 + 1, v14 - 1);
    v33 = a1->field_88;
    if (v33)
    {
        v34 = a1->field_90;
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h2cf9a00e306c4985(&v28, v33, v34);
        ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v4);
        v4 = 0x8000000000000000;
        v5 = v33;
        v6 = v34;
        if (!v30)
            goto LABEL_4ce29c;
        v23 = 1;
        v24 = v33;
        v25 = v34;
        v26 = 1;
        v0 = &v23;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v17 = &g_548a78;
        v18 = 2;
        v21 = 0;
        v19 = &v0;
        v20 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
    }
    else if (!v30)
    {
        goto LABEL_4ce29c;
    }
    v39 = v10;
    v23 = 1;
    v24 = v39;
    v26 = 0;
    v0 = &v23;
    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v17 = &g_548a98;
    v18 = 2;
    v21 = 0;
    v19 = &v0;
    v20 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v37, v38);
    v7 = "   argcannot unset : Invalid argument";
    v8 = 6;
    v40 = *((int128_t *)&v5);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
    v23 = 1;
    v24 = v40;
    v26 = 1;
    v0 = &v7;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    v2 = &v23;
    v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v17 = &g_548ab8;
    v18 = 3;
    v21 = 0;
    v19 = &v0;
    v20 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
    v11 = v15;
    v12 = &v31[v14];
    v13 = 0;
    v43 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&v11);
    if (v36)
    {
        do
        {
            v16 = v43 + 1;
            v45 = *(v44);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
            v0 = 1;
            v1 = v45;
            v3 = 1;
            v17 = &v7;
            v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            v19 = &v16;
            v20 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v21 = &v0;
            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v23 = &g_548ae8;
            v24 = 4;
            v27 = 0;
            v25 = &v17;
            v26 = 3;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v35, v44);
            v43 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&v11);
        } while (v36);
    }
LABEL_4ce29c:
    std::process::Command::status::h3dc0f2a83545ac66(&v11, &v28);
    if ((int)v11)
    {
        v46 = v12;
        if (!(char)::0x4c9b70::std::io::error::Error::kind::hb2ff5fa058639b3d(v46) || (char)::0x4c9b70::std::io::error::Error::kind::hb2ff5fa058639b3d(v46) == 20)
        {
            v49 = uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(a0->field_1, (long long)v10, (long long)(&v10)[8]);
            ::0x4ca250::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&v12);
        }
        else
        {
            v7 = v46;
            v23 = uucore::util_name::h60d842bf27b05e82();
            v24 = v36;
            v0 = &v23;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            v17 = &g_548978;
            v18 = 2;
            v21 = 0;
            v19 = &v0;
            v20 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
            v23 = &v7;
            v24 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h2c21fb8e0a153abf;
            v17 = &g_548b28;
            v18 = 2;
            v21 = 0;
            v19 = &v23;
            v20 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(126);
            ::0x4ca250::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&v7);
        }
    }
    else
    {
        v47 = *((int *)((char *)&v11 + 4));
        if (!(unsigned int)v47)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&v28);
            ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v4);
            ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v9);
            return 0;
        }
        v48 = v47;
        if (!((char)v48 & 127))
        {
            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(v47 >> 8 & 4294967295);
        }
        else
        {
            if ((char)((v48 & 127) + 1) < 2)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            core::result::Result$LT$T$C$E$GT$::unwrap::h0b8d9f63ece7aa71((unsigned int)_$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h02b141bd98cda8e5(v48 & 127), (unsigned int)v36);
            nix::sys::signal::SigSet::all::h0cec38824fe6a56a(&v17);
            ::0x4c9a40::nix::sys::signal::SigAction::new::h7e3c376dfc3f2270(&v23, &v17);
            nix::sys::signal::sigaction::haeef16a5456d4ae5(&v17, (unsigned int)v36, &v23);
            nix::sys::signal::raise::h6585bf1a9c55b1ad((unsigned int)v36, v35, v36);
        }
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&v28);
    ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v4);
    ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v9);
    return v49;
}
