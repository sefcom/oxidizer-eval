long long uu_uniq::Uniq::print_uniq(char a0[55], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xef]
    char v1;  // [bp-0xee]
    char v2;  // [bp-0xed]
    unsigned int v3;  // [bp-0xec]
    unsigned long long v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    int v6;  // [bp-0xd8]
    int v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    int v11;  // [bp-0xb8]
    int v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned int v15;  // [bp-0x94]
    unsigned long long v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    int v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    char v22;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x58]
    unsigned long long v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x48]
    unsigned long long v26;  // [bp-0x40]
    char v27;  // [bp-0x38]
    unsigned long long v29;  // r12
    unsigned long long v30;  // rbp
    unsigned long long v31;  // r14
    unsigned long long v32;  // rax
    void* v33;  // r14, Other Possible Types: unsigned long long
    unsigned long long v34;  // r12
    unsigned long long v35;  // rbp
    unsigned int v36;  // eax
    unsigned int v37;  // eax
    char v38;  // [bp-0xb8]

    v29 = a4;
    v30 = a3;
    v15 = (a0[53] ? 0 : 10);
    v22.split(a1, a2, v15);
    v38.next(&v22);
    v31 = 0x8000000000000000;
    v32 = *((long long *)&v38);
    if (v32 == 9223372036854775809)
    {
        v33 = 0;
        goto LABEL_4a0e3c;
    }
    else if (v32 == 0x8000000000000000)
    {
        v33 = v9.from();
LABEL_4a0e3c:
        core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(v22, v23);
    }
    else
    {
        v4 = a3;
        v5 = a4;
        v8 = v32;
        v9 = v13;
        v10 = v14;
        v21 = v24;
        *((int128_t *)&v19) = *((int128_t *)&v22);
        v2 = a0[50];
        v1 = a0[48];
        v0 = a0[49];
        v34 = 1;
        v3 = 0;
        while (true)
        {
            v25.next(&(char)v19);
            if (v25 == 9223372036854775809)
            {
                core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>((long long)v19, v20);
                if (v34)
                {
                    if (v34 == 1)
                    {
                        if (!(!(v1 & 1)))
                            goto LABEL_4a1097;
                    }
                    else
                    {
                        if (!(!(v0 & 1)))
                            goto LABEL_4a1097;
                    }
                    v33 = a0.print_line(v4, v5, v9, v10, v34, (char)v3 & 1);
                    if (!(!v33))
                        goto LABEL_4a1195;
                    v36 = a0[54];
                    if (!(!v36 || v36 == 3))
                        goto LABEL_4a1176;
LABEL_4a10b4:
                    v38 = v15;
                    v33 = (unsigned long long)v4.write_all(v5, &v38, 1).map_err_context();
                    if (!(!v33))
                        goto LABEL_4a1195;
LABEL_4a1176:
                    v33 = (unsigned long long)v4.flush(v5).map_err_context();
                    if (v33)
                    {
LABEL_4a1195:
LABEL_4a1198:
                        v29 = v5;
                        v30 = v4;
                        ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v8);
                        break;
                    }
                    else
                    {
                        v29 = v5;
                        v30 = v4;
                        ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v8);
                        v33 = 0;
                        break;
                    }
                }
                else
                {
LABEL_4a1097:
                    v37 = a0[54];
                    if (!((!v37 || v37 == 3) && ((char)v3 & 1)))
                        goto LABEL_4a1176;
                    goto LABEL_4a10b4;
                }
            }
            if (v25 == v31)
            {
                v33 = v17.from();
                goto LABEL_4a110c;
            }
            v35 = v31;
            v16 = v25;
            v17 = v26;
            v18 = *((long long *)&v27);
            if ((char)a0.cmp_keys(v9, v10, v17, *((long long *)&v27)))
            {
                if (v34)
                {
                    if (v34 == 1)
                    {
                        if (!(v1 & 1))
                            goto LABEL_4a0fec;
                    }
                    else
                    {
                        if (!(v0 & 1))
                        {
LABEL_4a0fec:
                            v33 = a0.print_line(v4, v5, v9, v10, v34, (char)v3 & 1);
                            v3 = (unsigned int)v33 & 0xffffff00 | 1;
                            if (v33)
                            {
LABEL_4a10ff:
                                ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
LABEL_4a110c:
                                core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>((long long)v19, v20);
                                goto LABEL_4a1198;
                            }
                        }
                    }
                }
                v14 = v18;
                *((int128_t *)&v11) = *((int128_t *)&v16);
                ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v8);
                v10 = v14;
                *((int128_t *)&v6) = *((int128_t *)&v38);
                v34 = 1;
                v31 = v35;
            }
            else if ((v2 & 1))
            {
                v33 = a0.print_line(v4, v5, v9, v10, v34, (char)v3 & 1);
                if (!v33)
                {
                    v14 = v18;
                    *((int128_t *)&v12) = *((int128_t *)&v16);
                    ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v8);
                    v10 = v14;
                    *((int128_t *)&v7) = *((int128_t *)&v38);
                    v34 += 1;
                    v3 = (unsigned int)v10 & 0xffffff00 | 1;
                    v31 = v35;
                    continue;
                }
                goto LABEL_4a10ff;
            }
            else
            {
                ::0x4a0520::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
                v31 = v35;
                v34 += 1;
            }
        }
    }
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v30, v29);
    return v33;
}
