long long forc_crypto::has_sensible_info(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    int v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x30]
    int v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned int v7;  // eax
    unsigned int v8;  // ebx
    unsigned int v9;  // eax
    unsigned int v10;  // eax

    serde_json::value::to_value(&v0, a0);
    v7 = v0;
    v8 = 0;
    if (v7 == 6)
    {
        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
        return 0;
    }
    if (v7 == 5)
    {
        v3 = v1;
        v5 = v2;
        v9 = (long long)v3.get(v4);
        core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&(char)v3);
        v8 = v9 & 0xffffff00 | v9;
        v10 = v0;
        if (v10 == 5)
        {
            return v9 & 0xffffff00 | v9;
        }
        else if (v10 == 6)
        {
            core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
            return v9 & 0xffffff00 | v9;
        }
    }
    core::ptr::drop_in_place<serde_json::value::Value>(&v0);
    return v8;
}
