long long uu_pinky::platform::unix::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x659]
    void* v1;  // [bp-0x658], Other Possible Types: char, unsigned long long
    int v2;  // [bp-0x650], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x648], Other Possible Types: char
    char v4;  // [bp-0x638]
    unsigned long long v5;  // [bp-0x628]
    char v6;  // [bp-0x620]
    char v7;  // [bp-0x608]
    void* v8;  // [bp-0x5c8], Other Possible Types: char
    char v9;  // [bp-0x5c0]
    void* v10;  // [bp-0x5b8]
    char v11;  // [bp-0x5b0]
    char v12;  // [bp-0x5af]
    char v13;  // [bp-0x5ae]
    char v14;  // [bp-0x5ad]
    char v15;  // [bp-0x5ac]
    char v16;  // [bp-0x5ab]
    char v17;  // [bp-0x5aa]
    char v18;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x2f0]
    char v20;  // [bp-0x2e8]
    char v21;  // [bp-0x2d8]
    unsigned long long v22;  // [bp-0x2c8]
    unsigned long long v24;  // rdi
    char v25;  // al
    char v26;  // al
    char v27;  // al
    char v28;  // al
    char v29;  // al
    char v30;  // r12b
    char v31;  // al
    unsigned long long v32;  // rax
    void* v33;  // rbx

    uu_pinky::uu_app(&v8);
    uu_pinky::platform::unix::get_long_usage(&v6);
    v18.after_help(&v8, &v6);
    v1.try_get_matches_from(&v18, a0, a1);
    v24 = v2;
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v19.from();
    v22 = v5;
    memcpy(&v21, &v4, 16);
    memcpy(&v20, &v3, 16);
    v18 = v1;
    v19 = v2;
    v8.try_get_many(&v18);
    v7.unwrap(&v8);
    if (*((long long *)&v7))
    {
        v8.collect(&v7);
        *((int128_t *)&v2) = *((int128_t *)&v9);
        v1 = v8;
    }
    else
    {
        v1 = 0;
        v2 = 8;
        v3 = 0;
    }
    v25 = v18.get_flag("omit_headingsomit_project_fileomit_plan_fileomit_home_dirlong_formatomit_nameomit_name_hostomit_name_host_timeError flushing stdout: ", 13);
    v26 = v18.get_flag("omit_project_fileomit_plan_fileomit_home_dirlong_formatomit_nameomit_name_hostomit_name_host_timeError flushing stdout: ", 17);
    v27 = v18.get_flag("omit_plan_fileomit_home_dirlong_formatomit_nameomit_name_hostomit_name_host_timeError flushing stdout: ", 14);
    v28 = v18.get_flag("omit_home_dirlong_formatomit_nameomit_name_hostomit_name_host_timeError flushing stdout: ", 13);
    v0 = v18.get_flag("long_formatomit_nameomit_name_hostomit_name_host_timeError flushing stdout: ", 11);
    v29 = v18.get_flag("omit_nameomit_name_hostomit_name_host_timeError flushing stdout: ", 9);
    v30 = v18.get_flag("omit_name_hostomit_name_host_timeError flushing stdout: ", 14);
    v31 = v18.get_flag("omit_name_host_timeError flushing stdout: ", 19);
    v10 = v3;
    memcpy(&v8, &v1, 16);
    v11 = v31 ^ 1;
    v12 = v25 ^ 1;
    v13 = (v30 | v31 | v29) ^ 1;
    v14 = v26 ^ 1;
    v15 = v27 ^ 1;
    v16 = (v30 | v31) ^ 1;
    v17 = v28 ^ 1;
    if (v0)
    {
        v8.long_pinky();
LABEL_45d063:
        v33 = 0;
    }
    else
    {
        v32 = v8.short_pinky();
        if (!v32)
            goto LABEL_45d063;
        v33 = v32.map_err_context();
    }
    core::ptr::drop_in_place<uu_pinky::platform::unix::Pinky>(&v8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
    return v33;
}
