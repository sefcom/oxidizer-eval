long long starship::modules::nodejs::get_engines_version(void* a0, unsigned long long a1[25])
{
    char v0;  // [bp-0x88]
    int v1;  // [bp-0x78], Other Possible Types: char
    int v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    int v6;  // [bp-0x47]
    int v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    void* v10;  // [bp-0x18]
    char v12;  // dl
    unsigned long long v13;  // rax
    struct_0 *v14;  // rax

    v0.read_file_from_pwd(a1, "package.json.node-version.nvmrc!bunfig.toml!bun.lock!bun.lockbnode_modulesmlmlirereidune-projectjbuildjbuild-ignore.merlin_opamvia [$symbol($version )(\\($switch_indicator$switch_name\\) )]($style)*", 12);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v4 = *((long long *)&v1);
    *((int128_t *)&v2) = *((int128_t *)&v0);
    v8 = v3;
    v9 = v4;
    v10 = 0;
    serde_json::de::from_trait(&v0, &v8, v12);
    if (v0 == 6)
    {
        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v7 = v1;
        *((int128_t *)&v6) = *((int128_t *)&(&v0)[1]);
        v5 = v0;
        v13 = v5.get("engines\\d+\\.\\d+\\.\\d+Error in module `ocaml`: \nsrc/modules/ocaml.rs", 7);
        if (v13)
        {
            v14 = v13.get("nodeblobsafe%2E.CGPH", 4);
            if (!v14 || v14->field_0 != 3)
                goto LABEL_babebe;
            v0.to_vec(v14->field_10, v14->field_18);
            *((long long *)&a0[16]) = *((long long *)&v1);
            *((int128_t *)a0) = *((int128_t *)&v0);
            core::ptr::drop_in_place<serde_json::value::Value>(&v5);
        }
        else
        {
LABEL_babebe:
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<serde_json::value::Value>(&v5);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
}
