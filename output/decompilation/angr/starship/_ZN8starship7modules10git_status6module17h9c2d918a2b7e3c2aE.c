long long starship::modules::git_status::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x478], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x470]
    int v2;  // [bp-0x468], Other Possible Types: char *, unsigned long long
    unsigned long long v3;  // [bp-0x460]
    void* v4;  // [bp-0x458], Other Possible Types: unsigned long long
    int v5;  // [bp-0x448]
    unsigned long long v6;  // [bp-0x438]
    char v7;  // [bp-0x430]
    unsigned long v8;  // [bp-0x420]
    char v9;  // [bp-0x418]
    int v10;  // [bp-0x410], Other Possible Types: char
    unsigned long v11;  // [bp-0x400], Other Possible Types: unsigned long long
    int v12;  // [bp-0x3f8]
    unsigned long long v13;  // [bp-0x3e8]
    char v14;  // [bp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    char v15;  // [bp-0x3d0], Other Possible Types: unsigned long long
    char v16;  // [bp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x3c0]
    char v18;  // [bp-0x3b8], Other Possible Types: unsigned long long
    int v19;  // [bp-0x3a8]
    unsigned long long v20;  // [bp-0x398]
    int v21;  // [bp-0x390], Other Possible Types: char
    int v22;  // [bp-0x380]
    int v23;  // [bp-0x370]
    int v24;  // [bp-0x360]
    int v25;  // [bp-0x350]
    char v26;  // [bp-0x340]
    unsigned long long v27;  // [bp-0x338]
    char *v28;  // [bp-0x330]
    unsigned long long v29;  // [bp-0x328]
    char v30;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0x318]
    unsigned long long v32;  // [bp-0x310]
    unsigned long long v33;  // [bp-0x308]
    char v34;  // [bp-0x300]
    int v35;  // [bp-0x2f0]
    int v36;  // [bp-0x2e0]
    int v37;  // [bp-0x2d0]
    int v38;  // [bp-0x2c0]
    int v39;  // [bp-0x2b0]
    int v40;  // [bp-0x2a0]
    int v41;  // [bp-0x290]
    int v42;  // [bp-0x280]
    int v43;  // [bp-0x270]
    int v44;  // [bp-0x260]
    int v45;  // [bp-0x250]
    char v46;  // [bp-0x240]
    char *v47;  // [bp-0x228]
    int v48;  // [bp-0x220]
    int v49;  // [bp-0x210]
    int v50;  // [bp-0x200]
    int v51;  // [bp-0x1f0]
    int v52;  // [bp-0x1e0]
    int v53;  // [bp-0x1d0]
    int v54;  // [bp-0x1c0]
    int v55;  // [bp-0x1b0]
    int v56;  // [bp-0x1a0]
    int v57;  // [bp-0x190]
    int v58;  // [bp-0x180]
    char v59;  // [bp-0x170]
    char *v60;  // [bp-0x160]
    unsigned long v61;  // [bp-0x158]
    unsigned long long v62;  // [bp-0x150]
    unsigned int v63;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v64;  // [bp-0x140]
    int v65;  // [bp-0x138]
    unsigned int v66;  // [bp-0x130]
    unsigned long v67;  // [bp-0x128]
    struct_0 *v68;  // [bp-0x120]
    char v69;  // [bp-0x118]
    struct_0 *v71;  // rdx
    int v72;  // xmm0
    unsigned long long v73;  // rax

    v21.new_module(a1, "git_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystal", 10);
    v30.try_load(v27);
    if (!((!v71 | (char)a1.get_repo()) & 1))
    {
        if (v71->field_389 != 3)
        {
            starship::modules::git_status::git_status_wsl(&v7, a1, v30, v31);
            if ((char)(((0 ^ *((long long *)&v7)) & (0 ^ -(*((long long *)&v7)))) >> 63))
            {
                core::ptr::drop_in_place<regex::error::Error>(&v7);
                v69.clone(&v30);
                v67 = a1;
                v68 = v71;
                v63 = 0;
                v66 = 0;
                v14.new(v32, v33);
                v47 = &v34;
                v48 = v35;
                v49 = v36;
                v50 = v37;
                v51 = v38;
                v52 = v39;
                v53 = v40;
                v54 = v41;
                v55 = v42;
                v56 = v43;
                v57 = v44;
                v58 = v45;
                memcpy(&v59, &v46, 16);
                v60 = &(char)v62;
                v61 = a1;
                if (v14 == 0x8000000000000000)
                {
                    v11 = v17;
                    memcpy(&v10, &v15, 16);
LABEL_b9a42a:
                    v13 = v11;
                    v12 = v10;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                    {
                        v28 = &v12;
                        v29 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v0 = &g_11f4938;
                        v1 = 1;
                        v4 = 0;
                        v2 = &v28;
                        v3 = 1;
                        v14 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                        v15 = 29;
                        v16 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                        v17 = 29;
                        v18 = log::__private_api::loc(&g_11f4960);
                        log::__private_api::log(&v0, 2, &v14);
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v12);
                }
                else
                {
                    v6 = v20;
                    v72 = *((int128_t *)&v14);
                    v5 = v19;
                    memcpy(&v4, &v18, 16);
                    *((int128_t *)&v2) = *((int128_t *)&v16);
                    v0 = v72;
                    starship::modules::git_status::module::{{closure}}(&v9, &v47, &(char)v0);
                    if ((v9 & 1))
                        goto LABEL_b9a42a;
                    if (v11)
                    {
                        v21.set_segments(&v10);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v26);
                        a0[64] = v25;
                        a0[48] = v24;
                        a0[32] = v23;
                        a0[16] = v22;
                        *(a0) = v21;
                        return core::ptr::drop_in_place<starship::modules::git_status::GitStatusInfo>(&(char)v62);
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<starship::segment::Segment>>(&v10);
                }
                core::ptr::drop_in_place<starship::modules::git_status::GitStatusInfo>(&(char)v62);
                return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v21);
            }
            else
            {
                if (v8)
                {
                    v0 = 2;
                    (char)v62.from_text(&v0, &v7);
                    v73 = v21.set_segments(&(char)v62);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v26);
                    a0[64] = v25;
                    a0[48] = v24;
                    a0[32] = v23;
                    a0[16] = v22;
                    *(a0) = v21;
                    return v73;
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v7);
                return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v21);
            }
        }
        else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
        {
            v62 = &g_11f4928;
            v63 = 1;
            v64 = 8;
            *((uint128_t *)&v65) = 0;
            v0 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
            v1 = 29;
            v2 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
            v3 = 29;
            v4 = log::__private_api::loc(&g_11f4948);
            log::__private_api::log(&v62, 4, &v0);
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v21);
}
