long long starship::modules::git_status::get_repo_status(void* a0, struct_1 *a1, struct_2 *a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x1d48]
    char v1;  // [bp-0x1d40]
    unsigned long v2;  // [bp-0x1d38], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1d38]
    int v4;  // [bp-0x1d38]
    int v5;  // [bp-0x1d30]
    unsigned long long v6;  // [bp-0x1d28]
    void* v7;  // [bp-0x1d18]
    int v8;  // [bp-0x1d08]
    void* v9;  // [bp-0x1d08]
    void* v10;  // [bp-0x1cf8]
    unsigned long long v11;  // [bp-0x1cf0]
    uint128_t v12;  // [bp-0x1ce8]
    uint128_t v13;  // [bp-0x1cd8]
    uint128_t v14;  // [bp-0x1cc8]
    int v15;  // [bp-0x1cb8]
    unsigned long long v16;  // [bp-0x1cb0]
    int v17;  // [bp-0x1ca8], Other Possible Types: struct_1 *
    void* v18;  // [bp-0x1ca8]
    unsigned short v19;  // [bp-0x1c98]
    unsigned long v20;  // [bp-0x1c98]
    char v21;  // [bp-0x1c96]
    int v22;  // [bp-0x1c90]
    unsigned long long v23;  // [bp-0x1c88]
    char v24;  // [bp-0x1c80]
    unsigned long long v25;  // [bp-0x1c70]
    char v26;  // [bp-0x1c68]
    int v27;  // [bp-0x1c50]
    void* v28;  // [bp-0x1c40]
    unsigned long long v29;  // [bp-0x1c38]
    char v30;  // [bp-0x1c30]
    char v31;  // [bp-0x1c20]
    char v32;  // [bp-0x1c10]
    unsigned short v33;  // [bp-0x1c00]
    int v34;  // [bp-0x1bf8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [bp-0x1bf8]
    unsigned long long v36[4];  // [bp-0x1bf0], Other Possible Types: unsigned long long
    char *v37;  // [sp-0x1be8], Other Possible Types: unsigned long long
    int v38;  // [bp-0x1be0], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x1bd8]
    unsigned long long v40;  // [bp-0x1bd0]
    unsigned long long v41;  // [bp-0x1bc8]
    unsigned long long v42;  // [bp-0x1bc0]
    unsigned int v43;  // [bp-0x1960]
    unsigned int v44;  // [bp-0x195c]
    unsigned long long v45;  // [bp-0x1958]
    unsigned int v46;  // [bp-0x1950]
    unsigned long long v47;  // [bp-0x194c]
    char v48;  // [bp-0x1944]
    unsigned short v49;  // [bp-0x1943]
    char v50;  // [bp-0x1941]
    void* v51;  // [bp-0x1908], Other Possible Types: unsigned long long
    unsigned short v52;  // [bp-0x1908]
    void* v53;  // [bp-0x1908]
    unsigned long long v54;  // [bp-0x1908]
    char v55;  // [bp-0x1906]
    unsigned long long v56;  // [bp-0x1900]
    int v57;  // [sp-0x18f8], Other Possible Types: char, unsigned long long
    int v58;  // [bp-0x18f8]
    int v59;  // [bp-0x18f0]
    int v60;  // [sp-0x18e8]
    char v61;  // [bp-0x18e0]
    char v62;  // [bp-0x18d8]
    unsigned short v63;  // [bp-0x18c8]
    unsigned long v64;  // [sp-0x1318], Other Possible Types: unsigned long long
    unsigned int v65;  // [bp-0x1314]
    unsigned long v66;  // [bp-0x1310], Other Possible Types: unsigned long long
    int v67;  // [bp-0x1310]
    unsigned long v68;  // [bp-0x1308], Other Possible Types: unsigned int
    unsigned int v69;  // [bp-0x1304]
    int v70;  // [bp-0x1300], Other Possible Types: unsigned long long
    char v71;  // [bp-0x12fc]
    unsigned short v72;  // [bp-0x12fb]
    char v73;  // [bp-0x12f9]
    unsigned long long v74;  // [bp-0x12f8]
    unsigned long long v75;  // [bp-0x12f0]
    void* v76;  // [bp-0x1030]
    char v77;  // [bp-0xd28], Other Possible Types: unsigned long, unsigned long long
    int v78;  // [bp-0xd20]
    char v79;  // [bp-0xd10]
    char v80;  // [bp-0xd08]
    int v81;  // [bp-0xd07]
    char v82;  // [bp-0xd00]
    char v83;  // [bp-0xa40]
    char v84;  // [bp-0x8c0]
    unsigned long long v85;  // [bp-0x600]
    char v86;  // [bp-0x5f8]
    char v87;  // [bp-0x318]
    unsigned long long v89;  // rax
    unsigned long long v90;  // r13
    char v91;  // cc_dep1
    int v92;  // xmm1
    char v93;  // r14b
    unsigned long long v94;  // r8
    unsigned long long v95;  // r9
    char v96;  // al
    unsigned long long v97;  // cc_op
    void* v98;  // cc_dep1
    unsigned long long v99;  // cc_dep2
    unsigned int v100;  // ebp
    unsigned int v101;  // esi
    unsigned int v102;  // ymm0
    unsigned int v103;  // ecx
    unsigned long long v104;  // rdx
    int v105;  // xmm0
    unsigned long long v106;  // rax
    unsigned long long v107;  // rdx
    unsigned long long v108;  // rax
    unsigned long long v109;  // r14
    unsigned long long v110;  // r14
    unsigned long long v111;  // rax
    unsigned long long v112;  // rcx
    unsigned long long v113[4];  // rax
    unsigned long long v114;  // rcx
    unsigned long long v115;  // rdx
    unsigned long long v116;  // rsi
    unsigned long long v117;  // rax
    int v118;  // xmm0
    int v119;  // xmm0
    int v120;  // xmm2

    v76 = 0;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v51 = &g_11f49c8;
        v56 = 1;
        v57 = 8;
        *((uint128_t *)&v59) = 0;
        v89 = log::__private_api::loc(&g_11f49e8);
        v64 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
        v66 = 29;
        v68 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
        v70 = 29;
        v74 = v89;
        log::__private_api::log(&(char)v51, 4, &(char)v64);
    }
    v7 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    *((uint128_t *)&v15) = 0;
    v83.open(a2);
    v90 = a3->field_d8;
    if (a3->field_f2 || a2->field_388 == 1)
    {
LABEL_b9b387:
        v113 = 8.alloc_impl(32, 0);
        if (!v113)
            alloc::alloc::handle_alloc_error(8, 32); /* do not return */
        v113[0] = "statusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR";
        v113[1] = 6;
        v113[2] = "--porcelain=2--untracked-files=no--ignore-submodules=untracked--ignore-submodules=dirty# branch.ab refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git status outputMissing line type in git sta";
        v113[3] = 13;
        v34 = 2;
        v36[0] = v113;
        v37 = 2;
        if (a3->field_68 || a3->field_48 || a3->field_78 || a3->field_58)
            v34.push("--branch", 8, &g_11f4a48);
        if (v90)
        {
            if (!a3->field_f0)
                goto LABEL_b9b4e6;
LABEL_b9b45e:
            v114 = &g_11f4a90;
            v115 = 25;
            v116 = "--ignore-submodules=dirty# branch.ab refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git status outputMissing line type in git status output";
        }
        else
        {
            v34.push("--untracked-files=no--ignore-submodules=untracked--ignore-submodules=dirty# branch.ab refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git status outputMissing line type in git status output", 20, &g_11f4a60);
            if (a3->field_f0 == 1)
                goto LABEL_b9b45e;
            v114 = &g_11f4a78;
            v115 = 29;
            v116 = "--ignore-submodules=untracked--ignore-submodules=dirty# branch.ab refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git status outputMissing line type in git status output";
        }
        v34.push(v116, v115, v114);
LABEL_b9b4e6:
        v52.exec_git(a2, a1, v36, 2);
        v117 = v51;
        if ((char)(((0 ^ v117) & (0 ^ -(v117))) >> 63))
        {
            *((unsigned long long *)a0) = 2;
            core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v34, v36);
            core::ptr::drop_in_place<gix::types::Repository>(&v83);
            return (unsigned long long)core::ptr::drop_in_place<starship::modules::git_status::RepoStatus>(&v7);
        }
        v75 = *((long long *)&v61);
        v118 = *((int128_t *)&v56);
        *((int128_t *)&v70) = (int128_t)v59;
        v67 = v118;
        v64 = v117;
        v52.into_searcher(10, v66, (long long)(&v67)[8]);
        memcpy(&v32, &(char)v59, 16);
        memcpy(&v31, &v57, 16);
        memcpy(&v30, &v52, 16);
        v28 = 0;
        v29 = (long long)(&v67)[8];
        v33 = 0;
        v28.fold(&v7);
        core::ptr::drop_in_place<starship::utils::CommandOutput>(&(char)v64);
        core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v34, v36);
        goto LABEL_b9b619;
    }
    v52.index_or_empty(&v83);
    if (*((int *)&v52) != 4)
    {
        core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<gix_fs::snapshot::FileSnapshot<gix_index::File>>,gix::worktree::open_index::Error>>(&v52);
        *((unsigned long long *)a0) = 2;
        core::ptr::drop_in_place<gix::types::Repository>(&v83);
        return (unsigned long long)core::ptr::drop_in_place<starship::modules::git_status::RepoStatus>(&v7);
    }
    v64 = v56;
    v91 = *((char *)(v56 + 560));
    if (*((char *)(v56 + 560)))
    {
        (char)v64.drop_in_place<alloc::sync::Arc<gix_fs::snapshot::FileSnapshot<gix_index::File>>>();
        goto LABEL_b9b387;
    }
    (char)v64.drop_in_place<alloc::sync::Arc<gix_fs::snapshot::FileSnapshot<gix_index::File>>>();
    v51 = 1;
    v56 = 1;
    v57 = 0;
    *((double *)&v0) = v52.new();
    v57 = 0x8000000000000000;
    v53 = 0;
    v61 = 0;
    (char)v64.to_vec("starship timerinternal error: entered unreachable code: this kind of rename tracking isn't enabled by default and specific to gitoxide", 14);
    v37 = *((long long *)&v68);
    *((int128_t *)&v34) = *((int128_t *)&v64);
    (char)v64.name(&v52, &(char)v34);
    v64 = 1;
    v66 = 0x40000;
    v92 = *((int128_t *)&v74);
    *((int128_t *)&v58) = *((int128_t *)&v68);
    v60 = v92;
    v54 = v64;
    v56 = 0x40000;
    if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v0) + 1, 0, (unsigned long long)(char)(v91 < 0)))
        [D] Unsupported jumpkind Ijk_NoDecode at address 12173501()
    v17 = a1;
    v66 = (a1->field_1d8 >> 3) / 125;
    v68 = (unsigned int)(a1->field_1d8 - (unsigned int)v66 * 1000) * 1000000;
    v64 = v0;
    (char)v34.spawn_unchecked(&v52, &(char)v64);
    v52.expect(&(char)v34);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v52);
    v52.status(&v83);
    if (*((long long *)&v52) == 2)
    {
        core::ptr::drop_in_place<core::result::Result<gix::status::Platform<prodash::progress::utils::Discard>,gix::status::Error>>(&v52);
        goto LABEL_b9ba9f;
    }
    v93 = !v90;
    memcpy(&v86, &v56, 736);
    v85 = v54;
    (char)v64.index_worktree_submodules(&v85, (unsigned int)((!a3->field_f0 ? v93 * 0x100 + 0x100 : 0x100) - (v93 | a3->field_f0)) + 2, v93 * 0x100 + 0x100, v94, v95, v0);
    v96 = (char)v34.index_worktree_options_mut(&(char)v64, v90);
    v97 = 8;
    v98 = a3->field_a8;
    v99 = 0;
    if (a3->field_a8)
    {
        v100 = 1;
        gix::diff::utils::new_rewrites(&v52, *((long long *)&v84) + 16, 1);
        (char)v64.unwrap_or_default(&v52);
        v101 = v64;
        v97 = 7;
        v98 = v101;
        v99 = 2;
        if (v101 == 2)
        {
            v102 = 0x3f000000;
            v103 = 2;
            v97 = 19;
            v98 = 0;
            v99 = 0;
            v96 = 0;
        }
        else
        {
            v96 = v71;
            v104 = *((long long *)&v69);
            v103 = v68;
            v102 = v65;
            v52 = v72;
            v55 = v73;
            v100 = v101;
        }
        v21 = v55;
        v19 = v52;
    }
    else
    {
        v100 = 4;
    }
    v43 = v100;
    v44 = v102;
    v45 = 100;
    v46 = v103;
    v47 = v104;
    v48 = v96;
    v49 = v19;
    v50 = v21;
    memcpy(&v77, &(char)v34, 744);
    if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v0) + 1, 0, _ccall(v97, v98, v99, (unsigned long long)(char)(v91 < 0))))
        [D] Unsupported jumpkind Ijk_NoDecode at address 12173501()
    v87.should_interrupt_owned(&v77, v0);
    v35 = 0x8000000000000000;
    (unsigned short)v51.into_iter(&v87, &v35);
    if (*((long long *)&(unsigned short)v51) == 3)
    {
        core::ptr::drop_in_place<core::result::Result<gix::status::iter::types::Iter,gix::status::into_iter::Error>>(&(unsigned short)v51);
LABEL_b9ba9f:
        *((unsigned long long *)a0) = 2;
        goto LABEL_b9baa6;
    }
    memcpy(&v66, &v56, 1512);
    v64 = *((long long *)&(unsigned short)v51);
    if (a3->field_68 || a3->field_48 || a3->field_78 || a3->field_58)
    {
        (unsigned short)v51.head_name(&v83);
        if (*((long long *)&(unsigned short)v51) == 9223372036854775814)
        {
            memcpy(&v35, &v57, 16);
            if (v56 != 9223372036854775809)
            {
                memcpy(&v77, &v35, 16);
                if (v56 != 0x8000000000000000)
                {
                    memcpy(&(char)v34, &v77, 16);
                    v35 = v56;
                    (unsigned short)v51.into_string(&v35);
                    if (*((int *)&(unsigned short)v51) == 2)
                    {
                        *((int128_t *)&v4) = *((int128_t *)&v56);
                        v6 = (long long)(&v58)[8];
                        if (v2 == 0x8000000000000000)
                            goto LABEL_b9bcd5;
                        v35 = 0;
                        v36 = 3;
                        v37 = "for-each-ref%(upstream) %(upstream:track)--porcelain=2--untracked-files=no--ignore-submodules=untracked--ignore-submodules=dirty# branch.ab refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git ";
                        v38 = 12;
                        v39 = "--formatswap_pctGoConfigpure_msgresidentpatienceSafeCrlfcsgb2312kEH_DescGujaratisnapshotSwapFreeExcluded<locked>";
                        v40 = 8;
                        v41 = "%(upstream) %(upstream:track)--porcelain=2--untracked-files=no--ignore-submodules=untracked--ignore-submodules=dirty# branch.ab refs/stashError finding stash reference: No reflog found for stashError getting stash log: Unknown line type in git status outpu";
                        v42 = 29;
                        (unsigned short)v51.chain(&v35, &(char)v2);
                        v77.exec_git(a2, v18, &(unsigned short)v51);
                        if (v77 == 0x8000000000000000)
                        {
                            *((unsigned long long *)a0) = 2;
                            core::ptr::drop_in_place<gix::status::iter::types::Iter>(&(char)v64);
LABEL_b9baa6:
                            core::ptr::drop_in_place<alloc::sync::Arc<core::sync::atomic::AtomicBool>>(&v0);
                            core::ptr::drop_in_place<gix::types::Repository>(&v83);
                            return (unsigned long long)core::ptr::drop_in_place<starship::modules::git_status::RepoStatus>(&v7);
                        }
                        v25 = *((long long *)&v82);
                        memcpy(&v24, &v79, 16);
                        v22 = v78;
                        v20 = v77;
                        v35.into_searcher(10, (long long)v22, v23);
                        v105 = *((int128_t *)&v35);
                        memcpy(&v62, &v39, 16);
                        *((int128_t *)&v60) = *((int128_t *)&v37);
                        v57 = v105;
                        v51 = 0;
                        v56 = v23;
                        v63 = 0;
                        v106 = (unsigned short)v51.next_inclusive();
                        if (v106)
                        {
                            v108 = v106.call(v107);
                            if (v108)
                                v7.set_ahead_behind_for_each_ref(v108, a2);
                        }
                        core::ptr::drop_in_place<starship::utils::CommandOutput>(&v19);
                        goto LABEL_b9bcdf;
                    }
                    else
                    {
                        v2 = 0x8000000000000000;
                        v5 = v27;
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,bstr::ext_vec::FromUtf8Error>>(&(unsigned short)v51);
LABEL_b9bcd5:
                        core::ptr::drop_in_place<regex::error::Error>(&(char)v2);
                    }
                    goto LABEL_b9bcdf;
                }
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<core::option::Option<gix_ref::FullName>,gix::reference::errors::find::existing::Error>>(&(unsigned short)v51);
        }
        v3 = 0x8000000000000000;
        v5 = v27;
        goto LABEL_b9bcd5;
    }
    else
    {
LABEL_b9bcdf:
        memcpy(&(unsigned short)v51, &(char)v64, 1520);
        while (true)
        {
            v35.try_fold(&(unsigned short)v51);
            v109 = v35;
            if (v109 == 9223372036854775811)
                break;
            memcpy(&v78, &v36, 0x100);
            v77 = v109;
            if (v109 == 9223372036854775810)
            {
                v111 = (long long)v78 - -9223372036854775807;
                if (3 <= v111)
                    v111 = 3;
                goto (long long)(g_52afa8[v111] + (char *)&g_52afa8[0]);
            }
            else
            {
                v110 = v109 ^ 0x8000000000000000;
                if (2 <= v110)
                    v110 = 2;
                if (!v110)
                {
                    v112 = 0x8000000000000000 + *((long long *)&v80) - 4;
                    if (4 <= v112)
                        v112 = 1;
                    goto (long long)(g_52af98[v112] + (char *)&g_52af98[0]);
                }
                else if (v110 == 1)
                {
                    if ((char)v81 == 5)
                        v16 += 1;
                    memcpy(&v35, &v77, 264);
                    v10.push(&v35);
                }
                else
                {
                    v34 = &g_11f49d8;
                    v36 = 1;
                    v37 = &v1;
                    *((uint128_t *)&v38) = 0;
                    core::panicking::panic_fmt(&v34, &g_11f4a18); /* do not return */
                }
            }
        }
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<gix::status::iter::types::Item>>(&v35);
        (unsigned short)v51.drop_in_place<core::iter::adapters::filter_map::FilterMap<gix::status::iter::types::Iter,core::result::Result<gix::status::iter::types::Item,gix::status::iter::Error>::ok>>();
        if ((char)core::sync::atomic::atomic_load(v0 + 16, 0))
        {
            memcpy(&v26, &v7, 16);
            v17 = v8;
            core::ptr::drop_in_place<starship::modules::git_status::RepoStatus>(&v7);
            memcpy(&v7, &v26, 16);
            v8 = v17;
            v10 = 0;
            v11 = 8;
            *((uint128_t *)&v15) = 0;
            v14 = 0;
            v13 = 0;
            v12 = 0;
        }
        core::ptr::drop_in_place<alloc::sync::Arc<core::sync::atomic::AtomicBool>>(&v0);
LABEL_b9b619:
        *((int128_t *)&a0[96]) = (int128_t)v15;
        *((uint128_t *)&a0[80]) = 0;
        *((uint128_t *)&a0[64]) = 0;
        v119 = *((int128_t *)&v7);
        v120 = *((int128_t *)&v10);
        *((uint128_t *)&a0[48]) = 0;
        a0[32] = v120;
        a0[16] = v8;
        *(a0) = v119;
        return core::ptr::drop_in_place<gix::types::Repository>(&v83);
    }
}
