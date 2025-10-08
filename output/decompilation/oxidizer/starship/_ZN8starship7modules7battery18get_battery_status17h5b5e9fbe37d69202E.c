fn starship::modules::battery::get_battery_status(a0: i64, a1: i64) -> u64 {
    let v0: struct176;  // [bp-0x7c]
    let v1: core::option::Option<&str>;  // [bp-0x78]
    let v2: struct24;  // [bp-0x74]
    let v3: u64;  // [bp-0x70]
    let v4: &str;  // [bp-0x6c]
    let v5: struct24;  // [bp-0x68], Other Possible Types: u8
    let v6: struct24;  // [bp-0x60]
    let v7: struct24;  // [bp-0x58]
    let v8: Result<struct24, struct16>;  // [bp-0x50]
    let v9: struct24;  // [bp-0x40]
    let v10: &str;  // [bp-0x38]
    let v11: struct40;  // [bp-0x30]
    let v13: &str;  // rax
    let v14: u64;  // cc_ndep
    let v15: u128;  // xmm1
    let v16: u128;  // xmm0

    *((a1 + 24) as &i64)(&v3, a0);
    v13 = v5;
    if v13 as u8 != 5 && (((BinaryOp CmpF & 69) >> 6 & 1) != 1 || _ccall(10, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v14) as char) {
        v2 = BinaryOp MulV;
        v0 = BinaryOp MulV;
        v1 = v13 as u8;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
            v9 = &v0;
            v10 = <starship::modules::battery::BatteryStatus as core::fmt::Debug>::fmt;
            *(&v3 as &&str) = "Battery status: ";
            v5 = 1;
            v8 = 0;
            v6 = &v9;
            v7 = 1;
            v11 = struct40 {
                field_0: "starship::modules::battery"
                field_16: "starship::modules::battery"
                field_32: log::__private_api::loc("src/modules/battery.rs")
            };
            log::__private_api::log(&v3, 4, &v11);
            return v1 as u64;
        }
        return v13 as u32 & 255;
    }
    return 5;
}
