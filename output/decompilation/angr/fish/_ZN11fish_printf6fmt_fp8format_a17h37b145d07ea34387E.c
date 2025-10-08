void fish_printf::fmt_fp::format_a(char *a0, struct_0 *a1)
{
    char v0;  // [bp-0xfd]
    char v1;  // [bp-0xfc]
    char v2;  // [bp-0xfb]
    char v3;  // [bp-0xfa]
    char v4;  // [bp-0xf9]
    int v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8], Other Possible Types: char
    char v8;  // [bp-0xd8]
    unsigned long v9;  // [bp-0xd0]
    unsigned int v10;  // [bp-0xc4]
    unsigned int v11;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xbc]
    unsigned long v14;  // [bp-0xb0]
    char v15;  // [bp-0xa8]
    char *v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88]
    char *v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x78]
    char *v22;  // [bp-0x70]
    unsigned long long v23;  // [bp-0x68]
    unsigned long long v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    char *v26;  // [bp-0x50]
    unsigned long long v27;  // [bp-0x48]
    void* v28;  // [bp-0x40]
    int v30;  // ymm0
    int v31;  // xmm1
    uint128_t v32;  // xmm0
    uint256_t v33;  // ymm0
    unsigned long long v34;  // rbp
    unsigned int *v35;  // r15
    unsigned long long v36[3];  // r12
    unsigned int v37;  // ebx
    int v38;  // ymm1
    uint256_t v39;  // ymm1
    unsigned long v40;  // cc_dep1
    unsigned int v41;  // ebx
    unsigned long long v42;  // cc_ndep
    unsigned long long v43;  // cc_ndep
    unsigned int v44;  // ebx
    uint256_t v45;  // ymm1
    unsigned long v46;  // r14
    char v47;  // al
    unsigned long long v48;  // rdx
    unsigned long v50;  // rax
    int v51;  // xmm1
    int v52;  // xmm1
    unsigned long v53;  // r14
    unsigned long v54;  // rcx
    unsigned int v55;  // ebx
    char *v57;  // rbx
    int v58;  // xmm1
    uint256_t v59;  // ymm1
    uint256_t v60;  // ymm0
    unsigned int v61;  // r14d
    unsigned long v62;  // rdi
    int v63;  // xmm1
    int v64;  // xmm1
    uint256_t v65;  // ymm1
    uint256_t v66;  // ymm0
    unsigned int v67;  // r14d
    int v68;  // xmm1
    int v69;  // xmm1
    uint256_t v70;  // ymm1
    uint256_t v71;  // ymm0
    unsigned int v72;  // r14d
    int v73;  // xmm1
    int v74;  // xmm1
    uint256_t v75;  // ymm1
    uint256_t v76;  // ymm0
    unsigned int v77;  // r14d
    int v78;  // xmm1

    v31 = (uint128_t)v30;
    v5 = v31;
    v32 = 170141183460469231722463931679029329919 & v31;
    v33 = (v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v9 = a1->field_10;
    v34 = a1->field_18;
    v1 = a1->field_3e;
    v0 = a1->field_38;
    v2 = a1->field_39;
    v3 = a1->field_3a;
    v8 = a1->field_3b;
    v35 = a1->field_28;
    v4 = a1->field_3f;
    v36 = a1->field_30;
    v37 = fish_printf::fmt_fp::frexp();
    v39 = (v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v40 = CmpF((unsigned long long)v33, (unsigned long long)v39) & 69;
    v14 = a1->field_20;
    if (((char)((CmpF((unsigned long long)v33, (unsigned long long)v39) & 69) >> 6) & 1) == 1)
    {
        v41 = v37;
        if (!((char)_ccall(10, 0, v40, 0, v42)))
            goto LABEL_125a95f;
    }
    v43 = _ccall(0, v40, 0, v43);
    v44 = v37 - 1;
    if ((char)_ccall(0, 27, (unsigned long long)(v37 - 1), 0, _ccall(0, v40, 0, v43)))
        core::panicking::panic_const::panic_const_sub_overflow(&g_149a338); /* do not return */
    v32 = AddV(v32, v32);
    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v41 = v44;
LABEL_125a95f:
    v45 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
    v46 = v45;
    v47 = v46 < 0 | a1->field_3c;
    if (v4)
    {
        v48 = (v46 < 0 ? "-0x/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs" : "+0x-0x/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs");
        v6 = 3;
        if (!(v47 & 1))
        {
            v6 = v7 | 2;
            v48 = (v7 ? " 0x+0x-0x/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs" : "0xassertion failed: c == '0' || c == ' '");
        }
    }
    else
    {
        v48 = (v46 < 0 ? "-0X 0x+0x-0x/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs" : "+0X-0X 0x+0x-0x/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs");
        v6 = 3;
        if (!(v47 & 1))
        {
            v50 = v7;
            v6 = v50 + 2;
            v48 = ((v50 & 255) ? " 0X+0X-0X 0x+0x-0x/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs" : "0X0xassertion failed: c == '0' || c == ' '");
        }
    }
    *((uint128_t *)&v5) = v32;
    v7 = v48;
    if ((v34 < 13 & v1))
    {
        v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4000000000000000;
        __powidf2(52 - (unsigned int)v34 * 4);
        if (v46 >= 0)
        {
            v51 = AddV(v5, (uint128_t)v33);
            v52 = SubV(v51, (uint128_t)v33);
            v45 = ((v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
            v5 = v52;
        }
        else
        {
            v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x80000000000000008000000000000000;
            v5 = AddV(SubV(v5 ^ 0x80000000000000008000000000000000, (uint128_t)v33), (uint128_t)v33) ^ 0x80000000000000008000000000000000;
        }
    }
    v53 = v4;
    v10 = ((unsigned int)v53 & 255) * 32 | 80;
    v54 = v41;
    if ((unsigned int)-(v54 & 4294967295) < 0)
        v55 = v41;
    else
        v55 = -((unsigned int)v54);
    v11 = (v41 >> 31) * 2 + 43;
    v12 = v55;
    v18 = &v10;
    v19 = <char as core::fmt::Display>::fmt;
    v20 = &v11;
    v21 = <char as core::fmt::Display>::fmt;
    v22 = &v12;
    v23 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v24 = &g_54b128;
    v25 = 3;
    v28 = 0;
    v26 = &v18;
    v27 = 3;
    v15.map_or_else(&v24);
    v57 = ((v53 & 255) ? "0123456789abcdef" : "0123456789ABCDEFt");
    if (v1)
    {
        if (((v34 | v0) & 1))
        {
            v59 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
            while (true)
            {
                v60 = ((v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v58, 0xc1e0000000000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MinV(MaxV(v58, 0xc1e0000000000000), 0x41dfffffffc00000));
                v5 = v58;
                v61 = (((CmpF((unsigned long long)v59, (unsigned long long)v59) & 69) >> 2 & 1) ? 0 : (unsigned int)v60);
                v62 = v61;
                if ((unsigned int)v62 > 15)
                    break;
                v36.push(v57[v62]);
                v33 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v61;
                v63 = SubV(v5, (uint128_t)v33);
                v58 = MulV(v63, 0x4030000000000000);
                v59 = ((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                if (v36[2] == 1)
                {
                    v5 = v58;
                    v36.push(*(v35));
                    v58 = v5;
                    v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                }
            }
        }
        else
        {
            v65 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
            while (true)
            {
                v66 = ((v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v64, 0xc1e0000000000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MinV(MaxV(v64, 0xc1e0000000000000), 0x41dfffffffc00000));
                v5 = v64;
                v67 = (((CmpF((unsigned long long)v65, (unsigned long long)v65) & 69) >> 2 & 1) ? 0 : (unsigned int)v66);
                v62 = v67;
                if ((unsigned int)v62 > 15)
                    break;
                v36.push(v57[v62]);
                v33 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v67;
                v68 = SubV(v5, (uint128_t)v33);
                v64 = MulV(v68, 0x4030000000000000);
                v65 = ((v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                if (v36[2] == 1 && (((char)((CmpF((unsigned long long)v65, 0) & 69) >> 6) & 1) != 1 || (char)_ccall(10, 0, (unsigned long long)(CmpF((unsigned long long)v65, 0) & 69), 0, v43)))
                {
                    v5 = v64;
                    v36.push(*(v35));
                    v64 = v5;
                    v65 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                }
            }
        }
    }
    else
    {
        if (v0)
        {
            v70 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
            while (true)
            {
                v71 = ((v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v69, 0xc1e0000000000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MinV(MaxV(v69, 0xc1e0000000000000), 0x41dfffffffc00000));
                v5 = v69;
                v72 = (((CmpF((unsigned long long)v70, (unsigned long long)v70) & 69) >> 2 & 1) ? 0 : (unsigned int)v71);
                v62 = v72;
                if ((unsigned int)v62 > 15)
                    break;
                v36.push(v57[v62]);
                v33 = v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v72;
                v73 = SubV(v5, (uint128_t)v33);
                v69 = MulV(v73, 0x4030000000000000);
                v70 = ((v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                if (v36[2] == 1)
                {
                    v5 = v69;
                    v36.push(*(v35));
                    v69 = v5;
                    v70 = v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                }
            }
        }
        else
        {
            v75 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
            while (true)
            {
                v76 = ((v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v74, 0xc1e0000000000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MinV(MaxV(v74, 0xc1e0000000000000), 0x41dfffffffc00000));
                v5 = v74;
                v77 = (((CmpF((unsigned long long)v75, (unsigned long long)v75) & 69) >> 2 & 1) ? 0 : (unsigned int)v76);
                v62 = v77;
                if ((unsigned int)v62 > 15)
                    break;
                v36.push(v57[v62]);
                v33 = v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v77;
                v78 = SubV(v5, (uint128_t)v33);
                v74 = MulV(v78, 0x4030000000000000);
                v75 = ((v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                if (v36[2] == 1 && (((char)((CmpF((unsigned long long)v75, 0) & 69) >> 6) & 1) != 1 || (char)_ccall(10, 0, (unsigned long long)(CmpF((unsigned long long)v75, 0) & 69), 0, v43)))
                {
                    v5 = v74;
                    v36.push(*(v35));
                    v74 = v5;
                    v75 = v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                }
            }
        }
    }
    core::panicking::panic_bounds_check(v62, 16, &g_149a350); /* do not return */
}
