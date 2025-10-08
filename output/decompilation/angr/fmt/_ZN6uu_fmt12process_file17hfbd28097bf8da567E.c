long long uu_fmt::process_file(unsigned long long a0, unsigned long long a1, char a2[80], unsigned long long a3[3])
{
    unsigned long long v0;  // [bp-0x230]
    unsigned int v1;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x228]
    char *v3;  // [bp-0x1e8]
    char v4[80];  // [bp-0x1e0]
    char v5;  // [bp-0x1d8]
    char v6;  // [bp-0x1d0]
    char v7;  // [bp-0x198], Other Possible Types: unsigned long long
    char v8;  // [bp-0x190], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long v10;  // [bp-0x180]
    int v11;  // [bp-0x178]
    char v12;  // [bp-0x168]
    char v13;  // [bp-0x160]
    int v14;  // [bp-0x158]
    int v15;  // [bp-0x148]
    char v16;  // [bp-0x138]
    int v17;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0xe0]
    void* v19;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0xd0], Other Possible Types: unsigned long
    int v21;  // [bp-0xc8]
    char v22;  // [bp-0xb8]
    int v23;  // [bp-0xa8]
    int v24;  // [bp-0x98]
    char v25;  // [bp-0x88]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long v30;  // rbp
    void* v31;  // rdi
    unsigned long long v32;  // r15
    unsigned long v33;  // rax
    void* v34;  // rdi

    if ((char)a0.equal(a1, "-read errorcannot open  for readingcannot get metadata for ", 1))
    {
        v27 = std::io::stdio::stdin().new();
        v28 = &g_4f07e0;
        goto LABEL_46451c;
    }
    else
    {
        v17.open(a0, a1);
        v7.map_err_context(&v17, a0, a1);
        if (v7)
            return v7;
        v2 = *((int *)&v8);
        v17.metadata(&v2);
        v7.map_err_context(&v17, a0, a1);
        if ((int)v7 != 2)
        {
            if ((0xf000 & *((int *)&v13)) == 0x4000)
            {
                v7.to_vec("read errorcannot open  for readingcannot get metadata for ", 10);
                v19 = v9;
                *((int128_t *)&v17) = *((int128_t *)&v7);
                v20 = 1;
                v29 = v17.new();
            }
            else
            {
                v27 = v1.new();
                v28 = &g_4f0788;
LABEL_46451c:
                v6.with_capacity(v27, v28);
                v1 = 9223372036854775810;
                v3 = &v6;
                *((char *[80])&v4[0]) = a2;
                v5 = 1;
                v0 = 9223372036854775809;
                do
                {
                    v7.next(&v1);
                    if (v7 == 9223372036854775809)
                    {
                        core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(&v1);
                        if (!a3.flush().map_err_context())
                        {
                            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v6);
                            return 0;
                        }
                        goto LABEL_464793;
                    }
                    if (v7 == 0x8000000000000000)
                    {
                        v30 = a3[2];
                        if (v20 < a3[0] - v30)
                        {
                            memcpy(a3[1] + v30, v19, v20);
                            a3[2] = v30 + v20;
                            v31 = 0;
                        }
                        else
                        {
                            v31 = a3.write_all_cold(v19, v20);
                        }
                        v32 = v31.map_err_context();
                        if (!v32)
                        {
                            v33 = a3[2];
                            if (a3[0] - v33 > 1)
                            {
                                *((char *)(a3[1] + v33)) = 10;
                                a3[2] = v33 + 1;
                                v34 = 0;
                            }
                            else
                            {
                                v34 = a3.write_all_cold("\n   Found NoFormatLine when expecting FormatLinesrc/uu/fmt/src/parasplit.rsFound FormatLine when expecting NoFormatLine", 1);
                            }
                            v32 = v34.map_err_context();
                            if (!v32)
                            {
                                core::ptr::drop_in_place<alloc::string::String>(v8, v19);
                                continue;
                            }
                        }
                        core::ptr::drop_in_place<alloc::string::String>(v8, v19);
                        break;
                    }
                    v17 = v7;
                    v18 = v8;
                    v19 = v9;
                    v20 = v10;
                    memcpy(&v25, &v16, 16);
                    v24 = v15;
                    v23 = v14;
                    memcpy(&v22, &v12, 16);
                    v21 = v11;
                    v32 = uu_fmt::linebreak::break_lines(&v17, a2, a3).map_err_context();
                    core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v17);
                } while (!v32);
                core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(&v1);
LABEL_464793:
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v6);
                return v32;
            }
        }
        core::ptr::drop_in_place<std::fs::File>(&v2);
        return v29;
    }
}
