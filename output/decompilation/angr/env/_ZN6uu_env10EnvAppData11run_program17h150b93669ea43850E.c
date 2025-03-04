long long uu_env::EnvAppData::run_program::h150b93669ea43850(struct_1 *a0, struct_2 *a1, char a2)
{
    struct struct_0 **v0;  // [sp-0x2d0]
    int v1;  // [sp-0x2c8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v2;  // [sp-0x2c0]
    char v3;  // [bp-0x2b8], Other Possible Types: unsigned long
    char v4;  // [sp-0x2b0], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0x2a8]
    unsigned long long v6;  // [sp-0x2a0]
    unsigned long v7;  // [sp-0x298]
    unsigned long long v8;  // [sp-0x290]
    unsigned long long v9;  // [sp-0x288]
    int v10;  // [sp-0x280]
    unsigned long v11;  // [sp-0x270]
    unsigned long v12;  // [sp-0x268]
    void* v13;  // [sp-0x260]
    unsigned long long v14;  // [sp-0x258]
    unsigned long long v15;  // [sp-0x248]
    unsigned long v16;  // [sp-0x240]
    struct struct_0 **v17;  // [sp-0x238]
    struct struct_0 **v18;  // [sp-0x238]
    unsigned long long v19;  // [sp-0x230]
    char *v20;  // [sp-0x228], Other Possible Types: struct struct_0 **
    unsigned long long v21;  // [sp-0x220]
    struct struct_0 **v22;  // [sp-0x218], Other Possible Types: void*
    unsigned long long v23;  // [sp-0x210]
    struct struct_0 **v24;  // [sp-0x198]
    struct struct_0 **v25;  // [sp-0x198]
    uint128_t *v26;  // [sp-0x190], Other Possible Types: int, unsigned long, unsigned long long
    struct struct_0 **v27;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x180], Other Possible Types: char
    void* v29;  // [sp-0x178]
    char v30;  // [bp-0x100]
    uint128_t *v32;  // r14
    int v33;  // xmm0
    unsigned long long v34;  // r12
    unsigned long long v35;  // r15
    int v36;  // xmm0
    int v37;  // xmm0
    int v38;  // ymm0
    int v39;  // ymm0
    unsigned long long v40;  // rax
    uint128_t *v41;  // rdx
    uint128_t *v42;  // rdx
    int v43;  // xmm0
    unsigned long long v44;  // r14
    unsigned long long v45;  // rax
    unsigned int v46;  // edi
    void* v47;  // rbx
    unsigned long long v48;  // rdi

    v14 = a1->field_58;
    if (!v14)
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_548b48); /* do not return */
    v32 = a1->field_50;
    v33 = *(v32);
    v10 = v33;
    v9 = 0x8000000000000000;
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbe16e6f3cec1002d(&v4, &v9);
    std::process::Command::new::h075a12e329d1fe67(&v30, (long long)v10, (long long)(&v10)[8]);
    v15 = v32 + 1;
    std::process::Command::args::hea19ada20403eab5(&v30, v32 + 1, v14 - 1);
    v34 = a1->field_88;
    if (v34)
    {
        v35 = a1->field_90;
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h2cf9a00e306c4985(&v30, v34, v35);
        ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v4);
        v4 = 0x8000000000000000;
        v5 = v34;
        v6 = v35;
        if (!a2)
            goto LABEL_4ce29c;
        v24 = 1;
        v26 = v34;
        v27 = v35;
        v28 = 1;
        v0 = &v24;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v17 = &g_548a78;
        v19 = 2;
        v22 = 0;
        v20 = &v0;
        v21 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
    }
    else if (!a2)
    {
        goto LABEL_4ce29c;
    }
    v36 = v10;
    v24 = 1;
    v26 = v36;
    v28 = 0;
    v0 = &v24;
    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v17 = &g_548a98;
    v19 = 2;
    v22 = 0;
    v20 = &v0;
    v21 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
    v7 = "   argcannot unset : Invalid argument";
    v8 = 6;
    v37 = *((int128_t *)&v5);
    v39 = ((v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
    v25 = 1;
    v26 = v37;
    v28 = 1;
    v0 = &v7;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    v2 = &v24;
    v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v18 = &g_548ab8;
    v19 = 3;
    v22 = 0;
    v20 = &v0;
    v21 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
    v11 = v15;
    v12 = &v32[v14];
    v13 = 0;
    v40 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&v11);
    if (v41)
    {
        do
        {
            v16 = v40 + 1;
            v43 = *(v42);
            v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
            v0 = 1;
            v1 = v43;
            v3 = 1;
            v18 = &v7;
            v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            v20 = &v16;
            v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v22 = &v0;
            v23 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v25 = &g_548ae8;
            v26 = 4;
            v29 = 0;
            v27 = &v17;
            v28 = 3;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v24);
            v40 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&v11);
        } while (v41);
    }
LABEL_4ce29c:
    std::process::Command::status::h3dc0f2a83545ac66(&v11, &v30);
    if ((int)v11)
    {
        v44 = v12;
        if (!(char)::0x4c9b70::std::io::error::Error::kind::hb2ff5fa058639b3d(v44) || (char)::0x4c9b70::std::io::error::Error::kind::hb2ff5fa058639b3d(v44) == 20)
        {
            v47 = uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(a0->field_1, (long long)v10, (long long)(&v10)[8]);
            ::0x4ca250::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&v12);
        }
        else
        {
            v7 = v44;
            v24 = uucore::util_name::h60d842bf27b05e82();
            v26 = v41;
            v0 = &v24;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            v17 = &g_548978;
            v19 = 2;
            v22 = 0;
            v20 = &v0;
            v21 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
            v24 = &v7;
            v26 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h2c21fb8e0a153abf;
            v17 = &g_548b28;
            v19 = 2;
            v22 = 0;
            v20 = &v24;
            v21 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
            v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(126);
            ::0x4ca250::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&v7);
        }
    }
    else
    {
        v45 = *((int *)((char *)&v11 + 4));
        if (!(unsigned int)v45)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&v30);
            ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v4);
            ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v9);
            return 0;
        }
        v46 = v45;
        if (!((char)v46 & 127))
        {
            v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(v45 >> 8 & 4294967295);
        }
        else
        {
            if ((char)((v46 & 127) + 1) < 2)
            {
                v48 = &g_548b60;
            }
            else
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::h0b8d9f63ece7aa71((unsigned int)_$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h02b141bd98cda8e5(v46 & 127), (unsigned int)v41);
                nix::sys::signal::SigSet::all::h0cec38824fe6a56a(&v17);
                ::0x4c9a40::nix::sys::signal::SigAction::new::h7e3c376dfc3f2270(&v24, &v17);
                nix::sys::signal::sigaction::haeef16a5456d4ae5(&v17, (unsigned int)v41, &v24);
                nix::sys::signal::raise::h6585bf1a9c55b1ad((unsigned int)v41);
                v48 = &g_548b90;
            }
            core::option::unwrap_failed::h0e11329e76906eaa(v48); /* do not return */
        }
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&v30);
    ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v4);
    ::0x4caa60::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&v9);
    return v47;
}
