void uu_tsort::Graph::run_tsort(unsigned long a0)
{
    char v0;  // [bp-0xe1]
    struct_1 *v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char *v3;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    char *v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    void* v9;  // [bp-0x88]
    char v10;  // [bp-0x78]
    char v11;  // [bp-0x58]
    unsigned long v13;  // r14
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    char *v16;  // rbx
    unsigned long long v17;  // 4096
    unsigned long long v19;  // rax
    unsigned long long v20;  // r12
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rbx
    struct_0 *v23;  // rax
    unsigned long v24;  // 4096

    v11.iter(a0 + 24);
    v10.spec_from_iter(&v11, &g_576148);
    v14 = v10.make_contiguous();
    if (v15 >= 2)
    {
        if (v15 < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v14, v15, 1);
        else
            core::slice::sort::unstable::ipnsort(v14, v15, &v0);
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
            v5 = &g_576260;
            v6 = 2;
            v9 = 0;
            v7 = v16;
            v8 = 1;
            std::io::stdio::_print(&v5);
            v16.remove(v13, v2, v15);
            if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
            {
                v16.drop_in_place<core::option::Option<uu_tsort::Node>>();
            }
            else
            {
                v5.into_iter(v16);
                v19 = v5.next();
                if (v19)
                {
                    v20 = v19;
                    v21 = v15;
                    do
                    {
                        v22 = v21;
                        v23 = v13.get_inner_mut(v20, v22);
                        if (!v23)
                            core::option::unwrap_failed(&g_576280); /* do not return */
                        v24 = v23->field_28;
                        v23->field_28 = v23->field_28 - 1;
                        if (v24 == 1)
                            v10.push_back(v20, v22, &g_576298);
                        v20 = v5.next();
                        v21 = v15;
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
