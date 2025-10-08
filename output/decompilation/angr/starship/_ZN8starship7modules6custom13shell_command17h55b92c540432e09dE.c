void starship::modules::custom::shell_command(unsigned long long *a0, unsigned long long a1, unsigned long long a2, struct_2 *a3, struct_1 *a4)
{
    struct_0 *v0;  // [bp-0x3b0]
    char *v1;  // [bp-0x3a8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x3a8]
    unsigned long long v3;  // [bp-0x3a0]
    int v4;  // [bp-0x39c]
    char *v5;  // [bp-0x388]
    unsigned int v6;  // [bp-0x384]
    unsigned long long v7;  // [bp-0x380]
    int v8;  // [bp-0x37c]
    int v9;  // [bp-0x378]
    char *v10;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x358]
    int v12;  // [bp-0x338]
    unsigned long long v13;  // [bp-0x330]
    unsigned long long v14;  // [bp-0x328]
    unsigned long long v15;  // [bp-0x318]
    unsigned long long v16;  // [bp-0x310]
    void* v17;  // [sp-0x308], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x300]
    char *v19;  // [sp-0x2f8], Other Possible Types: unsigned long long
    int v20;  // [bp-0x2f0], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v21;  // [bp-0x2f0]
    void* v22;  // [bp-0x2e8], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x2d8]
    int v24;  // [bp-0x2c8]
    char v25;  // [bp-0x2ac]
    char v26;  // [bp-0x2ab]
    int v27;  // [bp-0x228], Other Possible Types: char
    int v28;  // [bp-0x218], Other Possible Types: char
    int v29;  // [bp-0x208]
    unsigned long long v30;  // [bp-0x1f8]
    char v31;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x1e8]
    unsigned long long v33;  // [sp-0x1e0]
    unsigned long long v34;  // [bp-0x1d8]
    unsigned long long v35;  // [bp-0x1d0]
    int v36;  // [bp-0x1c8]
    char v37;  // [bp-0x1b8]
    unsigned long long v38;  // [bp-0x110]
    char v39;  // [bp-0x110]
    unsigned long long v40;  // [bp-0x108]
    char *v41;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0xf8]
    unsigned long long v43;  // [bp-0xf8]
    unsigned long long v44;  // [bp-0xf0]
    void* v45;  // [bp-0xf0]
    char v47;  // r13b
    int v48;  // xmm0
    unsigned long long v49;  // rdx
    unsigned int v50;  // ecx
    char v51;  // al

    v15 = a1;
    v16 = a2;
    starship::modules::custom::get_shell(&v39, a3->field_8, a3->field_10);
    v14 = v41;
    *((int128_t *)&v12) = *((int128_t *)&v39);
    starship::utils::create_command(&v31, v13, v14);
    if (!((char)(((0 ^ v31) & (0 ^ -(v31))) >> 63)))
    {
        memcpy(&v39, &v31, 224);
        goto LABEL_b8ad08;
    }
    else if (v44)
    {
        v1 = v32;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
        {
            v5 = &v1;
            v7 = <std::io::error::Error as core::fmt::Display>::fmt;
            v38 = &g_11f3f58;
            v40 = 1;
            v45 = 0;
            v41 = &(char)v5;
            v42 = 1;
            v17 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
            v18 = 25;
            v19 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
            v20 = 25;
            v22 = log::__private_api::loc(&g_11f3fa8);
            log::__private_api::log(&v38, 4, &v17);
        }
        starship::utils::create_command(&v39, "/usr/bin/envRunning 'non-zero exit code '", 12);
        if (v38 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<std::process::Command,std::io::error::Error>>(&v39);
            *(a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::io::error::Error>(&v1);
        }
        else
        {
            memcpy(&v18, &v40, 216);
            v17 = v38;
            v17.arg("shError creating command with STARSHIP_SHELL, falling back to fallback shell: Failed to run command with given shell or STARSHIP_SHELL env variable:: Executing custom command  timed out.You can set command_timeout in your config to a higher value or set ignore_timeout to true for this module to allow longer-running commands to keep executing.", 2);
            memcpy(&v39, &v17, 224);
            core::ptr::drop_in_place<std::io::error::Error>(&v1);
            v47 = 1;
LABEL_b8ad08:
            v39.current_dir(&a4->padding_0[176]);
            v39.args(v43, v44);
            v39.stdin(2);
            v39.stdout(2);
            v39.stderr(2);
            if (v47 == 2)
            {
                if (!(char)starship::modules::custom::handle_shell(&v39, v13, v14, v44))
                    goto LABEL_b8ad96;
            }
            else
            {
                if (!(v47 & 1))
                {
LABEL_b8ad96:
                    v39.arg(a1, a2);
                }
            }
            (char)v5.spawn(&v39);
            if ((int)v5 == 1)
            {
                v10 = v7;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
                {
                    v1 = &v10;
                    v3 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v17 = &g_11f3f68;
                    v18 = 1;
                    v22 = 0;
                    v19 = &v1;
                    v20 = 1;
                    v31 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                    v32 = 25;
                    v33 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                    v34 = 25;
                    v35 = log::__private_api::loc(&g_11f3ff0);
                    log::__private_api::log(&v17, 4, &v31);
                }
                *(a0) = 0x8000000000000000;
                core::ptr::drop_in_place<std::io::error::Error>(&v10);
            }
            else
            {
                v48 = *((int128_t *)&v6);
                *((int128_t *)&v4) = (int128_t)v9;
                v2 = v48;
                if (true)
                {
                    if ((int)(&v4)[4] != -1)
                    {
                        v17 = (char)v4.write_all(a1, a2);
                        if (!v17)
                            goto LABEL_b8af32;
                        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v17);
                    }
                    *(a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<std::process::Child>(&v1);
                }
                else
                {
LABEL_b8af32:
                    *((int128_t *)&v8) = (int128_t)(&v2)[12];
                    memcpy(&(char)v5, &v1, 16);
                    if (a3->field_d2)
                    {
                        v50 = 0x3b9aca00;
                    }
                    else
                    {
                        *((int128_t *)&v8) = (int128_t)(&v2)[12];
                        memcpy(&(char)v5, &v1, 16);
                        v49 = (a4->field_1d8 >> 3) / 125;
                        v50 = (unsigned int)(a4->field_1d8 - (unsigned int)v49 * 1000) * 1000000;
                        v51 = 1;
                    }
                    v17 = 0;
                    v19 = v49;
                    v20 = v50;
                    v22 = 0;
                    v23 = 0;
                    *((int128_t *)&v24) = *((int128_t *)&v5);
                    memcpy(&v24, &v8, 16);
                    v25 = 0;
                    v26 = v51;
                    v31.wait(&v17);
                    if (v31 == 9223372036854775809)
                    {
                        core::ptr::drop_in_place<core::result::Result<core::option::Option<process_control::Output>,std::io::error::Error>>(&v31);
                        goto LABEL_b8b030;
                    }
                    else
                    {
                        v30 = *((long long *)&v37);
                        v29 = v36;
                        memcpy(&v28, &v34, 16);
                        memcpy(&v27, &v32, 16);
                        if (v31 == 0x8000000000000000)
                        {
                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                            {
                                v10 = &v15;
                                v11 = <&T as core::fmt::Debug>::fmt;
                                v17 = &g_11f3f78;
                                v18 = 2;
                                v22 = 0;
                                v19 = &v10;
                                v21 = 1;
                                v31 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                                v32 = 25;
                                v33 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                                v34 = 25;
                                v35 = log::__private_api::loc(&g_11f3fc0);
                                log::__private_api::log(&v17, 2, &v31);
                            }
                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                            {
                                v17 = &g_11f3f98;
                                v18 = 1;
                                v19 = 8;
                                *((uint128_t *)&v20) = 0;
                                v31 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                                v32 = 25;
                                v33 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                                v34 = 25;
                                v35 = log::__private_api::loc(&g_11f3fd8);
                                log::__private_api::log(&v17, 2, &v31);
                            }
LABEL_b8b030:
                            *(a0) = 0x8000000000000000;
                        }
                        else
                        {
                            v0->field_0 = v31;
                            *((void*)&(&v0->field_0)[1]) = v27;
                            *((void*)((char *)&v0->field_8 + 8)) = v28;
                            *((void*)((char *)&v0->field_18 + 8)) = v29;
                            *((unsigned long long *)((char *)&v0->field_28 + 8)) = v30;
                        }
                    }
                }
            }
            core::ptr::drop_in_place<std::process::Command>(&v39);
        }
    }
    else
    {
        *(a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::io::error::Error>(&(char)v32);
    }
    core::ptr::drop_in_place<versions::Chunk>(&(char)v12);
    return;
}
