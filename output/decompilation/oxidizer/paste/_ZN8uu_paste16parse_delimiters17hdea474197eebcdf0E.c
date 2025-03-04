fn uu_paste::parse_delimiters(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xbc]
    let v1: iNone;  // [sp-0xb8], Other Possible Types: Result<struct16, struct8>, String
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i32;  // [bp-0xa0]
    let v5: i64;  // [sp-0x80], Other Possible Types: struct16, struct8, int
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: String;  // [sp-0x38]
    let v13: i64;  // rdx
    let v14: i64;  // rdx
    let v15: i64;  // rdx

    v9 = a1;
    v10 = a2;
    v0 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v5 = v2;
    v5 = v3;
    v6 = 0;
    v7 = a1;
    v8 = a2 + a1;
    if !core::str::validations::next_code_point(&v7) as i32 {
        v1 = v5 as i192;
        alloc::vec::Vec<T,A>::into_boxed_slice(&v1);
        return struct24 {
            field_0: 0
            field_8: v16
            field_16: v15
        };
    }
    do {
        if v13 as u32 != 92 {
LABEL_4ac310:
            uu_paste::parse_delimiters::{{closure}}(&v0, &v5, v14);
        } else {
            if !core::str::validations::next_code_point(&v7) as i32 {
                v11 = format!("delimiter list ends with an unescaped backslash: {}", &v9);
                *(&v4 as &i32) = 1;
                v1 = v11;
            }
            if v15 as u32 <= 109 {
                if v15 as u32 == 48 {
                    v5 = alloc::vec::Vec<T,A>::push(alloc::boxed::Box<T>::new(), 0);
                    continue;
                }
                if v15 as u32 == 92 {
                    goto LABEL_4ac374;
                }
                goto LABEL_4ac310;
            }
            if v15 as u32 == 110 {
LABEL_4ac374:
                v5 = uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(0x5c);
            } else if v15 as u32 == 116 {
                goto LABEL_4ac374;
            }
        }
    } while (core::str::validations::next_code_point(&v7) as i32);
}
