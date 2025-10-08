long long uu_comm::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x3e0]
    int v2;  // [bp-0x3d8]
    int v3;  // [bp-0x3c8]
    char v4;  // [bp-0x3b8]
    char v5;  // [bp-0x3a8]
    struct_0 *v6;  // [bp-0x3a0]
    unsigned long v7;  // [bp-0x398]
    unsigned long long v8;  // [bp-0x390]
    unsigned long long v9;  // [bp-0x388]
    int v10;  // [bp-0x380]
    int v11;  // [bp-0x370]
    unsigned long long v12;  // [bp-0x360]
    unsigned long long v13;  // [bp-0x358]
    unsigned long long v14;  // [bp-0x350]
    int v15;  // [bp-0x348]
    int v16;  // [bp-0x338]
    char v17;  // [bp-0x328]
    unsigned int v18;  // [bp-0x327]
    unsigned int v19;  // [bp-0x324]
    unsigned long long v20;  // [bp-0x320]
    unsigned long long v21;  // [bp-0x318]
    int v22;  // [bp-0x310]
    int v23;  // [bp-0x300]
    char v24;  // [bp-0x2f0]
    unsigned int v25;  // [bp-0x2ef]
    unsigned int v26;  // [bp-0x2ec]
    int v27;  // [bp-0x2e8], Other Possible Types: char
    int v28;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v29;  // [bp-0x2d0]
    int v30;  // [bp-0x2c8]
    char v31;  // [bp-0x2b8]
    unsigned long long v33;  // rdi
    unsigned int v34;  // ebp
    unsigned long long v35[3];  // rbx
    unsigned long long v36[3];  // r15
    unsigned int v37;  // ebp
    unsigned long long v38;  // rbx
    int v39;  // xmm0
    struct_0 *v40;  // r14
    void* v41;  // r15
    void* v42;  // r15
    char v44;  // cc_dep1
    unsigned long long v45;  // rdx
    unsigned long long v46;  // r15
    unsigned long long v47;  // rdi

    uu_comm::uu_app(&v27);
    v0.try_get_matches_from(&v27, a0, a1);
    v33 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v9.from();
    v12 = *((long long *)&v4);
    v11 = v3;
    v10 = v2;
    v8 = v0;
    v9 = v1;
    v34 = ((char)v8.get_flag("zero-terminatedFILE1FILE2", 15) ? 0 : 10);
    v27.try_get_one(&v8, "FILE1FILE2");
    v35 = "FILE1FILE2".unwrap(&v27);
    if (v35)
    {
        v27.try_get_one(&v8, "FILE2");
        v36 = "FILE2".unwrap(&v27);
        if (v36)
        {
            v37 = v34;
            uu_comm::open_file(&v27, v35[1], v35[2], v37);
            v0.map_err_context(&v27, v35);
            v38 = v0;
            if (v4 != 11)
            {
                v16 = v3;
                v15 = v2;
                v18 = *((int *)&(&v4)[1]);
                v19 = *((int *)&(&v4)[4]);
                v13 = v38;
                v14 = v1;
                v17 = v4;
                uu_comm::open_file(&v27, v36[1], v36[2], v37);
                v0.map_err_context(&v27, v36);
                v38 = v0;
                if (v4 != 11)
                {
                    v23 = v3;
                    v22 = v2;
                    v25 = *((int *)&(&v4)[1]);
                    v26 = *((int *)&(&v4)[4]);
                    v20 = v38;
                    v21 = v1;
                    v24 = v4;
                    v27.try_get_many(&v8);
                    v0.unwrap(&v27);
                    if (!v0)
                        core::option::unwrap_failed(&g_4e00d0); /* do not return */
                    v39 = *((int128_t *)&v0);
                    memcpy(&v31, &v4, 16);
                    v30 = v3;
                    v28 = v2;
                    v27 = v39;
                    v5.collect(&v27);
                    if (!v7)
                        core::slice::index::slice_start_index_len_fail(1, 0, &g_4e0170); /* do not return */
                    v40 = v6;
                    v41 = 0;
                    do
                    {
                        v42 = v41;
                        if (v7 * 24 - 24 == v42)
                        {
                            v44 = v40->field_8.equal(v40[1].padding_0, 1, 0);
                            if (!v44)
                            {
                                v45 = v40->field_8;
                                if (v44)
                                    goto LABEL_45321f;
                                goto LABEL_45321e;
                            }
                            else
                            {
                                v45 = &g_41819c;
                                if (!v44)
                                {
LABEL_45321e:
                                    v46 = v40[1].padding_0;
                                    goto LABEL_453221;
                                }
                                else
                                {
LABEL_45321f:
                                    v46 = 1;
LABEL_453221:
                                    v38 = uu_comm::comm(&v13, &v20, v45, v46, &v8);
                                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v5);
                                    core::ptr::drop_in_place<uu_comm::LineReader>(&v20);
                                    goto LABEL_45325c;
                                }
                            }
                        }
                        v41 = v42 + 24;
                    } while ((char)*((long long *)(v40 + v42 + 32)).eq(*((long long *)(v40 + v42 + 40)), v40->field_8, v40[1].padding_0));
                    v0.to_vec("multiple conflicting output delimiters specifiedzero-terminatedFILE1FILE2", 48);
                    v28 = (long long)v2;
                    memcpy(&v27, &v0, 16);
                    v29 = 1;
                    v38 = v27.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v5);
                    core::ptr::drop_in_place<uu_comm::LineReader>(&v20);
                }
LABEL_45325c:
                core::ptr::drop_in_place<uu_comm::LineReader>(&v13);
            }
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
            return v38;
        }
        v47 = &g_4e00b8;
    }
    else
    {
        v47 = &g_4e00a0;
    }
    core::option::unwrap_failed(v47); /* do not return */
}
