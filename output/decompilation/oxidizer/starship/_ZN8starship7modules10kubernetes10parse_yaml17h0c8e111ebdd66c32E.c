fn starship::modules::kubernetes::parse_yaml(a0: u64, a1: u64, a2: u32) -> int {
    let v0: Result<struct48, struct32>;  // [bp-0x48]
    let v1: u64;  // [bp-0x48]
    let v2: core::option::Option<u32>;  // [bp-0x48]
    let v3: struct40;  // [bp-0x40]
    let v4: struct40;  // [bp-0x18]
    let v6: i64;  // rax

    v0 = yaml_rust2::yaml::YamlLoader::load_from_str(a1, a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v6 = *((&v0 as &char + 8) as &i64);
        v4 = *((&v0 as &char + 16) as &i128);
        if v6 != 0x8000000000000000 {
            v3 = v4;
            v2 = v6;
            starship::modules::kubernetes::parse_yaml::{{closure}}(a0, &v0);
            return;
        }
    }
    return struct1 {
        field_0: 10
    };
}
