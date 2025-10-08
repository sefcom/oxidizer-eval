long long starship::modules::pulumi::get_pulumi_username(void* a0)
{
    unsigned long long v0;  // [bp-0x170]
    int v1;  // [bp-0x168]
    int v2;  // [bp-0x158], Other Possible Types: char, unsigned long long
    unsigned int v3;  // [bp-0x154]
    int v4;  // [bp-0x150]
    int v5;  // [bp-0x148], Other Possible Types: char
    int v6;  // [bp-0x140]
    int v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    uint128_t v10;  // [bp-0x120]
    char v11;  // [bp-0x110]
    int v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0x100]
    unsigned long long v14;  // [bp-0xf8]
    unsigned long long v15;  // [bp-0xf0]
    int v16;  // [bp-0xe8]
    int v17;  // [bp-0xd8]
    int v18;  // [bp-0xc8]
    int v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xb0]
    char v21;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v22;  // [bp-0xa0]
    unsigned long v23;  // [bp-0x98]
    int v24;  // [bp-0x90]
    int v25;  // [bp-0x80]
    int v26;  // [bp-0x70]
    char v27;  // [bp-0x60]
    int v28;  // [bp-0x48], Other Possible Types: char
    int v29;  // [bp-0x38]
    char v30;  // [bp-0x28]
    unsigned long long v32;  // rdx
    int v33;  // xmm0
    unsigned long long v34;  // rax
    int v35;  // xmm0

    starship::modules::pulumi::pulumi_home_dir(&v2);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v32 = *((long long *)&v5);
    v14 = *((long long *)&v5);
    *((int128_t *)&v12) = *((int128_t *)&v2);
    v27.join(v13, v32, "credentials.jsonelvish_indicator<no description>", 16);
    v2.open(&v27);
    if ((v2 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v2);
        goto LABEL_bb4d1d;
    }
    else
    {
        v28.with_capacity(v3);
        *((int128_t *)&v7) = *((int128_t *)&v30);
        v5 = v29;
        v2 = v28;
        v9 = 1;
        v10 = 0;
        v11 = 0;
        serde_json::de::from_trait(&v21, &v2);
        if (v21 == 9223372036854775809)
        {
            core::ptr::drop_in_place<core::result::Result<starship::modules::pulumi::Credentials,serde_json::error::Error>>(&v21);
LABEL_bb4d1d:
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v33 = *((int128_t *)&v22);
            v19 = v26;
            v18 = v25;
            v17 = v24;
            v16 = v33;
            v15 = v21;
            if (v15 == 0x8000000000000000)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<core::option::Option<std::collections::hash::map::HashMap<alloc::string::String,starship::modules::pulumi::Account>>>(&(char)v17);
            }
            else
            {
                v1 = v16;
                v0 = v15;
                v34 = (long long)v17;
                if (v34)
                {
                    v8 = v20;
                    v35 = (int128_t)(&v17)[8];
                    *((int128_t *)&v6) = (int128_t)(&v18)[8];
                    v4 = v35;
                    v2 = v34;
                    v21.remove(&v2, &v0);
                    if (v21 == 9223372036854775809)
                    {
                        *((unsigned long long *)a0) = 0x8000000000000000;
                    }
                    else
                    {
                        *((unsigned long *)&a0[16]) = v23;
                        *((int128_t *)a0) = *((int128_t *)&v21);
                    }
                    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,starship::modules::pulumi::Account>>(&v2);
                }
                else
                {
                    *((unsigned long long *)a0) = 0x8000000000000000;
                }
                core::ptr::drop_in_place<alloc::string::String>(&v0);
            }
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&(char)v12);
}
