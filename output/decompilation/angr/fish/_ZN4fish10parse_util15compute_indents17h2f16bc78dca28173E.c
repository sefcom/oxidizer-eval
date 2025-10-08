long long fish::parse_util::compute_indents(struct_0 *a0, unsigned int *a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    unsigned long long v2;  // [bp-0x110]
    char v3;  // [bp-0x108]
    char v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xc8]
    char v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    unsigned int *v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    char v11;  // [bp-0x48]
    unsigned int v13;  // r8d
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdi
    unsigned long v17;  // rsi
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rsi

    v0.from_elem(a2, &g_14ddaf8);
    v9 = a1;
    v10 = &a1[a2];
    if (!v9.try_fold().eq(1))
    {
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
        return v2;
    }
    fish::ast::parse(&v9, a1, a2, 15, 0);
    v3.new(a1, a2, &v0, a3);
    v3.visit(&v11, &g_14c2660);
    v3.record_line_continuations_until(*((long long *)(*((long long *)&v4) + 16)));
    if (*((long long *)(*((long long *)&v4) + 16)) < v5)
        core::slice::index::slice_start_index_len_fail(v5, *((long long *)(*((long long *)&v4) + 16)), &g_14ddb70); /* do not return */
    v5 * 4 + *((long long *)(*((long long *)&v4) + 8)).spec_fill(*((long long *)(*((long long *)&v4) + 16)) - v5, *((int *)&v6));
    if (a2)
    {
        v13 = *((int *)&v6);
        v15 = a2;
        do
        {
            v16 = v15;
            v15 -= 1;
            if (a1[1 + v16] == 10)
            {
                if (v16 < a2)
                {
                    if (a1[v16] == 10)
                        continue;
                }
                else
                {
                    if ((char)v7)
                        continue;
                }
                if (v15 >= *((long long *)(*((long long *)&v4) + 16)))
                    core::panicking::panic_bounds_check(v16 - 1, *((long long *)(*((long long *)&v4) + 16)), &g_14ddb40); /* do not return */
                *((unsigned int *)(*((long long *)(*((long long *)&v4) + 8)) + v15 * 4)) = v13;
            }
            else
            {
                v17 = *((long long *)(*((long long *)&v4) + 16));
                if (v15 >= *((long long *)(*((long long *)&v4) + 16)))
                    core::panicking::panic_bounds_check(v16 - 1, v17, 0x14ddb58); /* do not return */
                v13 = *((int *)(*((long long *)(*((long long *)&v4) + 8)) + v15 * 4));
            }
        } while (v15);
    }
    v8.into_iter(&v3);
    if (((char)v8.next() & 1))
    {
        do
        {
            v20 = v19 + 1;
            while (true)
            {
                v21 = v20;
                v22 = v21 - 1;
                v23 = v2;
                if (v22 >= v2)
                    core::panicking::panic_bounds_check(v22, v2, &g_14ddb10); /* do not return */
                *((int *)(v1 + v21 * 4 - 4)) = *((int *)(v1 + v21 * 4 - 4)) + 1;
                if (a2 == v21)
                    break;
                if ((char)_ccall(6, 8, a2, v21, (unsigned long long)(char)(v22 < v2)))
                    core::panicking::panic_bounds_check(v22, v23, &g_14ddb28); /* do not return */
                v20 = v21 + 1;
                if (a1[v21] == 10)
                    break;
            }
        } while (((char)v8.next() & 1));
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<usize>>(&v8);
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return (unsigned long long)core::ptr::drop_in_place<fish::ast::Ast>(&v9);
}
