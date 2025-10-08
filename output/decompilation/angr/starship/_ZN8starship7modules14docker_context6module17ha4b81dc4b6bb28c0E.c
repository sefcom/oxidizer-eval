void starship::modules::docker_context::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x2e8]
    int v1;  // [bp-0x2e8]
    unsigned long long v2;  // [bp-0x2e8]
    int v3;  // [bp-0x2e0]
    unsigned long long v4;  // [bp-0x2d8]
    char v5;  // [bp-0x2d0]
    unsigned long long v6;  // [bp-0x2d0]
    int v7;  // [bp-0x2cf]
    int v8;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v9;  // [bp-0x2c8]
    int v10;  // [bp-0x2c0], Other Possible Types: unsigned long long
    int v11;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2b0]
    int v13;  // [bp-0x2a8]
    int v14;  // [bp-0x2a0]
    unsigned long long v15;  // [bp-0x290]
    char v16;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x280]
    int v18;  // [bp-0x280]
    unsigned long long v19;  // [sp-0x278]
    unsigned long long v20;  // [bp-0x270]
    int v21;  // [bp-0x268], Other Possible Types: char
    unsigned long long v22;  // [bp-0x258]
    int v23;  // [bp-0x248], Other Possible Types: char
    unsigned long long v24;  // [bp-0x240]
    void* v25;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x230]
    int v27;  // [bp-0x228], Other Possible Types: char *
    unsigned long long v28;  // [bp-0x220]
    unsigned long long v29;  // [bp-0x218]
    char v30;  // [bp-0x210]
    unsigned long long v31;  // [bp-0x208]
    unsigned long long v32;  // [bp-0x200]
    int v33;  // [bp-0x1f8], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v34;  // [bp-0x1f8]
    char v35;  // [bp-0x1f0], Other Possible Types: unsigned long long
    int v36;  // [bp-0x1e8], Other Possible Types: char *, unsigned long long
    unsigned long long v37;  // [bp-0x1e8]
    unsigned long long v38;  // [bp-0x1e0]
    int v39;  // [bp-0x1d8], Other Possible Types: void*, unsigned long long
    unsigned long long v40;  // [bp-0x1d0]
    int v41;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0x1c0]
    unsigned long long v43;  // [bp-0x1b8]
    int v44;  // [bp-0x148], Other Possible Types: char
    char v45;  // [bp-0x138]
    char *v46;  // [bp-0x128]
    char *v47;  // [bp-0x120]
    unsigned long v48;  // [bp-0x118]
    int v49;  // [bp-0x110], Other Possible Types: char
    int v50;  // [bp-0x100]
    int v51;  // [bp-0xf0]
    int v52;  // [bp-0xe0]
    int v53;  // [bp-0xd0]
    char v54;  // [bp-0xc0]
    unsigned long long v55;  // [bp-0xb8]
    char v56;  // [bp-0xb0]
    char v57;  // [bp-0xa8]
    char v58;  // [bp-0x90]
    int v59;  // [bp-0x78]
    char v60;  // [bp-0x68]
    char v61;  // [bp-0x58]
    unsigned long long v62;  // [bp-0x48]
    unsigned long long v63;  // [bp-0x40]
    char v64;  // [bp-0x38]
    int v66;  // xmm0
    int v67;  // xmm1
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    char v70;  // dl
    char v71;  // al
    int v72;  // xmm0
    struct_0 *v73;  // rax
    unsigned long long v74;  // rbp
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    unsigned long long v78;  // rax

    v49.new_module(a1, "docker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycon", 14);
    v56.try_load(v55);
    if (v64)
    {
        v33.try_begin_scan(a1);
        if (*((long long *)&v33))
        {
            v66 = *((int128_t *)&v57);
            v67 = *((int128_t *)&v58);
            v6 = *((long long *)&v33);
            v8 = v67;
            v11 = v59;
            v13 = v66;
            if ((char)(char)v6.is_match())
                goto LABEL_b8ff0d;
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
LABEL_b8ff0d:
        v21.get_env_os("DOCKER_CONFIGunix://Error in module `docker_context`:\n", 13);
        (char)v33.get_home();
        v68 = *((long long *)&v33);
        if ((char)(((0 ^ v68) & (0 ^ -(v68))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            v21.drop_in_place<core::option::Option<gix_ref::FullName>>();
        }
        else
        {
            *((int128_t *)&v9) = *((int128_t *)&v35);
            v6 = v68;
            v23.join(v8, v10, ".dockerconfig.jsonDOCKER_MACHINE_NAMEDOCKER_HOSTDOCKER_CONTEXTcurrentContextdesktop-linuxsrc/modules/docker_context.rs", 7);
            v19 = v25;
            memcpy(&v16, &v23, 16);
            if (*((long long *)&v21) == 0x8000000000000000)
            {
                v4 = v19;
                *((int128_t *)&v0) = *((int128_t *)&v16);
            }
            else
            {
                v4 = v22;
                v0 = v21;
                core::ptr::drop_in_place<gix_ref::FullName>(&v16);
            }
            (char)v33.to_vec((long long)(&v0)[8], v4);
            v29 = v36;
            *((int128_t *)&v27) = *((int128_t *)&v33);
            v30.join(v28, v36, "config.jsonDOCKER_MACHINE_NAMEDOCKER_HOSTDOCKER_CONTEXTcurrentContextdesktop-linuxsrc/modules/docker_context.rs", 11);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v27);
            core::ptr::drop_in_place<gix_ref::FullName>(&(char)v2);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
            v33 = 0;
            v35 = 3;
            v37 = "DOCKER_MACHINE_NAMEDOCKER_HOSTDOCKER_CONTEXTcurrentContextdesktop-linuxsrc/modules/docker_context.rs";
            v38 = 19;
            v39 = "DOCKER_HOSTDOCKER_CONTEXTcurrentContextdesktop-linuxsrc/modules/docker_context.rs";
            v40 = 11;
            v41 = "DOCKER_CONTEXTcurrentContextdesktop-linuxsrc/modules/docker_context.rs";
            v42 = 14;
            (char)v6.try_fold(&(char)v33, &v36, 3);
            if (*((long long *)&(char)v6) == 0x8000000000000000)
            {
                core::ptr::drop_in_place<versions::Chunk>(&(char)v6);
            }
            else
            {
                memcpy(&v44, &v9, 16);
                if (*((long long *)&(char)v6) != 0x8000000000000000)
                {
                    v2 = *((long long *)&(char)v6);
                    v3 = v44;
                    goto LABEL_b901e4;
                }
            }
            std::fs::metadata(&(char)v33, v31, v32);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v33);
            if ((unsigned int)v33 == 2)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
LABEL_b90276:
                core::ptr::drop_in_place<std::path::PathBuf>(&v30);
            }
            else
            {
                v37 = v32;
                *((int128_t *)&v34) = *((int128_t *)&v30);
                starship::utils::read_file(&(char)v6, &(char)v33);
                v69 = v6;
                if (v69 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&(char)v6);
                    *((unsigned long long *)a0) = 0x8000000000000000;
                }
                else
                {
                    *((int128_t *)&v18) = *((int128_t *)&v8);
                    v16 = v69;
                    *((int128_t *)&v23) = (int128_t)v18;
                    v25 = 0;
                    serde_json::de::from_trait(&(char)v33, &v23, v70);
                    v71 = (char)v34;
                    if (v71 == 6)
                    {
                        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&(char)v33);
                        *((unsigned long long *)a0) = 0x8000000000000000;
                        goto LABEL_b903f7;
                    }
                    v72 = (int128_t)(&v34)[1];
                    *((int128_t *)&v10) = *((int128_t *)&v37);
                    v7 = v72;
                    v5 = v71;
                    v73 = v5.get("currentContextdesktop-linuxsrc/modules/docker_context.rs", 14);
                    if (v73 && v73->field_0 == 3)
                    {
                        (char)v33.to_vec(v73->field_10, v73->field_18);
                        v4 = v37;
                        *((int128_t *)&v1) = (int128_t)v34;
                        core::ptr::drop_in_place<serde_json::value::Value>(&v5);
                        core::ptr::drop_in_place<alloc::string::String>(&v16);
LABEL_b901e4:
                        v16 = "defaultdriverrecursivemergeshowUntrackedFilesrenamesstatusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR";
                        v17 = 7;
                        v19 = "desktop-linuxsrc/modules/docker_context.rs";
                        v20 = 13;
                        v74 = (long long)(&v1)[8];
                        v33 = v74;
                        v35 = v4;
                        if ((char)v33.slice_contains(&v16, 2) || (char)core::slice::<impl [T]>::starts_with(v74, v35, "unix://Error in module `docker_context`:\n", 7))
                        {
                            *((unsigned long long *)a0) = 0x8000000000000000;
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
                            if (!(0))
                                goto LABEL_b90276;
                        }
                        else
                        {
                            v5.new(v62, v63);
                            memcpy(&v45, &v60, 16);
                            v46 = &v61;
                            v47 = &(char)v2;
                            v48 = a1;
                            if (*((long long *)&(char)v6) == 0x8000000000000000)
                            {
                                v26 = v11;
                                memcpy(&v24, &v8, 16);
                            }
                            else
                            {
                                v43 = v15;
                                v75 = *((int128_t *)&v6);
                                v76 = *((int128_t *)&v10);
                                v77 = *((int128_t *)&v12);
                                v41 = v14;
                                v39 = v77;
                                v36 = v76;
                                v33 = v75;
                                starship::modules::docker_context::module::{{closure}}(&v23, &v45, &(char)v33);
                                if (!((char)v23 & 1))
                                {
                                    v49.set_segments(&v24);
                                    *((int128_t *)&a0[80]) = *((int128_t *)&v54);
                                    a0[64] = v53;
                                    a0[48] = v52;
                                    a0[32] = v51;
                                    a0[16] = v50;
                                    *(a0) = v49;
                                    core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
                                    core::ptr::drop_in_place<std::path::PathBuf>(&v30);
                                    core::ptr::drop_in_place<starship::configs::mojo::MojoConfig>(&v56);
                                    return;
                                }
                            }
                            v22 = v26;
                            memcpy(&v21, &v24, 16);
                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                            {
                                v27 = &v21;
                                v28 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                                v33 = &g_11f43e8;
                                v35 = 1;
                                v39 = 0;
                                v36 = &v27;
                                v38 = 1;
                                v78 = log::__private_api::loc(&g_11f43f8);
                                v6 = "starship::modules::docker_contextcontextError in module `dotnet`:\nsrc/modules/dotnet.rs";
                                v8 = 33;
                                v10 = "starship::modules::docker_contextcontextError in module `dotnet`:\nsrc/modules/dotnet.rs";
                                v11 = 33;
                                v12 = v78;
                                log::__private_api::log(&(char)v33, 2, &v5);
                            }
                            *((unsigned long long *)a0) = 0x8000000000000000;
                            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v21);
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
                            if (!(0))
                                goto LABEL_b90276;
                        }
                    }
                    else
                    {
                        *((unsigned long long *)a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<serde_json::value::Value>(&v5);
LABEL_b903f7:
                        core::ptr::drop_in_place<alloc::string::String>(&v16);
                    }
                }
            }
        }
    }
    core::ptr::drop_in_place<starship::configs::mojo::MojoConfig>(&v56);
    core::ptr::drop_in_place<starship::module::Module>(&v49);
    return;
}
