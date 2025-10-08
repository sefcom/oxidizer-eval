long long uu_head::take::copy_all_but_n_bytes(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0], Other Possible Types: unsigned long
    void* v3;  // [bp-0xb8]
    int v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    int v6;  // [bp-0xb0]
    int v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x98]
    int v10;  // [bp-0x88]
    int v11;  // [bp-0x88]
    int v12;  // [bp-0x88]
    int v13;  // [bp-0x78], Other Possible Types: unsigned long
    int v14;  // [bp-0x78]
    int v15;  // [bp-0x78]
    void* v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    uint128_t v18;  // [bp-0x40]
    void* v20;  // r15
    void* v21;  // r12
    unsigned long long v22[4];  // rax
    unsigned long long v23;  // rcx
    unsigned long v24;  // rax
    unsigned long v25;  // rdx
    void* v26;  // r14
    unsigned int v27[7];  // rax
    unsigned long long v29;  // rdi

    v16 = 0;
    v18 = 0;
    v17 = 8;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v20 = 0;
    v9 = 0;
    v21 = 0;
    while (true)
    {
        v10 = v12;
        v13 = v15;
        v22 = v16.get();
        if (!v22 || v21 < v22.remaining_bytes() + a2)
        {
            if (v20)
            {
                v20 -= 1;
                v23 = v20 * 32;
                v24 = *((long long *)(8 + v23));
                v13 = *((long long *)(8 + v23 + 24));
                *((int128_t *)&v10) = *((int128_t *)(8 + v23 + 8));
                v8 = *((long long *)(8 + v23 + 24));
                *((int128_t *)&v6) = *((int128_t *)(8 + v23 + 8));
                v13 = v14;
            }
            else
            {
                v5 = 1;
                *((uint128_t *)&v7) = 0;
                v24 = 0;
                v20 = 0;
            }
            v3 = v24;
            if (((char)v3.fill_buffer(a0) & 1))
            {
                v2 = v20;
                core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(v3, v5);
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v0);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(&v16);
                return 1;
            }
            if (v25)
            {
                memcpy(&v13, &v6, 16);
                memcpy(&v10, &v3, 16);
                v16.push_back(&v10);
                v21 += v25;
                v15 = v14;
                v12 = v11;
                continue;
            }
            else
            {
                core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(v3, v5);
            }
        }
        v26 = v21;
        if (v26 <= a2)
        {
            v2 = v20;
            core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v0);
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(&v16);
            return 1;
        }
        v27 = v16.get();
        if (v27)
        {
            if (((char)v27.write_bytes_limit(a1, v26 - a2) & 1))
            {
                v2 = v20;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v0);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(&v16);
                return 1;
            }
            v9 += v25;
            v21 -= v25;
            v15 = v13;
            v12 = v10;
            if (!*((long long *)&v27[4]).is_empty(*((long long *)&v27[6])))
                continue;
            v2 = v20;
            v10.pop_front(&v16);
            if (!((char)(((0 ^ (long long)v10) & (0 ^ -((long long)v10))) >> 63)))
            {
                v7 = v13;
                v4 = v10;
                v0.push(&v3);
                v20 = v2;
                v15 = v13;
                v12 = v10;
            }
            else
            {
                v29 = &g_4f7b78;
                break;
            }
        }
        else
        {
            v2 = v20;
            v29 = &g_4f7b60;
            break;
        }
    }
    core::option::unwrap_failed(v29); /* do not return */
}
