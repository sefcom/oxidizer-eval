long long uu_head::take::copy_all_but_n_lines(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned int v0;  // [bp-0xf4]
    void* v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    void* v3;  // [bp-0xe0], Other Possible Types: unsigned long
    int v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8]
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8], Other Possible Types: unsigned long
    int v10;  // [bp-0xb8]
    int v11;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    int v14;  // [bp-0x98]
    unsigned long long v15;  // [bp-0x90]
    void* v16;  // [bp-0x88]
    int v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    int v19;  // [bp-0x80]
    int v20;  // [bp-0x78]
    int v21;  // [bp-0x70]
    int v22;  // [bp-0x6f]
    int v23;  // [bp-0x68]
    unsigned long long v24;  // [bp-0x60]
    void* v25;  // [bp-0x50]
    unsigned long long v26;  // [bp-0x20]
    unsigned long long v28;  // r13
    void* v29;  // rbp
    char *v30;  // rdi
    void* v31;  // r12
    unsigned long long v32;  // 4096
    unsigned long long v33;  // 4096
    struct_2 *v34;  // rax
    unsigned long long v35;  // rcx
    unsigned long v36;  // rax
    int v37;  // xmm0
    unsigned long long v38;  // rbx
    unsigned long v39;  // rbx
    void* v40;  // r13
    struct_0 *v41;  // rax
    struct_1 *v42;  // rax
    unsigned long long v43[4];  // rax
    unsigned long long v44[4];  // rbx
    char v45;  // al
    int v46;  // xmm0
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdi

    v26 = v28;
    v12 = 0;
    *((uint128_t *)&v14) = 0;
    v13 = 8;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v29 = 0;
    v30 = &v12;
    v0 = a3;
    v25 = 0;
    v31 = 0;
    v32 = a2;
    v33 = a0;
    while (true)
    {
        v7 = v6;
        v10 = v9;
        v34 = v30.get(0);
        if (!v34 || v31 <= v34->field_20 + v32)
        {
            if (v29)
            {
                v29 -= 1;
                v35 = v29 * 48;
                v36 = *((long long *)(8 + v35));
                v9 = *((long long *)(8 + v35 + 40));
                *((int128_t *)&v7) = *((int128_t *)(8 + v35 + 24));
                *((int128_t *)&v4) = *((int128_t *)(8 + v35 + 8));
                v9 = v11;
                if (v36 != 0x8000000000000000)
                {
                    v24 = v11;
                    v37 = (int128_t)v4;
                    v21 = v7;
                    v19 = v37;
                    v16 = v36;
                    v9 = v11;
                    goto LABEL_4662b4;
                }
            }
            else
            {
                v29 = 0;
                v9 = v10;
            }
            v16 = 0;
            v18 = 1;
            *((uint128_t *)&v22) = 0;
            *((uint128_t *)&v20) = 0;
LABEL_4662b4:
            (char)v4.fill_buffer(&v16, v33, v0);
            if ((int)v4 == 1)
            {
                v3 = v29;
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v16, v18);
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v1);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v12);
                return 1;
            }
            if (v5)
            {
                v38 = (long long)v7;
                memcpy(&v10, &v21, 16);
                memcpy(&v7, &v19, 16);
                *((int128_t *)&v4) = *((int128_t *)&v16);
                v12.push_back(&(char)v4);
                v31 += v38;
                v30 = &v12;
                v9 = v11;
                v6 = v8;
                continue;
            }
            else
            {
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v16, v18);
            }
        }
        if (v31 < v32)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v1);
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v12);
            return 0;
        }
        v39 = v15 - 1;
        v40 = v31;
        if (v40 == v32)
        {
            v41 = v12.get(v39);
            if (!v41)
            {
                v47 = &g_4f7c10;
                goto LABEL_466503;
            }
            else if (!v41->field_28)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v1);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v12);
                return 0;
            }
        }
        v42 = v12.get(v39);
        if (v42)
        {
            v43 = v12.get_mut();
            if (v43)
            {
                v44 = v43;
                (char)v4.write_lines(v44, a1, v40 - v32 + v42->field_28, v0);
                if (((char)v4 & 1))
                {
                    v3 = v29;
                    core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>(&v1);
                    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(&v12);
                    return 1;
                }
                v45 = v44[2].is_empty(v44[3]);
                v25 += v5;
                v31 -= (long long)v7;
                v30 = &v12;
                v9 = v10;
                v6 = v7;
                v32 = a2;
                v33 = a0;
                if (!v45)
                    continue;
                v3 = v29;
                (char)v4.pop_front(&v12);
                if ((long long)v4 != 0x8000000000000000)
                {
                    v46 = (int128_t)v4;
                    v23 = v10;
                    v20 = v7;
                    v17 = v46;
                    v1.push(&(unsigned long long)v17);
                    v29 = v3;
                    v30 = &v12;
                    v9 = v10;
                    v6 = v7;
                    v32 = a2;
                    v33 = a0;
                }
                else
                {
                    v48 = &g_4f7c58;
                    break;
                }
            }
            else
            {
                v47 = &g_4f7c40;
LABEL_466503:
                v3 = v29;
                v48 = v47;
                break;
            }
        }
        else
        {
            v47 = &g_4f7c28;
            goto LABEL_466503;
        }
    }
    core::option::unwrap_failed(v48); /* do not return */
}
