long long starship::modules::git_status::get_stashed_count(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x5b0]
    unsigned long long v1;  // [bp-0x5a8]
    unsigned long long v2;  // [bp-0x5a0]
    unsigned long long v3;  // [bp-0x598]
    unsigned long long v4;  // [bp-0x590]
    unsigned long long v5;  // [bp-0x588]
    char v6;  // [bp-0x580], Other Possible Types: unsigned long long
    char v7;  // [bp-0x578], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x570], Other Possible Types: unsigned long long
    int v9;  // [bp-0x568], Other Possible Types: char, unsigned long long
    void* v10;  // [bp-0x560], Other Possible Types: char
    char v11;  // [bp-0x558]
    char v12;  // [bp-0x550]
    char v13;  // [bp-0x548]
    char v14;  // [bp-0x540]
    unsigned long long v15;  // [bp-0x538]
    unsigned long long v16;  // [bp-0x530]
    void* v17;  // [bp-0x528], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x520]
    void* v19;  // [bp-0x518], Other Possible Types: char *
    unsigned long v20;  // [bp-0x510], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x508]
    char *v22;  // [bp-0x4f8]
    unsigned long v23;  // [bp-0x4f0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x4e0]
    int v25;  // [bp-0x4d8]
    char v26;  // [bp-0x4c8]
    char v27;  // [bp-0x4b8]
    char v28;  // [bp-0x4a8]
    unsigned long long v29;  // [bp-0x498]
    unsigned long long v30;  // [bp-0x488]
    char *v31;  // [bp-0x478]
    unsigned long long v32;  // [bp-0x470]
    char v33;  // [bp-0x468]
    unsigned long long v34;  // [bp-0x458]
    char v35;  // [bp-0x450]
    unsigned long long v37;  // rbx

    v35.open(a0);
    v6.try_find_reference(&v35);
    v37 = 1;
    if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
    {
        if (v6 == 9223372036854775809)
        {
            v29 = v15;
            memcpy(&v28, &v13, 16);
            memcpy(&v27, &v11, 16);
            memcpy(&v26, &v9, 16);
            *((int128_t *)&v25) = *((int128_t *)&v7);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
            {
                v22 = &(char)v25;
                v23 = <gix::reference::errors::find::Error as core::fmt::Display>::fmt;
                v17 = &g_11f4aa8;
                v18 = 1;
                v21 = 0;
                v19 = &v22;
                v20 = 1;
                v1 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                v2 = 29;
                v3 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                v4 = 29;
                v5 = log::__private_api::loc(&g_11f4b08);
                log::__private_api::log(&v17, 4, &v1);
            }
            core::ptr::drop_in_place<gix::reference::errors::find::Error>(&(char)v25);
            v37 = 0;
        }
        else
        {
            if ((char)v7.equal(v8, "refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git status outputMissing line type in git status output", 10))
            {
                v30 = v16;
                memcpy(&(char)v29, &v14, 16);
                memcpy(&v28, &v12, 16);
                memcpy(&v27, &v10, 16);
                memcpy(&v26, &v8, 16);
                *((int128_t *)&v25) = *((int128_t *)&v6);
                v20 = v30 + 800;
                memcpy(&v21, &v25, 16);
                v17 = 0;
                v18 = 1;
                v19 = 0;
                (char)v22.all(&v17);
                if ((int)v22 == 1)
                {
                    v0 = v23;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
                    {
                        v31 = &v0;
                        v32 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v6 = &g_11f4ac8;
                        v7 = 1;
                        v10 = 0;
                        v8 = &v31;
                        v9 = 1;
                        v1 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                        v2 = 29;
                        v3 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                        v4 = 29;
                        v5 = log::__private_api::loc(&g_11f4af0);
                        log::__private_api::log(&v6, 4, &v1);
                    }
                    core::ptr::drop_in_place<std::io::error::Error>(&v0);
                    v37 = 0;
                }
                else if (v23)
                {
                    v34 = v24;
                    memcpy(&v33, &v23, 16);
                    v33.fold();
                    v37 = 1;
                }
                else
                {
                    v37 = 1;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
                    {
                        v6 = &g_11f4ab8;
                        v7 = 1;
                        v8 = 8;
                        *((uint128_t *)&v9) = 0;
                        v1 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                        v2 = 29;
                        v3 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                        v4 = 29;
                        v5 = log::__private_api::loc(&g_11f4ad8);
                        log::__private_api::log(&v6, 4, &v1);
                    }
                }
                core::ptr::drop_in_place<gix_ref::store_impl::file::log::iter::Platform>(&v17);
                core::ptr::drop_in_place<gix::types::Reference>(&(char)v25);
                core::ptr::drop_in_place<gix::types::Repository>(&v35);
                return v37;
            }
            core::ptr::drop_in_place<gix::types::Reference>(&v6);
        }
    }
    core::ptr::drop_in_place<gix::types::Repository>(&v35);
    return v37;
}
