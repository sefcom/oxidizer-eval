double starship::modules::git_state::describe_rebase(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [bp-0xf0]
    char *v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    char *v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8]
    char v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    int v15;  // [bp-0x68], Other Possible Types: char
    int v16;  // [bp-0x58], Other Possible Types: char
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    unsigned long long v20;  // r13
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx

    v0 = a1;
    v20 = 0x8000000000000000;
    if ((char)starship::modules::git_state::describe_rebase::{{closure}}(a1, "rebase-merge/msgnumrebase-applyrebase-apply/nextrebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs", 19))
    {
        starship::modules::git_state::describe_rebase::{{closure}}(&v10, &v0, "rebase-merge/msgnumrebase-applyrebase-apply/nextrebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs", 19, "rebase-merge/endswitch_indicator rustc --versionSINGULARITY_NAMEMissingParameter", 16);
        v21 = 0x8000000000000000;
        if (*((int *)&v10) == 1)
            goto LABEL_b99d5d;
    }
    else if ((char)starship::modules::git_state::describe_rebase::{{closure}}(a1, "rebase-applyrebase-apply/nextrebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs", 12))
    {
        starship::modules::git_state::describe_rebase::{{closure}}(&v10, &v0, "rebase-apply/nextrebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs", 17, "rebase-apply/lastThis is a bare repository, git_status is not applicableError in module `git_status`:\nsrc/modules/git_status.rs", 17);
        v21 = 0x8000000000000000;
        if (*((int *)&v10) == 1)
        {
LABEL_b99d5d:
            v3 = v11;
            v4 = v12;
            v1 = &v3;
            v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v5 = &g_525500;
            v6 = 1;
            v9 = 0;
            v7 = &v1;
            v8 = 1;
            v13.map_or_else(0, v22, &v5);
            v1 = &v4;
            v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v5 = &g_525500;
            v6 = 1;
            v9 = 0;
            v7 = &v1;
            v8 = 1;
            v17.map_or_else(0, a2, &v5);
            v21 = *((long long *)&v17);
            memcpy(&v16, &v18, 16);
            v20 = *((long long *)&v13);
            memcpy(&v15, &v14, 16);
        }
    }
    else
    {
        v21 = 0x8000000000000000;
    }
    *((unsigned long long *)&a0->field_20) = a2;
    *((unsigned long *)((char *)&a0->field_20 + 8)) = a3;
    a0->field_0 = v20;
    *((void*)&(&a0->field_0)[1]) = v15;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v21;
    *((void*)&a0->field_18) = v16;
    return (unsigned long long)v16;
}
