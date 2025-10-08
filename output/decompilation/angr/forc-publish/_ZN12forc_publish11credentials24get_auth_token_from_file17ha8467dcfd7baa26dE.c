long long forc_publish::credentials::get_auth_token_from_file(void* a0)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    char v6;  // [bp-0xc0]
    unsigned long long v8[3];  // rsi
    unsigned long long v9;  // rax

    std::fs::metadata(&v3, v8[1], v8[2]);
    v9 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
    if (*((int *)&v3) != 2)
    {
        std::fs::read_to_string(&v3, v8);
        if (v3 == 0x8000000000000000)
        {
            *((char *)a0) = 0;
            *((unsigned long long *)&a0[8]) = v4;
            return v3;
        }
        v0 = v3;
        v1 = v4;
        v2 = v5;
        v3.deserialize_struct(v4, v5);
        if (*((int *)&v3) == 2)
        {
            *((long long *)&a0[24]) = *((long long *)&v6);
            *((int128_t *)&a0[8]) = *((int128_t *)&v4);
            *((char *)a0) = 14;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v9 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<forc_publish::credentials::Credentials,toml::de::Error>>(&v3);
    }
    *((unsigned long long *)&a0[8]) = 0x8000000000000000;
    *((char *)a0) = 14;
    return v9;
}
