long long starship::modules::direnv::DirenvState::from_lines(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf5]
    unsigned int v1;  // [bp-0xf4]
    void* v2;  // [bp-0xf0]
    void* v3;  // [bp-0xe8]
    int v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc8]
    char v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    char v11;  // [bp-0xbf]
    int v12;  // [bp-0xb8]
    char v13;  // [bp-0xa8]
    int v14;  // [bp-0x98], Other Possible Types: char
    unsigned long long v15;  // [bp-0x88]
    void* v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    int v19;  // [bp-0x58]
    char v20;  // [bp-0x48]
    unsigned short v21;  // [bp-0x38]
    unsigned int v23;  // eax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    unsigned long long v32;  // rcx

    v3 = 0;
    v5 = 1;
    v6 = 0;
    v23 = v9.into_searcher(10, a1, a2);
    memcpy(&v20, &v13, 16);
    v19 = v12;
    memcpy(&v18, &v9, 16);
    v16 = 0;
    v17 = a2;
    v21 = 0;
    v1 = v23 & 0xffffff00 | 1;
    v0 = 3;
    v7 = 9223372036854775809;
    while (true)
    {
        v24 = v16.next_inclusive();
        if (!v24)
            break;
        v26 = v24.call(v25);
        v27 = "Found RC pathNo .envrc or .env loadedunknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n".strip_prefix_of(13, v26, v25);
        if (v27)
        {
            v9.to_vec(core::str::<impl str>::trim_matches(v27, v25), a2);
            v15 = (long long)v12;
            memcpy(&v14, &v9, 16);
            core::ptr::drop_in_place<std::path::PathBuf>(&v3);
            v6 = v15;
            v4 = v14;
        }
        else
        {
            v29 = "Found RC allowedstruct BufConfigOpenWorktreeFilejust initializedThe value of key' is unsupported".strip_prefix_of(16, v26, v25);
            if (!v29)
            {
                v1 = ((char)"No .envrc or .env loadedunknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n".is_contained_in(24, v26, v25) ? 0 : v1);
            }
            else
            {
                v9.from_str(core::str::<impl str>::trim_matches(v29, v25), a2);
                v0 = v10;
                if (v8 != 9223372036854775809)
                {
                    v32 = *((long long *)&v11);
                    *((long long *)&v2[24]) = (long long)v12;
                    *((unsigned long long *)&v2[17]) = v32;
                    *((unsigned long long *)&v2[8]) = v8;
                    *((char *)&v2[16]) = v0;
                    *((unsigned long long *)v2) = 0x8000000000000000;
                    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                }
            }
        }
    }
    if ((v0 == 3 | !v6) != 1)
    {
        *((unsigned long long *)&v2[16]) = v6;
        *((int128_t *)v2) = *((int128_t *)&v3);
        *((char *)&v2[24]) = v1;
        *((char *)&v2[25]) = v0;
        return v1;
    }
    *((unsigned long long *)&v2[8]) = 0x8000000000000000;
    *((char **)&v2[16]) = "unknown direnv stateinvalid allow status12falseDOCKER_CONFIGunix://Error in module `docker_context`:\n";
    *((unsigned long long *)&v2[24]) = 20;
    *((unsigned long long *)v2) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v3);
}
