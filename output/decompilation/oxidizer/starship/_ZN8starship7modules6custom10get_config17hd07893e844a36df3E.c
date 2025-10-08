fn starship::modules::custom::get_config(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct40;  // [bp-0xa0]
    let v1: struct16;  // [bp-0x78]
    let v7: Result<struct72, struct24>;  // [bp-0x40]
    let v13: u64;  // rbx
    let v14: u64;  // rax
    let v15: u64;  // rbx
    let v16: struct40;  // rax
    let v17: struct24;  // rdi

    v1 = struct16 {
        field_0: a0
        field_8: a1
    };
    v13 = a2 + 488;
    v14 = starship::config::StarshipConfig::get_custom_module_config(v13, a0, a1);
    if v14 {
        return v14;
    }
    v15 = starship::config::StarshipConfig::get_custom_modules(v13);
    v16 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64;
    if v15 {
        if v16 <= 3 {
            return 0;
        }
    } else {
        if v16 <= 3 {
            return 0;
        }
    }
    v0 = struct40 {
        field_0: "starship::modules::custom"
        field_16: "starship::modules::custom"
        field_32: log::__private_api::loc(v17)
    };
    log::__private_api::log(&v7, 4, &v0);
    return 0;
}
