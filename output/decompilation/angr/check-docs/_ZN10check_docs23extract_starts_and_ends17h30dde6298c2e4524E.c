long long check_docs::extract_starts_and_ends(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xa8]
    int v2;  // [bp-0x98], Other Possible Types: char
    char v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    char v5;  // [bp-0x80]
    char v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    int v13;  // [bp-0x38], Other Possible Types: char
    unsigned long long v14;  // [bp-0x28]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v2.new("^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR_END\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?\\((.*\\.md)\\) could not canonicalize md pathfile `` not in SUMMARY.mdFailed running `grep` command for pattern ''", 64);
    memcpy(&v0, &v3, 16);
    v1 = *((long long *)&v5);
    if (*((long long *)&v2))
    {
        v14 = v1;
        memcpy(&v13, &v0, 16);
        v12 = *((long long *)&v2);
        check_docs::extract_starts_and_ends::{{closure}}(&v6, a1, a2, &v12);
        v16 = v7;
        if (v6 != 0x8000000000000000)
        {
            v9 = v6;
            v10 = v16;
            v11 = v8;
            v2.new("^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR_END\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?\\((.*\\.md)\\) could not canonicalize md pathfile `` not in SUMMARY.mdFailed running `grep` command for pattern ''", 68);
            memcpy(&v0, &v3, 16);
            v1 = *((long long *)&v5);
            if (*((long long *)&v2))
            {
                v14 = v1;
                v13 = v0;
                v12 = *((long long *)&v2);
                check_docs::extract_starts_and_ends::{{closure}}(&v6, a1, a2, &v12);
                v17 = v7;
                if (v6 != 0x8000000000000000)
                {
                    *((unsigned long long *)&a0[16]) = v11;
                    *((int128_t *)a0) = *((int128_t *)&v9);
                    *((unsigned long long *)&a0[24]) = v6;
                    *((unsigned long long *)&a0[32]) = v7;
                    *((unsigned long long *)&a0[40]) = v8;
                    return a0;
                }
            }
            else
            {
                v4 = v1;
                v2 = v0;
                v17 = v2.from();
            }
            *((unsigned long long *)&a0[8]) = v17;
            *((unsigned long long *)a0) = 0x8000000000000000;
            v9.drop_in_place<alloc::vec::Vec<check_docs::Anchor>>();
            return a0;
        }
    }
    else
    {
        v4 = v1;
        memcpy(&v2, &v0, 16);
        v16 = v2.from();
    }
    *((unsigned long long *)&a0[8]) = v16;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return a0;
}
