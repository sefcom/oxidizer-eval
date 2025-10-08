long long ruff_python_formatter::main()
{
    char *v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa8]
    char v4;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x90], Other Possible Types: unsigned long long
    int v8;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x80]
    void* v10;  // [bp-0x70]
    char v11;  // [bp-0x68]
    unsigned long long v12[3];  // [bp-0x60]
    unsigned long v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    int v15;  // [bp-0x4b]
    char v16;  // [bp-0x48]
    unsigned long long v18;  // rbx
    char *v19;  // r13
    unsigned long long v20;  // rbx
    void* v21;  // r15
    void* v22;  // r15
    unsigned long long v23;  // r13
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    void* v26;  // rax
    unsigned long long v28;  // rdx
    void* v29;  // r15
    void* v30;  // r13
    unsigned long long v31;  // rax

    v11.parse();
    if (v13)
    {
        v18 = v13 * 24;
        v19 = &v4;
        while (true)
        {
            v20 = v18;
            std::fs::read_to_string(v19, v12);
            v0.with_context(v19, v12[1], v12[2]);
            v21 = v2;
            if (v0 == 0x8000000000000000)
                break;
            v10 = v21;
            ruff_python_formatter::cli::format_and_debug_print(v19, v10, v3, &v11, v12[1], v12[2]);
            v22 = v6;
            v21 = v22;
            if (v4 == 0x8000000000000000)
            {
LABEL_6d04bc:
                goto LABEL_6d051c;
            }
            v23 = v7;
            if ((char)v15 != 2 && ((char)v15 & 1))
            {
                v5 = std::io::stdio::stdout();
                v1 = v5.lock();
                v24 = v1.write_all(v22, v23);
                if (!v24)
                {
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v1);
                    v5 = v5;
                    v1 = v1;
                }
                else
                {
                    v26 = v24.from();
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v1);
LABEL_6d04ae:
                    core::ptr::drop_in_place<alloc::string::String>(v4, v22);
                    v21 = v26;
                    goto LABEL_6d04bc;
                }
            }
            else
            {
                v25 = std::fs::write(v12, v22, v23);
                v26 = v25.with_context(v12[1], v12[2]);
                v5 = v4;
                v1 = v0;
                if (v26)
                    goto LABEL_6d04ae;
            }
            core::ptr::drop_in_place<alloc::string::String>(v4, v22);
            core::ptr::drop_in_place<alloc::string::String>(v0, v10);
            v12 += 1;
            v19 = &v5;
            v4 = v5;
            v0 = v1;
            v18 = v20 - 24;
            if (v20 == 24)
            {
                v21 = 0;
                break;
            }
        }
    }
    else if ((char)v15 == 2 || ((char)v15 & 1))
    {
        ruff_python_formatter::read_from_stdin(&v4);
        v21 = v6;
        if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
        {
            v10 = v21;
            ruff_python_formatter::cli::format_and_debug_print(&v4, v10, v7, &v11, "stdin.py", 8);
            v29 = v6;
            v21 = v29;
            if (v0 != 0x8000000000000000)
            {
                if (v14)
                {
                    if ((char)v29.eq(v7, v10, v7))
                    {
                        v30 = 0;
                        goto LABEL_6d0508;
                    }
                    else
                    {
                        v4 = &g_97a3f8;
                        v6 = 1;
                        v7 = 8;
                        *((uint128_t *)&v8) = 0;
                        v30 = anyhow::__private::format_err(&v4);
                        goto LABEL_6d0508;
                    }
                }
                v4 = std::io::stdio::stdout();
                v1 = v4.lock();
                v31 = v1.write_all(v29, v7);
                if (v31)
                {
                    v30 = v31.from();
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v1);
LABEL_6d0508:
                    core::ptr::drop_in_place<alloc::string::String>(v0, v29);
                    v21 = v30;
                    goto LABEL_6d0516;
                }
                else
                {
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v1);
                    core::ptr::drop_in_place<alloc::string::String>(v0, v29);
                    core::ptr::drop_in_place<alloc::string::String>(v0, v10);
                    v21 = 0;
                }
            }
            else
            {
LABEL_6d0516:
LABEL_6d051c:
                core::ptr::drop_in_place<alloc::string::String>(v0, v10);
            }
        }
    }
    else
    {
        v0 = &(char)v15;
        v2 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        v4 = &g_97a3e8;
        v6 = 1;
        v9 = 0;
        v7 = &v0;
        v8 = 1;
        v16.map_or_else(0, v28, &v4);
        v21 = v16.msg();
    }
    core::ptr::drop_in_place<ruff_python_formatter::cli::Cli>(&v11);
    return v21;
}
