fn starship::config::StarshipConfig::initialize(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: Option<struct80>;  // [bp-0x58]
    let v1: u128;  // [bp-0x50]
    let v2: struct168;  // [bp-0x40]
    let v3: struct17;  // [bp-0x30]
    let v4: struct96;  // [bp-0x20]

    v0 = starship::config::StarshipConfig::config_from_file(a1, a2);
    return struct80 {
        field_0: v0 as i64
        field_8: v1
        field_24: v2
        field_40: v3
        field_56: v4
        field_72: *((&v0 as &char + 72) as &i64)
    };
}
