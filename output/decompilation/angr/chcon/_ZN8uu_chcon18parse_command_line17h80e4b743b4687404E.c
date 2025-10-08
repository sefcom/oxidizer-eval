long long uu_chcon::parse_command_line(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x23d]
    unsigned int v1;  // [bp-0x23c]
    int v2;  // [bp-0x238], Other Possible Types: char, unsigned long long
    unsigned long long v3;  // [bp-0x238]
    char v4;  // [bp-0x230], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x22c]
    char *v6;  // [bp-0x228], Other Possible Types: char
    unsigned long long v7;  // [bp-0x224]
    int v8;  // [bp-0x220], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x218], Other Possible Types: char
    int v10;  // [bp-0x210]
    unsigned long long v11;  // [bp-0x208]
    int v12;  // [bp-0x200]
    int v13;  // [bp-0x1f0]
    int v14;  // [bp-0x1e8]
    char v15;  // [bp-0x1e0]
    int v16;  // [bp-0x1d8]
    char v17;  // [bp-0x1d0]
    unsigned long v18;  // [bp-0x1c8]
    unsigned long long v19;  // [bp-0x1c0]
    char *v20;  // [bp-0x1b8]
    char v21;  // [bp-0x1b0]
    char v22;  // [bp-0x1a0]
    unsigned long long v23;  // [bp-0x190]
    char v24;  // [bp-0x188], Other Possible Types: unsigned long long
    int v25;  // [bp-0x188]
    char *v26;  // [bp-0x178]
    unsigned long long *v27;  // [sp-0x168]
    unsigned long long v28;  // [bp-0x168]
    unsigned long long v29;  // [bp-0x160]
    int v30;  // [bp-0x160]
    unsigned long long *v31;  // [bp-0x158]
    char *v32;  // [bp-0x158]
    char *v33;  // [sp-0x150], Other Possible Types: unsigned long long
    char v34;  // [bp-0x148]
    char *v35;  // [bp-0x140]
    int v36;  // [bp-0x138]
    char *v37;  // [bp-0x128]
    unsigned long long v38;  // [bp-0x120]
    int v39;  // [bp-0x118]
    char v40;  // [bp-0x108], Other Possible Types: unsigned long long
    int v41;  // [bp-0x108]
    char *v42;  // [bp-0xf8]
    char v43;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v44;  // [bp-0xe8]
    char *v45;  // [bp-0xd8]
    int v46;  // [bp-0xc8]
    unsigned long long v47;  // [bp-0xc8]
    unsigned long long v48;  // [bp-0xc0]
    int v49;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v50;  // [bp-0xb0]
    int v51;  // [bp-0xa8]
    void* v52;  // [bp-0xa0]
    int v53;  // [bp-0x98]
    void* v54;  // [bp-0x90]
    int v55;  // [bp-0x88], Other Possible Types: char
    char v56;  // [bp-0x78]
    unsigned long long v57;  // [bp-0x68]
    char v58;  // [bp-0x60]
    unsigned long long v59;  // [bp-0x50]
    char v60;  // [bp-0x48]
    char v61;  // [bp-0x38]
    unsigned long long v63;  // rcx
    unsigned long long v64;  // rax
    unsigned long long v65;  // rax
    char v66;  // r14b
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rcx
    char v71;  // al
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2
    unsigned long long v75[3];  // rax
    unsigned long long v76;  // rax
    unsigned long long v77[3];  // rax
    unsigned long long v78[3];  // rax
    unsigned long long v79[3];  // rax
    unsigned long long v80[3];  // rax
    unsigned long long v81[3];  // rax
    unsigned long long v82;  // rcx
    int v83;  // xmm0
    int v84;  // xmm1
    int v85;  // xmm2

    v2.try_get_matches_from(a1, a2, v63);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        *((unsigned int *)&a0[8]) = 14;
        *((char **)&a0[16]) = v20;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v20;
    }
    v23 = v11;
    memcpy(&v22, &v9, 16);
    memcpy(&v21, &v6, 16);
    v19 = v3;
    v20 = *((long long *)&v4);
    v0 = v19.get_flag(_ZN8uu_chcon7options7VERBOSE17hdb57e67b80c894f3E, g_4f0360);
    if (!(char)v19.get_flag(_ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E, g_4f03c0))
    {
        v66 = (char)v19.get_flag(_ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E, g_4f0400) ^ 1;
        v1 = 0;
        goto LABEL_45c6c2;
    }
    if ((char)v19.get_flag(_ZN8uu_chcon7options9sym_links20FOLLOW_DIR_SYM_LINKS17h95a2c6febd631cb3E, g_4f03e0))
    {
        v64 = v19.get_flag(_ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E, g_4f0400);
        if ((char)v64)
        {
            v27 = &_ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E;
            v29 = <&T as core::fmt::Display>::fmt;
            v31 = &_ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E;
            v33 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ef4f0;
            v4 = 3;
            v9 = 0;
            v6 = &v27;
            v8 = 2;
            v56.map_or_else(&v2);
            memcpy(&(char)v2, &v56, 16);
            v65 = v57;
            goto LABEL_45ca86;
        }
        else
        {
            v66 = 1;
            v1 = (unsigned int)v64 & 0xffffff00 | 2;
            goto LABEL_45c6c2;
        }
    }
    if ((char)v19.get_flag(_ZN8uu_chcon7options9sym_links23FOLLOW_ARG_DIR_SYM_LINK17h3f112273255ac430E, g_4f03d0))
    {
        v67 = v19.get_flag(_ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E, g_4f0400);
        if ((char)v67)
        {
            v27 = &_ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E;
            v29 = <&T as core::fmt::Display>::fmt;
            v31 = &_ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E;
            v33 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ef4f0;
            v4 = 3;
            v9 = 0;
            v6 = &v27;
            v8 = 2;
            v58.map_or_else(&v2);
            memcpy(&(char)v2, &v58, 16);
            v65 = v59;
            goto LABEL_45ca86;
        }
        else
        {
            v66 = 1;
            v1 = (unsigned int)v67 & 0xffffff00 | 3;
            goto LABEL_45c6c2;
        }
    }
    else
    {
        v68 = v19.get_flag(_ZN8uu_chcon7options11dereference11DEREFERENCE17h91753ff18563b15fE, g_4f03f0);
        if ((char)v68)
        {
            v27 = &_ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E;
            v29 = <&T as core::fmt::Display>::fmt;
            v31 = &_ZN8uu_chcon7options11dereference11DEREFERENCE17h91753ff18563b15fE;
            v33 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ef520;
            v4 = 3;
            v9 = 0;
            v6 = &v27;
            v8 = 2;
            v60.map_or_else(&v2);
            memcpy(&(char)v2, &v60, 16);
            v65 = *((long long *)&v61);
LABEL_45ca86:
            v7 = v65;
            *((unsigned int *)&a0[8]) = 13;
            v69 = *((long long *)&v5);
            v70 = v7;
            *((int128_t *)&a0[12]) = *((int128_t *)&v2);
            *((unsigned long long *)&a0[24]) = v69;
            *((unsigned long long *)&a0[32]) = v70;
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v1 = (unsigned int)v68 & 0xffffff00 | 1;
LABEL_45c6c2:
            v71 = v19.get_flag(_ZN8uu_chcon7options13preserve_root13PRESERVE_ROOT17hed149f8ad63239c9E, g_4f0410);
            v2.try_get_many(&v19);
            (char)v28.unwrap(&v2);
            if (v28)
            {
                v72 = *((int128_t *)&v28);
                v73 = *((int128_t *)&v31);
                v74 = *((int128_t *)&v34);
                v53 = v36;
                v51 = v74;
                v49 = v73;
                v46 = v72;
            }
            else
            {
                v47 = core::ops::function::FnOnce::call_once;
                v48 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
                v49 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
                v50 = 0;
                v52 = 0;
                v54 = 0;
            }
            v2.try_get_one(&v19, _ZN8uu_chcon7options9REFERENCE17h0672fdda11d64845E, g_4f0370);
            v75 = _ZN8uu_chcon7options9REFERENCE17h0672fdda11d64845E.unwrap(g_4f0370, &v2);
            if (v75)
            {
                v2.to_vec(v75[1], v75[2]);
                v33 = v6;
                *((int128_t *)&v30) = *((int128_t *)&v3);
                v76 = 9223372036854775809;
                goto LABEL_45c807;
            }
            if ((char)v19.contains_id(_ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE, g_4f0380) || (char)v19.contains_id(_ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E, g_4f0390) || (char)v19.contains_id(_ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E, g_4f03a0) || (char)v19.contains_id(_ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E, g_4f03b0))
            {
                v2.try_get_one(&v19, _ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE, g_4f0380);
                v78 = _ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE.unwrap(g_4f0380, &v2);
                if (v78)
                {
                    v2.to_vec(v78[1], v78[2]);
                    v42 = v6;
                    memcpy(&v40, &v2, 16);
                }
                else
                {
                    v40 = 0x8000000000000000;
                }
                v2.try_get_one(&v19, _ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E, g_4f0390);
                v79 = _ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E.unwrap(g_4f0390, &v2);
                if (v79)
                {
                    v2.to_vec(v79[1], v79[2]);
                    v45 = v6;
                    memcpy(&v43, &v2, 16);
                }
                else
                {
                    v43 = 0x8000000000000000;
                }
                v2.try_get_one(&v19, _ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E, g_4f03a0);
                v80 = _ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E.unwrap(g_4f03a0, &v2);
                if (v80)
                {
                    v2.to_vec(v80[1], v80[2]);
                    v26 = v6;
                    memcpy(&v24, &v2, 16);
                }
                else
                {
                    v24 = 0x8000000000000000;
                }
                v2.try_get_one(&v19, _ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E, g_4f03b0);
                v81 = _ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E.unwrap(g_4f03b0, &v2);
                v82 = 0x8000000000000000;
                if (v81)
                {
                    v2.to_vec(v81[1], v81[2]);
                    v82 = v3;
                    memcpy(&v55, &v4, 16);
                }
                v32 = v42;
                memcpy(&(char)v28, &v41, 16);
                memcpy(&v33, &v44, 16);
                v35 = v45;
                memcpy(&v36, &v25, 16);
                v37 = v26;
                v38 = v82;
                v39 = v55;
                goto LABEL_45cc79;
            }
            else
            {
                v77 = (char)v47.next();
                if (v77)
                {
                    v2.to_vec(v77[1], v77[2]);
                    v33 = v6;
                    *((int128_t *)&v30) = *((int128_t *)&v3);
                    v76 = 9223372036854775810;
LABEL_45c807:
                    v28 = v76;
LABEL_45cc79:
                    v25.collect(&(char)v47);
                    if (v26)
                    {
                        memcpy(&v17, &v39, 16);
                        memcpy(&v15, &v37, 16);
                        v83 = *((int128_t *)&v28);
                        v84 = (int128_t)(&v30)[8];
                        v85 = *((int128_t *)&v34);
                        v13 = v36;
                        v12 = v85;
                        v10 = v84;
                        v8 = v83;
                        v6 = v26;
                        v2 = v25;
                        *(a0) = v25;
                        *((int128_t *)&a0[32]) = (int128_t)(&v8)[8];
                        *((int128_t *)&a0[48]) = (int128_t)(&v10)[8];
                        *((int128_t *)&a0[64]) = (int128_t)(&v12)[8];
                        a0[80] = v14;
                        a0[96] = v16;
                        *((char **)&a0[16]) = v6;
                        *((unsigned long long *)&a0[24]) = v8;
                        *((unsigned long *)&a0[112]) = v18;
                        *((char *)&a0[120]) = v0;
                        *((char *)&a0[121]) = v71;
                        *((char *)&a0[122]) = v66;
                        *((char *)&a0[123]) = v1;
                    }
                    else
                    {
                        *((unsigned int *)&a0[8]) = 11;
                        *((unsigned long long *)a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v25);
                        core::ptr::drop_in_place<uu_chcon::CommandLineMode>(&v28);
                    }
                }
                else
                {
                    *((unsigned int *)&a0[8]) = 10;
                    *((unsigned long long *)a0) = 0x8000000000000000;
                }
            }
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
}
