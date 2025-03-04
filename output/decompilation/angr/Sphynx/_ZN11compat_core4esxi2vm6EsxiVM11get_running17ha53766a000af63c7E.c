long long compat_core::esxi::vm::EsxiVM::get_running::ha53766a000af63c7(unsigned long long a0[4])
{
    unsigned long long v0;  // [sp-0x198]
    int v1;  // [bp-0x190]
    unsigned long long v2;  // [sp-0x188]
    struct_0 *v3;  // [sp-0x180]
    unsigned long long v4;  // [sp-0x178]
    unsigned long long v5;  // [sp-0x170]
    unsigned long long v6;  // [sp-0x168]
    unsigned long long v7;  // [sp-0x160]
    unsigned long long v8[4];  // [sp-0x158]
    unsigned long long v9;  // [sp-0x150]
    void* v10;  // [bp-0x148], Other Possible Types: unsigned long long (64 bits)[4], unsigned long
    unsigned long v11;  // [sp-0x140], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x138], Other Possible Types: int, char, unsigned long
    char v13;  // [bp-0x130]
    int v14;  // [sp-0x128]
    int v15;  // [sp-0x118]
    int v16;  // [sp-0x108]
    int v17;  // [sp-0xf8]
    int v18;  // [sp-0xe8]
    unsigned long long v19;  // [sp-0xd8]
    unsigned short v20;  // [sp-0xd0]
    char v21;  // [bp-0xc8]
    char v22;  // [bp-0xb8]
    char v23;  // [bp-0xa8]
    char v24;  // [bp-0x98]
    char v25;  // [bp-0x88]
    char v26;  // [bp-0x78]
    char v27;  // [bp-0x68]
    char v28;  // [bp-0x60]
    char v29;  // [bp-0x58]
    char v30;  // [bp-0x50]
    char v31;  // [bp-0x48]
    char v32;  // [bp-0x40]
    char v33;  // [bp-0x38]
    unsigned long long v35[4];  // rbx
    int v38;  // xmm0
    int v39;  // xmm1
    int v40;  // ymm1
    int v41;  // ymm1
    int v42;  // xmm2
    int v43;  // ymm2
    int v44;  // ymm2
    int v45;  // xmm3
    int v46;  // ymm3
    int v47;  // ymm3
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // ymm0
    unsigned long long v52;  // r13
    struct_0 *v53;  // r12
    unsigned long long v54;  // r13
    unsigned long long v55;  // r14
    unsigned long long v56;  // cc_ndep
    unsigned int *v57;  // rsi
    unsigned long long v58;  // rbp
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    int v64;  // xmm3
    unsigned long long v65;  // rbp
    unsigned long long v66[4];  // r15
    unsigned long long v67;  // rsi
    unsigned long long v68;  // r13
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax
    void* v71;  // rcx
    unsigned long long v72;  // r14
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rax
    unsigned long long v75;  // rsi
    int v76;  // xmm0
    unsigned long long v77;  // rsi

    v35 = a0;
    compat_core::esxi::utils::esxi_run_command_with_output::hc22d95a2d7f3a90b(v10, "esxcli --formatter=csv --format-param=fields==\"WorldID,DisplayName\" vm process listWorldId,esxcli vm process kill --type= --world-id=Killing VM: , attempt: compat_core::esxi::vm", 83);
    if (v10 == 1)
    {
        *((unsigned long long *)(a0 + &g_8)) = v5;
        *((unsigned long long *)(a0 + &g_10)) = v7;
        a0[0] = 1;
        return v35;
    }
    v7 = *((long long *)&v12);
    v8[0] = a0;
    v5 = v11;
    core::str::pattern::StrSearcher::new::hfaa540e9eb8429e4(&v21, v5, v11, "\nVmid bin/compat-core/src/esxi/vm.rs", 1);
    v10 = 0;
    v11 = *((long long *)&v13);
    v38 = *((int128_t *)&v21);
    v39 = *((int128_t *)&v22);
    v41 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
    v42 = *((int128_t *)&v23);
    v44 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    v45 = *((int128_t *)&v24);
    v47 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v12 = v38;
    v14 = v39;
    v15 = v42;
    v16 = v45;
    v48 = *((int128_t *)&v25);
    v17 = v48;
    v49 = *((int128_t *)&v26);
    v18 = v49;
    v19 = *((long long *)&v27);
    v20 = 1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..SpecExtend$LT$T$C$I$GT$$GT$::from_iter::h4c5e599c19187c66(&v28, v10);
    v0 = &g_8;
    v51 = (((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v1) = 0;
    v3 = *((long long *)&v28);
    v6 = *((long long *)&v29);
    v52 = *((long long *)&v30);
    if (v52)
    {
        v53 = v3;
        v54 = v52 * &g_10 + (char *)v53;
        v55 = ",esxcli vm process kill --type= --world-id=Killing VM: , attempt: compat_core::esxi::vm";
        v4 = v54;
        while (true)
        {
            v57 = v53->field_0;
            if (!v57)
                break;
            v58 = *((long long *)(v53 + &g_8));
            if (!(v58 >= 7) || !(v57 == "WorldId,esxcli vm process kill --type= --world-id=Killing VM: , attempt: compat_core::esxi::vm") && (!(!(*((int *)((char *)v57 + 3)) ^ 1682531436)) || !(!(*(v57) ^ 1819438935))))
            {
                core::str::pattern::StrSearcher::new::hfaa540e9eb8429e4(&v21, v57, v58, v55, 1);
                v10 = 0;
                v11 = v58;
                v19 = *((long long *)&v27);
                v59 = *((int128_t *)&v26);
                v18 = v59;
                v60 = *((int128_t *)&v25);
                v17 = v60;
                v61 = *((int128_t *)&v21);
                v51 = ((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                v62 = *((int128_t *)&v22);
                v41 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                v63 = *((int128_t *)&v23);
                v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                v64 = *((int128_t *)&v24);
                v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v16 = v64;
                v15 = v63;
                v14 = v62;
                v12 = v61;
                v20 = 1;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..SpecExtend$LT$T$C$I$GT$$GT$::from_iter::h4c5e599c19187c66(&v31, v10);
                v65 = *((long long *)&v33);
                if (!v65)
                    core::panicking::panic_bounds_check::he8c5b8156efddd25(0, 0, &g_7e6370); /* do not return */
                v66 = *((long long *)&v31);
                core::num::_$LT$impl$u20$core..str..FromStr$u20$for$u20$u64$GT$::from_str::hea298b94ee5f940e(&v21, v66[0], *((long long *)(v66 + &g_8)));
                if (v21)
                {
                    v67 = *((long long *)&v32);
                    if (!v67)
                        goto LABEL_44cf10;
                }
                else
                {
                    if (v65 <= 1)
                        core::panicking::panic_bounds_check::he8c5b8156efddd25(1, v65, &g_7e6388); /* do not return */
                    v68 = *((long long *)(v66 + &g_10));
                    v69 = *((long long *)(v66 + &g_10));
                    v9 = *((long long *)&(&v21)[8]);
                    if (!v69)
                    {
                        v70 = 1;
                        v71 = 0;
                    }
                    else
                    {
                        v70 = __rust_alloc(v69, 1);
                        if (!v70)
                            _ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$11allocate_in28_$u7b$$u7b$closure$u7d$$u7d$17h9f289d254163e8c5E.llvm.3765406455587417959(); /* do not return */
                        v71 = v69;
                    }
                    *((unsigned long long *)v10) = v70;
                    v11 = v71;
                    v12 = 0;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::ha6434863460e3dbe(v10, 0, v69);
                    v72 = v12;
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h5bd23e75d5fc6e32(v10 + v72, v69, v68, v69);
                    v12 = v72 + v69;
                    v73 = v2;
                    if (v73 == (long long)v1)
                    {
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(&v0, v73, 1);
                        v73 = v2;
                    }
                    v54 = v4;
                    v55 = ",esxcli vm process kill --type= --world-id=Killing VM: , attempt: compat_core::esxi::vm";
                    v74 = v0;
                    v75 = v73 * &g_20;
                    *((unsigned long long *)(v74 + v75)) = v9;
                    v76 = *((int128_t *)&v10[0]);
                    v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                    *((void*)(v74 + v75 + (char *)&g_8)) = v76;
                    *((unsigned long *)(v74 + v75 + (char *)&g_10)) = v12;
                    v2 += 1;
                    v67 = *((long long *)&v32);
                    if (!v67)
                        goto LABEL_44cf10;
                }
                if (!((char)amd64g_calculate_condition(4, &g_20, v67 * &g_10, v67 * &g_8, v56)))
                    __rust_dealloc(v66);
            }
LABEL_44cf10:
            v53 += &g_10;
            if (v53 == v54)
                break;
        }
    }
    v77 = v6;
    if (v77 && !((char)amd64g_calculate_condition(4, &g_20, v77 * &g_10, v77 * &g_8, v56)))
        __rust_dealloc(v3);
    v35 = v8;
    *((unsigned long long *)(v35 + &g_10)) = v2;
    *((int128_t *)(v35 + &g_8)) = *((int128_t *)&v0);
    v35[0] = 0;
    if (!v7)
        return v35;
    __rust_dealloc(v5);
}
