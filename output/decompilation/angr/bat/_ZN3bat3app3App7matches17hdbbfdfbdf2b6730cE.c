void bat::app::App::matches(void* a0, unsigned int a1)
{
    int v0;  // [bp-0x368], Other Possible Types: unsigned long long
    int v1;  // [bp-0x368], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x360]
    unsigned long long v3;  // [bp-0x358]
    char v4;  // [bp-0x350], Other Possible Types: unsigned long long
    int v5;  // [bp-0x348]
    unsigned long long v6;  // [bp-0x340]
    char v7;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x330]
    int v9;  // [bp-0x328], Other Possible Types: char
    char v10;  // [bp-0x318]
    unsigned long long v11;  // [bp-0x308]
    int v12;  // [bp-0x2f8], Other Possible Types: char
    int v13;  // [bp-0x2f8]
    int v14;  // [bp-0x2e8], Other Possible Types: char
    int v15;  // [bp-0x2d8]
    int v16;  // [bp-0x2c8]
    char v17;  // [bp-0x2b8]
    unsigned int v19;  // ebp
    void* v20;  // rbx
    unsigned long long v21;  // rdi
    char v22;  // al
    char *v23;  // rdi
    unsigned long long v24;  // rax

    v19 = a1;
    v20 = a0;
    wild::args_os(&v12);
    if (v12.advance_by())
        v24 = 0x8000000000000000;
    else
        (char)v24.next(&v12);
    v7.to_vec("cachesrc/bin/bat/app.rs", 5);
    v21 = v7;
    if (v24 == 0x8000000000000000)
    {
        if (v21 == 0x8000000000000000)
        {
LABEL_7a6054:
            core::ptr::drop_in_place<std::env::VarError>(v21, v8);
            core::ptr::drop_in_place<std::env::VarError>(v24, v2);
            core::ptr::drop_in_place<std::env::ArgsOs>(&v12);
            wild::args_os(&v12);
            v10.collect(&v12);
            bat::clap_app::build_app(&v12, v19);
            v20 + 8.get_matches_from(&v12, &v10);
            *((char *)v20) = 13;
            return;
        }
    }
    else
    {
        if (v21 != 0x8000000000000000)
        {
            v19 = a1;
            v20 = a0;
            if ((char)v2.eq(v3, v8, *((long long *)&v9)))
                goto LABEL_7a6054;
        }
    }
    core::ptr::drop_in_place<std::env::VarError>(v21, v8);
    core::ptr::drop_in_place<std::env::VarError>(v24, v2);
    core::ptr::drop_in_place<std::env::ArgsOs>(&v12);
    wild::args_os(&v12);
    v22 = v12.try_fold().eq();
    core::ptr::drop_in_place<std::env::ArgsOs>(&v12);
    v23 = &v7;
    if (v22)
    {
        wild::args_os(v23);
        bat::config::get_args_from_env_vars(&v4);
        v12.next(&v7);
        if (*((long long *)&v12) == 0x8000000000000000)
            core::option::unwrap_failed(&g_ac82a0); /* do not return */
        v3 = *((long long *)&v14);
        v0 = v12;
        v4.insert(&(unsigned long long)v0, &g_ac82b8);
        v14 = v9;
        memcpy(&v12, &v7, 16);
        v12.fold(&v4);
    }
    else
    {
        wild::args_os(v23);
        bat::config::get_args_from_env_opts_var(&v12);
        if ((long long)v12 == 9223372036854775809)
        {
            bat::config::get_args_from_config_file(&(unsigned long long)v0);
            v1 = v24;
            if (v1 == 0x8000000000000000)
            {
                v12.from("Could not parse configuration file--no-configalwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 34);
                *((int128_t *)&v20[64]) = *((int128_t *)&v17);
                v20[48] = v16;
                v20[32] = v15;
                v20[16] = v14;
                *(v20) = v13;
                core::ptr::drop_in_place<std::env::ArgsOs>(&v7);
                return;
            }
        }
        else
        {
            v3 = (long long)v14;
            v0 = v13;
            v1 = v24;
            if (v1 == 0x8000000000000000)
            {
                v12.from("Could not parse configuration file--no-configalwaysneverinternal error: entered unreachable code: other values for --paging are not allowed", 34);
                *((int128_t *)&v20[64]) = *((int128_t *)&v17);
                v20[48] = v16;
                v20[32] = v15;
                v20[16] = v14;
                *(v20) = v13;
                core::ptr::drop_in_place<std::env::ArgsOs>(&v7);
                return;
            }
        }
        v0 = v1;
        v4 = v24;
        *((int128_t *)&v5) = *((int128_t *)&v2);
        bat::config::get_args_from_env_vars(&v0);
        v12.into_iter(&v0);
        v4.spec_extend(&v12);
        v12.next(&v7);
        if (*((long long *)&v12) == 0x8000000000000000)
            core::option::unwrap_failed(&g_ac8270); /* do not return */
        v3 = (long long)v14;
        v1 = v13;
        v4.insert(&v0, &g_ac8288);
        v14 = v9;
        memcpy(&v12, &v7, 16);
        v13.fold(&v4);
    }
    memcpy(&v10, &v4, 16);
    v11 = v6;
    bat::clap_app::build_app(&v12, v19);
    v20 + 8.get_matches_from(&v12, &v10);
    *((char *)v20) = 13;
    return;
}
