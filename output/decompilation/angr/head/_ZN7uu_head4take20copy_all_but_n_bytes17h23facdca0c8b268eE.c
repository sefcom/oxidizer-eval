long long uu_head::take::copy_all_but_n_bytes(unsigned long long *a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    void* v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    void* v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0x98]
    int v6;  // [bp-0x98]
    int v7;  // [bp-0x90]
    int v8;  // [bp-0x88]
    unsigned long v9;  // [bp-0x80]
    int v10;  // [bp-0x78]
    int v11;  // [bp-0x78]
    int v12;  // [bp-0x78]
    int v13;  // [bp-0x68], Other Possible Types: unsigned long
    int v14;  // [bp-0x68]
    int v15;  // [bp-0x68]
    void* v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    uint128_t v18;  // [bp-0x40]
    unsigned long long v20;  // r13
    void* v21;  // r14
    unsigned long long v22[4];  // rax
    unsigned long long v23;  // rax
    struct_0 *v24;  // rcx
    unsigned long v25;  // rdx
    unsigned long long v26;  // r15
    unsigned int v27[7];  // rax

    v16 = 0;
    v18 = 0;
    v17 = 8;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v20 = *(a0);
    v4 = 0;
    v3 = &g_5935a0;
    v21 = 0;
    while (true)
    {
        while (true)
        {
            v11 = v10;
            v13 = v15;
            v22 = v16.get();
            if (!v22 || v21 < v22.remaining_bytes() + a2)
                break;
LABEL_4b10ea:
            v26 = v21;
            if (v26 <= a2)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v0);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(&v16);
                return 0;
            }
            v27 = v16.get();
            if (!v27)
            {
                v3 = &g_5935a0;
                core::option::unwrap_failed(&g_5935a0); /* do not return */
            }
            if (v27.write_bytes_limit(a1, v26 - a2))
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v0);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(&v16);
                return 1;
            }
            v21 -= v25;
            v4 += v25;
            v15 = v13;
            v10 = v11;
            if (*((long long *)&v27[4]).is_empty(*((long long *)&v27[6])))
                goto LABEL_4b1141;
        }
        if (v2)
        {
            v2 -= 1;
            v23 = v2 * 32;
            if (*((long long *)(8 + v23)) != 0x8000000000000000)
            {
                v24 = 8 + v23;
                v13 = *((long long *)((char *)&v24->field_8 + 8));
                *((int128_t *)&v11) = *((int128_t *)&(&v24->padding_0)[1]);
                v5 = *((long long *)(8 + v23));
                v9 = *((long long *)((char *)&v24->field_8 + 8));
                *((int128_t *)&v7) = *((int128_t *)&(&v24->padding_0)[1]);
                v13 = v14;
LABEL_4b1096:
                if (v5.fill_buffer(v20))
                {
                    ::0x4b08f0::core::ptr::drop_in_place<uu_head::take::TakeAllBuffer>(&v5);
                    core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v0);
                    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(&v16);
                    return 1;
                }
                if (v25)
                {
                    memcpy(&v13, &v7, 16);
                    memcpy(&v11, &v5, 16);
                    v16.push_back(&v11, &g_5935e8);
                    v21 += v25;
                    v15 = v14;
                    v10 = v12;
                    continue;
                }
                else
                {
                    ::0x4b08f0::core::ptr::drop_in_place<uu_head::take::TakeAllBuffer>(&v5);
                }
                goto LABEL_4b10ea;
            }
        }
        v5.call_once();
        goto LABEL_4b1096;
LABEL_4b1141:
        v11.pop_front(&v16);
        if ((long long)v10 == 0x8000000000000000)
            break;
        v8 = v13;
        v6 = v11;
        v0.push(&v5);
        v15 = v13;
        v10 = v11;
    }
    v3 = &g_5935b8;
    v3 = &g_5935b8;
    core::option::unwrap_failed(&g_5935b8); /* do not return */
}
