void forc_tx::Command::try_parse_from_args(unsigned long long *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x438]
    unsigned long long v1;  // [bp-0x430]
    unsigned long long v3;  // [bp-0x430]
    unsigned long long v4;  // [bp-0x428]
    unsigned long long v5;  // [bp-0x420]
    unsigned long long v6;  // [bp-0x418]
    int v7;  // [bp-0x410]
    unsigned long long v8;  // [bp-0x400]
    int v9;  // [bp-0x3f8]
    unsigned long long v10;  // [bp-0x3f0]
    unsigned long long v11;  // [bp-0x3e8]
    int v12;  // [bp-0x3d8], Other Possible Types: char
    unsigned long long v13;  // [bp-0x3c8]
    int v14;  // [bp-0x3b8]
    int v15;  // [bp-0x3b8]
    int v16;  // [bp-0x3b8]
    unsigned long long v17;  // [bp-0x3a8]
    unsigned long long v18;  // [bp-0x398]
    unsigned long long v19;  // [bp-0x390]
    int v20;  // [bp-0x388]
    unsigned long long v21;  // [bp-0x380]
    int v22;  // [bp-0x378], Other Possible Types: char
    int v23;  // [bp-0x368], Other Possible Types: char
    int v24;  // [bp-0x367]
    unsigned int v25;  // [bp-0x364]
    unsigned long long v26;  // [bp-0x360]
    unsigned long long v27;  // [bp-0x360]
    unsigned long long v28;  // [bp-0x358]
    int v29;  // [bp-0x358]
    int v30;  // [bp-0x350], Other Possible Types: char
    int v31;  // [bp-0x348]
    char v32;  // [bp-0x340], Other Possible Types: unsigned long long
    unsigned long long v33;  // [bp-0x338]
    char v34;  // [bp-0x330]
    int v35;  // [bp-0x330]
    int v36;  // [bp-0x320]
    char v37;  // [bp-0x260]
    unsigned long long v38;  // [bp-0x240]
    int v39;  // [bp-0x238]
    char v40;  // [bp-0x228]
    char v41;  // [bp-0x218]
    char v42;  // [bp-0x208]
    char v43;  // [bp-0x140]
    unsigned int v44;  // [bp-0x13f]
    unsigned int v45;  // [bp-0x13c]
    char v46;  // [bp-0x138]
    char v47;  // [bp-0x128]
    char v48;  // [bp-0x118]
    int v49;  // [bp-0x108]
    unsigned long long v50;  // [bp-0xf8]
    unsigned long long v51;  // [bp-0xf0]
    int v52;  // [bp-0xe8]
    char v53;  // [bp-0xd8]
    char v54;  // [bp-0xc8]
    char v55;  // [bp-0xb8]
    int v57;  // xmm0
    int v58;  // ymm0
    uint256_t v59;  // ymm0
    char *v60;  // r13
    char *v61;  // r15
    int v62;  // xmm0
    char *v63;  // r12
    uint256_t v64;  // ymm0
    int v65;  // xmm0
    unsigned long long v66;  // rax
    char v67;  // al
    int v68;  // xmm0
    int v69;  // xmm1
    int v70;  // xmm0
    int v71;  // xmm1
    unsigned long long *v72;  // rdx
    int v73;  // xmm0

    (char)v23.map(a1);
    (char)v3.peekable(&(char)v23);
    (char)v23.try_parse_from(&(char)v3);
    if (*((long long *)&v23) == 2)
    {
        *((unsigned long long *)&v0[8]) = 0x8000000000000000;
        *((unsigned long long *)&v0[16]) = v27;
        *((unsigned long long *)v0) = 2;
    }
    else
    {
        memcpy(&v22, &v27, 16);
        memcpy(&v40, &v30, 16);
        memcpy(&v41, &v32, 16);
        memcpy(&v42, &v34, 200);
        v38 = *((long long *)&v23);
        v57 = v22;
        v59 = ((v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v27)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v30)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v39 = v57;
        v60 = &(char)v23;
        v61 = &v37;
        v18 = 9223372036854775810;
        while (true)
        {
            v15 = v14;
            v3 = 9223372036854775809;
            if (v1 == 9223372036854775809)
            {
                v19.next(&v6);
                if (v19 == 0x8000000000000000)
                    goto LABEL_529141;
            }
            else
            {
                v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v4);
                *((int128_t *)&v20) = *((int128_t *)&v4);
                v19 = v1;
                if (v1 == 0x8000000000000000)
                {
LABEL_529141:
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v19);
                    v3.get_or_insert_with(&v6);
                    if (v3 == 0x8000000000000000)
                    {
                        memcpy(a0, &v38, 0x100);
                        break;
                    }
                    else
                    {
                        v3.get_or_insert_with(&v6);
                        if (v3 == 0x8000000000000000)
                            core::option::unwrap_failed(&g_5d1318); /* do not return */
                        v12.clone(&v3);
                        v33 = v8;
                        v68 = *((int128_t *)&v3);
                        v69 = *((int128_t *)&v5);
                        v31 = v7;
                        v29 = v69;
                        v23 = v68;
                        v15.collect(&(char)v23);
                        v23 = v12;
                        v28 = v13;
                        v30 = v15;
                        v32 = v17;
                        *((long long *)&v0[40]) = (long long)(&v30)[8];
                        *((unsigned long long *)&v0[48]) = v32;
                        *((unsigned long long *)&v0[24]) = v28;
                        *((long long *)&v0[32]) = (long long)v30;
                        v0[8] = v12;
                        *((unsigned long long *)v0) = 2;
                        core::ptr::drop_in_place<forc_tx::Command>(&v38);
                        return;
                    }
                }
            }
            v11 = v21;
            v62 = *((int128_t *)&v19);
            v9 = v62;
            v63 = v60;
            v60.clone(&(char)v9);
            v17 = v28;
            v64 = (v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v23);
            memcpy(&v15, &v23, 16);
            v61.chain(&v15, &v3);
            if ((char)v10.equal(v11, "input", 5))
            {
                v60 = v63;
                v63.try_parse_from(v61);
                if (*((long long *)&v23) != v18)
                {
                    memcpy(&v22, &v27, 16);
                    memcpy(&v53, &v30, 16);
                    memcpy(&v54, &v32, 16);
                    memcpy(&v55, &v34, 136);
                    v51 = *((long long *)&v23);
                    v65 = v22;
                    v59 = ((v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v30)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                    v52 = v65;
                    forc_tx::Command::try_parse_from_args::push_input(v60, &v38, &v51);
                    v61 = &v37;
                    v66 = *((long long *)&v23);
                    if (v66 == 9223372036854775813)
                        goto LABEL_528ee0;
                    v72 = a0;
                    *((unsigned long long *)&v0[48]) = v32;
                    v73 = *((int128_t *)&v26);
                    *((int128_t *)&v0[32]) = *((int128_t *)&v30);
                    v0[16] = v73;
                    *((unsigned long long *)&v0[8]) = v66;
                    goto LABEL_5293e9;
                }
                else
                {
                    v72 = a0;
                    *((unsigned long long *)&v0[8]) = 9223372036854775809;
                    *((unsigned long long *)&v0[16]) = v26;
                    goto LABEL_5293e9;
                }
            }
            else
            {
                if (!(char)v10.equal(v11, "outputforc-plugins/forc-tx/src/lib.rs", 6))
                {
                    (char)v23.to_vec(v10, v11);
                    v13 = v28;
                    memcpy(&v12, &v23, 16);
                    v33 = v8;
                    v70 = *((int128_t *)&v3);
                    v71 = *((int128_t *)&v5);
                    v31 = v7;
                    v29 = v71;
                    v23 = v70;
                    v15.collect(&(char)v23);
                    v23 = v12;
                    v28 = v13;
                    v30 = v16;
                    v32 = v17;
                    *((long long *)&v0[40]) = (long long)(&v30)[8];
                    *((unsigned long long *)&v0[48]) = v32;
                    *((unsigned long long *)&v0[24]) = v28;
                    *((long long *)&v0[32]) = (long long)v30;
                    v0[8] = v12;
                    *((unsigned long long *)v0) = 2;
                    core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::sources::once::Once<alloc::string::String>,core::iter::sources::from_fn::FromFn<forc_tx::Command::try_parse_from_args<std::env::Args>::{{closure}}>>>(&v37);
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
                    core::ptr::drop_in_place<forc_tx::Command>(&v38);
                    return;
                }
                v60 = v63;
                v61 = &v37;
                v63.try_parse_from(&v37);
                v67 = v23;
                if (v67 != 5)
                {
                    v45 = v25;
                    v44 = (int)v24;
                    v59 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26);
                    memcpy(&v48, &v32, 16);
                    memcpy(&v47, &v30, 16);
                    v49 = v35;
                    v50 = (long long)v36;
                    v43 = v67;
                    memcpy(&v46, &v27, 16);
                    forc_tx::Command::try_parse_from_args::push_output(&v38, &v43);
LABEL_528ee0:
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
                    v1 = v3;
                    v14 = v16;
                }
                else
                {
                    v72 = a0;
                    *((unsigned long long *)&v0[8]) = v18;
                    *((unsigned long long *)&v0[16]) = v26;
LABEL_5293e9:
                    *(v72) = 2;
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
                    core::ptr::drop_in_place<forc_tx::Command>(&v38);
                    break;
                }
            }
        }
    }
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::env::Args>>(&(char)v3);
    return;
}
