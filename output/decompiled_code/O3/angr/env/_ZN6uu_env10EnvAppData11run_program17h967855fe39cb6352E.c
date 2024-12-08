long long uu_env::EnvAppData::run_program::h967855fe39cb6352(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x2d0], Other Possible Types: unsigned long long
    int v1;  // [sp-0x2c8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x2c0]
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
    unsigned long v17;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x230]
    unsigned long long v19;  // [sp-0x228]
    unsigned long long v20;  // [sp-0x220]
    void* v21;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x210]
    unsigned long long v23;  // [sp-0x198]
    uint128_t *v24;  // [sp-0x190], Other Possible Types: int, unsigned long long
    unsigned long long v25;  // [sp-0x188]
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
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h18aa584eec485f58(&v4, &v9, a2);
    std::process::Command::new::h089f2ec7f8d37387(&v28, (long long)v10, (long long)(&v10)[8]);
    v15 = v31 + 1;
    std::process::Command::args::hd04ea1b7cb36350f(&v28, v31 + 1, v14 - 1);
    v33 = a1->field_88;
    if (v33)
    {
        v34 = a1->field_90;
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h16bdf3ba5f48360f(&v28, v33, v34);
        ::0x4cab90::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::h46f1faa9df95d29d(&v4);
        v4 = 0x8000000000000000;
        v5 = v33;
        v6 = v34;
        if (!v30)
            goto LABEL_4ce3cc;
        v23 = 1;
        v24 = v33;
        v25 = v34;
        v26 = 1;
        v0 = &v23;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v17 = &g_549250;
        v18 = 2;
        v21 = 0;
        v19 = &v0;
        v20 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
    }
    else if (!v30)
    {
        goto LABEL_4ce3cc;
    }
    v39 = v10;
    v23 = 1;
    v24 = v39;
    v26 = 0;
    v0 = &v23;
    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v17 = &g_549270;
    v18 = 2;
    v21 = 0;
    v19 = &v0;
    v20 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v37, v38);
    v7 = "   arg[0]= unknown error: []= cannot unset : Invalid argument";
    v8 = 6;
    v40 = *((int128_t *)&v5);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
    v23 = 1;
    v24 = v40;
    v26 = 1;
    v0 = &v7;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf063c1e607342e2f;
    v2 = &v23;
    v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v17 = &g_549290;
    v18 = 3;
    v21 = 0;
    v19 = &v0;
    v20 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
    v11 = v15;
    v12 = &v31[v14];
    v13 = 0;
    v43 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca675a80b5662f4e(&v11);
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
            v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf063c1e607342e2f;
            v19 = &v16;
            v20 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v21 = &v0;
            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v23 = &g_549328;
            v24 = 4;
            v27 = 0;
            v25 = &v17;
            v26 = 3;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v35, v44);
            v43 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca675a80b5662f4e(&v11);
        } while (v36);
    }
LABEL_4ce3cc:
    std::process::Command::status::h3dc0f2a83545ac66(&v11, &v28);
    if ((int)v11)
    {
        v46 = v12;
        if (!(char)::0x4c9ca0::std::io::error::Error::kind::hb2ff5fa058639b3d(v46) || (char)::0x4c9ca0::std::io::error::Error::kind::hb2ff5fa058639b3d(v46) == 20)
        {
            v49 = uu_env::EnvAppData::make_error_no_such_file_or_dir::h45adebbc57ada5f2(a0->field_1, (long long)v10, (long long)(&v10)[8]);
            ::0x4ca380::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haacea6b38d3e7802(&v12);
        }
        else
        {
            v7 = v46;
            v23 = uucore::util_name::h412db5e565a079f3();
            v24 = v36;
            v0 = &v23;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf063c1e607342e2f;
            v17 = &g_549138;
            v18 = 2;
            v21 = 0;
            v19 = &v0;
            v20 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
            v23 = &v7;
            v24 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h2c21fb8e0a153abf;
            v17 = &g_549308;
            v18 = 2;
            v21 = 0;
            v19 = &v23;
            v20 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v35, v36);
            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(126);
            ::0x4ca380::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haacea6b38d3e7802(&v7);
        }
    }
    else
    {
        v47 = *((int *)((char *)&v11 + 4));
        if (!(unsigned int)v47)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h2ae8b64559e2c136(&v28);
            ::0x4cab90::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::h46f1faa9df95d29d(&v4);
            ::0x4cab90::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::h46f1faa9df95d29d(&v9);
            return 0;
        }
        v48 = v47;
        if (!((char)v48 & 127))
        {
            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(v47 >> 8 & 4294967295);
        }
        else
        {
            if ((char)((v48 & 127) + 1) < 2)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            core::result::Result$LT$T$C$E$GT$::unwrap::hafddbca04ab44f77((unsigned int)_$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h5a9c8c122c9f1eb5(v48 & 127), (unsigned int)v36);
            nix::sys::signal::SigSet::all::h1f71cdca96546bc5(&v17);
            ::0x4c9b70::nix::sys::signal::SigAction::new::hc48a77ef93bde99b(&v23, &v17);
            nix::sys::signal::sigaction::h5ba3fa93108f672a(&v17, (unsigned int)v36, &v23);
            nix::sys::signal::raise::h9b9ae4384b13f1c0((unsigned int)v36, v35, v36);
        }
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h2ae8b64559e2c136(&v28);
    ::0x4cab90::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::h46f1faa9df95d29d(&v4);
    ::0x4cab90::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::h46f1faa9df95d29d(&v9);
    return v49;
}
