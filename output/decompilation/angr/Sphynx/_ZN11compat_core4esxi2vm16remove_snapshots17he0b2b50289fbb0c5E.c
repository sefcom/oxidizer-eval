long long compat_core::esxi::vm::remove_snapshots::he0b2b50289fbb0c5(struct_5 *a0)
{
    unsigned long long v0;  // [sp-0x1d0]
    struct_0 *v1;  // [sp-0x1c8], Other Possible Types: unsigned long long
    struct struct_2 **v2;  // [sp-0x1c0]
    int v3;  // [bp-0x1b8]
    unsigned long long v4;  // [sp-0x1b0]
    unsigned long long v5;  // [sp-0x1a8]
    struct struct_2 **v6;  // [sp-0x1a0]
    struct struct_2 **v7;  // [sp-0x198], Other Possible Types: unsigned long long [2]
    unsigned long long v8;  // [sp-0x190], Other Possible Types: unsigned long
    char v9;  // [bp-0x188]
    unsigned long long v10;  // [sp-0x180]
    unsigned long long v11;  // [sp-0x178]
    struct_5 *v12;  // [sp-0x170]
    char v13;  // [bp-0x168]
    char v14;  // [bp-0x158]
    char v15;  // [bp-0x148]
    char v16;  // [bp-0x138]
    char v17;  // [bp-0x128]
    char v18;  // [bp-0x118]
    char v19;  // [bp-0x108]
    char v20;  // [bp-0x100]
    char v21;  // [bp-0xf8]
    char v22;  // [bp-0xf0]
    void* v23;  // [bp-0xe8], Other Possible Types: unsigned long long (64 bits)[4], unsigned long
    unsigned long v24;  // [sp-0xe0], Other Possible Types: unsigned long long
    void* v25;  // [bp-0xd8], Other Possible Types: int, char
    char v26;  // [bp-0xd0]
    struct struct_6 **v27;  // [sp-0xc8], Other Possible Types: int
    unsigned long long v28;  // [sp-0xc0]
    int v29;  // [sp-0xb8]
    int v30;  // [sp-0xa8]
    int v31;  // [sp-0x98]
    int v32;  // [sp-0x88]
    unsigned long long v33;  // [sp-0x78]
    unsigned short v34;  // [sp-0x70]
    struct_5 *v36;  // rbx
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // ymm1
    int v42;  // ymm1
    int v43;  // xmm2
    int v44;  // ymm2
    int v45;  // ymm2
    int v46;  // xmm3
    int v47;  // ymm3
    int v48;  // ymm3
    int v49;  // xmm0
    int v50;  // xmm0
    int v51;  // ymm0
    int v52;  // ymm0
    unsigned long long v53;  // rbp
    struct_0 *v54;  // r14
    struct_0 *v55;  // r14
    struct_0 *v56;  // r14
    unsigned long long v57;  // cc_ndep
    unsigned int *v58;  // rsi
    unsigned long long v59;  // rbx
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    unsigned long long v66[2];  // r13
    unsigned long long v67;  // rsi
    unsigned long long v68;  // rsi
    unsigned long long v69;  // rsi
    unsigned long long v70[2];  // rdi
    struct_0 *v71;  // r14
    unsigned long long v72;  // rsi
    struct struct_2 **v73;  // r14
    unsigned long long v74;  // r13
    unsigned long long v76;  // rdx
    unsigned long long v77;  // rcx
    struct_4 *v78;  // r13
    unsigned long long v79;  // rsi

    v36 = a0;
    compat_core::esxi::utils::esxi_run_command_with_output::hc22d95a2d7f3a90b(v23, "vim-cmd vmsvc/getallvms\nVmid bin/compat-core/src/esxi/vm.rs", 23);
    if (v23 == 1)
    {
        *((unsigned long long *)&a0->field_0) = v10;
        *((unsigned long long *)(a0 + &g_8)) = v5;
        return v36;
    }
    v5 = *((long long *)&v25);
    v12 = a0;
    v10 = v24;
    core::str::pattern::StrSearcher::new::hfaa540e9eb8429e4(&v13, v10, v24, "\nVmid bin/compat-core/src/esxi/vm.rs", 1);
    v23 = 0;
    v24 = *((long long *)&v26);
    v39 = *((int128_t *)&v13);
    v40 = *((int128_t *)&v14);
    v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
    v43 = *((int128_t *)&v15);
    v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v46 = *((int128_t *)&v16);
    v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v25 = v39;
    v27 = v40;
    v29 = v43;
    v30 = v46;
    v49 = *((int128_t *)&v17);
    v31 = v49;
    v50 = *((int128_t *)&v18);
    v32 = v50;
    v33 = *((long long *)&v19);
    v34 = 1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..SpecExtend$LT$T$C$I$GT$$GT$::from_iter::h4c5e599c19187c66(&v20, v23);
    v2 = &g_8;
    v52 = (((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v3) = 0;
    v1 = *((long long *)&v20);
    v0 = *((long long *)&v21);
    v53 = *((long long *)&v22);
    if (v53)
    {
        v54 = v1;
        while (true)
        {
            v56 = v55;
            v58 = v56->field_0;
            if (!v58)
                break;
            v59 = *((long long *)(v56 + &g_8));
            if (!(v59 >= 4) || !(v58 == "Vmid bin/compat-core/src/esxi/vm.rs") && !(*(v58) == 1684630870))
            {
                core::str::pattern::StrSearcher::new::hfaa540e9eb8429e4(&v13, v58, v59, " bin/compat-core/src/esxi/vm.rs", 1);
                v23 = 0;
                v24 = v59;
                v33 = *((long long *)&v19);
                v60 = *((int128_t *)&v18);
                v32 = v60;
                v61 = *((int128_t *)&v17);
                v31 = v61;
                v62 = *((int128_t *)&v13);
                v52 = ((v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                v63 = *((int128_t *)&v14);
                v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                v64 = *((int128_t *)&v15);
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v65 = *((int128_t *)&v16);
                v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v30 = v65;
                v29 = v64;
                v27 = v63;
                v25 = v62;
                v34 = 1;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..SpecExtend$LT$T$C$I$GT$$GT$::from_iter::hd2dd7d44d02578ee(&v7, v23);
                if (!*((long long *)&v9))
                {
                    v67 = v8;
                    if (v67 && !((char)amd64g_calculate_condition(4, 32, v67 * 16, v67 * &g_8, v57)))
                    {
                        v70 = v7;
LABEL_44c9c8:
                        __rust_dealloc(v70);
                    }
                }
                else
                {
                    v66 = v7;
                    core::num::_$LT$impl$u20$core..str..FromStr$u20$for$u20$u64$GT$::from_str::hea298b94ee5f940e(v23, v66[0], *((long long *)(v66 + &g_8)));
                    if ((char)v23)
                    {
                        v68 = v8;
                        if (!v68)
                            goto LABEL_44c9ce;
                    }
                    else
                    {
                        v69 = v4;
                        if (v69 == (long long)v3)
                        {
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h5dadd915f9326507(&v2, v69, 1);
                            v69 = v4;
                        }
                        *((unsigned long *)((char *)v2 + v69 * &g_8)) = v24;
                        v4 += 1;
                        v68 = v8;
                        if (!v68)
                            goto LABEL_44c9ce;
                    }
                    if (!((char)amd64g_calculate_condition(4, 32, v68 * 16, v68 * &g_8, v57)))
                    {
                        v70 = v66;
                        goto LABEL_44c9c8;
                    }
                }
            }
LABEL_44c9ce:
            v71 = v56 + 1;
            if (v71 == &v54[v53])
                break;
        }
    }
    v72 = v0;
    if (v72 && !((char)amd64g_calculate_condition(4, 32, v72 * 16, v72 * &g_8, v57)))
        __rust_dealloc(v1);
    v6 = v2;
    v11 = (long long)v3;
    v0 = v4;
    if (v5)
        __rust_dealloc(v10);
    if (v0)
    {
        v0 *= &g_8;
        v73 = 0;
        do
        {
            v2 = *((long long *)(v6 + v73));
            v7 = &v2;
            v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h3cf215fb85128eed;
            *((char **)v23) = &g_7e6360;
            v24 = 1;
            v25 = 0;
            v27 = &v7;
            v28 = 1;
            alloc::fmt::format::h3807df668a4e013c(&v13, v23);
            v74 = *((long long *)&v13);
            v5 = *((long long *)&(&v13)[8]);
            std::sys::unix::process::process_common::Command::new::h488fe90a515bc251(v23, "/bin/sh-csh/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 7);
            std::sys::unix::process::process_common::Command::stdout::he63fdf42343b92c4(v23, (unsigned int)std::process::Stdio::null::hcc4fcc7cfeff8ee8(), v76);
            std::sys::unix::process::process_common::Command::arg::h767f7fe18acf49f1(v23, "-csh/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 2);
            v1 = v74;
            std::sys::unix::process::process_common::Command::arg::h767f7fe18acf49f1(v23, v74, *((long long *)&v14));
            std::process::Command::status::hf3a4699ef731b957(&v13, v23, v76, v77);
            core::ptr::drop_in_place::hfd4d0c5a6abcb205(v23);
            if (*((int *)&v13) && (&v13)[8] >= 2)
            {
                v78 = *((long long *)&v14);
                *((long long *)*((long long *)(v78 + &g_8)))(v78->field_0);
                if (*((long long *)(*((long long *)(v78 + &g_8)) + (char *)&g_8)))
                    __rust_dealloc(v78->field_0);
                __rust_dealloc(v78);
            }
            if (v5)
                __rust_dealloc(v1);
            v73 += &g_8;
        } while (v0 != v73);
    }
    v79 = v11;
    if (v79 && v79 * &g_8)
        __rust_dealloc(v6);
    v36 = v12;
    v36->field_0 = 3;
    return v36;
}
