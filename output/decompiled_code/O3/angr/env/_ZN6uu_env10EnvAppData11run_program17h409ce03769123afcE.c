long long uu_env::EnvAppData::run_program::h409ce03769123afc(struct_0 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x298], Other Possible Types: unsigned long long
    unsigned int v1;  // [sp-0x28c]
    unsigned long v2;  // [sp-0x288], Other Possible Types: unsigned long long
    int v3;  // [sp-0x280], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x278]
    char v5;  // [bp-0x270], Other Possible Types: unsigned long
    unsigned long v6;  // [sp-0x268], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x260], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x258]
    unsigned long long v9;  // [sp-0x250]
    unsigned int v10;  // [bp-0x248], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0x240]
    unsigned long long v12;  // [sp-0x238]
    unsigned long long v13;  // [sp-0x230]
    void* v14;  // [sp-0x228], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x220]
    unsigned long long v16;  // [sp-0x1a0]
    void* v17;  // [sp-0x198], Other Possible Types: int, unsigned long long
    unsigned int v18;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x188]
    unsigned long long v20;  // [bp-0x180], Other Possible Types: char
    void* v21;  // [sp-0x178]
    unsigned int v22;  // [sp-0x110]
    char v23;  // [bp-0x100]
    unsigned long long v25;  // edx
    unsigned long long v26;  // r15
    unsigned long long v27[2];  // r14
    unsigned long long *v28;  // r13
    unsigned long long v29;  // rbx
    unsigned long long *v30;  // r13
    unsigned long long *v31;  // r15
    unsigned long long *v32;  // r15
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rdx
    unsigned long long v35;  // r12
    unsigned long long v36;  // r15
    unsigned long long v37;  // rsi
    unsigned long long v41;  // rbp
    int v42;  // ymm0
    int v43;  // xmm0
    unsigned long long v44;  // r12
    unsigned int v46;  // ebx
    unsigned int v47;  // ebx
    unsigned long long v48;  // rbx
    unsigned int *v49;  // rax
    unsigned int *v50;  // rbx
    char v51;  // bpl
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rsi
    unsigned long long v54;  // rsi

    *((unsigned long long *)&v1) = v25;
    v26 = a1->field_58;
    if (!v26)
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v27 = a1->field_50;
    v28 = v27 + 1;
    v9 = v27[0];
    v8 = v27[1];
    std::sys::pal::unix::process::process_common::Command::new::hc5270eb3e5a1ed89(&v23, v27[0], v8);
    v29 = &v27[v26];
    v16 = v26;
    if (v26 != 1)
    {
        do
        {
            v31 = v30;
            std::sys::pal::unix::process::process_common::Command::arg::h2082b49223f3a30d(&v23, *(v31), v31[1]);
            v32 = v31 + 2;
        } while (v32 != v29);
    }
    v35 = a1->field_88;
    if (!v35)
    {
        v8 = v8;
        v9 = v9;
        if (!(char)v1)
            goto LABEL_49bea3;
    }
    else
    {
        v36 = a1->field_90;
        std::sys::pal::unix::process::process_common::Command::set_arg_0::hff97b9d11d93aad1(&v23, v35, v36);
        if (!(char)v1)
            goto LABEL_49bea3;
        v17 = 1;
        v18 = v35;
        v19 = v36;
        v20 = 1;
        v2 = &v17;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v10 = &g_50c748;
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v37, v25);
    }
    v17 = 1;
    v18 = v9;
    v19 = v8;
    v20 = 0;
    v2 = &v17;
    v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v10 = &g_50c768;
    v11 = 2;
    v14 = 0;
    v12 = &v2;
    v13 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v33, v34);
    v6 = "   arg[0]= unknown error: []= cannot unset : Invalid argument";
    v7 = 6;
    v17 = 1;
    v18 = v9;
    v19 = v8;
    v20 = 1;
    v2 = &v6;
    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
    v4 = &v17;
    v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v10 = &g_50c788;
    v11 = 3;
    v14 = 0;
    v12 = &v2;
    v13 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v37, v25);
    if (v16 != 1)
    {
        v41 = 1;
        do
        {
            v0 = v41;
            v43 = *((int128_t *)&v28);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
            v2 = 1;
            v3 = v43;
            v5 = 1;
            v10 = &v6;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
            v12 = &v0;
            v13 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v14 = &v2;
            v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v17 = &g_50c820;
            v18 = 4;
            v21 = 0;
            v19 = &v10;
            v20 = 3;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v17, v37, v25);
            v41 = v0 + 1;
            v28 += 2;
        } while (v28 != v29);
    }
LABEL_49bea3:
    std::process::Command::status::h3dc0f2a83545ac66(&v6, &v23);
    if (!(int)v6)
    {
        if (!v46)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::hca75f1a728a0c756(&v23);
            return 0;
        }
        v46 = *((int *)((char *)&v6 + 4));
        v48 = v47 & 127;
        if (((char)v47 & 127))
        {
            if ((char)(v48 + 1 & 4294967295) < 2)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            if ((unsigned int)v48 >= 32)
            {
                v10 = 22;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            sigfillset(&v18);
            v17 = 0;
            v22 = 0;
            nix::sys::signal::sigaction::h46afd9d483278eeb(&v10, v48 & 4294967295, &v17);
            nix::sys::signal::raise::h8c40a55a68211c0c(v48 & 4294967295);
        }
        v49 = __rust_alloc(4, 4);
        if (!v49)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v50 = v49;
        *(v50) = v46 >> 8;
    }
    else
    {
        v44 = v7;
        if (!(char)::0x495380::std::io::error::Error::kind::hb2ff5fa058639b3d(v44) || (char)::0x495380::std::io::error::Error::kind::hb2ff5fa058639b3d(v44) == 20)
        {
            v51 = a0->field_1;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v17) = g_512018;
            v2 = &v17;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
            v10 = &g_50c630;
            v11 = 2;
            v14 = 0;
            v12 = &v2;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v52, v25);
            v17 = 1;
            v18 = v9;
            v19 = v8;
            v20 = 1;
            v2 = &v17;
            v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v10 = &g_50c6e0;
            v11 = 2;
            v14 = 0;
            v12 = &v2;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v37, v25);
            if (!v51)
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v17) = g_512018;
                v2 = &v17;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
                v10 = &g_50c630;
                v11 = 2;
                v14 = 0;
                v12 = &v2;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v54, v25);
                v17 = &g_50c700;
                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
                v10 = &g_50c710;
                v11 = 2;
                v14 = 0;
                v12 = &v17;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v37, v25);
            }
            v50 = __rust_alloc(4, 4);
            if (!v50)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v50) = 127;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h663552fc2210621f(&v7);
        }
        else
        {
            v0 = v44;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v17) = g_512018;
            v2 = &v17;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
            v10 = &g_50c630;
            v11 = 2;
            v14 = 0;
            v12 = &v2;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v53, v25);
            v17 = &v0;
            v18 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h2c21fb8e0a153abf;
            v10 = &g_50c800;
            v11 = 2;
            v14 = 0;
            v12 = &v17;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v37, v25);
            v50 = __rust_alloc(4, 4);
            if (!v50)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v50) = 126;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h663552fc2210621f(&v0);
        }
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hca75f1a728a0c756(&v23);
    return v50;
}
