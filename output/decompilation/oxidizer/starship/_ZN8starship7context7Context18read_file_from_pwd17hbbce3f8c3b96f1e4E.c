fn starship::context::Context::read_file_from_pwd(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0xc0], Other Possible Types: struct40, struct72
    let v1: Option<struct56>;  // [bp-0x88], Other Possible Types: u64
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: i64;  // [bp-0x78]
    let v5: struct16;  // [bp-0x70]
    let v6: void*;  // [bp-0x68]
    let v7: u128;  // [bp-0x60]
    let v8: struct16;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v10: i64;  // [bp-0x40]
    let v11: u64;  // [bp-0x38]

    v8 = a2;
    v9 = a3;
    v1 = starship::context::Context::try_begin_scan(a1);
    if let None = v1 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = struct72 {
        field_0: v2
        field_8: &v2
        field_16: 1
        field_24: *((&v1 as &char + 24) as &i128)
        field_40: v7
        field_56: a2
        field_64: a3
    };
    if starship::context::ScanDir::is_match(&v0) {
        std::path::Path::join(&v2, *((a1 + 184) as &i64), *((a1 + 192) as &i64), a2, a3);
        v0 = starship::utils::read_file(&v2);
        if v0.field_0 as i64 != 0x8000000000000000 {
            return struct24 {
                field_0: v0.field_0
                field_16: 1
            };
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 3 {
        v10 = &v8;
        v11 = <&T as core::fmt::Display>::fmt;
        v1 = "Not attempting to read ";
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        v0 = struct40 {
            field_0: "starship::context"
            field_16: "starship::context"
            field_32: log::__private_api::loc("src/context.rs")
        };
        log::__private_api::log(&v1, 4, &v0);
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
