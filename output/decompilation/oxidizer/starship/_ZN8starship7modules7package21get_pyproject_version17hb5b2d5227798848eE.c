fn starship::modules::package::get_pyproject_version(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: u128;  // [bp-0x128]
    let v1: u64;  // [bp-0x120]
    let v2: struct20;  // [bp-0x118]
    let v3: Option<struct24>;  // [bp-0x110], Other Possible Types: struct88
    let v4: u64;  // [bp-0x110]
    let v5: core::str::pattern::CharSearcher;  // [bp-0x108]
    let v6: struct32;  // [bp-0x100]
    let v7: u128;  // [bp-0xf0]
    let v8: u128;  // [bp-0xe0]
    let v9: &str;  // [bp-0xd0]
    let v10: u64;  // [bp-0xc0]
    let v11: struct32;  // [bp-0xb8]
    let v12: struct16;  // [bp-0xa8]
    let v13: &str;  // [bp-0x98]
    let v14: &str;  // [bp-0x88]
    let v15: struct1;  // [bp-0x78]
    let v16: struct80;  // [bp-0x68]
    let v18: &str;  // rdx
    let v19: u64;  // rdx
    let v20: core::str::pattern::CharSearcher;  // rax

    v3 = starship::context::Context::read_file_from_pwd(a1, "pyproject.toml");
    if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v18 = *((&v3 as &char + 16) as &i64);
    v2 = *((&v3 as &char + 16) as &i64);
    v0 = v3 as i128;
    v3 = toml::de::from_str(v1, v18);
    if v3.field_0 as i32 != 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = v6;
    v12 = v7;
    v13 = v8;
    v14 = v9;
    v15 = v10;
    if v5 != 0x8000000000000000 {
        v16 = struct80 {
            field_0: v5
            field_8: v11
            field_24: v12
            field_40: v13
            field_56: v14
            field_72: v15
        };
        v20 = core::option::Option<T>::or_else(starship::modules::package::get_pep621_version(&v16, a1, a2, v15), v19, &v16, &v16);
        if !v20 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        starship::modules::package::format_version(a0, v20, a2, *((a2 + 48) as &i64), *((a2 + 56) as &i64));
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
