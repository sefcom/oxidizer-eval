long long uu_head::take::copy_all_but_n_lines(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0xf8]
    int v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    int v3;  // [bp-0xd8]
    int v4;  // [bp-0xd8]
    int v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8], Other Possible Types: unsigned long
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xc8]
    void* v9;  // [bp-0xb0]
    unsigned long long *v10;  // [bp-0xa8]
    void* v11;  // [bp-0xa0]
    void* v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x88]
    int v14;  // [bp-0x88], Other Possible Types: char
    int v15;  // [bp-0x80]
    int v16;  // [bp-0x78]
    int v17;  // [bp-0x70]
    int v18;  // [bp-0x68]
    unsigned long v19;  // [bp-0x60]
    void* v20;  // [bp-0x50]
    unsigned long long v21;  // [bp-0x48]
    int v22;  // [bp-0x40]
    unsigned long long v24;  // r15
    unsigned long long v25;  // rbp
    char *v26;  // r14
    void* v27;  // rbx
    struct_2 *v28;  // rax
    unsigned long long *v29;  // rdx
    unsigned long v30;  // rcx
    struct_0 *v31;  // rax
    int v32;  // xmm0
    unsigned long long v33;  // r14
    unsigned long v34;  // rbp
    unsigned long long v35;  // r14
    struct_1 *v36;  // rax
    struct_1 *v37;  // rax
    unsigned long long v38[4];  // rax
    unsigned long long v39[4];  // rbp
    char v40;  // al
    int v41;  // xmm0
    unsigned long long v42;  // rax

    if (!a2)
        core::panicking::panic("assertion failed: n > 0capacity overflow", 23, &g_593650); /* do not return */
    v24 = a2;
    v25 = a0;
    v20 = 0;
    *((uint128_t *)&v22) = 0;
    v21 = 8;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v12 = 0;
    v26 = &v14;
    v0 = &g_593668;
    v27 = 0;
    while (true)
    {
        v4 = v3;
        v7 = v6;
        v28 = v20.get(0);
        if (!v28 || v27 <= v28->field_20 + v24)
        {
            if (v11)
            {
                v11 -= 1;
                v29 = v11 * 48;
                v30 = *((long long *)(v10 + v29));
                if (v30 != 0x8000000000000000)
                {
                    v31 = v10 + v29;
                    v6 = *((long long *)((char *)&v31->field_18 + 8));
                    v32 = *((int128_t *)&(&v31->padding_0)[1]);
                    *((int128_t *)&v4) = *((int128_t *)((char *)&v31->field_8 + 8));
                    v1 = v32;
                    v13 = v30;
                    v19 = v6;
                    v17 = v4;
                    v15 = v32;
                    v6 = v8;
LABEL_4b1583:
                    (char)v1.fill_buffer(v26, v25, a3);
                    if (((char)v1 & 1))
                    {
                        ::0x4b0910::core::ptr::drop_in_place<uu_head::take::TakeAllLinesBuffer>(&v13);
                        core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v9);
                        core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v20);
                        return 1;
                    }
                    if (v2)
                    {
                        v33 = (long long)v4;
                        memcpy(&v7, &v18, 16);
                        memcpy(&v4, &v15, 16);
                        *((int128_t *)&v1) = *((int128_t *)&v13);
                        v20.push_back(&(char)v1, &g_5936e0);
                        v27 += v33;
                        v26 = &v13;
                        v6 = v8;
                        v3 = v5;
                        continue;
                    }
                    else
                    {
                        ::0x4b0910::core::ptr::drop_in_place<uu_head::take::TakeAllLinesBuffer>(v26);
                        v24 = a2;
                        goto LABEL_4b1600;
                    }
                }
            }
            v26.call_once();
            goto LABEL_4b1583;
        }
LABEL_4b1600:
        if (v27 < v24)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v9);
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v20);
            return 0;
        }
        v34 = (long long)(&v22)[8] - 1;
        v35 = v27;
        if (v35 == v24)
        {
            v36 = v20.get(v34);
            if (!v36)
                break;
            if (!v36->field_28)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v9);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v20);
                return 0;
            }
        }
        v37 = v20.get(v34);
        if (v37)
        {
            v38 = v20.get_mut();
            if (!v38)
            {
                v42 = &g_593698;
                goto LABEL_4b17c4;
            }
            v39 = v38;
            (char)v1.write_lines(v39, a1, v35 - v24 + v37->field_28, a3);
            if (((char)v1 & 1))
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v9);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v20);
                return 1;
            }
            v40 = v39[2].is_empty(v39[3]);
            v27 -= (long long)v4;
            v12 += v2;
            v24 = a2;
            v25 = a0;
            v26 = &v14;
            v6 = v7;
            v3 = v4;
            if (!v40)
                continue;
            (char)v1.pop_front(&v20);
            if ((long long)v1 != 0x8000000000000000)
            {
                v41 = (int128_t)v1;
                v18 = v7;
                v16 = v4;
                v14 = v41;
                v9.push(&v14);
                v24 = a2;
                v25 = a0;
                v26 = &v14;
                v6 = v7;
                v3 = v4;
            }
            else
            {
                v42 = &g_5936b0;
LABEL_4b17c4:
                v0 = v42;
                break;
            }
        }
        else
        {
            v42 = &g_593680;
            goto LABEL_4b17c4;
        }
    }
    core::option::unwrap_failed(v0); /* do not return */
}
