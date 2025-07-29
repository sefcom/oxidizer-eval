long long uu_fmt::process_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[3])
{
    unsigned int v0;  // [bp-0x220], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x220]
    char *v2;  // [bp-0x1e0]
    unsigned long long v3;  // [bp-0x1d8]
    char v4;  // [bp-0x1d0]
    int v5;  // [bp-0x1c8], Other Possible Types: char, unsigned int
    unsigned long long v6;  // [bp-0x1c8]
    void* v7;  // [bp-0x1c0]
    unsigned long v8;  // [bp-0x1b8]
    unsigned long long v9;  // [bp-0x1b0]
    int v10;  // [bp-0x1a8]
    char v11;  // [bp-0x198]
    int v12;  // [bp-0x188]
    int v13;  // [bp-0x178]
    char v14;  // [bp-0x168]
    char v15;  // [bp-0x118]
    char v16;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v17;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v18;  // [bp-0xc8]
    int v19;  // [bp-0xc0]
    char v20;  // [bp-0xb0]
    char v21;  // [bp-0xa8]
    int v22;  // [bp-0xa0]
    int v23;  // [bp-0x90]
    char v24;  // [bp-0x80]
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rbp
    unsigned long v30;  // rbp
    void* v31;  // rdi
    unsigned long v32;  // rax
    void* v33;  // rdi

    if ((char)a0.equal(a1, "-\nfileswidthsrc/uu/fmt/src/fmt.rs", 1))
    {
        v26 = std::io::stdio::stdin().new();
        v27 = &g_583af0;
        goto LABEL_4a256f;
    }
    else
    {
        v5.open(a0, a1);
        v16.map_err_context(&v5, a0, a1);
        if (v16)
            return v16;
        v0 = *((int *)&v17);
        v5.metadata(&v0);
        v16.map_err_context(&v5, a0, a1);
        if ((int)v16 == 2)
        {
            v28 = *((long long *)&v17);
        }
        else if ((0xf000 & *((int *)&v21)) == 0x4000)
        {
            v5 = 6;
            v28 = v5.from();
        }
        else
        {
            v26 = v1.new();
            v27 = &g_583a98;
LABEL_4a256f:
            v15.with_capacity(0x2000, v26, v27);
            v0 = 9223372036854775810;
            v2 = &v15;
            v3 = a2;
            v4 = 1;
            while (true)
            {
                v16.next(&v0);
                if (!((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63)))
                {
                    if (v16 != 9223372036854775809)
                    {
                        v6 = v16;
                        v9 = v18;
                        memcpy(&v7, &v17, 16);
                        memcpy(&v14, &v24, 16);
                        v13 = v23;
                        v12 = v22;
                        memcpy(&v11, &v20, 16);
                        v10 = v19;
                        v29 = uu_fmt::linebreak::break_lines(&v6, a2, a3).map_err_context();
                        if (!v29)
                        {
                            core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v6);
                            continue;
                        }
                        else
                        {
                            core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v6);
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(&v0);
                        if (!a3.flush().map_err_context())
                        {
                            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v15);
                            return 0;
                        }
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v15);
                        break;
                    }
                    goto LABEL_4a280e;
                }
                v5 = v17;
                v8 = v18;
                v30 = a3[2];
                if (v8 < a3[0] - v30)
                {
                    memcpy(a3[1] + v30, v7, v8);
                    a3[2] = v30 + v8;
                    v31 = 0;
                }
                else
                {
                    v31 = a3.write_all_cold(v7, v8);
                }
                v29 = v31.map_err_context();
                if (v29)
                {
LABEL_4a2779:
                    ::0x4a1010::core::ptr::drop_in_place<alloc::string::String>(&v6);
LABEL_4a280e:
                    core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(&v0);
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v15);
                    return v29;
                }
                v32 = a3[2];
                if (a3[0] - v32 > 1)
                {
                    *((char *)(a3[1] + v32)) = 10;
                    a3[2] = v32 + 1;
                    v33 = 0;
                }
                else
                {
                    v33 = a3.write_all_cold("\nfileswidthsrc/uu/fmt/src/fmt.rs", 1);
                }
                v29 = v33.map_err_context();
                if (!(!v29))
                    goto LABEL_4a2779;
                ::0x4a1010::core::ptr::drop_in_place<alloc::string::String>(&v6);
            }
            return v29;
        }
        core::ptr::drop_in_place<std::fs::File>(&v0);
        return v28;
    }
}
