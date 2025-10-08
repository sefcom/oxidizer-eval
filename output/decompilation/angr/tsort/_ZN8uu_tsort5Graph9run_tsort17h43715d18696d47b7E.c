void uu_tsort::Graph::run_tsort(unsigned long long a0)
{
    char v0;  // [bp-0xb9]
    struct_0 *v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    char *v3;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v4;  // [bp-0x98]
    char v5;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x78]
    char *v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    unsigned long v12;  // r14
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    char *v16;  // r13
    unsigned long long v17;  // 4096
    unsigned long long v19;  // rax
    unsigned long long v20;  // r13
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rbx
    struct_1 *v23;  // rax
    unsigned long v24;  // 4096

    v5.iter(a0 + 24);
    v10.collect(&v5);
    v13 = v10.make_contiguous();
    if (v14 >= 2)
    {
        if (v14 < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v13, v14);
        else
            core::slice::sort::unstable::ipnsort(v13, v14, &v0);
    }
    v15 = v10.make_contiguous();
    if (v14 >= 2)
    {
        if (v14 < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v15, v14);
        else
            core::slice::sort::unstable::ipnsort(v15, v14, &v0);
    }
    if (v1->field_30)
    {
        v16 = &v3;
        v17 = a0;
        do
        {
            v2 = v17.find_next_node(&v10);
            v3 = &v2;
            v4 = <&T as core::fmt::Display>::fmt;
            v5 = &g_4eb328;
            v6 = 2;
            v9 = 0;
            v7 = v16;
            v8 = 1;
            std::io::stdio::_print(&v5);
            v16.remove(v12, v2, v14);
            if (v3 == 0x8000000000000000)
            {
                0x8000000000000000.drop_in_place<core::option::Option<uu_tsort::Node>>(<&T as core::fmt::Display>::fmt);
            }
            else
            {
                v5.into_iter(v16);
                v19 = v5.next();
                if (v19)
                {
                    v20 = v19;
                    v21 = v14;
                    do
                    {
                        v22 = v21;
                        v23 = v12.get_inner_mut(v20, v22);
                        if (!v23)
                            core::option::unwrap_failed(&g_4eb348); /* do not return */
                        v24 = v23->field_28;
                        v23->field_28 = v23->field_28 - 1;
                        if (v24 == 1)
                            v10.push_back(v20, v22, &g_4eb360);
                        v20 = v5.next();
                        v21 = v14;
                    } while (v20);
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v5);
                v16 = &v3;
            }
            v17 = a0;
        } while (v1->field_30);
    }
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(&v10);
    return;
}
