fn starship::modules::package::get_helm_package_version(a0: u64, a1: void*, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x90]
    let v1: u128;  // [bp-0x88]
    let v2: i64;  // [bp-0x80]
    let v3: u128;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: Option<struct24>;  // [bp-0x58]
    let v7: Result<struct48, struct32>;  // [bp-0x58], Other Possible Types: u64
    let v8: i64;  // [bp-0x50]
    let v9: Option<struct24>;  // [bp-0x28]
    let v11: struct8;  // rdx
    let v12: struct24;  // rax

    v6 = starship::context::Context::read_file_from_pwd(a1, "Chart.yaml");
    if (((0 ^ v6 as i64) & (0 ^ -(v7))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = *((&v6 as &char + 16) as &i64);
    v5 = *((&v6 as &char + 16) as &i64);
    v3 = v6 as i128;
    v7 = yaml_rust2::yaml::YamlLoader::load_from_str(v4, v11);
    if let Ok(_) = v7 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v9 = *((&v7 as &char + 16) as &i128);
    if v8 != 0x8000000000000000 {
        *(&v1 as &Option<struct24>) = v9;
        v0 = v8;
        if !v2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v12 = <yaml_rust2::yaml::Yaml as core::ops::index::Index<&str>>::index(v1 as i64, "version");
        if *(v12 as &i8) == 2 {
            starship::modules::package::format_version(a0, *((v12 + 16) as &i64), *((v12 + 24) as &i64), *((a2 + 48) as &i64), *((a2 + 56) as &i64));
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
