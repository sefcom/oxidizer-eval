fn starship::config::ModuleConfig::load(a0: u64, a1: u64) -> int {
    let v0: struct16;  // [bp-0xc8]
    let v1: i64;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: struct40;  // [bp-0xa8]
    let v4: struct56;  // [bp-0x80]
    let v5: struct16;  // [bp-0x80]
    let v6: u128;  // [bp-0x70]
    let v7: u128;  // [bp-0x60]
    let v8: u64;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v11: i64;  // [bp-0x38]
    let v12: u64;  // [bp-0x30]
    let v13: void*;  // [bp-0x28]

    v4 = <T as starship::config::ModuleConfig<serde_core::de::value::Error>>::from_config(a1);
    if v4.field_48 as i8 != 2 {
        return struct56 {
            field_0: v4.field_0
            field_16: v6
            field_32: v7
            field_48: v8
        };
    }
    v0 = v5;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
        v1 = &v0;
        v2 = <&str as serde_core::de::Expected>::fmt;
        v9 = "Failed to load config value: ";
        v10 = 1;
        v13 = 0;
        v11 = &v1;
        v12 = 1;
        v3 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v9, 2, &v3);
    }
    <starship::configs::openstack::OspConfig as core::default::Default>::default(a0);
    return;
}
