long long uu_fold::fold_file_bytewise(unsigned long long a0[2], unsigned int a1, void* a2)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    char *v5;  // [bp-0x88], Other Possible Types: char, unsigned long long
    unsigned long long v6;  // [bp-0x80]
    int v7;  // [bp-0x80]
    void* v8;  // [bp-0x78]
    unsigned int v9;  // [bp-0x64]
    unsigned long v10;  // [bp-0x60]
    void* v11;  // [bp-0x58]
    void* v12;  // [bp-0x58]
    char *v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x38]
    unsigned long long v18[2];  // r15
    char *v19;  // r12
    void* v21;  // r14
    void* v23;  // rbx
    void* v24;  // rbx
    unsigned long long v25;  // r14
    void* v26;  // r13
    unsigned long long v27;  // rax
    void* v28;  // r15
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // r12
    void* v33;  // rbx
    void* v34;  // rbx

    v9 = a1;
    v18 = a0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v19 = &v0;
    while (true)
    {
        v3.map_err_context(std::io::append_to_string(v19, v18), a2);
        if (v3)
        {
            core::ptr::drop_in_place<alloc::string::String>(v0, v1);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(v18[0], v18[1]);
            return v3;
        }
        if (!v4)
        {
            core::ptr::drop_in_place<alloc::string::String>(v0, v1);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(v18[0], v18[1]);
            return v3;
        }
        v21 = v2;
        if ((char)v1.equal(v21, "\nfailed to read line", 1))
        {
            v3 = &g_4e6b90;
            v4 = 1;
            v5 = 8;
            *((uint128_t *)&v7) = 0;
            std::io::stdio::_print(&v3);
        }
        else if (v21)
        {
            v11 = v21;
            if (v21 < v10)
                v23 = v21;
            else
                v23 = a2;
            v27 = 0.get(v23, v1, v2);
            if (v27)
            {
                v28 = 0;
                v30 = v29;
                do
                {
                    v31 = v30;
                    if ((char)v9)
                    {
                        v12 = v11;
                        if (v24 < v12)
                        {
                            v12 = v11;
                            if (((char)core::str::<impl str>::rfind(v27, v31) & 1))
                            {
                                v3 = 0;
                                v4 = v29;
                                v5 = 0;
                                v27 = v3.index(v27, v31);
                                v31 = v29;
                                v12 = v11;
                            }
                        }
                    }
                    else
                    {
                        v12 = v11;
                    }
                    v15 = v27;
                    v16 = v31;
                    if (!(char)v27.equal(v31, "\nfailed to read line", 1))
                    {
                        v28 += v31;
                        v33 = v12;
                        v34 = v33 - v28;
                        if (v33 <= v28)
                        {
                            v13 = &v15;
                            v14 = <&T as core::fmt::Display>::fmt;
                            v3 = &g_417f60;
                            v4 = 1;
                            v8 = 0;
                            v5 = &v13;
                            v6 = 1;
                            std::io::stdio::_print(&v3);
                            goto LABEL_45bc7d;
                        }
                    }
                    else
                    {
LABEL_45bc7d:
                        v18 = a0;
                        v19 = &v0;
                        goto LABEL_45ba61;
                    }
                    v13 = &v15;
                    v14 = <&T as core::fmt::Display>::fmt;
                    v3 = &g_4e6ba0;
                    v4 = 2;
                    v8 = 0;
                    v5 = &v13;
                    v6 = 1;
                    std::io::stdio::_print(&v3);
                    if (a2 <= v34)
                        v34 = a2;
                    v24 = v34 + v28;
                    v27 = v28.get(v24, v1, v2);
                    v30 = v29;
                } while (v27);
            }
            else
            {
                v28 = 0;
                break;
            }
        }
LABEL_45ba61:
        v19.truncate();
    }
    core::str::slice_error_fail(v25, v26, v28, v24, &g_4e6bc0); /* do not return */
}
