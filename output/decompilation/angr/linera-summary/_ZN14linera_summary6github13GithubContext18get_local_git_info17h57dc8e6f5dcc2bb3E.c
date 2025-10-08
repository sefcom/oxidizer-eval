long long linera_summary::github::GithubContext::get_local_git_info(void* a0)
{
    unsigned long long v0;  // [bp-0xb8]
    int v1;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    int v4;  // [bp-0x90]
    unsigned long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    int v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x68]
    int v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x48]
    int v12;  // [bp-0x40], Other Possible Types: char
    unsigned long long v13;  // [bp-0x30]
    int v14;  // [bp-0x28], Other Possible Types: char
    char v15;  // [bp-0x18]
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax

    v1.open_from_env();
    if (((char)v1.context() & 1))
    {
        *((unsigned long long *)&a0[8]) = v17;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v1.head(&vvar_67{reg 32});
    if (v1)
    {
        v2 = v0;
        *((long long *)&a0[8]) = v1.from();
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v0 = v2;
        v1.peel_to_commit(&v0);
        if (v1)
        {
            v2 = v10;
            *((long long *)&a0[8]) = v1.from();
            *((unsigned long long *)a0) = 0x8000000000000000;
            goto LABEL_91894b;
        }
        v10 = v2;
        v14.id(&v10);
        v12.spec_to_string(&v14);
        core::ptr::drop_in_place<git2::commit::Commit>(&v10);
        if (v0.is_branch())
        {
            v18 = v0.shorthand();
            if (v18)
            {
                v1.to_vec(v18, v19);
                v11 = v3;
                memcpy(&v10, &v1, 16);
                v14.to_vec("mainincbkrai\t", 4);
                v8 = *((long long *)&v15);
                v7 = v14;
                v1 = v12;
                v3 = v13;
                v4 = v9;
                v6 = v11;
                *((unsigned long long *)&a0[64]) = v8;
                a0[48] = v14;
                *((unsigned long *)&a0[32]) = v5;
                *((unsigned long long *)&a0[40]) = v6;
                *((unsigned long long *)&a0[16]) = v3;
                *((long long *)&a0[24]) = (long long)v4;
                *(a0) = v12;
                core::ptr::drop_in_place<git2::reference::Reference>(&v0);
            }
            else
            {
                v1 = &g_cf3450;
                v2 = 1;
                v3 = 8;
                *((uint128_t *)&v4) = 0;
                v20 = ::0x915610::anyhow::__private::format_err(&v1);
LABEL_918adc:
                *((unsigned long long *)&a0[8]) = v20;
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v12);
LABEL_91894b:
                core::ptr::drop_in_place<git2::reference::Reference>(&v0);
            }
        }
        else
        {
            v1 = &g_cf3460;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            v20 = ::0x915610::anyhow::__private::format_err(&v1);
            goto LABEL_918adc;
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<git2::repo::Repository>(&vvar_67{reg 32});
}
