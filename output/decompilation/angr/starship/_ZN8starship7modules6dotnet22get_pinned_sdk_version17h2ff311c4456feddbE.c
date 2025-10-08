long long starship::modules::dotnet::get_pinned_sdk_version(void* a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long
    int v1;  // [bp-0x67]
    unsigned long long v2;  // [bp-0x60]
    void* v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x47]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38], Other Possible Types: char
    int v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    char v13;  // al
    struct_0 *v14;  // rax
    struct_1 *v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax

    v0 = a1;
    v2 = a2;
    v3 = 0;
    serde_json::de::from_trait(&v5, &(char)v0, a2);
    v13 = v5;
    if (v13 == 6)
    {
        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v5);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    memcpy(&v3, &v8, 16);
    *((int128_t *)&v1) = *((int128_t *)&v6);
    v0 = v13;
    if (v0 == 5)
    {
        *((int128_t *)&v9) = (int128_t)(&v1)[7];
        v11 = v4;
        v14 = (long long)v9.get(v10, "sdkslnpropstargetsReceived a non-success exit code from `dotnet --list-sdks`. Falling back to `dotnet --version`.--list-sdksUnable to parse the output from `dotnet --list-sdks`.Error in module `elixir`:\nsrc/modules/elixir.rs", 3);
        if (v14)
        {
            if (v14->field_0 == 5)
            {
                v15 = v14->field_8.get(v14->field_10, "versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
                if (!v15)
                    goto LABEL_b91c62;
                if (v15->field_0 != 3)
                    goto LABEL_b91c7b;
                *((long long *)&v5) = v15->field_18 + 1.with_capacity_in(1, 1, &g_11ed440);
                v7 = v16;
                v8 = 0;
                v5.spec_extend(v15->field_10, v15->field_18 + v15->field_10);
                *((unsigned long long *)&a0[16]) = 0;
                *((int128_t *)a0) = *((int128_t *)&v5);
            }
            else
            {
LABEL_b91c7b:
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            v17 = core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&(char)v9);
        }
        else
        {
LABEL_b91c62:
            *((unsigned long long *)a0) = 0x8000000000000000;
            v17 = core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&(char)v9);
        }
        if (v0 == 5)
            return v17;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return core::ptr::drop_in_place<serde_json::value::Value>(&v0);
}
