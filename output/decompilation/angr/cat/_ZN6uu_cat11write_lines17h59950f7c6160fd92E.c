long long uu_cat::write_lines(unsigned long long *a0, struct_0 *a1, char a2[5], void* a3)
{
    char v0;  // [bp-0x7ce1]
    void* v1;  // [bp-0x7ce0]
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
    unsigned long v14;  // [bp-0x7c78]
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
    char *v27;  // r13
    unsigned long v29;  // rcx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // cc_ndep
    unsigned long long v32;  // cc_ndep
    struct_0 *v33;  // 4096
    unsigned long long v35;  // rdx
    char *v36;  // r15
    char *v37;  // rbp
    unsigned long long v38;  // rax
    char *v39;  // rax
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rax
    unsigned long long v42;  // r13
    char *v43;  // rax
    unsigned int v44;  // ecx

    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v27 = &v18;
    memset(&v18, 0, 0x7c00);
    v15 = std::io::stdio::stdout();
    (char)v9.with_capacity(v15.lock());
    v0 = a2[4];
    v29 = a2[2];
    if (((char)v29 & 1))
        v30 = "$\n^M\t^I^?unknown filetype: ";
    else
        v30 = "\n$\n^M\t^I^?unknown filetype: ";
    v13 = v30;
    v32 = _ccall(17, (unsigned long long)((char)v29 & 1), 0, v31);
    v14 = v29 + 1;
    v5 = &g_4eac48;
    v2 = 9223372036854775814;
    v4 = a2[1];
    v3 = a2[3];
    v33 = a1;
    while (true)
    {
        v6 = v33.read(v27, 0x7c00);
        v7 = v35;
        if (!((char)v6 & 1) && v35)
        {
            v36 = 0.index(v35, v27, 0x7c00, &g_4eac30);
            v37 = 0;
            while (true)
            {
                while (true)
                {
                    if (v35 <= v37)
                        core::panicking::panic_bounds_check(v37, v35, 0x4eac48); /* do not return */
                    if (*((char *)(v36 + v37)) != 10)
                        break;
                    uu_cat::write_new_line(&v16, &(char)v9, a2, a3, a1->field_4);
                    v38 = v16;
                    if (v38 != v2)
                        goto LABEL_45f207;
                    *((char *)&a3[56]) = 1;
                    v32 = v38 < v2;
                    v37 += 1;
                    if (v37 >= v35)
                        goto LABEL_45f1d5;
                }
                if ((char)a3[57])
                {
                    v39 = v11;
                    v40 = v9 - v39;
                    if (v40 > 1)
                    {
                        *((char *)(v10 + v39)) = 13;
                        v32 = v40 < 1;
                        v11 = v39 + 1;
                    }
                    else if (!(!(char)v9.write_all_cold("\r\n$\n^M\t^I^?unknown filetype: ", 1)))
                    {
                        goto LABEL_45f241;
                    }
                    *((unsigned short *)&a3[56]) = 0;
                    *((char *)&a3[58]) = 0;
                }
                else
                {
                    *((char *)&a3[58]) = 0;
                    if (((char)a3[56] & 1) && v0)
                    {
                        if (a3.write(&(char)v9))
                            goto LABEL_45f241;
                        a3.increment();
                    }
                }
                v42 = uu_cat::write_end(&(char)v9, v36 + v37, v35 - v37, v4, v3);
                v43 = &v37[v42];
                if (v43 == v35)
                    break;
                if (!((char)_ccall(2, 8, v43, v35, v32)))
                {
                    v5 = &g_4eac60;
                    v5 = &g_4eac60;
                    core::panicking::panic_bounds_check(v43, v35, &g_4eac60); /* do not return */
                }
                switch (v44)
                {
                case 13:
                    *((char *)&a3[57]) = 1;
                    v32 = (&v37[v42] <= v37 ? 1 : 0);
                    if (&v37[v42 + 1] >= v35)
                        goto LABEL_45f1d5;
                    break;
                case 10:
                    uu_cat::write_end_of_line(&v16, &(char)v9, v13, v14, a1->field_4);
                    v38 = v16;
                    if (v16 == v2)
                    {
                        *((char *)&a3[56]) = 1;
                        v32 = (&v37[v42] <= v37 ? 1 : 0);
                        if (&v37[v42 + 1] >= v35)
                            goto LABEL_45f1d5;
                        break;
                    }
                    else
                    {
LABEL_45f207:
                        *((int128_t *)&v1[8]) = *((int128_t *)&v17);
                        *((unsigned long long *)v1) = v38;
                        goto LABEL_45f21b;
                    }
                default:
                    v16 = 0;
                    core::panicking::assert_failed(0, v36 + v43, "\n$\n^M\t^I^?unknown filetype: ", &v16, &g_4eac78); /* do not return */
                }
            }
            *((char *)&a3[56]) = 0;
LABEL_45f1d5:
            v41 = (char)v9.flush();
            v27 = &v18;
            if (!v41)
            {
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v6);
                v33 = a1;
            }
            else
            {
LABEL_45f241:
                *((unsigned long long *)v1) = 0x8000000000000000;
                *((unsigned long long *)&v1[8]) = v41;
LABEL_45f21b:
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v6);
                break;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v6);
            *(a0) = v2;
            break;
        }
    }
    return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v9);
}
