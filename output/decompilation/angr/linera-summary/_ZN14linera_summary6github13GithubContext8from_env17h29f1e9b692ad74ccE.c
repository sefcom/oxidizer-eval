long long linera_summary::github::GithubContext::from_env(struct_0 *a0, unsigned int a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x1b0]
    unsigned long long v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x1a0]
    int v3;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x190]
    unsigned long long v5;  // [bp-0x188]
    char v6;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x170]
    unsigned long long v8;  // [bp-0x168]
    unsigned long long v9;  // [bp-0x158]
    unsigned long long v10;  // [bp-0x150]
    unsigned long long v11;  // [bp-0x148]
    unsigned long long v12;  // [bp-0x140]
    unsigned long long v13;  // [bp-0x140]
    unsigned long long v14;  // [bp-0x138]
    unsigned long long v15;  // [bp-0x130]
    int v16;  // [bp-0x128], Other Possible Types: char
    unsigned long long v17;  // [bp-0x120]
    unsigned long long v18;  // [bp-0x118]
    char v19;  // [bp-0x110]
    unsigned long long v20;  // [bp-0x100]
    char v21;  // [bp-0xf8]
    unsigned long long v22;  // [bp-0xf0]
    unsigned long long v23;  // [bp-0xe8]
    unsigned long long v24;  // [bp-0xe0]
    char v25;  // [bp-0xd8]
    int v26;  // [bp-0xd8]
    unsigned long long v27;  // [bp-0xc8]
    int v28;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v29;  // [bp-0xa8]
    char v30;  // [bp-0xa0]
    unsigned long long v31;  // [bp-0x98]
    unsigned long long v32;  // [bp-0x90]
    unsigned long long v33;  // [bp-0x88]
    char v34;  // [bp-0x80]
    unsigned long long v35;  // [bp-0x78]
    unsigned long long v36;  // [bp-0x70]
    unsigned long long v37;  // [bp-0x68]
    char v38;  // [bp-0x60]
    unsigned long long v39;  // [bp-0x58]
    unsigned long long v40;  // [bp-0x50]
    unsigned long long v41;  // [bp-0x48]
    char v42;  // [bp-0x40]
    char v43;  // [bp-0x38]
    unsigned long long v45;  // rcx
    unsigned long long v46;  // r14
    unsigned long v47;  // rbp
    char v48;  // r13b
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rax
    char *v51;  // rdi
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    int v55;  // xmm0

    v46 = v45;
    v47 = a1;
    std::env::var(&v34, "GITHUB_PR_COMMIT_HASHGITHUB_BASE_BRANCHGITHUB_PR_NUMBER is not set! This must be run from within CIGITHUB_PR_COMMIT_HASH is not set! This must be run from within CIGITHUB_PR_BRANCH is not set! This must be run from within CIGITHUB_BASE_BRANCH is not set! T", 21);
    std::env::var(&v30, "GITHUB_PR_BRANCHWordStartUnicodeInvalidCrlNumber", 16);
    std::env::var(&v21, "GITHUB_BASE_BRANCHGITHUB_PR_NUMBER is not set! This must be run from within CIGITHUB_PR_COMMIT_HASH is not set! This must be run from within CIGITHUB_PR_BRANCH is not set! This must be run from within CIGITHUB_BASE_BRANCH is not set! This must be run from within CIGITHUB_PR_NUMBER is not a valid number: ", 18);
    std::env::var(&v38, "GITHUB_PR_NUMBER", 16);
    if ((char)v47)
    {
        (char)v13.get_local_git_info();
        if (v13 == 0x8000000000000000)
        {
            a0->field_8 = v14;
            a0->field_0 = 0x8000000000000000;
            goto LABEL_918dbf;
        }
        else
        {
            v5 = v18;
            *((int128_t *)&v3) = *((int128_t *)&v16);
            v8 = v20;
            memcpy(&v6, &v19, 16);
            v0 = v13;
            v1 = v14;
            v2 = v15;
            if (((char)a2 & 1))
            {
                v11 = v2;
                v9 = v0;
                v10 = v1;
                memcpy(&v25, &(char)v3, 16);
                v27 = v5;
                memcpy(&v28, &v6, 16);
                v29 = v8;
                v48 = 1;
                goto LABEL_918d00;
            }
            else
            {
                v12 = &g_cf3470;
                v14 = 1;
                v15 = 8;
                *((uint128_t *)&v16) = 0;
                a0->field_8 = ::0x915610::anyhow::__private::format_err(&v12);
                a0->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v6);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                goto LABEL_918dbf;
            }
        }
    }
    v49 = v40;
    if ((v38 & 1))
    {
        v49 = linera_summary::github::GithubContext::from_env::{{closure}}(v39, v49);
LABEL_918c4a:
        a0->field_8 = v49;
        a0->field_0 = 0x8000000000000000;
        goto LABEL_918dcc;
    }
    if (v39 == 0x8000000000000000)
        goto LABEL_918c4a;
    v0 = v39;
    v1 = v49;
    v2 = v41;
    v50 = v36;
    if ((v34 & 1))
    {
        v50 = linera_summary::github::GithubContext::from_env::{{closure}}(v35, v50);
LABEL_918e45:
        a0->field_8 = v50;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v21);
        v51 = &v30;
    }
    else
    {
        if (v35 == 0x8000000000000000)
            goto LABEL_918e45;
        v3 = v35;
        v4 = v50;
        v5 = v37;
        v52 = v32;
        if ((v30 & 1))
        {
            v52 = linera_summary::github::GithubContext::from_env::{{closure}}(v31, v52);
LABEL_918ead:
            a0->field_8 = v52;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(&v3);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v51 = &v21;
        }
        else
        {
            if (v31 == 0x8000000000000000)
                goto LABEL_918ead;
            v6 = v31;
            v7 = v52;
            v8 = v33;
            v53 = v23;
            if ((v21 & 1))
            {
                v53 = linera_summary::github::GithubContext::from_env::{{closure}}(v22, v53);
                goto LABEL_918f15;
            }
            else if (v22 == 0x8000000000000000)
            {
LABEL_918f15:
                a0->field_8 = v53;
                a0->field_0 = 0x8000000000000000;
                goto LABEL_918f1c;
            }
            else
            {
                v13 = v22;
                v14 = v53;
                v15 = v24;
                ::0x909400::core::num::<impl u64>::from_ascii_radix(&v42, v49, v41);
                if (v42)
                {
                    a0->field_8 = linera_summary::github::GithubContext::from_env::{{closure}}(&v0, a1, a2);
                    a0->field_0 = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::string::String>(&v13);
LABEL_918f1c:
                    core::ptr::drop_in_place<alloc::string::String>(&v6);
                    core::ptr::drop_in_place<alloc::string::String>(&v3);
                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
                }
                v46 = *((long long *)&v43);
                memcpy(&(char)v9, &v3, 16);
                v11 = v5;
                memcpy(&v25, &v6, 16);
                v27 = v8;
                memcpy(&v28, &v13, 16);
                v29 = v15;
                core::ptr::drop_in_place<alloc::string::String>(&v0);
LABEL_918d00:
                (char)v13.from_env(v47);
                if (v13 == 0x8000000000000000)
                {
                    a0->field_8 = v14;
                    a0->field_0 = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::string::String>(&v28);
                    core::ptr::drop_in_place<alloc::string::String>(&v25);
                    v54 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v9);
                    if (!v48)
                        return v54;
                }
                else
                {
                    v55 = *((int128_t *)&v15);
                    a0->field_20 = *((int128_t *)&v17);
                    *((void*)&a0->field_10) = v55;
                    a0->field_40 = v11;
                    a0->field_30 = *((int128_t *)&v9);
                    *((unsigned long long *)((char *)&a0->field_48 + 8)) = v27;
                    *((void*)&(&a0->field_40)[1]) = v26;
                    *((void*)&a0->field_58) = v28;
                    *((unsigned long long *)&a0->field_60) = v29;
                    a0->field_0 = v13;
                    a0->field_8 = v14;
                    *((unsigned long long *)((char *)&a0->field_60 + 8)) = v46;
                    if (!v48)
                        return v14;
                }
LABEL_918dbf:
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v38);
LABEL_918dcc:
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v21);
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v30);
                v51 = &v34;
            }
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v51);
}
