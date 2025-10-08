fn starship::modules::rust::RustupSettings::from_toml_str(a1: i64, a2: i64) -> Option<struct120> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x138]
    let v1: &str;  // [bp-0x130]
    let v2: Result<struct48, struct32>;  // [bp-0x128]
    let v3: struct24;  // [bp-0x120]
    let v4: u128;  // [bp-0x110]
    let v5: struct24;  // [bp-0x100]
    let v7: struct20;  // [bp-0xf0]
    let v8: u64;  // [bp-0xe8]
    let v9: struct24;  // [bp-0xe0]
    let v10: u128;  // [bp-0xd0]
    let v11: u128;  // [bp-0xc0]
    let v12: i64;  // [bp-0xb8]
    let v13: struct40;  // [bp-0xb0]
    let v14: struct120;  // [bp-0x88], Other Possible Types: u64
    let v15: u64;  // [bp-0x80]
    let v16: Option<struct80>;  // [bp-0x78]
    let v17: Option<struct24>;  // [bp-0x70]
    let v18: struct72;  // [bp-0x68]
    let v19: struct24;  // [bp-0x60]
    let v20: struct20;  // [bp-0x50]
    let v21: struct24;  // [bp-0x40]
    let v22: u128;  // [bp-0x30]
    let v24: struct24;  // xmm0
    let v25: struct24;  // xmm1
    let v26: core::option::Option<&str>;  // xmm0
    let v27: struct24;  // xmm1
    let v28: Option<struct24>;  // xmm2

    v14 = toml::de::from_str(a1, a2);
    if v14.field_0 as i64 == 9223372036854775809 {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    v11 = *((&v14.field_96 as &char + 8) as &i128);
    v10 = v22;
    v9 = v21;
    v24 = *((&v14.field_0 as &char + 8) as &i128);
    v25 = *((&v14.field_16 as &char + 8) as &i128);
    v7 = v20;
    v5 = v19;
    *(&v4 as &struct24) = v25;
    v3 = v24;
    v2 = v14.field_0 as i64;
    if v5 as u64 != 0x8000000000000000 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7.field_0, v8, "12") {
        v26 = v2 as i128;
        v27 = *((&v3.field_0 as &char + 8) as &i128);
        v28 = *((&v4 as &char + 8) as &i128);
        return Some(struct120 {
            field_0: v26
            field_16: v27
            field_32: v28
            field_48: *((&v5.field_0 as &char + 8) as &i128)
            field_64: *(&v7.field_8 as &i128)
            field_80: *((&v9.field_0 as &char + 8) as &i128)
            field_96: *((&v10 as &char + 8) as &i128)
            field_112: v12
        });
    }
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    v0 = &v5 as u64;
    v1 = <core::option::Option<T> as core::fmt::Debug>::fmt;
    v14 = "Rustup settings version is ";
    v15 = 2;
    v18 = 0;
    v16 = &v0;
    v17 = 1;
    v13 = struct40 {
        field_0: "starship::modules::rust"
        field_16: "starship::modules::rust"
        field_32: log::__private_api::loc("src/modules/rust.rs")
    };
    log::__private_api::log(&v14, 2, &v13);
    return struct8 {
        field_0: 9223372036854775809
    };
}
