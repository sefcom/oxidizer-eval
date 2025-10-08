long long uu_uniq::Uniq::print_uniq(char a0[55], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xb1]
    unsigned long long v1;  // [bp-0xb0]
    char v2;  // [bp-0xa1]
    unsigned long long v3;  // [bp-0xa0]
    char v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned int v10;  // [bp-0x4c]
    char v11;  // [bp-0x48], Other Possible Types: unsigned long long
    char v12;  // [bp-0x40]
    void* v14;  // r14
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long v17;  // r14
    char v18;  // bpl
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14

    v10 = (a0[53] ? 0 : 10);
    v11.split(a1, a2, v10);
    v4.next(&v11);
    v7 = 9223372036854775809;
    if (*((long long *)&v4) == 9223372036854775809)
    {
        v14 = 0;
        goto LABEL_45d0b8;
    }
    else
    {
        v3 = *((long long *)&v4);
        if (v3 == 0x8000000000000000)
        {
            v14 = v1.from();
LABEL_45d0b8:
            core::ptr::drop_in_place<std::io::error::Custom>(v11, *((long long *)&v12));
            a4 = a4;
            a3 = a3;
        }
        else
        {
            v1 = v5;
            v15 = v6;
            v8 = v11;
            v9 = *((long long *)&v12);
            v0 = a0[49];
            v2 = a0[48];
            if ((a0[50] & 1))
            {
                v16 = 1;
                v17 = v15;
                while (true)
                {
                    while (true)
                    {
                        v20 = v17;
                        v4.next(&v11);
                        v3 = *((long long *)&v4);
                        if (v3 == v7)
                            goto LABEL_45d565;
                        v19 = v5;
                        if (v3 == 0x8000000000000000)
                            goto LABEL_45d5eb;
                        if (!(char)a0.cmp_keys(v1, v20, v19, v6))
                            break;
                        if (v16)
                        {
                            if (v16 == 1)
                            {
                                if ((v2 & 1))
                                    goto LABEL_45d130;
                            }
                            else
                            {
                                if ((v0 & 1))
                                    goto LABEL_45d130;
                            }
                            v18 = 1;
                            if (a0.print_line(a3, a4, v1, v20, v16, v18))
                                goto LABEL_45d26a;
                        }
LABEL_45d130:
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                        v1 = v19;
                        v16 = 1;
                        v17 = v6;
                    }
                    if (a0.print_line(a3, a4, v1, v20, v16, v18))
                        break;
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                    v16 += 1;
                    v18 = 1;
                    v1 = v19;
                    v17 = v6;
                }
                goto LABEL_45d26a;
            }
            if ((a0[48] & 1))
            {
                v16 = 1;
                v20 = v15;
                while (true)
                {
                    while (true)
                    {
                        v4.next(&v11);
                        v3 = *((long long *)&v4);
                        if (v3 == v7)
                            goto LABEL_45d565;
                        v19 = v5;
                        if (v3 == 0x8000000000000000)
                            goto LABEL_45d5eb;
                        if ((char)a0.cmp_keys(v1, v20, v19, v6))
                            break;
                        v16 += 1;
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v19);
                    }
                    if (!((v16 < 2 | v0) & 1))
                        break;
LABEL_45d34e:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                    v1 = v19;
                    v16 = 1;
                    v20 = v6;
                }
                v14 = a0.print_line(a3, a4, v1, v20, v16, v18);
                v18 = 1;
                goto LABEL_45d34e;
            }
            if ((v0 & 1))
            {
                v16 = 1;
                v20 = v15;
                while (true)
                {
                    while (true)
                    {
                        v4.next(&v11);
                        v3 = *((long long *)&v4);
                        if (v3 == v7)
                            goto LABEL_45d565;
                        v19 = v5;
                        if (v3 == 0x8000000000000000)
                            goto LABEL_45d5eb;
                        if ((char)a0.cmp_keys(v1, v20, v19, v6))
                            break;
                        v16 += 1;
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v19);
                    }
                    if (v16 == 1)
                        break;
LABEL_45d448:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                    v1 = v19;
                    v16 = 1;
                    v20 = v6;
                }
                v14 = a0.print_line(a3, a4, v1, v20, 1, v18);
                v18 = 1;
                goto LABEL_45d448;
            }
            else
            {
                v16 = 1;
                v20 = v15;
            }
            while (true)
            {
                v4.next(&v11);
                v3 = *((long long *)&v4);
                if (v3 == v7)
                    break;
                v19 = v5;
                if (v3 == 0x8000000000000000)
                {
LABEL_45d5eb:
                    v14 = v19.from();
LABEL_45d604:
                    core::ptr::drop_in_place<std::io::error::Custom>(v8, v9);
                    goto LABEL_45d68b;
                }
                if (!(char)a0.cmp_keys(v1, v20, v19, v6))
                {
                    v16 += 1;
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v19);
                }
                else if (v16)
                {
                    v14 = a0.print_line(a3, a4, v1, v20, v16, v18);
                    v18 = 1;
LABEL_45d26a:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v19);
                    goto LABEL_45d604;
                }
                else
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                    v1 = v19;
                    v16 = 1;
                    v20 = v6;
                }
            }
LABEL_45d565:
            core::ptr::drop_in_place<std::io::error::Custom>(v8, v9);
            if (!v16)
            {
LABEL_45d598:
                if ((!a0[54] || a0[54] == 3) && (v18 & 1))
                    goto LABEL_45d5b8;
                goto LABEL_45d669;
            }
            if (v16 == 1)
            {
                if (!(v2 & 1))
                    goto LABEL_45d620;
                goto LABEL_45d598;
            }
            if ((v0 & 1))
                goto LABEL_45d598;
LABEL_45d620:
            v14 = a0.print_line(a3, a4, v1, v20, v16, v18);
            if (v14)
            {
                goto LABEL_45d68b;
            }
            else
            {
                if (a0[54] == 3 || !a0[54])
                {
LABEL_45d5b8:
                    v4 = v10;
                    v14 = (unsigned long long)a3.write_all(a4, &v4, 1).map_err_context();
                    if (v14)
                        goto LABEL_45d684;
                }
LABEL_45d669:
                v14 = (unsigned long long)a3.flush(a4).map_err_context();
                if (v14)
                {
LABEL_45d684:
LABEL_45d68b:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                }
                else
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v1);
                    v14 = 0;
                }
            }
        }
    }
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(a3, a4);
    return v14;
}
