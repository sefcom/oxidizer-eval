long long fish::builtins::fish_indent::PrettyPrinter::compute_preferred_semi_locations(unsigned long a0, unsigned long long a1[24])
{
    char v0;  // [bp-0x119]
    unsigned long v1;  // [bp-0x118]
    unsigned long v2;  // [bp-0x110]
    int v3;  // [bp-0x108], Other Possible Types: char
    struct_2 *v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    void* v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8]
    void* v8;  // [bp-0xe0]
    unsigned int v9;  // [bp-0xd8]
    unsigned long v10;  // [bp-0xd8]
    unsigned int v11;  // [bp-0xd4]
    struct_2 *v12;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xc8]
    uint128_t v14;  // [bp-0xc0]
    unsigned long v15;  // [bp-0xa8]
    struct_6 *v16;  // [bp-0xa0]
    int v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x88]
    int v19;  // [bp-0x78], Other Possible Types: char
    unsigned long long v20;  // [bp-0x68]
    int v21;  // [bp-0x60], Other Possible Types: char
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    char v24;  // [bp-0x38]
    unsigned long long v26;  // r15
    struct_5 *v27;  // rdx
    struct_2 *v28;  // r12
    unsigned long v29;  // rdx
    unsigned long v30;  // r15
    struct_1 *v31;  // rdx
    unsigned long long v32;  // r12
    unsigned long v33;  // r15
    unsigned long v34;  // r15
    void* v35;  // rbx
    unsigned long v36;  // r15
    unsigned long long v37;  // rax
    struct_2 *v38;  // rbx
    void* v39;  // rdi
    unsigned long v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v42;  // r12
    unsigned long long v44;  // rax
    struct_2 *v45;  // rcx
    struct_3 *v46;  // r14
    unsigned long long v47;  // r15
    struct_3 *v48;  // r12
    unsigned long long v49;  // r15
    struct_3 *v50;  // rbx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // r13
    unsigned long long v54;  // rax

    v6 = 0;
    v7 = 8;
    v8 = 0;
    v15 = a1[23] + 72;
    v19.new(a1[23] + 72, &g_14c2660);
    v18 = v20;
    v17 = v19;
    while (true)
    {
        while (true)
        {
            v26 = v17.next();
            if (!v26)
            {
                core::ptr::drop_in_place<fish::ast::Traversal>(&v17);
                v21.new(v15, &g_14c2660);
                v5 = v22;
                v3 = v21;
                v2 = a1[13];
                v1 = a1[14];
                while (true)
                {
                    do
                    {
                        do
                        {
                            do
                            {
                                v37 = (char)v3.next();
                                if (!v37)
                                {
                                    core::ptr::drop_in_place<fish::ast::Traversal>(&(char)v3);
                                    v23.new(v15, &g_14c2660);
                                    v5 = *((long long *)&v24);
                                    memcpy(&(char)v3, &v23, 16);
                                    v1 = a1[18];
                                    v2 = a1[19];
                                    while (true)
                                    {
                                        v44 = (char)v3.next();
                                        if (!v44)
                                            break;
                                        v27->field_40(&v9, v44);
                                        if (v9 == 37)
                                        {
                                            v45 = v12;
                                            if (v45->field_8)
                                            {
                                                v46 = v45->field_0 + 128;
                                                v47 = v45->field_8 * 160;
                                                v48 = 0;
                                                do
                                                {
                                                    v49 = v47;
                                                    v50 = v48;
                                                    if (*((int *)&v46->field_0) != 2)
                                                    {
                                                        v48 = v46;
                                                        if (!v50)
                                                            continue;
                                                    }
                                                    else
                                                    {
                                                        v48 = 0;
                                                        if (!v50)
                                                            continue;
                                                    }
                                                    if (v46[10].field_8 != 2)
                                                    {
                                                        if ((v50->field_0 & 1))
                                                        {
                                                            v51 = v1.substr(v2, v50->field_4, v50->field_8);
                                                            if (v51.eq_by(v51 + v27 * 4, ";assertion failed: result.is_sorted_by(|l, r| Some(l.cmp(r)))assertion failed: newline_offset >= brace_statement.source_range().start()assertion failed: matches!(p.kind(), Kind::Statement(_))\\\nsource out of bounds \\\nShould have handled all leaf nodes", "assertion failed: result.is_sorted_by(|l, r| Some(l.cmp(r)))assertion failed: newline_offset >= brace_statement.source_range().start()assertion failed: matches!(p.kind(), Kind::Statement(_))\\\nsource out of bounds \\\nShould have handled all leaf nodes"))
                                                            {
                                                                if ((v50->field_0 & 1))
                                                                {
                                                                    v52 = v50->field_4.start();
                                                                    if (!((char)v46[10].field_8 & 1))
                                                                        core::option::unwrap_failed(&g_14c9270); /* do not return */
                                                                    v53 = v52;
                                                                    if ((unsigned int)v53 > (int)v46[10].field_4.start())
                                                                    {
                                                                        v10 = &g_14c9230;
                                                                        v12 = 1;
                                                                        v13 = 8;
                                                                        v14 = 0;
                                                                        core::panicking::panic_fmt(&v9, &g_14c9288); /* do not return */
                                                                    }
                                                                    v54 = v46[10].field_4.end(*((int *)&v46[10].field_0));
                                                                    if ((unsigned int)v54 < (unsigned int)v53 || v54 > v2)
                                                                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c92a0); /* do not return */
                                                                    v9 = 10;
                                                                    if (!v9.slice_contains(v1 + v53 * 4, v54 - v53))
                                                                        v6.push(v53, &g_14c92b8);
                                                                }
                                                                else
                                                                {
                                                                    core::option::unwrap_failed(&g_14c9258); /* do not return */
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            core::option::unwrap_failed(&g_14c9240); /* do not return */
                                                        }
                                                    }
                                                    v46 = &v46[13].field_4;
                                                    v47 = v49 - 160;
                                                } while (v49 != 160);
                                            }
                                        }
                                    }
                                    core::ptr::drop_in_place<fish::ast::Traversal>(&(char)v3);
                                    if (v8 >= 2)
                                    {
                                        if (v8 < 21)
                                            core::slice::sort::shared::smallsort::insertion_sort_shift_left(8, v8, 1);
                                        else
                                            core::slice::sort::unstable::ipnsort(8, v8, &v0);
                                    }
                                    v16->field_10 = v8;
                                    v16->field_0 = *((int128_t *)&v6);
                                    return v8;
                                }
                                v27->field_40(&(unsigned int)v10, v37);
                            } while (v9 != 16);
                            (unsigned int)v10.try_source_range(v12);
                            v39 = 0;
                            if ((char)v10)
                                v39 = v11;
                            v10 = v39.start();
                        } while (!core::slice::<impl [T]>::binary_search_by(v2, v1, &(unsigned int)v10));
                    } while (!v38->field_28);
                    v40 = &v38->field_20->field_80;
                    v41 = v38->field_28 * 160;
                    do
                    {
                        v42 = v41;
                        if (*((int *)v40) != 2)
                            fish::builtins::fish_indent::PrettyPrinter::compute_preferred_semi_locations::{{closure}}(a1, &v6, v40);
                        v40 += 160;
                        v41 = v42 - 160;
                    } while (v42 != 160);
                }
            }
            v27->field_40(&v3, v26);
            if (*((int *)&v3) == 17)
            {
                v28 = v4;
                v29 = &v28->field_90;
                if (v28->field_90 == 2)
                    v29 = 0;
                v30 = v28->field_b8;
                if (v28->field_b8)
                    break;
            }
            else
            {
                v27->field_40(&(unsigned int)v10, v26);
                if (v9 != 12)
                    continue;
                v28 = v12;
                v29 = (v28->field_90 != 2 ? (struct struct_2 *)&v28->field_90 : 0);
                v30 = v28->field_b8;
                if (v28->field_b8)
                    break;
            }
        }
        if (v29)
        {
            fish::builtins::fish_indent::PrettyPrinter::compute_preferred_semi_locations::{{closure}}(a1, &v6, v29);
            v30 = v28->field_b8;
            if (!v28->field_b8)
                break;
        }
        v31 = v28->field_b0;
        v32 = 160 * v30 + (char *)v28->field_b0;
        v33 = v30 - 1;
        while (true)
        {
            v34 = v33;
            v35 = (v31 == v32 ? 0 : 160);
            if (!v34)
                v35 = 0;
            v36 = v34 - 1;
            if (v34 < 1)
                v36 = 0;
            if (!v34 || v31 == v32)
                break;
            if (v31->field_80 == 2)
                core::option::unwrap_failed(&g_14c92e8); /* do not return */
            fish::builtins::fish_indent::PrettyPrinter::compute_preferred_semi_locations::{{closure}}(a1, &v6, &v31->field_80);
            v31 += v35;
            v33 = v36;
        }
    }
    core::panicking::panic_const::panic_const_sub_overflow(&g_14c92d0); /* do not return */
}
