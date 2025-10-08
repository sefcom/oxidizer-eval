long long forc_publish::credentials::get_auth_token(struct_0 *a0, void* a1, unsigned long long a2[3])
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long v7;  // [bp-0x90]
    int v8;  // [bp-0x88]
    int v9;  // [bp-0x81]
    int v10;  // [bp-0x79]
    unsigned long long v11;  // [bp-0x71]
    char v12;  // [bp-0x60], Other Possible Types: unsigned long long
    char v13;  // [bp-0x58]
    int v14;  // [bp-0x48]
    unsigned long v15;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x38]
    unsigned long long v18;  // r12
    unsigned long long v21;  // r15
    int v22;  // xmm0
    unsigned long long v23;  // rax
    char v25;  // dl
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // xmm0

    if ((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63))
    {
        std::env::var(&v0);
        if (*((int *)&v0) == 1)
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
            v18 = a2[0];
            forc_util::user_forc_directory(&v0);
            if (a2[0] == 0x8000000000000000)
            {
                v18 = *((long long *)&v0);
                v5 = v4;
                v3 = v2;
            }
            else
            {
                core::ptr::drop_in_place<std::path::PathBuf>(*((long long *)&v0), v2);
                v3 = a2[1];
                v4 = a2[2];
            }
            v21 = v3;
            v12.join(v21, v4, "credentials.toml", 16);
            core::ptr::drop_in_place<std::path::PathBuf>(v18, v21);
            forc_publish::credentials::get_auth_token_from_file(&v0);
            if (v1 == 14)
            {
                v11 = v6;
                v22 = *((int128_t *)&v3);
                v9 = v22;
                v14 = v22;
                v16 = v11;
                if (v15 != 0x8000000000000000)
                {
                    *((unsigned long long *)&a0->field_1[23]) = v11;
                    *((int128_t *)&a0->field_1[7]) = (int128_t)v9;
                    a0->field_0 = 14;
                    core::ptr::drop_in_place<std::path::PathBuf>(v12, *((long long *)&v13));
                    return a0;
                }
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v14);
                v15 = std::io::stdio::stdin();
                v23 = v15.lock();
                forc_publish::credentials::get_auth_token_from_user_input(&v0, &v12, v23, v25 & 1, std::io::stdio::stdout());
                if (v1 == 14)
                {
                    v11 = v6;
                    v26 = *((int128_t *)&v3);
                    v9 = v26;
                    *((unsigned long long *)&a0->field_1[23]) = v6;
                    *((void*)&a0->field_1[7]) = v26;
                    a0->field_0 = 14;
                    core::ptr::drop_in_place<std::path::PathBuf>(v12, *((long long *)&v13));
                    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a1);
                    return a0;
                }
            }
            v27 = *((int128_t *)&(&v0)[1]);
            *((int128_t *)&v10) = *((int128_t *)&v5);
            v8 = v27;
            *((int128_t *)&a0->field_1[15]) = (int128_t)(&v8)[15];
            *((int128_t *)&a0->field_1[0]) = (int128_t)v8;
            a0->field_0 = v1;
            *((unsigned long *)&a0->field_8) = v7;
            core::ptr::drop_in_place<std::path::PathBuf>(v12, *((long long *)&v13));
            return a0;
        }
        *((unsigned long long *)&a0->field_1[23]) = v6;
        v28 = *((int128_t *)&v3);
    }
    else
    {
        *((long long *)&a0->field_1[23]) = (long long)a1[16];
        v28 = *((int128_t *)a1);
    }
    *((void*)&a0->field_1[7]) = v28;
    a0->field_0 = 14;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a2[0], a2[1]);
    return a0;
}
