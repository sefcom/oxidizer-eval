void fish::builtins::fish_indent::PrettyPrinter::compute_multi_line_brace_statement_locations(struct_0 *a0, unsigned long long a1[24])
{
    void* v0;  // [bp-0xd8]
    void* v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    void* v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    unsigned int v5;  // [bp-0xbc]
    unsigned long long v6;  // [bp-0xb8]
    void* v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0xa8]
    void* v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    void* v11;  // [bp-0x90]
    unsigned long long *v12;  // [bp-0x88]
    char v13;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long *v14;  // [bp-0x78]
    void* v15;  // [bp-0x70]
    int v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x58]
    int v18;  // [bp-0x48], Other Possible Types: char
    char v19;  // [bp-0x38]
    struct_0 *v21;  // rbx
    unsigned long long v22;  // rax
    unsigned long v23;  // rcx
    unsigned long long v24;  // rax
    struct_2 *v25;  // rdx
    void* v26;  // r12
    void* v27;  // rax
    void* v28;  // rdi
    unsigned long long v29;  // rax
    void* v31;  // rdi
    unsigned long long v32;  // rax
    void* v33;  // rdi
    void* v34;  // rsi
    unsigned long long v35;  // rax
    void* v36;  // rdi

    v21 = a0;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v22 = a1[18];
    v23 = a1[19];
    v4 = a1[18];
    v6 = v22 + v23 * 4;
    v7 = 0;
    v8 = v23;
    v13.collect(&(char)v4);
    v18.new(a1[23] + 72, &g_14c2660);
    v17 = *((long long *)&v19);
    v16 = v18;
    v0 = 0;
    while (true)
    {
        do
        {
            do
            {
LABEL_134c860:
                v24 = v16.next();
                if (!v24)
                {
                    core::ptr::drop_in_place<fish::ast::Traversal>(&v16);
                    if (!8.is_sorted_by(v11))
                        core::panicking::panic("assertion failed: result.is_sorted_by(|l, r| Some(l.cmp(r)))assertion failed: newline_offset >= brace_statement.source_range().start()assertion failed: matches!(p.kind(), Kind::Statement(_))\\\nsource out of bounds \\\nShould have handled all leaf nodes", 60, &g_14c9318); /* do not return */
                    v21->field_10 = v11;
                    v21->field_0 = *((int128_t *)&v9);
                    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v13, v14);
                    return;
                }
                v25->field_40(&(char)v4, v24);
            } while ((int)v4 != 16);
            v26 = v15;
        } while (v0 == v26);
        v2 = v6;
        v12 = v14;
        v1 = v0;
        do
        {
            v27 = v1;
            if (v27 >= v26)
            {
                if (v0 <= v26)
                    v0 = v26;
                core::panicking::panic_bounds_check(v0, v26, &g_14c9330); /* do not return */
            }
            v3 = v27;
            (char)v4.try_source_range(v2);
            v28 = 0;
            if ((char)v4)
                v28 = v5;
            v29 = v28.start();
            if (*((long long *)((char *)v12 + 0x8 * v27)) >= v29)
            {
                (char)v4.try_source_range(v2);
                v31 = 0;
                if ((char)v4)
                    v31 = v5;
                v32 = v31.start();
                if (*((long long *)((char *)v12 + 0x8 * v3)) < v32)
                    core::panicking::panic("assertion failed: newline_offset >= brace_statement.source_range().start()assertion failed: matches!(p.kind(), Kind::Statement(_))\\\nsource out of bounds \\\nShould have handled all leaf nodes", 74, &g_14c9348); /* do not return */
                (char)v4.try_source_range(v2);
                v33 = 0;
                v34 = 0;
                if ((char)v4)
                {
                    v33 = v5;
                    v34 = (unsigned int)v6;
                }
                v35 = v33.end(v34);
                v0 = v3;
                if (*((long long *)((char *)v12 + 0x8 * v3)) < v35)
                {
                    (char)v4.try_source_range(v2);
                    v36 = 0;
                    if ((char)v4)
                        v36 = v5;
                    v9.push(v36.start(), &g_14c9360);
                    v0 = v3;
                    goto LABEL_134c860;
                }
            }
            v1 = v3 + 1;
        } while (v26 != v1);
        v0 = v26;
    }
}
