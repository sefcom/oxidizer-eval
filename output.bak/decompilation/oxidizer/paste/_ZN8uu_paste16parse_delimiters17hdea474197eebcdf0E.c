fn uu_paste::parse_delimiters(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xbc]
    let v1: i128;  // [sp-0xb8], Other Possible Types: struct24, Result<struct16, struct8>
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i32;  // [bp-0xa0]
    let v5: i64;  // [sp-0x98]
    let v6: i64;  // [sp-0x80], Other Possible Types: struct8, struct16
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [sp-0x70]
    let v9: i64;  // [sp-0x68]
    let v10: i64;  // [sp-0x60]
    let v11: i64;  // [sp-0x58]
    let v12: i64;  // [sp-0x50]
    let v13: i64;  // [sp-0x48]
    let v14: i64;  // [sp-0x40]
    let v15: i8;  // [bp-0x38]
    let v16: i8;  // [bp-0x28]
    let v18: i64;  // r15
    let v19: i64;  // rdx
    let v20: i64;  // rdx
    let v21: i64;  // rdx

    v18 = a1;
    v11 = a1;
    v12 = a2;
    v0 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v6 = v2;
    v7 = v3;
    v8 = 0;
    v9 = v18;
    v10 = a2 + v18;
    if !core::str::validations::next_code_point(&v9) as i32 {
        v1 = struct24 {
            field_0: v6
            field_16: v8
        };
        alloc::vec::Vec<T,A>::into_boxed_slice(&v1);
        return struct24 {
            field_0: 0
            field_8: v22
            field_16: v21
        };
    }
    do {
        if v19 != 92 {
LABEL_4ac310:
            uu_paste::parse_delimiters::{{closure}}(&v0, &v6, v20);
        } else {
            if !core::str::validations::next_code_point(&v9) as i32 {
                v13 = &v11;
                v14 = <&T as core::fmt::Display>::fmt;
                v1 = "delimiter list ends with an unescaped backslash: ";
                v2 = 1;
                v5 = 0;
                v3 = &v13;
                v4 = 1;
                core::option::Option<T>::map_or_else();
                v4 = 1;
                v1 = v15;
                v3 = v16;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                *((a0 + 16) as &&i64) = &g_5135a0;
                *(a0 as &i64) = 1;
            }
            if v21 <= 109 {
                if v21 == 48 {
                    v6 = alloc::vec::Vec<T,A>::push(alloc::boxed::Box<T>::new(), 0);
                    continue;
                }
                if v21 == 92 {
                    goto LABEL_4ac374;
                }
                goto LABEL_4ac310;
            }
            if v21 == 110 {
LABEL_4ac374:
                v6 = uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(0x5c);
            } else if v21 == 116 {
                goto LABEL_4ac374;
            }
        }
    } while (core::str::validations::next_code_point(&v9) as i32);
}
