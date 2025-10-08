void fish::reader::extract_tokens(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x160]
    unsigned long long v1;  // [bp-0x150]
    unsigned int v2;  // [bp-0x144]
    unsigned int v3;  // [bp-0x140]
    unsigned int v4;  // [bp-0x13c]
    void* v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    void* v7;  // [bp-0x120]
    struct_4 *v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x108]
    unsigned int v10;  // [bp-0x100]
    unsigned int v11;  // [bp-0xfc]
    char v12;  // [bp-0xf8]
    char v13;  // [bp-0xe0]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long long v15[1][3];  // [bp-0xc0]
    unsigned long long v17;  // [bp-0xa4]
    char v18;  // [bp-0x90]
    char v19;  // [bp-0x48]
    char *v22;  // r15
    unsigned long long v23;  // 4096
    char v24;  // r15b
    struct_3 *v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned int v29;  // r15d
    unsigned long long v30;  // rax
    unsigned int v32;  // [bp-0xa8]

    fish::ast::parse(&v18, a1, a2, 13, 0);
    v5 = 0;
    v6 = 4;
    v7 = 0;
    v13.new(&v19, &g_14c2660);
    v22 = &v13;
    v23 = a2;
    while (true)
    {
        do
        {
            do
            {
                v23 = vvar_377{reg 56};
                v1 = v22.next();
                if (!v1)
                {
                    v8->field_10 = 0;
                    v8->field_0 = *((int128_t *)&v5);
                    core::ptr::drop_in_place<fish::ast::Traversal>(&v13);
                    core::ptr::drop_in_place<fish::ast::Ast>(&v18);
                    return;
                }
            } while (!v25->field_60(v1));
            v0 = v25->field_78(v1);
        } while (!a0.length((unsigned int)v25));
        v9 = v0.start();
        while (true)
        {
            v23 = vvar_377{reg 56};
            fish::parse_util::parse_util_locate_cmdsubst_range(&v14, a1, v23, &v9, 1, 0, 0);
            if ((int)v14 > 1)
            {
                v26 = v0.end((unsigned int)v25);
                if (v15[0] >= v26)
                    goto LABEL_14065c0;
                v27 = v15.command();
                if (v25 < v27 || v25 > v23)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0d70); /* do not return */
                fish::reader::extract_tokens(&v32, a1 + v27 * 4, &v25->padding_0[-1 * v27]);
                v10.into_iter(&v32);
                while (true)
                {
                    v2.next(&v10);
                    if ((char)v4 == 2)
                        break;
                    v28 = v15.command();
                    v29 = v28;
                    v28 >> 32.unwrap(&g_14e0d28);
                    if ((char)__CFADD__(v2, v29))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e0d40); /* do not return */
                    v32 = v2 + v29;
                    v17 = *((long long *)&v3);
                    v5.push(&v32, &g_14e0d58);
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::reader::PositionedToken>>(&v10);
                v24 = 1;
                v23 = a2;
            }
            else
            {
LABEL_14065c0:
                v22 = &v13;
                if (!(v24 & 1))
                {
                    v30 = v13.parent(v1, v25);
                    v25->field_40(&v10, v30);
                    v10 = v0;
                    v11 = (unsigned int)v25;
                    *((int *)&v12) = (v10 == 24 ? (char)fish::ast::is_same_node(v1, v25, *((long long *)&v12), &g_14c2db8) : 0);
                    v5.push(&v10, &g_14e0d88);
                    break;
                }
            }
        }
    }
}
