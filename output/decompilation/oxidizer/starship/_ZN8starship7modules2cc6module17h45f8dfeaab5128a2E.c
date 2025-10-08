fn starship::modules::cc::module(a0: &struct96, a1: i64, a2: i32) -> u64 {
    let v0: struct92;  // [bp-0x2a8]
    let v1: iNone;  // [bp-0x2a8], Other Possible Types: u768
    let v2: u64;  // [bp-0x250], Other Possible Types: unsigned long
    let v3: struct96;  // [bp-0x248]
    let v4: &str;  // [bp-0x1e8]
    let v5: &str;  // [bp-0x1d8]
    let v6: &str;  // [bp-0x1c8]
    let v7: &str;  // [bp-0x1b8]
    let v8: &str;  // [bp-0x1a8]
    let v9: &str;  // [bp-0x198]
    let v10: &str;  // [bp-0x188]
    let v11: &str;  // [bp-0x178]
    let v12: Option<struct161>;  // [bp-0x168]
    let v13: Option<struct161>;  // [bp-0xc0]

    if !a2 {
        v4 = "clang";
        v5 = "clang";
        v6 = "gcc";
        v7 = "Free Software Foundation";
        v0 = starship::context::Context::new_module(a1, "c");
        v12 = starship::config::ModuleConfig::try_load(v2);
        v3 = v1;
        return starship::modules::cc::create_module(a0, a1, &v4 as u64, &v3, &v12);
    }
    v8 = "clang++";
    v9 = "clang";
    v10 = "g++";
    v11 = "Free Software Foundation";
    v0 = starship::context::Context::new_module(a1, "cpp");
    v13 = starship::config::ModuleConfig::try_load(v2);
    v3 = v1;
    return starship::modules::cc::create_module(a0, a1, &v8 as u64, &v3, &v13);
}
