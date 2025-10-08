fn starship::modules::package::get_julia_project_version(a0: u64, a1: void*, a2: i64) -> long long {
    let v0: u128;  // [bp-0x128]
    let v1: u64;  // [bp-0x120]
    let v2: struct92;  // [bp-0x118]
    let v3: Option<struct24>;  // [bp-0x110], Other Possible Types: struct88
    let v4: u64;  // [bp-0x110]
    let v5: struct32;  // [bp-0x108]
    let v6: u128;  // [bp-0x100]
    let v7: struct32;  // [bp-0xf0]
    let v8: u128;  // [bp-0xe0]
    let v9: u128;  // [bp-0xd0]
    let v10: &str;  // [bp-0xc0]
    let v11: core::str::pattern::CharSearcher;  // [bp-0xb8]
    let v12: struct32;  // [bp-0xa8]
    let v13: struct16;  // [bp-0x98]
    let v14: &str;  // [bp-0x88]
    let v15: &str;  // [bp-0x78]
    let v16: struct80;  // [bp-0x68]
    let v18: <anon>;  // rdx
    let v19: struct32;  // rax

    v3 = starship::context::Context::read_file_from_pwd(a1, "Project.toml");
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
        v19 = indexmap::map::IndexMap<K,V,S>::get(&v16, "version", v15);
        if !v19 || *(v19 as &i64) != 0x8000000000000000 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        starship::modules::package::format_version(a0, *((v19 + 16) as &i64), *((v19 + 24) as &i64), *((a2 + 48) as &i64), *((a2 + 56) as &i64));
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
