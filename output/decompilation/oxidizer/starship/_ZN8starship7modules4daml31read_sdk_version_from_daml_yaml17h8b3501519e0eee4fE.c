fn starship::modules::daml::read_sdk_version_from_daml_yaml(a0: i64, a1: i64) {
    let v0: u64;  // [bp-0x90]
    let v1: u128;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: u128;  // [bp-0x78]
    let v4: i64;  // [bp-0x70]
    let v5: Result<struct16, struct64>;  // [bp-0x68]
    let v6: Option<struct24>;  // [bp-0x58]
    let v7: struct24;  // [bp-0x58], Other Possible Types: u64
    let v8: Result<struct48, struct32>;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: iNone;  // [bp-0x28]
    let v12: struct24;  // rdx
    let v13: struct72;  // rax

    v6 = starship::context::Context::read_file_from_pwd(a1, "daml.yaml");
    if (((0 ^ v6 as i64) & (0 ^ -(v7))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = *((&v6 as &char + 16) as &i64);
    v5 = *((&v6 as &char + 16) as &i64);
    v3 = v6 as i128;
    v8 = yaml_rust2::yaml::YamlLoader::load_from_str(v4, v12);
    if let Ok(_) = v8 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = *((&v8 as &char + 16) as &i128);
    if v9 != 0x8000000000000000 {
        *(&v1 as void*) = v10;
        v0 = v9;
        if !v2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v13 = <yaml_rust2::yaml::Yaml as core::ops::index::Index<&str>>::index(v1 as i64, "sdk-version");
        if *(v13 as &i8) == 2 {
            v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v13 + 16) as &i64), *((v13 + 24) as &i64));
            return struct24 {
                field_0: v7.field_0
                field_16: v7.field_16
            };
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
