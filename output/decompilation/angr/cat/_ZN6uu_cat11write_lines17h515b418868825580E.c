long long uu_cat::write_lines(unsigned long long *a0, struct_1 *a1, char a2[5], struct_2 *a3)
{
    char v0;  // [bp-0x7ce1]
    struct_0 *v1;  // [bp-0x7ce0]
    unsigned long long v2;  // [bp-0x7cd8]
    unsigned int v3;  // [bp-0x7cc8]
    unsigned int v4;  // [bp-0x7cc4]
    unsigned long long v5;  // [bp-0x7cc0]
    unsigned long long v6;  // [bp-0x7cb8]
    unsigned long long v7;  // [bp-0x7cb0]
    unsigned long long v9;  // [bp-0x7ca8]
    char *v10;  // [bp-0x7ca0]
    char *v11;  // [bp-0x7c98]
    unsigned long long v13;  // [bp-0x7c80]
    unsigned long long v14;  // [bp-0x7c78]
    unsigned long long v15;  // [bp-0x7c68]
    void* v16;  // [bp-0x7c60], Other Possible Types: unsigned long long
    char v17;  // [bp-0x7c58]
    char v18;  // [bp-0x7c30]
    void* v19;  // [bp-0x7030]
    void* v20;  // [bp-0x6030]
    void* v21;  // [bp-0x5030]
    void* v22;  // [bp-0x4030]
    void* v23;  // [bp-0x3030]
    void* v24;  // [bp-0x2030]
    void* v25;  // [bp-0x1030]
    unsigned long v28;  // rcx
    unsigned long v29;  // rdx
    void* v30;  // cc_ndep
    struct_1 *v31;  // 4096
    unsigned long long v33;  // rdx
    char *v34;  // r15
    char *v35;  // rbp
    unsigned long long v36;  // rax
    char *v37;  // rax
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rbx
    char *v41;  // rax
    unsigned int v42;  // ecx

    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    memset(&v18, 0, 0x7c00);
    v15 = std::io::stdio::stdout();
    (char)v9.with_capacity(0x8000, v15.lock());
    v0 = a2[4];
    v28 = a2[2];
    v29 = (((char)v28 & 1) ? "$\n^M\t^I^?unknown filetype: " : "\n-$\n^M\t^I^?unknown filetype: ");
    *((int *)&v13) = (((char)v28 & 1) ? "$\n^M\t^I^?unknown filetype: " : "\n-$\n^M\t^I^?unknown filetype: ");
    v30 = 0;
    v14 = ((unsigned int)v28 & 1) + 1;
    v7 = &g_572ec0;
    v2 = 9223372036854775814;
    v4 = a2[1];
    v3 = a2[3];
    v31 = a1;
    while (true)
    {
        v5 = v31.read(&v18, 0x7c00);
        v6 = v33;
        if (v5)
        {
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v5);
            goto LABEL_49e47f;
        }
        else if (v33)
        {
            v34 = v33.index(&v18, 0x7c00, &g_572ea8);
            v35 = 0;
            while (true)
            {
                while (true)
                {
                    if (v33 <= v35)
                        core::panicking::panic_bounds_check(v35, v33, 0x572ec0); /* do not return */
                    if (*((char *)(v34 + v35)) != 10)
                        break;
                    uu_cat::write_new_line(&v16, &(char)v9, a2, a3, a1->field_4);
                    v36 = v16;
                    if (!(v36 == v2))
                        goto LABEL_49e417;
                    a3->field_38 = 1;
                    v30 = v36 < v2;
                    v35 += 1;
                    if (!(v35 < v33))
                        goto LABEL_49e3e5;
                }
                if (a3->padding_39)
                {
                    v37 = v11;
                    v38 = v9 - v37;
                    if (v38 > 1)
                    {
                        *((char *)(v10 + v37)) = 13;
                        v30 = v38 < 1;
                        v11 = v37 + 1;
                    }
                    else if (!(!(char)v9.write_all_cold("\r\n-$\n^M\t^I^?unknown filetype: ", 1)))
                    {
                        goto LABEL_49e451;
                    }
                    *((unsigned short *)&a3->field_38) = 0;
                    a3->field_3a = 0;
                }
                else
                {
                    a3->field_3a = 0;
                    if ((a3->field_38 & 1) && v0)
                    {
                        if (!(!a3.write(&(char)v9)))
                            goto LABEL_49e451;
                        a3.increment();
                    }
                }
                v40 = uu_cat::write_end(&(char)v9, v34 + v35, v33 - v35, v4, v3);
                v41 = &v35[v40];
                if (v41 == v33)
                    break;
                if (!((char)amd64g_calculate_condition(2, 8, v41, v33, v30)))
                {
                    v7 = &g_572ed8;
                    v7 = &g_572ed8;
                    core::panicking::panic_bounds_check(v41, v33, &g_572ed8); /* do not return */
                }
                switch (v42)
                {
                case 13:
                    a3->padding_39[0] = 1;
                    v30 = (&v35[v40] <= v35 ? 1 : 0);
                    if (!(&v35[v40 + 1] < v33))
                        goto LABEL_49e3e5;
                    break;
                case 10:
                    uu_cat::write_end_of_line(&v16, &(char)v9, v13, v14, a1->field_4);
                    v36 = v16;
                    if (v16 == v2)
                    {
                        a3->field_38 = 1;
                        v30 = (&v35[v40] <= v35 ? 1 : 0);
                        if (!(&v35[v40 + 1] < v33))
                            goto LABEL_49e3e5;
                        break;
                    }
                    else
                    {
LABEL_49e417:
                        *((int128_t *)&v1->field_8) = *((int128_t *)&v17);
                        v1->field_0 = v36;
                        goto LABEL_49e42b;
                    }
                default:
                    v16 = 0;
                    core::panicking::assert_failed(0, v34 + v41, "\n-$\n^M\t^I^?unknown filetype: ", &v16, &g_572ef0); /* do not return */
                }
            }
            a3->field_38 = 0;
LABEL_49e3e5:
            v39 = (char)v9.flush();
            if (!v39)
            {
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v5);
                v31 = a1;
            }
            else
            {
LABEL_49e451:
                v1->field_0 = 0x8000000000000000;
                *((unsigned long long *)&v1->field_8) = v39;
LABEL_49e42b:
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v5);
                break;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v5);
LABEL_49e47f:
            *(a0) = v2;
            break;
        }
    }
    return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v9);
}
