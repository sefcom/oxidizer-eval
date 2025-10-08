long long fish::highlight::highlight::Highlighter::color_as_argument(struct_0 *a0, unsigned long long a1, struct_1 **a2, unsigned int a3)
{
    char v0;  // [bp-0x17a]
    char v1;  // [bp-0x179]
    unsigned int *v2;  // [bp-0x178], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x170]
    unsigned long v5;  // [bp-0x168]
    unsigned int v6;  // [bp-0x15c]
    int v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x148]
    void* v9;  // [bp-0x130]
    unsigned long long v10;  // [bp-0x128]
    unsigned long long v11;  // [bp-0x120]
    unsigned long long v12;  // [bp-0x118]
    unsigned long v13;  // [bp-0x110]
    unsigned long long v14;  // [bp-0x108]
    unsigned long v15;  // [bp-0x100]
    unsigned long v16;  // [bp-0xf8]
    unsigned long v17;  // [bp-0xf0]
    char v18;  // [bp-0xe8]
    int v19;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xd0]
    char v22;  // [bp-0xc8]
    unsigned int v24;  // ebp
    unsigned int v25;  // edx
    unsigned int *v26;  // r14
    unsigned long long v27;  // rdx
    unsigned int v28;  // eax
    unsigned long long v29;  // r12
    unsigned int v30;  // r13d
    unsigned long long v31;  // rax
    unsigned long long v32;  // rbp
    unsigned int *v33;  // rax
    unsigned long long v34;  // rax
    char *v35;  // rdi
    unsigned long long v36;  // r13
    unsigned long long v37;  // rax
    unsigned long long v38;  // r13
    unsigned long long v39;  // r14
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rbx
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax
    unsigned long v46;  // r12
    unsigned long long v49;  // rax

    v24 = a2(a1);
    v2 = v25;
    v26 = *((long long *)&a0->field_78).get_source(*((long long *)&a0->field_80), v24, v25);
    v4 = v24.start();
    if (a3)
    {
        v28 = v26.char_at(v27, 0);
        v29 = (v28 == 45 ? &g_14d9660 : &g_14d9678);
        v30 = (v28 == 45) * 0x10000 + 0x50000;
    }
    else
    {
        v30 = 0x50000;
        v29 = &g_14d9678;
    }
    v31 = v24.as_usize(v3);
    v32 = a0->field_58;
    v5 = a0->field_50;
    v33 = v31.index_mut(v25, a0->field_50, v32, v29);
    fish::highlight::highlight::color_string_internal(v26, v27, v30, v33, v25);
    v9 = 0;
    v0 = 0;
    v2 = v26;
    v34 = fish::parse_util::parse_util_locate_cmdsubst_range(&v18, v26, v27, &v9, 1, &v0, 0);
    if (*((int *)&v18) != 2)
        return v34;
    v35 = &(char)v19;
    v36 = v32;
    v37 = v4;
    v38 = v36 - v37;
    if (v36 >= v37)
    {
        v39 = v5 + v37 * 4;
        v1 = a0->field_0;
        v13 = a0->field_8;
        v17 = a0->field_88;
        v16 = a0->field_18;
        v15 = a0->field_20;
        v6 = a0->field_90;
        v14 = v39;
        v40 = v27;
        while (true)
        {
            v7 = v19;
            v8 = v21;
            v41 = (long long)v7;
            if (v41 >= v40)
                break;
            v35.opening().index_mut(v25, v39, v38, &g_14d96a8).spec_fill(v25, 0x90000);
            v7.closing().index_mut(v25, v39, v38, &g_14d96c0).spec_fill(v25, 0x90000);
            if (!(v1 & 1))
            {
                v44 = 0;
            }
            else if (!((char)__CFADD__(v41, v4)))
            {
                v5 = v13 - (v41 + v4);
                v44 = 1;
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14d96d8); /* do not return */
            }
            v45 = v7.command();
            v46 = v25 - v45;
            if (v25 < v45 || v25 > v27)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d96f0); /* do not return */
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, v16, v15);
            v22.new(&v2[v45], v46, v44, v5, v17, &v10, v17.io_still_ok(v6));
            v10.highlight(&v22);
            v39 = v14;
            if (v12 != v46)
                core::panicking::panic("assertion failed: subcolors.len() == cmdsub_contents.len()Range out of bounds", 58, &g_14d9708); /* do not return */
            v38 = v38;
            core::slice::<impl [T]>::copy_from_slice(v7.command().index_mut(v25, v39, v38, &g_14d9720), v25, v11, v46);
            core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v10, v11);
            core::ptr::drop_in_place<fish::highlight::highlight::Highlighter>(&v22);
            v49 = fish::parse_util::parse_util_locate_cmdsubst_range(&v18, v2, v27, &v9, 1, &v0, 0);
            v35 = &(char)v19;
            v40 = v27;
            if (*((int *)&v18) != 2)
                return v49;
        }
    }
    else
    {
        v7 = v19;
        v8 = v21;
        if ((long long)v7 < v27)
            core::slice::index::slice_start_index_len_fail(v4, v32, &g_14d9750); /* do not return */
    }
    core::panicking::panic("assertion failed: parens.start() < arg_str.len()assertion failed: subcolors.len() == cmdsub_contents.len()Range out of bounds", 48, &g_14d9690); /* do not return */
}
