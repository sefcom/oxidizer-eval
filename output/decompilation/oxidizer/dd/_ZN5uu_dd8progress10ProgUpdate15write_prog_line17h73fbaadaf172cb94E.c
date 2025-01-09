fn uu_dd::progress::ProgUpdate::write_prog_line(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x178]
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: i64;  // [sp-0x150]
    let v5: i64;  // [sp-0x148]
    let v6: i64;  // [sp-0x140]
    let v7: i64;  // [bp-0x130], Other Possible Types: Result<struct16, struct10>, struct21
    let v8: i64;  // [sp-0x128]
    let v9: i64;  // [bp-0x120]
    let v10: i64;  // [sp-0x118]
    let v11: i64;  // [sp-0x110]
    let v12: i64;  // [sp-0x108]
    let v13: i64;  // [sp-0x100]
    let v14: i64;  // [sp-0xf8]
    let v15: i64;  // [sp-0xf0]
    let v16: i64;  // [sp-0xe8]
    let v17: i64;  // [sp-0xe0]
    let v18: i64;  // [sp-0xd8]
    let v19: i64;  // [sp-0xd0]
    let v20: i64;  // [sp-0xc8]
    let v21: i64;  // [sp-0xc0]
    let v22: i64;  // [sp-0xb8]
    let v23: i64;  // [sp-0xb0]
    let v24: i64;  // [sp-0xa8]
    let v25: struct24;  // [bp-0xa0]
    let v26: i64;  // [sp-0x98]
    let v27: i64;  // [sp-0x90]
    let v28: i64;  // [sp-0x88]
    let v29: i64;  // [sp-0x80]
    let v30: i8;  // [bp-0x78]
    let v31: i8;  // [bp-0x60]
    let v32: i8;  // [bp-0x48]
    let v33: i64;  // [sp-0x30]
    let v34: i64;  // [sp-0x28]
    let v36: i64;  // r12
    let v37: i64;  // rbx
    let v38: i64;  // rbp
    let v39: i64;  // rdx
    let v40: i64;  // r8
    let v41: i64;  // r9
    let v43: i64;  // rax
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v47: i64;  // rcx
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: i64;  // rbx

    v34 = v36;
    v33 = v37;
    v38 = a2;
    v0 = *((a0 + 48) as &i64);
    v1 = *((a0 + 56) as &i64);
    uu_dd::numbers::to_magnitude_and_suffix(&v30, v0, v1, 1);
    uu_dd::numbers::to_magnitude_and_suffix(&v31, v0, v1, 0);
    uu_dd::numbers::to_magnitude_and_suffix(&v32, __udivti3(v0, v1, core::cmp::max_by((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000, *(a0 as &i64) / 18446744073709552 + (((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000 <= *((a0 + 8) as &i32) * 1125899907 >> 50 ? 1 : 0) & 1)), v39, v40, v41) * 1000, __udivti3(v0, v1, core::cmp::max_by((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000, *(a0 as &i64) / 18446744073709552 + (((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000 <= *((a0 + 8) as &i32) * 1125899907 >> 50 ? 1 : 0) & 1)), v39, v40, v41) / 18446744073709552 + v39 * 1000, 1);
    if !v38 {
        v43 = 1;
    } else {
        v43 = &g_426a85;
    }
    v21 = v43;
    v22 = v38 & 4294967295;
    v23 = (v38 ? 1 : &g_426a84);
    v24 = v22 & 4294967295 ^ 1;
    v25 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v7 = struct21 {
        field_0: 0
        field_8: 6
        field_16: 2
        field_17: 0
    };
    v45 = <uucore::features::format::num_format::Float as uucore::features::format::num_format::Formatter>::fmt(&v7, &v25);
    if v45 {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45);
        return v52;
    }
    v7 = core::str::converts::from_utf8(v26, v27);
    v28 = core::result::Result<T,E>::unwrap(&v7);
    v29 = v39;
    if UnaryOp GetMSBs != 65535 {
        v47 = v0;
        v48 = v1;
        if amd64g_calculate_condition(2, 16, v48, (v47 < 1000) as u8 as u64, (v47 < 1000) as u8 as u64) as char {
            v7 = &v21;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v0;
            v10 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v11 = &v28;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v32;
            v14 = <alloc::string::String as core::fmt::Display>::fmt;
            v15 = &v23;
            v16 = <&T as core::fmt::Display>::fmt;
            v2 = &g_562358;
            v3 = 5;
            v6 = 0;
            v4 = &v7;
            v5 = 5;
            v49 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            if v49 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
                return v52;
            }
        } else if !(amd64g_calculate_condition(2, 16, v48, (v47 < 0x400) as u8 as u64, (v47 < 0x400) as u8 as u64) as char) {
            v7 = &v21;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v0;
            v10 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v11 = &v30;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v31;
            v14 = <alloc::string::String as core::fmt::Display>::fmt;
            v15 = &v28;
            v16 = <&T as core::fmt::Display>::fmt;
            v17 = &v32;
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v19 = &v23;
            v20 = <&T as core::fmt::Display>::fmt;
            v2 = &g_562408;
            v3 = 7;
            v6 = 0;
            v4 = &v7;
            v5 = 7;
            v51 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            if v51 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
                return v52;
            }
        } else {
            v7 = &v21;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v0;
            v10 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v11 = &v30;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v28;
            v14 = <&T as core::fmt::Display>::fmt;
            v15 = &v32;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v17 = &v23;
            v18 = <&T as core::fmt::Display>::fmt;
            v2 = &g_5623a8;
            v3 = 6;
            v6 = 0;
            v4 = &v7;
            v5 = 6;
            v50 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            if v50 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
                return v52;
            }
        }
    } else {
        v7 = &v21;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &v0;
        v10 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v11 = &v28;
        v12 = <&T as core::fmt::Display>::fmt;
        v13 = &v32;
        v14 = <alloc::string::String as core::fmt::Display>::fmt;
        v15 = &v23;
        v16 = <&T as core::fmt::Display>::fmt;
        v2 = &g_562308;
        v3 = 5;
        v6 = 0;
        v4 = &v7;
        v5 = 5;
        v46 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
        if v46 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v46);
            return v52;
        }
    }
    v52 = 0;
    return 0;
}
