long long starship::modules::git_status::RepoStatus::add(unsigned long long a0[14], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [sp-0x50]
    unsigned long long v7;  // [sp-0x48]
    uint128_t v8;  // [sp-0x40]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned int v12;  // edx
    unsigned long v13;  // rax
    unsigned long v14;  // rax
    unsigned long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdi

    v9 = a1;
    v10 = a1 + a2;
    if (((char)core::str::validations::next_code_point(&v9) & 1))
    {
        v13 = v12 - 33;
        switch ((unsigned int)v13)
        {
        case 0:
            return v15;
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29:
LABEL_b9cabb:
            v15 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0);
            if (v15)
            {
                v5 = &g_11f4b20;
                v6 = 1;
                v7 = 8;
                v8 = 0;
                v19 = &g_11f4b88;
LABEL_b9ca64:
                v0 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                v1 = 29;
                v2 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
                v3 = 29;
                v4 = log::__private_api::loc(v19);
                v15 = (unsigned long long)log::__private_api::log(&v5, 1, &v0);
            }
            break;
        case 16:
            v16 = 2.get(4, a1, a2);
            if (v16)
                return a0.parse_normal_status(v16, v18);
            core::str::slice_error_fail(a1, a2, 2, 4, &g_11f4b58); /* do not return */
        case 17:
            a0[9] = a0[9] + 1;
            v16 = 2.get(4, a1, a2);
            if (!v16)
                core::str::slice_error_fail(a1, a2, 2, 4, &g_11f4b70); /* do not return */
            return a0.parse_normal_status(v16, v18);
        case 30:
            a0[13] = a0[13] + 1;
            v15 = v14;
        default:
            if (v12 != 117)
                goto LABEL_b9cabb;
            a0[7] = a0[7] + 1;
            v15 = v13;
            break;
        }
    }
    else
    {
        v15 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0);
        if (v15)
        {
            v5 = &g_11f4b30;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            v19 = &g_11f4b40;
            goto LABEL_b9ca64;
        }
    }
}
