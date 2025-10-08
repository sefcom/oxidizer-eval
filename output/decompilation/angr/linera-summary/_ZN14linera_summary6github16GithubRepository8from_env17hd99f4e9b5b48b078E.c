long long linera_summary::github::GithubRepository::from_env(void* a0, unsigned int a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    int v4;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v7;  // [bp-0xc0]
    unsigned long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned short v10;  // [bp-0x98]
    char v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    char v15;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v16[4];  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    int v19;  // [bp-0x48], Other Possible Types: char
    unsigned long long v20;  // [bp-0x38]
    int v21;  // [bp-0x30], Other Possible Types: char
    char v22;  // [bp-0x20]

    std::env::var(&v11, "GITHUB_REPOSITORYlinera-summary/src/github.rs", 17);
    if (a1)
    {
        if ((v11 & 1))
        {
            linera_summary::github::GithubRepository::from_env::{{closure}}(&v0, v12, v13);
        }
        else
        {
            v3 = v14;
            *((int128_t *)&v0) = *((int128_t *)&v12);
        }
    }
    else
    {
        if (!(v11 & 1))
        {
            v1 = v12;
            v2 = v13;
            v3 = v14;
        }
        else
        {
            *((long long *)&a0[8]) = linera_summary::github::GithubRepository::from_env::{{closure}}(v12, v2);
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    v6.into_searcher(47, v2, v3);
    v4 = 0;
    v5 = v3;
    v10 = 1;
    v15.collect(&v4);
    v18 = v17;
    if (v17 != 2)
    {
        v4 = 0;
        core::panicking::assert_failed(0, &v18, &g_533f38, &v4, &g_cf3428); /* do not return */
    }
    v4.to_vec(v16[0], v16[1]);
    v20 = v6;
    memcpy(&v19, &v4, 16);
    v21.to_vec(v16[2], v16[3]);
    v9 = *((long long *)&v22);
    v7 = v21;
    v6 = v20;
    v4 = v19;
    *((unsigned long *)&a0[32]) = v8;
    *((unsigned long long *)&a0[40]) = v9;
    *((unsigned long long *)&a0[16]) = v6;
    *((long long *)&a0[24]) = (long long)v7;
    *(a0) = v19;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v15, v16);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
