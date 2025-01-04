fn uu_paste::parse_delimiters(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xbc]
    let v1: i128;  // [sp-0xb8], Other Possible Types: Result<struct16, struct8>
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i32;  // [bp-0xa0]
    let v5: i64;  // [sp-0x80], Other Possible Types: struct8, struct16
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68]
    let v9: i64;  // [sp-0x60]
    let v10: i64;  // [sp-0x58]
    let v11: i64;  // [sp-0x50]
    let v12: i192;  // [sp-0x38]
    let v14: i64;  // r15
    let v15: i64;  // rdx
    let v16: i64;  // rdx
    let v17: i64;  // rdx
    let v18: i64;  // rax

    v14 = a1;
    v10 = a1;
    v11 = a2;
    v0 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v5 = v2;
    v6 = v3;
    v7 = 0;
    v8 = v14;
    v9 = a2 + v14;
    if core::str::validations::next_code_point(&v8) as i32 {
        do {
            if v15 != 92 {
LABEL_4ac310:
                uu_paste::parse_delimiters::{{closure}}(&v0, &v5, v16);
            } else {
                if !core::str::validations::next_code_point(&v8) as i32 {
                    v12 = format!("delimiter list ends with an unescaped backslash: {:?}", &v10);
                    v4 = 1;
                    v1 = v12;
                    v3 = *((&v12 as &char + 16) as &i64);
                    *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                    *((a0 + 16) as &&i64) = &g_5135a0;
                    *(a0 as &i64) = 1;
                    return v18;
                }
                if v17 <= 109 {
                    if v17 == 48 {
                        v5 = alloc::vec::Vec<T,A>::push(alloc::boxed::Box<T>::new(), 0);
                        continue;
                    }
                    if v17 == 92 {
                        goto LABEL_4ac374;
                    }
                    goto LABEL_4ac310;
                }
                if v17 == 110 {
LABEL_4ac374:
                    v5 = uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(0x5c);
                } else if v17 == 116 {
                    goto LABEL_4ac374;
                }
            }
        } while (core::str::validations::next_code_point(&v8) as i32);
    }
    v1 = v5;
    v18 = alloc::vec::Vec<T,A>::into_boxed_slice(&v1);
    *((a0 + 8) as &i64) = v18;
    *((a0 + 16) as &i64) = v17;
    *(a0 as &i64) = 0;
    return v18;
}
