long long starship::modules::haskell::get_snapshot(void* a0, unsigned long long a1[25])
{
    unsigned long long v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    int v9;  // [bp-0x28], Other Possible Types: char
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    struct_0 *v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v11 = starship::modules::haskell::is_stack_project(a1);
    if ((char)v11)
    {
        v11 = (char)v6.read_file_from_pwd(a1, "stack.yamlcabal.project", 10);
        if (v6 != 0x8000000000000000)
        {
            v12 = *((long long *)&v8);
            v5 = *((long long *)&v8);
            *((int128_t *)&v3) = *((int128_t *)&v6);
            (char)v6.load_from_str(v4, v12);
            if (v6 == 0x8000000000000000)
            {
                memcpy(&v9, &v8, 16);
                if (v7 == 0x8000000000000000)
                    goto LABEL_ba08b3;
                v1 = v9;
                v0 = v7;
                if (v2)
                {
                    v13 = (long long)v1.index("resolverLeadAcidHexDigitx-cp1255", 8);
                    v15 = (v13->field_0 == 2 ? v13->field_10 : 0).or_else(v13->field_18, (long long)v1, v2).filter(v14);
                    if (!v15)
                        v16 = 17;
                    (char)v6.to_vec((v15 ? v15 : "<custom snapshot>ltsnightlyError in module `haxe`:\nsrc/modules/haxe.rs"), v16);
                    *((long long *)&a0[16]) = *((long long *)&v8);
                    *((int128_t *)a0) = *((int128_t *)&v6);
                    core::ptr::drop_in_place<alloc::vec::Vec<yaml_rust2::yaml::Yaml>>(&v0);
                }
                else
                {
                    *((long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<yaml_rust2::yaml::Yaml>>(&v0);
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<yaml_rust2::yaml::Yaml>,yaml_rust2::scanner::ScanError>>(&(char)v6);
LABEL_ba08b3:
                *((long long *)a0) = 0x8000000000000000;
            }
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
        }
    }
    *((long long *)a0) = 0x8000000000000000;
    return v11;
}
