fn uu_join::parse_separator(a0: &Option<Result<struct1, struct16>>, a1: &u8, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i64;  // [sp-0x98]
    let v2: i192;  // [sp-0x90], Other Possible Types: struct24, Result<struct16, struct10>
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i64;  // [bp-0x78]
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: i64;  // [sp-0x48]
    let v11: i8;  // [bp-0x40]
    let v12: i32;  // [sp-0x28]
    let v15: i64;  // r14
    let v16: i64;  // r15
    let v17: i32;  // edx

    if a2 == 1 {
        return struct9 {
            field_0: 0x8000000000000000
            field_8: v14 as i8
        };
    }
    if !a2 {
        return struct8 {
            field_0: 9223372036854775810
        };
    }
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if v2 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("non-UTF-8 multi-byte tab");
        v5 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        *((a0 + 16) as &&i64) = &g_5352b8;
        *(a0 as &i64) = 9223372036854775812;
    }
    v15 = v3;
    v16 = v4;
    v7 = v15;
    v8 = v16;
    v0 = v15;
    v1 = v15 + v16;
    if !(core::str::validations::next_code_point(&v0) as i32 && v17 != 0x110000) {
        core::option::expect_failed("valid string with at least one byte", "src/uu/join/src/join.rs"); /* do not return */
    }
    if !core::str::validations::next_code_point(&v0) as i32 {
        <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v15, v16);
    } else {
        if !(v17 == 92 && v17 == 48) {
            v9 = &v7;
            v10 = <&T as core::fmt::Display>::fmt;
            v2 = "multi-character tab ";
            v3 = 1;
            v6 = 0;
            v4 = &v9;
            v5 = 1;
            core::option::Option<T>::map_or_else();
            v12 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v11);
            *((a0 + 16) as &&i64) = &g_5352b8;
            *(a0 as &i64) = 9223372036854775812;
        }
        return struct9 {
            field_0: 0x8000000000000000
            field_8: 0
        };
    }
}
