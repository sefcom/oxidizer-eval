fn uu_truncate::truncate_reference_and_size(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> long long {
    let v0: struct32;  // [bp-0x158]
    let v1: u32;  // [bp-0x150]
    let v2: u128;  // [bp-0x148]
    let v3: i64;  // [bp-0x138]
    let v4: u64;  // [bp-0x130]
    let v5: u64;  // [bp-0x128]
    let v6: u128;  // [bp-0x118]
    let v7: u128;  // [bp-0x100]
    let v8: u64;  // [bp-0xf0]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: struct16, struct24, struct28, u64
    let v10: u64;  // [bp-0xe0]
    let v11: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xd8]
    let v12: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v13: alloc::string::String;  // [bp-0xc8]
    let v14: void*;  // rsi
    let v15: u64;  // rdx
    let v17: u64;  // rax
    let v18: i64;  // rax
    let v19: u64;  // rax

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0.field_0 as i32 != 3 {
        v6 = v2;
        v5 = v0.field_0;
        v3 = &v5;
        v4 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
        v9 = "Invalid number: ";
        v10 = 1;
        v13 = 0;
        v11 = &v3;
        v12 = 1;
        v9 = core::option::Option<T>::map_or_else(a2);
        v9 = struct28 {
            field_0: v7
            field_16: v8
            field_24: 1
        };
        return alloc::boxed::Box<T>::new(&v9);
    }
    if v1 && (v1 != 5 && v1 != 6 || v0.field_16 as i64) {
        v9 = std::fs::metadata(a0, a1);
        match v9 {
            Err(_) => {
                return uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v10);
            },
            Ok(_) => {
                v17 = uu_truncate::TruncateMode::to_size(v1) as u64;
                v9 = struct16 {
                    field_0: a4
                    field_8: a4 + a5 * 24
                };
                loop {
                    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
                    if !v18 {
                        return 0;
                    }
                    v19 = uu_truncate::file_truncate(*((v18 + 8) as &i64), *((v18 + 16) as &i64), a6, v17);
                    if v19 {
                        return v19;
                    }
                }
            },
        }
    }
    v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(v14, v15);
    v9 = struct28 {
        field_0: <UNKNOWN>
        field_16: <UNKNOWN>
        field_24: 1
    };
    return alloc::boxed::Box<T>::new(&v9);
}
