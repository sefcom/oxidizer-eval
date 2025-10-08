long long ruff_python_formatter::string::docstring::format(struct_0 *a0, struct_1 *a1, struct_5 *a2)
{
    char v0;  // [bp-0x20e]
    char v1;  // [bp-0x20d]
    unsigned int v2;  // [bp-0x20c]
    unsigned int v3;  // [bp-0x20c]
    unsigned long long v4;  // [bp-0x208]
    unsigned int v5;  // [bp-0x1fc]
    unsigned long v6;  // [bp-0x1f8]
    void* v7;  // [bp-0x1f0]
    unsigned long v8;  // [bp-0x1e8]
    char *v9;  // [bp-0x1e0], Other Possible Types: char, unsigned short, unsigned int
    char *v10;  // [bp-0x1e0], Other Possible Types: unsigned int
    char v11;  // [bp-0x1e0]
    char v12;  // [bp-0x1e0]
    void* v13;  // [bp-0x1e0], Other Possible Types: char
    unsigned long long v14;  // [bp-0x1d8]
    int v15;  // [bp-0x1d0], Other Possible Types: char *
    unsigned int v16;  // [bp-0x1cc]
    unsigned long long v17;  // [bp-0x1c8]
    unsigned long long v18;  // [bp-0x1c0]
    unsigned int v19;  // [bp-0x170]
    unsigned int v20;  // [bp-0x16c]
    int v21;  // [bp-0x168]
    struct_5 *v22;  // [bp-0x158]
    unsigned int v23;  // [bp-0x150]
    char v24;  // [bp-0x14c]
    char v25;  // [bp-0x14b]
    struct_0 *v26;  // [bp-0x140]
    unsigned long long v27;  // [bp-0x138]
    unsigned long long v28;  // [bp-0x130]
    int v29;  // [bp-0x128], Other Possible Types: unsigned int
    char v30;  // [bp-0x128]
    char v31;  // [bp-0x127]
    unsigned int v32;  // [bp-0x124]
    unsigned int v33;  // [bp-0x120]
    unsigned int v34;  // [bp-0x11c]
    int v35;  // [bp-0x118]
    char v36;  // [bp-0x108]
    char v37;  // [bp-0xf8]
    int v38;  // [bp-0xe8]
    char v39;  // [bp-0xd8]
    void* v40;  // [bp-0xc0]
    void* v41;  // [bp-0xc0]
    void* v42;  // [bp-0xb0]
    void* v43;  // [bp-0xa8]
    unsigned long v44;  // [bp-0xa0]
    char v45;  // [bp-0x98]
    char v46;  // [bp-0x90]
    int v47;  // [bp-0x80]
    char v48;  // [bp-0x70]
    unsigned short v49;  // [bp-0x68]
    char v50;  // [bp-0x60], Other Possible Types: unsigned int
    int v51;  // [bp-0x5c]
    unsigned int v52;  // [bp-0x4c]
    char v53;  // [bp-0x48], Other Possible Types: unsigned int
    int v54;  // [bp-0x44]
    char v55;  // [bp-0x34]
    struct_5 *v57;  // r14
    struct_0 *v58;  // r13
    unsigned long long v59;  // r12
    unsigned long v60;  // r15
    unsigned long v61;  // rax
    unsigned int v62;  // ebp
    char v63;  // dl
    unsigned long v64;  // rax
    unsigned long long v65;  // rax
    unsigned long long v66;  // rdx
    char v67;  // r13b
    unsigned int v68;  // eax
    unsigned int v69;  // edx
    unsigned int v70;  // eax
    unsigned int v71;  // ecx
    unsigned long long v73;  // rax
    unsigned int v74;  // ecx
    uint128_t v75;  // xmm0
    unsigned int v76;  // cc_dep1
    unsigned int v77;  // ebp
    unsigned int v78;  // ebp
    unsigned long long v80;  // rax
    struct_5 *v81;  // r14
    char v82;  // al
    int v83;  // xmm0

    v57 = a2;
    v58 = a0;
    v59 = a1->field_8;
    v60 = a1->field_10;
    if ((char)ruff_python_formatter::string::docstring::contains_unescaped_newline(v59, v60))
        return a0.fmt(a1, a2);
    v8 = a1->field_0;
    v45.into_searcher(10, v59, v60);
    v43 = 0;
    v44 = v60;
    v49 = 1;
    v41 = 0;
    v61 = a1->field_20;
    v62 = (unsigned int)v61 & 255;
    v0 = (char)((v61 & 255) >> 1) & 1;
    v1 = (char)v61 & 1;
    v30 = v62.prefix();
    v31 = v63;
    v9 = &v30;
    v14 = &g_97e180;
    v15 = &v0;
    v17 = &g_97e1a0;
    v50.write_fmt(a2, &(char)v9, 2);
    v64 = v50;
    if ((unsigned int)v64 != 4)
    {
        *((unsigned int *)((char *)&a0->field_4 + 4)) = v52;
        *((void*)&(&v58->field_0)[1]) = v51;
        v58->field_0 = v64;
        return v64;
    }
    v2 = v62;
    v6 = a1->field_18;
    v40 = 0;
    if (!((char)v40 & 1))
        v65 = v43.next();
    if (!v65)
        v42 = 0;
    v7 = v42;
    v27 = core::str::<impl str>::trim_end_matches((v65 ? v65 : 1), v42);
    v5 = v1;
    v10 = 0;
    v28 = core::str::<impl str>::trim_start_matches(v27, v66);
    v10 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(v28, v66, ::0x6e6590::core::char::methods::encode_utf8_raw((v5 ^ 1) * 5 + 34, &v10), v66))
    {
        v11 = 0;
        a2->field_8->field_18(a2->field_0, &v11);
        v10 = v9;
    }
    v3 = v2;
    if (v66)
    {
        v57 = a2;
        v26 = a0;
        v67 = v66 >> 32;
        v67.unwrap(&g_97cc48);
        v66 >> 32.unwrap(&g_97cc48);
        v67.unwrap(&g_97cc48);
        v68 = v66;
        v69 = v6;
        v70 = v68 + v69;
        if ((char)__CFADD__(v68, v69))
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97cc60); /* do not return */
        v71 = (unsigned int)((v66 & 4294967295) - v66) + v69;
        if (v71 > v70)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97f090); /* do not return */
        v58 = v26;
        if (v8 == 0x8000000000000000)
        {
            v29 = v71;
            v32 = v70;
            v12.fmt(&v30, v57);
            v3 = v2;
            if (v10 != 4)
            {
                *((unsigned int *)((char *)&v58->field_4 + 4)) = v16;
                *((void*)&(&v58->field_0)[1]) = v83;
                v58->field_0 = v64;
                return v64;
            }
        }
        else
        {
            v12.fmt(v28, v66, v57->field_0, v57->field_8);
            v3 = v2;
            if (v10 != 4)
            {
                *((unsigned int *)((char *)&v58->field_4 + 4)) = v16;
                *((void*)&(&v58->field_0)[1]) = v83;
                v58->field_0 = v64;
                return v64;
            }
        }
    }
    v7 >> 32.unwrap(&g_97cc48);
    v73 = v7.get(v59, v60);
    if (!v73)
    {
        core::str::slice_error_fail(v59, v60, v7, v60, &g_97f0a8); /* do not return */
    }
    else if (core::str::<impl str>::trim_matches(v73, v66))
    {
        v9 = 513;
        v57->field_8->field_18(v57->field_0, &(unsigned int)v13);
        0.unwrap(&g_97cc48);
        (unsigned int)v13.clone(&v40);
        v30.reduce(&(unsigned int)v13);
        v74 = v33;
        v75 = 0;
        v76 = v33;
        if (v76 != 5)
        {
            v77 = v76;
            v78 = v77;
            if (v78 != 5)
                goto LABEL_72292b;
        }
        else
        {
            v78 = 0;
            if (v77 != 5)
            {
LABEL_72292b:
                v75 = v35;
            }
        }
        v22 = v57;
        v13 = 0;
        v14 = 8;
        *((uint128_t *)&v15) = 0;
        v23 = (unsigned int)v6 + (unsigned int)v7 + 1;
        v19 = v78;
        v20 = v34;
        *((uint128_t *)&v21) = v75;
        v24 = v8 == 0x8000000000000000;
        v25 = v5;
        v18 = 9223372036854775811;
        memcpy(&v39, &v48, 16);
        v38 = v47;
        memcpy(&v37, &v46, 16);
        memcpy(&v36, &v44, 16);
        memcpy(&v35, &v42, 16);
        *((int128_t *)&v29) = *((int128_t *)&v41);
        v53.add_iter(&(unsigned int)v13, &v30);
        if (v53 != 4)
        {
            *((int *)((char *)&v58->field_4 + 4)) = *((int *)&v55);
            *((void*)&(&v58->field_0)[1]) = v54;
            v58->field_0 = v53;
            return (unsigned long long)core::ptr::drop_in_place<ruff_python_formatter::string::docstring::DocstringLinePrinter>(&(unsigned int)v13);
        }
        core::ptr::drop_in_place<ruff_python_formatter::string::docstring::DocstringLinePrinter>(&(unsigned int)v13);
        v80 = core::str::<impl str>::trim_end_matches(v59, v60);
        if ((char)ruff_python_formatter::string::docstring::needs_chaperone_space(v2, v80, v66, *((char *)(v57->field_8->field_30(v57->field_0) + 58))))
        {
            v13 = 0;
            v57->field_8->field_18(v57->field_0, &v13);
        }
        v10 = &v0;
        v14 = &g_97e1a0;
        return v58.write_fmt(v57, &v9, 1);
    }
    else
    {
        v81 = v57;
        v82 = ruff_python_formatter::string::docstring::needs_chaperone_space(v3, v27, v4, *((char *)(v81->field_8->field_30(v81->field_0) + 58)));
        if (!(!v4 & v60))
        {
            v10 = v10;
            if (!v82)
                goto LABEL_722b09;
        }
        v13 = 0;
        v81->field_8->field_18(v81->field_0, &v13);
        v10 = v9;
LABEL_722b09:
        v12.fmt(&v0, v81);
        if (v10 != 4)
        {
            *((unsigned int *)((char *)&v58->field_4 + 4)) = v16;
            *((void*)&(&v58->field_0)[1]) = v83;
            v58->field_0 = v64;
            return v64;
        }
        v58->field_0 = 4;
        return v10;
    }
}
