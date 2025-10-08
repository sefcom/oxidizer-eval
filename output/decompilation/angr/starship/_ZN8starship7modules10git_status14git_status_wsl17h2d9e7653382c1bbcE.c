long long starship::modules::git_status::git_status_wsl(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x750]
    unsigned long long v1;  // [bp-0x748]
    char *v2;  // [bp-0x738], Other Possible Types: int
    unsigned long long v3;  // [bp-0x730]
    char v4;  // [bp-0x728]
    unsigned long long v5;  // [bp-0x718]
    char v6;  // [bp-0x710], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x708]
    char v8;  // [bp-0x700]
    unsigned long v9;  // [bp-0x6f8]
    unsigned long long v10;  // [bp-0x6f0]
    char *v11;  // [bp-0x6e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [bp-0x6e0]
    int v13;  // [bp-0x6d8]
    int v14;  // [bp-0x6c8]
    unsigned long long v15;  // [bp-0x6b8]
    char *v16;  // [bp-0x6b0]
    unsigned long long v17;  // [bp-0x6a8]
    int v18;  // [bp-0x6a0], Other Possible Types: char
    unsigned long long v19;  // [bp-0x690]
    int v20;  // [bp-0x688]
    unsigned long long v21;  // [bp-0x680]
    int v22;  // [bp-0x678]
    int v23;  // [bp-0x668]
    unsigned long long v24;  // [bp-0x658]
    unsigned long v25;  // [bp-0x648], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x640]
    int v27;  // [bp-0x638]
    int v28;  // [bp-0x628]
    unsigned long long v29;  // [bp-0x618]
    char *v30;  // [bp-0x610], Other Possible Types: char, unsigned long long
    char *v31;  // [bp-0x610]
    unsigned long long v32;  // [bp-0x608]
    unsigned long long v33;  // [bp-0x600]
    unsigned long long v34;  // [bp-0x5f8]
    unsigned long long v35;  // [bp-0x5f0]
    unsigned long long v36;  // [bp-0x540]
    unsigned long long v38;  // [bp-0x538]
    char *v39;  // [bp-0x530], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x528]
    void* v41;  // [bp-0x520], Other Possible Types: unsigned long long
    int v42;  // [bp-0x3b8], Other Possible Types: char, unsigned long long, unsigned long
    char v43;  // [bp-0x3b7]
    unsigned long long v44;  // [sp-0x3b0]
    int v45;  // [sp-0x3a8], Other Possible Types: char *
    unsigned long long v46;  // [bp-0x3a8]
    int v47;  // [bp-0x3a0], Other Possible Types: unsigned long long
    int v48;  // [bp-0x398], Other Possible Types: void*
    unsigned long long v49;  // [bp-0x388]
    int v50;  // [bp-0x228]
    unsigned long long v51;  // [bp-0x218]
    unsigned long long v52;  // [bp-0x210]
    char v53;  // [bp-0x208]
    char v54;  // [bp-0x1f0], Other Possible Types: unsigned long
    char v55;  // [bp-0x1e8]
    char v56;  // [bp-0x110], Other Possible Types: unsigned long
    char v57;  // [bp-0x108]
    void* v59;  // rbx
    char v61;  // al
    unsigned long long v62;  // rax
    unsigned long long v63;  // rbp
    unsigned long long v64;  // r14
    unsigned long long v65;  // rdx
    unsigned long long v66;  // r14
    int v67;  // xmm0

    v59 = a0;
    if (a2)
    {
        nix::sys::utsname::uname(&v42);
        if (v42 != 1)
        {
            memcpy(&(char)v36, &v43, 390);
            v30.from_utf8_lossy((char)v36.release(), a2);
            v61 = "icrosoft%H:%M:%SdivergedNoMemoryBufError@".is_contained_in(8, v32, v33);
            v62 = (unsigned long long)core::ptr::drop_in_place<versions::Chunk>(&v30);
            if (!v61)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                return v62;
            }
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                v42 = &g_11f4c38;
                v44 = 1;
                v46 = 8;
                *((uint128_t *)&v47) = 0;
                v36 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                v38 = 29;
                v39 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                v40 = 29;
                v41 = log::__private_api::loc(&g_11f4ca8);
                log::__private_api::log(&v42, 5, &v36);
            }
            starship::utils::create_command(&v54, "wslpathWSLENV-wSTARSHIP_CONFIG/wp:STARSHIP_CONFIG/wp/dev/nullmodule--pathError in module `gleam`:\nsrc/modules/gleam.rs", 7);
            if (v54 == 0x8000000000000000)
            {
                v63 = *((long long *)&v55);
                goto LABEL_b9d8c0;
            }
            else
            {
                v0 = a0;
                memcpy(&v42, &v54, 224);
                starship::modules::git_status::git_status_wsl::{{closure}}(&(char)v36, a1, &v42);
                v63 = v38;
                memcpy(&v30, &v39, 208);
                if (v36 == 0x8000000000000000)
                {
                    v59 = v0;
LABEL_b9d8c0:
                    v26 = v63;
                    v25 = 0x8000000000000000;
                }
                else
                {
                    memcpy(&v46, &v30, 208);
                    v42 = v36;
                    v44 = v63;
                    starship::modules::git_status::git_status_wsl::{{closure}}(&(char)v25, &v42);
                    v59 = v0;
                    if (v25 == 0x8000000000000000)
                    {
                        v63 = v26;
                    }
                    else
                    {
                        v24 = v29;
                        v23 = v28;
                        v22 = v27;
                        *((int128_t *)&v20) = *((int128_t *)&v25);
                        core::str::converts::from_utf8(&v30, v21, (long long)v22);
                        if ((int)v30 == 1)
                        {
                            *((int128_t *)&v2) = *((int128_t *)&v32);
                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
                            {
                                v11 = &(char)v2;
                                v12 = <core::str::error::Utf8Error as core::fmt::Debug>::fmt;
                                v42 = &g_11f4c58;
                                v44 = 1;
                                v48 = 0;
                                v45 = &v11;
                                v47 = 1;
                                v36 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                v38 = 29;
                                v39 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                v40 = 29;
                                v41 = log::__private_api::loc(&g_11f4d20);
                                log::__private_api::log(&v42, 1, &v36);
                                goto LABEL_b9dd40;
                            }
                        }
                        else
                        {
                            v1 = core::str::<impl str>::trim_end_matches(v32, v33);
                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                            {
                                v31 = &v1;
                                v32 = <&T as core::fmt::Display>::fmt;
                                v42 = &g_11f4c68;
                                v44 = 1;
                                v48 = 0;
                                v46 = &v31;
                                v47 = 1;
                                v36 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                v38 = 29;
                                v39 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                v40 = 29;
                                v41 = log::__private_api::loc(&g_11f4cc0);
                                log::__private_api::log(&v42, 5, &v36);
                            }
                            if ((char)core::slice::<impl [T]>::starts_with(v1, v65, "\\\\wslNot a Windows pathFailed to run Git Status module on Windows:\nFailed to parse Windows Git Status module status output:\n", 5))
                            {
                                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                                {
                                    v42 = &g_11f4c78;
                                    v44 = 1;
                                    v46 = 8;
                                    *((uint128_t *)&v47) = 0;
                                    v36 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                    v38 = 29;
                                    v39 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                    v40 = 29;
                                    v41 = log::__private_api::loc(&g_11f4d08);
                                    log::__private_api::log(&v42, 5, &v36);
                                }
LABEL_b9dd40:
                                *((unsigned long long *)v0) = 0x8000000000000000;
                            }
                            else
                            {
                                std::env::var(&v42, "WSLENV-wSTARSHIP_CONFIG/wp:STARSHIP_CONFIG/wp/dev/nullmodule--pathError in module `gleam`:\nsrc/modules/gleam.rs", 6);
                                v18.map_or_else(&v42);
                                starship::utils::create_command(&v56, a2, a3);
                                v52 = a1;
                                v50 = v18;
                                v51 = v19;
                                memcpy(&v53, &v1, 16);
                                if (v56 == 0x8000000000000000)
                                {
                                    v66 = *((long long *)&v57);
                                    core::ptr::drop_in_place<indexmap::map::core::entry::VacantEntry<alloc::string::String,toml::value::Value>>(&v50);
                                    goto LABEL_b9de95;
                                }
                                else
                                {
                                    memcpy(&v42, &v56, 224);
                                    starship::modules::git_status::git_status_wsl::{{closure}}(&(char)v36, &v50, &v42);
                                    v66 = v38;
                                    memcpy(&v30, &v39, 208);
                                    if (v36 == 0x8000000000000000)
                                        goto LABEL_b9de95;
                                    memcpy(&v46, &v30, 208);
                                    v42 = v36;
                                    v44 = v66;
                                    starship::modules::git_status::git_status_wsl::{{closure}}(&(char)v11, &v42);
                                    if (v11 == 0x8000000000000000)
                                    {
                                        v66 = v12;
LABEL_b9de95:
                                        v6 = v66;
                                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
                                        {
                                            v2 = &v6;
                                            v3 = <std::io::error::Error as core::fmt::Display>::fmt;
                                            v36 = &g_11f4c88;
                                            v38 = 1;
                                            v41 = 0;
                                            v39 = &v2;
                                            v40 = 1;
                                            v30 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                            v32 = 29;
                                            v33 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                            v34 = 29;
                                            v35 = log::__private_api::loc(&g_11f4cf0);
                                            log::__private_api::log(&v36, 1, &v30);
                                        }
                                        *((unsigned long long *)v0) = 0x8000000000000000;
                                        core::ptr::drop_in_place<std::io::error::Error>(&v6);
                                    }
                                    else
                                    {
                                        v49 = v15;
                                        v67 = *((int128_t *)&v11);
                                        v48 = v14;
                                        v45 = v13;
                                        v42 = v67;
                                        v6.from_utf8(&(char)v11);
                                        if (v6 == 0x8000000000000000)
                                        {
                                            *((unsigned long *)&v0[16]) = v9;
                                            *((int128_t *)v0) = *((int128_t *)&v7);
                                        }
                                        else
                                        {
                                            v5 = v10;
                                            memcpy(&v4, &v8, 16);
                                            *((int128_t *)&v2) = *((int128_t *)&v6);
                                            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
                                            {
                                                v16 = &(char)v2;
                                                v17 = <alloc::string::FromUtf8Error as core::fmt::Display>::fmt;
                                                v36 = &g_11f4c98;
                                                v38 = 1;
                                                v41 = 0;
                                                v39 = &v16;
                                                v40 = 1;
                                                v30 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                                v32 = 29;
                                                v33 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                                                v34 = 29;
                                                v35 = log::__private_api::loc(&g_11f4cd8);
                                                log::__private_api::log(&v36, 1, &v30);
                                            }
                                            *((unsigned long long *)v0) = 0x8000000000000000;
                                            core::ptr::drop_in_place<alloc::string::FromUtf8Error>(&(char)v2);
                                        }
                                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v47);
                                    }
                                }
                            }
                        }
                        return (unsigned long long)core::ptr::drop_in_place<std::process::Output>(&(char)v20);
                    }
                }
                v11 = v63;
                v64 = (!(char)v63.kind()) * 3 + 1;
                if (v64 <= (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
                {
                    v30 = &v11;
                    v32 = <std::io::error::Error as core::fmt::Debug>::fmt;
                    v42 = &g_11f4c48;
                    v44 = 1;
                    v48 = 0;
                    v45 = &v30;
                    v47 = 1;
                    v36 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                    v38 = 29;
                    v39 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                    v40 = 29;
                    v41 = log::__private_api::loc(&g_11f4d38);
                    log::__private_api::log(&v42, v64, &v36);
                }
                *((long long *)v59) = 0x8000000000000000;
                return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v11);
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
