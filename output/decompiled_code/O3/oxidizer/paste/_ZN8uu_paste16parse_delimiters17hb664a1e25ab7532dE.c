fn uu_paste::parse_delimiters(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u32;  // [sp-0xbc]
    let v1: Result<struct16, struct8>;  // [sp-0xb8], Other Possible Types: struct24, u128
    let v2: u64;  // [sp-0xb0]
    let v3: u64;  // [sp-0xa8]
    let v4: u32;  // [bp-0xa0]
    let v5: u64;  // [sp-0x80], Other Possible Types: struct16, struct8
    let v6: u64;  // [sp-0x78]
    let v7: void*;  // [sp-0x70]
    let v8: u64;  // [sp-0x68]
    let v9: u64;  // [sp-0x60]
    let v10: u64;  // [sp-0x58]
    let v11: u64;  // [sp-0x50]
    let v12: i192;  // [sp-0x38]
    let v14: u64;  // r15
    let v15: u64;  // rdx
    let v16: u64;  // rdx
    let v17: u64;  // rdx
    let v18: u64;  // rax

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
            if !(v15 == 92) {
                goto LABEL_4ac5b0;
            }
            if !core::str::validations::next_code_point(&v8) as i32 {
                v12 = format!("delimiter list ends with an unescaped backslash: {:?}", &v10);
                v4 = 1;
                *(&v1 as &i192) = v12;
                v3 = *((&v12 as &char + 16) as &i64);
                *(&a0[1] as &double) = alloc::boxed::Box<T>::new(&v1);
                a0[2] = &g_514540;
                *(a0) = 1;
                return v18;
            }
            if v17 > 109 {
                switch (v17) {
                case 110:
                    break;
                case 116:
                    break;
                default:
LABEL_4ac5b0:
                    uu_paste::parse_delimiters::{{closure}}(&v0, &v5, v16);
                }
            } else {
                switch (v17) {
                case 48:
                    v5 = alloc::vec::Vec<T,A>::push(alloc::boxed::Box<T>::new(), 0);
                    break;
                case 92:
                    v5 = uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(92);
                    break;
                default:
LABEL_4ac5b0:
                    uu_paste::parse_delimiters::{{closure}}(&v0, &v5, v16);
                }
            }
        } while (core::str::validations::next_code_point(&v8) as i32);
    }
    *(&v1 as &struct24) = struct24 {
        field_0: v5
        field_16: v7
    };
    v18 = alloc::vec::Vec<T,A>::into_boxed_slice(&v1);
    a0[1] = v18;
    a0[2] = v17;
    *(a0) = 0;
    return v18;
}
