fn starship::modules::kubernetes::get_aliased_name(a0: i64, a1: void*, a2: u64, a3: u64, a4: u64, a5: i256, a6: i576) -> int {
    let v0: Option<struct137>;  // [bp-0x178], Other Possible Types: Result<struct1, struct8>, struct32
    let v1: Result<struct72, struct24>;  // [bp-0x170], Other Possible Types: struct92, u64
    let v2: struct32;  // [bp-0x168], Other Possible Types: struct48, struct_3 *
    let v3: Option<struct56>;  // [bp-0x160], Other Possible Types: struct40, u64
    let v4: void*;  // [bp-0x158], Other Possible Types: struct24, struct72
    let v5: struct24;  // [bp-0x148]
    let v6: u64;  // [bp-0x140]
    let v7: struct24;  // [bp-0x138], Other Possible Types: struct72
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x130], Other Possible Types: struct24, struct_0 *
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x128], Other Possible Types: u64
    let v10: i64;  // [bp-0x120]
    let v11: Result<struct24, struct16>;  // [bp-0x118]
    let v12: struct40;  // [bp-0x110], Other Possible Types: u8
    let v13: i64;  // [bp-0x100]
    let v14: u128;  // [bp-0xe8]
    let v15: u64;  // [bp-0xe0]
    let v16: Result<struct72, struct24>;  // [bp-0xd8]
    let v17: i64;  // [bp-0xd0]
    let v18: struct24;  // [bp-0xc8]
    let v19: iNone;  // [bp-0xa8]
    let v20: i64;  // [bp-0x98]
    let v21: struct16;  // [bp-0x88]
    let v22: struct32;  // [bp-0x78]
    let v23: u256;  // [bp-0x78]
    let v24: u192;  // [bp-0x70]
    let v25: struct32;  // [bp-0x58]
    let v26: struct32;  // 4096
    let v27: &mut [u8];  // rsi
    let v28: struct72;  // 4096

    if !a5 {
        v26 = a3;
    } else {
        v26 = a5;
    }
    v27 = v26;
    if !v27 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if !a5 {
        v28 = a4;
    } else {
        v28 = a6;
    }
    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v27, v28);
    if !a1 {
        return struct24 {
            field_0: *(&v5.field_0 as &i128)
            field_16: v7
        };
    }
    v21 = struct16 {
        field_0: a1
        field_8: a2
    };
    if !a3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, a1, a2) {
        v8 = &v21;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = "^";
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        core::option::Option<T>::map_or_else(&v12, 0, a2, &v0);
        v14 = *(&v12 as &i128);
        v16 = v13;
        v22 = regex::regex::string::Regex::new(v15, v13);
        if v22.field_0 {
            v25 = v23;
            regex::regex::string::Regex::replacen(&v0, &v25, a3, a4, 1, v6, v7);
            if !((((0 ^ v0) & (0 ^ -(v0))) >> 63) as char) {
                return struct24 {
                    field_0: v0
                    field_16: v2
                };
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else {
            v18 = v24;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v8 = &v21;
            v9 = <&T as core::fmt::Display>::fmt;
            v0 = "^";
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            core::option::Option<T>::map_or_else(&v12, 0, a2, &v0);
            v19 = *(&v12 as &i128);
            v20 = v13;
            v17 = &v19;
            v8 = &v17;
            v9 = <&T as core::fmt::Display>::fmt;
            v10 = &v18;
            v11 = <regex::error::Error as core::fmt::Display>::fmt;
            v0 = "Could not compile regular expression `";
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 2;
            v12 = struct40 {
                field_0: "starship::modules::kubernetes"
                field_16: "starship::modules::kubernetes"
                field_32: log::__private_api::loc("src/modules/kubernetes.rs")
            };
            log::__private_api::log(&v0, 2, &v12);
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return struct24 {
        field_0: *(&v5.field_0 as &i128)
        field_16: v7
    };
}
