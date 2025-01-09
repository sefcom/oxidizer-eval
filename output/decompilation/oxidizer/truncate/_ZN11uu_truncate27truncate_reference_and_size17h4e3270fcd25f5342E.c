fn uu_truncate::truncate_reference_and_size(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i256;  // [sp-0x158], Other Possible Types: Result<struct32, struct24>
    let v1: i64;  // [sp-0x138]
    let v2: i64;  // [sp-0x130]
    let v3: Result<struct32, struct24>;  // [sp-0x128], Other Possible Types: i256
    let v4: i8;  // [bp-0x100]
    let v5: i192;  // [bp-0xe8], Other Possible Types: struct16, struct24, struct28
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [bp-0xd0]
    let v8: i64;  // [sp-0xc8]
    let v9: i64;  // [bp+0x8]
    let v10: i64;  // r13
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v17: struct8;  // rax

    v0 = uu_truncate::parse_mode_and_size(a2, a3);
    if v0 != 3 {
        v3 = v0;
        v1 = &v3;
        v2 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
        v5 = struct28 {
            field_0: "Invalid number: "
            field_16: &v1
            field_24: <UNKNOWN>
        };
        v8 = 0;
        v7 = 1;
        core::option::Option<T>::map_or_else();
        v5 = v4;
        v14 = alloc::boxed::Box<T>::new(&v5);
        return v14;
    }
    v10 = *((&v0 as &char + 8) as &i64);
    if !v10 {
        v12 = &g_41cc9b;
        v13 = 55;
    } else if !(v10 == 5) && !(v10 == 6) || !(!*((&v0 as &char + 16) as &i64)) {
        v5 = std::fs::metadata(a0, a1);
        if v5 == 2 {
            v14 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v6);
            return v14;
        }
        v5 = a4;
        v6 = a4 + a5 * 24;
        loop {
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v17 {
                return 0;
            }
            v14 = uu_truncate::file_truncate(*((v17 + 8) as &i64), *((v17 + 16) as &i64), v9, uu_truncate::TruncateMode::to_size(v10));
            if v14 {
                return v14;
            }
        }
    } else {
        v12 = &g_413bb0;
        v13 = 16;
    }
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(v12, v13);
    v7 = 1;
    v14 = alloc::boxed::Box<T>::new(&v5);
    return v14;
}
