fn flealib::fileserver::FileServer::change_directory(a1: &struct24, a2: i64, a3: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x188], Other Possible Types: core::str::pattern::CharSearcher, struct_0 *, struct24, u128
    let v1: u128;  // [bp-0x188]
    let v2: struct16;  // [bp-0x180], Other Possible Types: u64
    let v3: Result<struct24, struct24>;  // [bp-0x178], Other Possible Types: struct24, struct42, struct96, struct_0 *
    let v4: u64;  // [bp-0x170]
    let v5: struct24;  // [bp-0x168]
    let v6: u128;  // [bp-0x168]
    let v7: u128;  // [bp-0x168]
    let v8: Option<struct24>;  // [bp-0x160]
    let v9: Option<struct24>;  // [bp-0x158], Other Possible Types: struct96
    let v10: std::fs::File;  // [bp-0x148], Other Possible Types: u32
    let v11: u32;  // [bp-0x148]
    let v12: struct24;  // [bp-0x148]
    let v13: i64;  // [bp-0x148]
    let v14: u64;  // [bp-0x148]
    let v15: i64;  // [bp-0x138]
    let v16: u128;  // [bp-0x128]
    let v17: u64;  // [bp-0x120]
    let v18: u64;  // [bp-0x118]
    let v19: alloc::string::String;  // [bp-0x110]
    let v20: u64;  // [bp-0x100]
    let v21: &mut [u8];  // [bp-0xf8], Other Possible Types: struct24
    let v22: struct24;  // [bp-0xf8]
    let v23: &mut [u8];  // [bp-0xf8]
    let v24: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xf8]
    let v25: struct42;  // [bp-0xe8], Other Possible Types: struct_0 *
    let v26: u64;  // [bp-0xe0]
    let v27: void*;  // [bp-0xd8]
    let v28: alloc::string::String;  // [bp-0x48]
    let v31: u64;  // r8
    let v32: u64;  // r13
    let v33: i64;  // rbp
    let v34: u64;  // rdx
    let v35: u64;  // rcx
    let v36: u64;  // r8
    let v37: &mut [u8];  // rax:rdx
    let v38: &mut [u8];  // rax:rdx
    let v39: &mut [u8];  // rax:rdx

    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a2, a3);
    v10 = 0;
    v38 = core::char::methods::encode_utf8_raw(47, &v10, a2);
    v22 = <T as alloc::slice::hack::ConvertVec>::to_vec(v38.data_ptr, a2);
    v3 = v25;
    v1 = *(&v22.field_0 as &i128);
    if !<&str as core::str::pattern::Pattern>::is_contained_in(v2, v25, v8, v9) {
        v0 = &g_45177c.haystack.data_ptr;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = &v5;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v21 = "\x01\x00";
        v27 = 0;
        v25 = &v0;
        v26 = 2;
        v19 = core::option::Option<T>::map_or_else(&v21 as u64, a2, a3, v31);
        v9 = v20;
        v6 = *(&v19.vec.buf.inner.cap as &i128);
    }
    v32 = *((a1 + 8) as &i64);
    v33 = *((a1 + 16) as &i64);
    v11 = 0;
    v37 = core::char::methods::encode_utf8_raw(47, &v11, a2);
    v21 = <T as alloc::slice::hack::ConvertVec>::to_vec(v37.data_ptr, a2);
    v3 = v25;
    v1 = *(&v21.field_0 as &i128);
    if core::slice::<impl [T]>::ends_with(v32, v33, v2, v25) {
        v12 = 0;
        v39 = core::char::methods::encode_utf8_raw(47, &v12 as u128, a2);
        v21 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39.data_ptr, a2);
        v3 = v25;
        v0 = *(&v21.field_0 as &i128);
        alloc::str::<impl str>::replace(&v21, v8, v9, v2, v25);
        v9 = v25;
        v7 = *(&v21.field_0 as &i128);
    }
    v13 = a1;
    v0 = &v13 as u128;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v5;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v23 = "\x01\x00";
    v27 = 0;
    v25 = &v0;
    v26 = 2;
    v28 = core::option::Option<T>::map_or_else(&v23 as u64, v34, v35, v36);
    v16 = *(&v28.vec.buf.inner.cap as &i128);
    v18 = v28.vec.len;
    v24 = std::fs::metadata(v17, v18);
    if v24 as i32 == 2 {
        v14 = 2;
        v0 = <T as alloc::string::SpecToString>::spec_to_string(&v14);
        return Some(struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v3
        });
    } else if (0xf000 & *((&v24 as &char + 56) as &i32)) == 0x4000 {
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v17, v18);
        match v0 {
            Err(_) => {
                core::option::unwrap_failed(); /* do not return */
            },
            Ok(_) => {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(<&T as core::fmt::Display>::fmt, v3);
                v15 = v3;
                v10 = *(&v0.field_0 as &i128);
                *((a1 + 16) as &struct_0 *) = v15;
                *(a1 as &std::fs::File) = v10;
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
        }
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("Not a directory");
        return Some(struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v3
        });
    }
}
