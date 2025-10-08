fn starship::utils::exec_cmd(a1: i64, a2: i64, a3: i64) -> Option<struct48> {
    let a0: u64;  // rdi
    let v0: Option<struct48>;  // [bp-0xb8]
    let v1: Option<struct24>;  // [bp-0xa8]
    let v2: struct361;  // [bp-0xa0]
    let v3: Option<struct40>;  // [bp-0x98]
    let v4: core::fmt::Arguments;  // [bp-0x90]
    let v5: core::fmt::rt::Argument;  // [bp-0x88]
    let v6: struct4;  // [bp-0x80]
    let v7: struct40;  // [bp-0x78]
    let v8: struct24;  // [bp-0x50]
    let v9: core::option::Option<&str>;  // [bp-0x48]
    let v10: struct24;  // [bp-0x40]
    let v11: struct24;  // [bp-0x38]
    let v12: &str;  // [bp-0x30]
    let v14: struct24;  // 4096
    let v15: &str;  // 4096

    v0 = a1;
    v1 = a3;
    v2 = 1;
    v14 = a3;
    v15 = a1;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v3 = &v0;
        v4 = <&T as core::fmt::Debug>::fmt;
        v5 = &v1;
        v6 = <&T as core::fmt::Debug>::fmt;
        v8 = "Executing command ";
        v9 = 2;
        v12 = 0;
        v10 = &v3;
        v11 = 2;
        v7 = struct40 {
            field_0: "starship::utils"
            field_16: "starship::utils"
            field_32: log::__private_api::loc("src/utils.rs")
        };
        log::__private_api::log(&v8, 5, &v7);
        v14 = v1;
        v15 = v0;
    }
    starship::utils::internal_exec_cmd(a0, v15, a2, v14, 1);
    return;
}
