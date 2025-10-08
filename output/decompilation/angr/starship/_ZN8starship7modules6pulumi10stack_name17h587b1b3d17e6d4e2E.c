long long starship::modules::pulumi::stack_name(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x14c]
    char v1;  // [sp-0x148], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v2;  // [bp-0x148], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x148], Other Possible Types: unsigned long
    unsigned int v4;  // [bp-0x144]
    int v5;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x13c]
    char *v7;  // [bp-0x138], Other Possible Types: char
    unsigned int v8;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x128], Other Possible Types: char
    unsigned int v10;  // [bp-0x114]
    char v11;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned int v12;  // [bp-0x110]
    unsigned long long v13;  // [bp-0x110]
    char *v14;  // [bp-0x10c]
    char v15;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int v16;  // [bp-0x104]
    unsigned long long v17;  // [sp-0x100]
    unsigned long long v18;  // [sp-0xf8]
    unsigned long long v19;  // [sp-0xf0]
    int v20;  // [sp-0xe8], Other Possible Types: char *
    unsigned int v21;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned int v22;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v23;  // [bp-0xd8]
    unsigned long long v24;  // [bp-0xc0]
    void* v25;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    void* v27;  // [bp-0xa8]
    unsigned long long v28;  // [bp-0xa0]
    int v29;  // [bp-0x98]
    unsigned long long v30;  // [bp-0x90]
    unsigned long long v31;  // [bp-0x88]
    int v32;  // [bp-0x78]
    unsigned long long v33;  // [bp-0x70]
    char v34;  // [bp-0x68]
    char *v35;  // [bp-0x58]
    unsigned long long v36;  // [bp-0x50]
    int v37;  // [bp-0x48], Other Possible Types: char
    char v38;  // [bp-0x30]
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned int v45;  // eax
    unsigned long long v46;  // rax
    unsigned long long v47;  // r14
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    struct_0 *v50;  // rax

    v31 = a1;
    (char)v1.open(a1, a2);
    if (*((int *)&v1) == 1)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v1);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = v4;
    v25 = 0;
    v26 = 1;
    v27 = 0;
    v40 = v0.read_to_string(&v25);
    v1 = v40;
    v5 = v41;
    if (((char)v40 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&(char)v1);
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(&v25);
        return core::ptr::drop_in_place<std::fs::File>(v0);
    }
    (char)v1.load_from_str(1, 0);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        v42 = v5;
        *((int128_t *)&v20) = *((int128_t *)&v7);
        if (v42 != 0x8000000000000000)
        {
            *((int128_t *)&v5) = (int128_t)v20;
            v2 = v42;
            starship::modules::pulumi::stack_name::{{closure}}(&v11, &v31, &(char)v1);
            v43 = *((long long *)&v11);
            if (v43 != 9223372036854775809)
            {
                memcpy(&v37, &v15, 16);
                if (v43 != 0x8000000000000000)
                {
                    v29 = v37;
                    v28 = v43;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                    {
                        v20 = &v28;
                        v21 = <alloc::string::String as core::fmt::Debug>::fmt;
                        v2 = &g_11f5c10;
                        v5 = 1;
                        v9 = 0;
                        v7 = &v20;
                        v8 = 1;
                        v44 = log::__private_api::loc(&g_11f5c50);
                        v11 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                        v15 = 25;
                        v17 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                        v18 = 25;
                        v19 = v44;
                        log::__private_api::log(&(char)v1, 5, &v11);
                    }
                    starship::modules::pulumi::get_pulumi_workspace(&v38, a3, (long long)v29, v30, v31, a2);
                    if (*((long long *)&v38) != 0x8000000000000000)
                    {
                        (char)v1.open(&v38);
                        v45 = v2;
                        v20 = *((long long *)&v4);
                        v21 = v6;
                        if (v45 == 2)
                            goto LABEL_bb419e;
                        v16 = v22;
                        v14 = v20;
                        v12 = v45;
                        if (((char)v12 & 1))
                        {
                            core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v12);
                            goto LABEL_bb419e;
                        }
                        else
                        {
                            v10 = (int)v14;
                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                            {
                                v20 = &v10;
                                v22 = <std::fs::File as core::fmt::Debug>::fmt;
                                v1 = &g_11f5c20;
                                v5 = 1;
                                v9 = 0;
                                v7 = &v20;
                                v8 = 1;
                                v46 = log::__private_api::loc(&g_11f5c68);
                                v13 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                                v15 = 25;
                                v17 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                                v18 = 25;
                                v19 = v46;
                                log::__private_api::log(&(char)v1, 5, &v12);
                            }
                            v3 = 1;
                            *((uint128_t *)&v5) = 0;
                            v8 = v10;
                            v9 = 0;
                            serde_json::de::from_trait(&v20, &(char)v1);
                            if ((char)v20 == 6)
                            {
                                v47 = v22;
                                v24 = v47;
                                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
                                {
                                    v35 = &v24;
                                    v36 = <serde_json::error::Error as core::fmt::Display>::fmt;
                                    v1 = &g_11f5c30;
                                    v5 = 1;
                                    v9 = 0;
                                    v7 = &v35;
                                    v8 = 1;
                                    v48 = log::__private_api::loc(&g_11f5c98);
                                    v11 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                                    v15 = 25;
                                    v17 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                                    v18 = 25;
                                    v19 = v48;
                                    log::__private_api::log(&(char)v1, 4, &v12);
                                    v47 = v24;
                                }
                                *((unsigned long long *)a0) = 0x8000000000000000;
                                core::ptr::drop_in_place<serde_json::error::Error>(v47);
                            }
                            else
                            {
                                memcpy(&v34, &v23, 16);
                                *((int128_t *)&v32) = *((int128_t *)&v20);
                                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                                {
                                    v20 = &(char)v32;
                                    v21 = <serde_json::value::Value as core::fmt::Debug>::fmt;
                                    v3 = &g_11f5c40;
                                    v5 = 1;
                                    v9 = 0;
                                    v7 = &v20;
                                    v8 = 1;
                                    v49 = log::__private_api::loc(&g_11f5c80);
                                    v13 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                                    v15 = 25;
                                    v17 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
                                    v18 = 25;
                                    v19 = v49;
                                    log::__private_api::log(&(char)v1, 5, &v12);
                                }
                                if ((char)v32 == 5)
                                {
                                    v50 = v33.get(*((long long *)&v34), "stackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json", 5);
                                    if (!v50)
                                        goto LABEL_bb44c1;
                                    if (v50->field_0 == 3)
                                    {
                                        (char)v1.to_vec(v50->field_10, v50->field_18);
                                        *((char **)&a0[16]) = v7;
                                        *((int128_t *)a0) = *((int128_t *)&v3);
                                    }
                                    else
                                    {
                                        *((unsigned long long *)a0) = 0x8000000000000000;
                                    }
                                    core::ptr::drop_in_place<serde_json::value::Value>(&(char)v32);
                                }
                                else
                                {
LABEL_bb44c1:
                                    *((unsigned long long *)a0) = 0x8000000000000000;
                                    core::ptr::drop_in_place<serde_json::value::Value>(&(char)v32);
                                }
                            }
                        }
                    }
                    else
                    {
LABEL_bb419e:
                        *((unsigned long long *)a0) = 0x8000000000000000;
                    }
                    core::ptr::drop_in_place<alloc::string::String>(&v28);
                    core::ptr::drop_in_place<alloc::string::String>(&v25);
                    return core::ptr::drop_in_place<std::fs::File>(v0);
                }
            }
        }
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<yaml_rust2::yaml::Yaml>,yaml_rust2::scanner::ScanError>>(&(char)v1);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::string::String>(&v25);
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
