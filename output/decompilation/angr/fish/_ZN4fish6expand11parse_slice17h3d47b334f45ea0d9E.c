long long fish::expand::parse_slice(struct_2 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x78]
    void* v4;  // [bp-0x70]
    unsigned int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x68]
    unsigned int v7;  // [bp-0x68]
    char v8;  // [bp-0x60], Other Possible Types: unsigned long long
    char v9;  // [bp-0x58]
    struct_1 *v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // r14
    unsigned long v15;  // r15, Other Possible Types: unsigned long long
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    unsigned int v18;  // eax
    unsigned int v19;  // ecx
    unsigned long long v20;  // cc_op
    unsigned long v21;  // cc_dep1
    unsigned long long v22;  // cc_dep2
    char v23;  // al
    unsigned int v24;  // eax
    unsigned int v27;  // eax
    unsigned int v28;  // cc_dep1
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rax
    unsigned long long v33;  // r15
    unsigned long long v34;  // 4097
    unsigned long long v35;  // cc_dep2
    unsigned long long v36;  // rbx
    unsigned int v37;  // cc_dep1
    unsigned int v39;  // cc_dep1
    unsigned long long v40;  // rdx
    unsigned long v41;  // r15
    unsigned long v42;  // r15
    unsigned int v43;  // cc_dep1
    unsigned long long v45;  // rbp
    unsigned int v46;  // eax
    unsigned int v47;  // ecx
    unsigned long long v48;  // cc_op
    unsigned long v49;  // cc_dep1
    unsigned long long v50;  // cc_dep2
    char v51;  // al
    unsigned long long v54;  // rcx
    unsigned long long v56;  // rbp
    unsigned long v57;  // r14
    unsigned long long v58;  // r15
    char v59;  // al
    unsigned long v60;  // r14
    unsigned long long v61;  // 4097
    unsigned long long v62;  // cc_dep2
    unsigned long long v63;  // rcx
    unsigned long long v64;  // r14
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rcx
    unsigned long long v69;  // rbx
    unsigned long long v70;  // rbx
    unsigned long long v71;  // rax
    char v77;  // al
    struct_2 *v79;  // rcx
    unsigned long v83;  // cc_ndep, Other Possible Types: unsigned long long

    a4 >> 63.unwrap(&g_14d8090);
    v14 = a2 * 4 + a1;
    v15 = 1;
    v0 = v14;
    v16 = v14;
    while (true)
    {
LABEL_13a9ec9:
        v17 = v15;
        v18 = a1.char_at(a2, v17);
        v19 = v18 - 9;
        v20 = 7;
        v21 = v19;
        v22 = 5;
        if (v19 < 5)
        {
LABEL_13a9ec0:
            v15 = v17 + 1;
            v83 = _ccall(v20, v21, v22, v83);
            if ((char)_ccall(4, 24, v17 + 1, 0, _ccall(v20, v21, v22, v83)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d82b8); /* do not return */
        }
        else
        {
            v20 = 7;
            v21 = v18;
            v22 = 32;
            if (v18 == 32)
                goto LABEL_13a9ec0;
            if (v18 >= 128)
            {
                v23 = ::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v18);
                v20 = 17;
                v21 = v23;
                v22 = 0;
                if (!v23)
                    goto LABEL_13a9ef6;
                goto LABEL_13a9ec0;
            }
LABEL_13a9ef6:
            v24 = a1.char_at(a2, v17);
            v20 = 7;
            v21 = v24;
            v22 = 64984;
            if (v24 == 64984)
                goto LABEL_13a9ec0;
            v27 = a1.char_at(a2, v17);
            if (v27 == 93)
            {
                if (!((char)_ccall(4, 24, v17 + 1, 0, (unsigned long long)(char)(v27 < 93))))
                {
                    v10->field_0 = v17 + 1;
                    v10->field_8 = 2;
                    break;
                }
                else
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d80a8); /* do not return */
                }
            }
            if (!a3->field_10)
            {
                v28 = a1.char_at(a2, v17);
                if (v28 == 46)
                {
                    v29 = v17;
                    v83 = v28 < 46;
                    if ((char)_ccall(4, 24, v29 + 1, 0, (unsigned long long)(char)(v28 < 46)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d80c0); /* do not return */
                    v30 = a1.char_at(a2, v29 + 1);
                    if ((unsigned int)v30 == 46)
                    {
                        v31 = 1;
                        goto LABEL_13aa007;
                    }
                }
            }
            v4 = 0;
            if (a2 < v17)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d80d8); /* do not return */
            v8 = 0;
            v7 = 0;
            v32 = fish::wutil::wcstoi::wcstoi_impl(&v11, v17 * 4 + a1, v16, &v7, &v4);
            if ((char)v11)
            {
                v10->field_0 = v17;
                a0->field_8 = 1;
                return v32 & 0xffffffffffffff00 | 1;
            }
            v31 = *((long long *)&v12);
            if (!v31)
            {
                v10->field_0 = v17;
                a0->field_8 = v77;
                return 0;
            }
            v33 = v17 + v4;
            if ((char)__CFADD__(v17, v4))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d80f0); /* do not return */
            if (a2 < v33)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d8108); /* do not return */
            v6 = v33 * 4 + a1;
            v8 = v16;
            v9 = 0;
            v30 = v6.fold();
            v17 = v33 + v30;
            if ((char)__CFADD__(v33, v30))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d8120); /* do not return */
            if (v31 >= 0)
            {
LABEL_13aa007:
                v2 = (unsigned int)v30 & 0xffffff00 | 1;
                v2 = v3;
                goto LABEL_13aa030;
            }
            else
            {
                v34 = a4;
                v35 = v34;
                v36 = v31 + v34;
                if ((char)_ccall(0, 4, v31, v34, v83))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8138); /* do not return */
                v83 = (v31 + v35 <= v31 ? 1 : 0);
                v31 = v36 + 1;
                if ((char)_ccall(0, 24, v36 + 1, 0, (v31 + v35 <= v31 ? 1 : 0)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8138); /* do not return */
                v2 = 0;
                v2 = v3;
                while (true)
                {
LABEL_13aa030:
                    v15 = v17;
                    v37 = a1.char_at(a2, v15);
                    if (v37 != 64984)
                        break;
                    v83 = v37 < 64984;
                    v17 = v15 + 1;
                    if ((char)_ccall(4, 24, v15 + 1, 0, (unsigned long long)(char)(v37 < 64984)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d82a0); /* do not return */
                }
                v39 = a1.char_at(a2, v15);
                if (v39 == 46)
                {
                    v40 = v15;
                    v83 = v39 < 46;
                    if ((char)_ccall(4, 24, v40 + 1, 0, (unsigned long long)(char)(v39 < 46)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d8150); /* do not return */
                    if ((int)a1.char_at(a2, v40 + 1) != 46)
                        goto LABEL_13aa0af;
                    v41 = v15 + 2;
                    if ((char)__CFADD__(v15, 2))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d8168); /* do not return */
                    while (true)
                    {
                        v42 = v41;
                        v43 = a1.char_at(a2, v42);
                        if (v43 != 64984)
                            break;
                        v83 = v43 < 64984;
                        v41 = v42 + 1;
                        if ((char)_ccall(4, 24, v42 + 1, 0, (unsigned long long)(char)(v43 < 64984)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8270); /* do not return */
                    }
                    while (true)
                    {
                        v15 = v42;
                        v46 = a1.char_at(a2, v15);
                        v47 = v46 - 9;
                        v48 = 7;
                        v49 = v47;
                        v50 = 5;
                        if (v47 >= 5)
                        {
                            v48 = 7;
                            v49 = v46;
                            v50 = 32;
                            if (v46 != 32)
                            {
                                if (v46 < 128)
                                    break;
                                v51 = ::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v46);
                                v48 = 17;
                                v49 = v51;
                                v50 = 0;
                                if (!v51)
                                    break;
                            }
                        }
                        if ((char)_ccall(4, 24, v15 + 1, 0, _ccall(v48, v49, v50, v83)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8258); /* do not return */
                        v42 = v15 + 1;
                        v83 = _ccall(v48, v49, v50, v83);
                    }
                    v54 = 18446744073709551615;
                    if ((int)a1.char_at(a2, v15) == 93)
                    {
                        v1 = v0;
                    }
                    else
                    {
                        v4 = 0;
                        if (a2 < v15)
                            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d8180); /* do not return */
                        v8 = 0;
                        v5 = 0;
                        fish::wutil::wcstoi::wcstoi_impl(&v11, v45, v0, &v5, &v4);
                        if ((char)v11)
                        {
                            v10->field_0 = v15;
                            v79->field_8 = v77;
                            return 0;
                        }
                        v56 = *((long long *)&v12);
                        if (!v56)
                        {
                            v79 = a0;
                            v10->field_0 = v15;
                            v79->field_8 = v77;
                            return 0;
                        }
                        v57 = v15 + v4;
                        if ((char)__CFADD__(v15, v4))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8198); /* do not return */
                        if (a2 < v57)
                            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d81b0); /* do not return */
                        v6 = v57 * 4 + a1;
                        v8 = v0;
                        v9 = 0;
                        v58 = v6.fold();
                        v15 = v58 + v57;
                        if ((char)__CFADD__(v58, v57))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d81c8); /* do not return */
                        v59 = 1;
                        v54 = v56;
                        v60 = v0;
                        if (v56 >= 0)
                            goto LABEL_13aa20c;
                    }
                    v61 = a4;
                    v62 = v61;
                    v63 = v54 + v61;
                    if ((char)_ccall(0, 4, v54, v61, v83))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d81e0); /* do not return */
                    v83 = (v54 + v62 <= v54 ? 1 : 0);
                    v54 = v63 + 1;
                    if ((char)_ccall(0, 24, v63 + 1, 0, (v54 + v62 <= v54 ? 1 : 0)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d81e0); /* do not return */
LABEL_13aa20c:
                    if (v31 > a4)
                    {
                        v16 = v60;
                        if (v54 > a4)
                            continue;
                    }
                    if ((char)v2 != v59)
                    {
                        v64 = -(v59) | 1;
                    }
                    else
                    {
                        v64 = (v31 <= v54) * 2 - 1;
                        v2 = v54;
                        v65 = a4;
                        v31 = v31.min(v65);
                        v54 = v2.min(v65);
                    }
                    v66 = v31;
                    v67 = v64 * v66;
                    if (!((char)_ccall(0, 52, v64, v66, v83)))
                    {
                        v68 = v64 * v54;
                        if ((char)_ccall(0, 52, v64, v54, v83))
                            core::panicking::panic_const::panic_const_mul_overflow(&g_14d8210); /* do not return */
                        do
                        {
                            v69 = v31;
                            if (v67 > v68)
                            {
                                v16 = v0;
                                goto LABEL_13a9ec9;
                            }
                            a3.push(v69, &g_14d8228);
                            v70 = v69 + v64;
                            if ((char)_ccall(0, 4, v69, v64, v83))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14d8240); /* do not return */
                            v67 = v64 * v70;
                            v31 = v70;
                        } while (!((char)_ccall(0, 52, v64, v71, v83)));
                    }
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14d81f8); /* do not return */
                }
LABEL_13aa0af:
                a3.push(v31, &g_14d8288);
            }
        }
    }
    return a0;
}
