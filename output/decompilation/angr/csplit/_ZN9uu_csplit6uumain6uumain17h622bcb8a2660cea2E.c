long long uu_csplit::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x400], Other Possible Types: unsigned long long
    char v1;  // [bp-0x3f8]
    int v2;  // [bp-0x3f0]
    unsigned long long v3;  // [bp-0x3e0]
    char v4;  // [bp-0x3d8]
    unsigned long long v5;  // [bp-0x3d0]
    unsigned long long v6;  // [bp-0x3c8]
    unsigned long long v7;  // [bp-0x3c0]
    char v8;  // [bp-0x3b8], Other Possible Types: unsigned long long
    int v9;  // [bp-0x3b0], Other Possible Types: char
    char v10;  // [bp-0x3a8]
    int v11;  // [bp-0x3a0]
    char v12;  // [bp-0x398]
    unsigned long long v13;  // [bp-0x390]
    int v14;  // [bp-0x388], Other Possible Types: char
    int v15;  // [bp-0x378]
    int v16;  // [bp-0x368]
    unsigned long long v17;  // [bp-0x358]
    unsigned long long v18;  // [bp-0x350]
    unsigned long long v19;  // [bp-0x348]
    char v20;  // [bp-0x340]
    char v21;  // [bp-0x330]
    unsigned long long v22;  // [bp-0x320]
    int v23;  // [bp-0x318], Other Possible Types: char
    int v24;  // [bp-0x308], Other Possible Types: char
    unsigned long long v25;  // [bp-0x2f8]
    int v26;  // [bp-0x2e8], Other Possible Types: BOT[3][5]
    int v27;  // [bp-0x2d8]
    int v28;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x2c0]
    int v30;  // [bp-0x2b8], Other Possible Types: char
    int v31;  // [bp-0x2a8]
    int v32;  // [bp-0x298]
    char v33;  // [bp-0x288]
    unsigned long long v35[3];  // rbx
    int v36;  // xmm0
    int v37;  // xmm1
    unsigned long long v38;  // rax
    unsigned long long v39;  // rbx
    char v41;  // dl
    int v42;  // xmm0
    unsigned long long v43;  // rax
    int v44;  // xmm0
    unsigned long long v45;  // rdi

    uu_csplit::uu_app(&v26);
    v8.try_get_matches_from(&v26, a0, a1);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        return *((long long *)&v9).from();
    v22 = *((long long *)&v14);
    memcpy(&v21, &v12, 16);
    memcpy(&v20, &v10, 16);
    v18 = v8;
    v19 = *((long long *)&v9);
    v26.try_get_one(&v18);
    v35 = v26.unwrap();
    if (v35)
    {
        v26.try_get_many(&v18);
        v8.unwrap(&v26);
        if (v8)
        {
            v36 = *((int128_t *)&v8);
            v37 = *((int128_t *)&v10);
            memcpy(&v30, &v14, 16);
            *((int128_t *)&v28) = *((int128_t *)&v12);
            v27 = v37;
            v26[0] = v36;
            v4.collect(&v26);
            v26.new(&v18);
            v25 = v29;
            v38 = (long long)v26[0];
            memcpy(&v23, v26, 16);
            memcpy(&v24, &v27, 16);
            if (v38 == 0x8000000000000000)
            {
                v39 = v23.new();
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v4);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
                return v39;
            }
            v17 = *((long long *)&v33);
            v16 = v32;
            v15 = v31;
            v14 = v30;
            v9 = v23;
            v11 = v24;
            v13 = v25;
            v8 = v38;
            if ((char)v35[1].equal(v35[2], "-cannot open  for readingError flushing stdout: ", 1))
            {
                v7 = std::io::stdio::stdin();
                uu_csplit::csplit(&v0, &v8, v5, v6, v7.lock(), v41 & 1);
                if (*((int *)&v0) == 13)
                {
LABEL_51968e:
                    core::ptr::drop_in_place<uu_csplit::CsplitOptions>(&v8);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v4);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
                    return 0;
                }
                v28 = v3;
                v42 = *((int128_t *)&v0);
                v27 = v2;
                v26[0] = v42;
                v43 = v26.new();
                goto LABEL_5196e7;
            }
            else
            {
                v26.open(v35);
                v0.map_err_context(&v26, v35[1], v35[2]);
                v39 = v0;
                if (!v0)
                {
                    v26.with_capacity(*((int *)&v1));
                    uu_csplit::csplit(&v0, &v8, v5, v6, &v26);
                    if ((int)v0 == 13)
                        goto LABEL_51968e;
                    v28 = v3;
                    v44 = *((int128_t *)&v0);
                    v27 = v2;
                    v26 = v44;
                    v43 = v26.new();
LABEL_5196e7:
                    v39 = v43;
                }
                core::ptr::drop_in_place<uu_csplit::CsplitOptions>(&v8);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v4);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
                return v39;
            }
        }
        else
        {
            v45 = &g_641da8;
        }
    }
    else
    {
        v45 = &g_641d90;
    }
    core::option::unwrap_failed(v45); /* do not return */
}
