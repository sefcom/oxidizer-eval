void bat::controller::Controller::print_file_ranges(char *a0, unsigned long a1, unsigned long long a2, struct_3 **a3, struct_2 **a4, unsigned long long a5, unsigned long long a6, struct_0 *a7)
{
    char v0;  // [bp-0x112]
    char v1;  // [bp-0x111]
    unsigned long long v2;  // [bp-0x110]
    unsigned int v3;  // [bp-0x104]
    void* v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    void* v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xc0]
    int v11;  // [bp-0xb8], Other Possible Types: char
    int v12;  // [bp-0xb7]
    unsigned long long v13;  // [bp-0xb0]
    void* v14;  // [bp-0xa8]
    int v15;  // [bp-0xa7]
    unsigned long long v16;  // [bp-0xa0]
    char v17;  // [bp-0x98]
    char v18;  // [bp-0x97]
    char v19;  // [bp-0x88]
    char v20;  // [bp-0x87]
    int v21;  // [bp-0x78]
    void* v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x58]
    unsigned long long v24;  // [bp-0x50]
    int v25;  // [bp-0x48]
    void* v26;  // [bp-0x40]
    unsigned long v27;  // r12
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    char *v31;  // r14
    void* v32;  // rbx
    unsigned long long v33;  // r15
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    char v36;  // r15b
    struct_1 *v37;  // rax
    unsigned long long v38;  // r14
    unsigned long long v39;  // rax
    char v40;  // al
    unsigned long v41;  // rdx
    unsigned long long v42;  // rsi
    char v43;  // al
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2

    v7 = 0;
    v8 = 1;
    v9 = 0;
    v27 = a7->field_28 + 1;
    v28 = v27.with_capacity_in(8, 32, &g_ace3a8);
    *((uint128_t *)&v25) = 0;
    v23 = v28;
    v24 = v29;
    v30 = a1 + 192.snip();
    v0 = v30;
    v1 = (char)v30 ^ 1;
    v3 = (unsigned int)v30 & 0xffffff00 | 1;
    v6 = 0;
    v31 = &(char)v11;
    v32 = 0;
    v33 = 0;
    v34 = 1;
    while (true)
    {
        if ((v36 & 1))
        {
            if (v32)
                goto LABEL_838426;
            goto LABEL_838682;
        }
        v31.read_line(a6, &v7);
        if (v11 == 1)
        {
            *((char *)v4) = 0;
            *((unsigned long long *)&v4[8]) = v13;
            break;
        }
        if ((char)v12 == 1)
        {
            v14 = 0;
            *((int128_t *)&v11) = *((int128_t *)&v7);
            v7 = 0;
            v8 = 1;
            v9 = 0;
            v16 = v34;
            v23.push_back(v31);
            v34 += 1;
            v32 = v26;
LABEL_838426:
            if (v32 < v27)
                goto LABEL_83842b;
            goto LABEL_838448;
        }
        v36 = 1;
        v33 = v33 & 0xffffffffffffff00 | 1;
        if (v32 < v27)
        {
LABEL_83842b:
            if (!(v36 & 1))
                continue;
        }
LABEL_838448:
        v31.pop_front(&v23);
        v2 = v13;
        v5 = (long long)v11;
        if ((long long)v11 != 0x8000000000000000)
        {
            v22 = v14;
            v10 = v16;
            v32 = v26;
            v37 = v23.get(v32 - 1);
            if (v37)
            {
                v38 = (char)v33 & 1;
                v35 = v37->field_18;
            }
            else
            {
                v38 = 2;
            }
            if (v38 == 2)
                v35 = v10;
            if (v38 == 2)
                v38 = 1;
            v39 = a7.check(v10, v38, v35);
            if (!(char)v39)
            {
                v40 = v1;
                v41 = v3;
                v42 = v6;
                v43 = v40 | (char)v41 | (char)v42;
                if (((v40 | (char)v41 | (char)v42) & 1))
                {
                    v6 = v42 & 0xffffffffffffff00 | (char)v42 | v0 & (char)v41;
                    v3 = (unsigned int)v41 & 0xffffff00 | (char)v41 & v40;
                }
                else
                {
                    a3(&(char)v11, a2, a5);
                    if ((char)v11 == 13)
                    {
                        v6 = 1;
                        v3 = 0;
                    }
                    else
                    {
LABEL_838634:
                        v4[64] = v21;
                        v44 = (int128_t)v12;
                        v45 = (int128_t)v15;
                        v46 = *((int128_t *)&v18);
                        *((int128_t *)&v4[49]) = *((int128_t *)&v20);
                        v4[33] = v46;
                        v4[17] = v45;
                        v4[1] = v44;
                        *((char *)v4) = v43;
                        goto LABEL_8386f2;
                    }
                }
                a4(&(char)v11, a2, 0, a5, v10, v2, v22, v38, v35);
                if ((char)v11 != 13)
                    goto LABEL_838634;
LABEL_8385f2:
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v2);
                v31 = &(char)v11;
            }
            else if ((unsigned int)v39 == 1)
            {
                a4(&(char)v11, a2, 1, a5, v10, v2, v22, v38, v35);
                if ((char)v11 == 13)
                {
                    v6 = 0;
                    goto LABEL_8385f2;
                }
                else
                {
                    v4[64] = v21;
                    v47 = (int128_t)v11;
                    v48 = *((int128_t *)&v14);
                    v49 = *((int128_t *)&v17);
                    *((int128_t *)&v4[48]) = *((int128_t *)&v19);
                    v4[32] = v49;
                    v4[16] = v48;
                    *(v4) = v47;
LABEL_8386f2:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v2);
                    break;
                }
            }
            else
            {
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v2);
            }
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<(alloc::vec::Vec<u8>,usize)>>(0x8000000000000000, v2);
LABEL_838682:
            *(a0) = 13;
            break;
        }
    }
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<(alloc::vec::Vec<u8>,usize)>>(&v23);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
    return;
}
