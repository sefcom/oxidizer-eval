fn uu_paste::parse_delimiters(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0xbc]
    let v1: u128;  // [bp-0xb8]
    let v2: u128;  // [bp-0xb8]
    let v3: struct24;  // [bp-0xb8]
    let v4: u64;  // [bp-0xb0]
    let v5: void*;  // [bp-0xa8], Other Possible Types: u64
    let v6: u32;  // [bp-0xa0]
    let v7: alloc::raw_vec::Cap;  // [bp-0x80], Other Possible Types: u64
    let v9: u64;  // [bp-0x78]
    let v10: void*;  // [bp-0x70]
    let v11: core::slice::iter::Iter<u8>;  // [bp-0x68]
    let v12: u64;  // [bp-0x58]
    let v13: u64;  // [bp-0x50]
    let v14: alloc::string::String;  // [bp-0x38]
    let v17: u64;  // rdx
    let v18: u64;  // rdx
    let v19: u64;  // rdx
    let v20: u8;  // al
    let v22: i64;  // rdi
    let v23: i64;  // rdi
    let v24: core::option::Option<u32>;  // rax:rax
    let v25: core::option::Option<u32>;  // rax:rax
    let v26: core::option::Option<u32>;  // rax:rax

    v12 = a0;
    v13 = a1;
    v0 = 0;
    v3 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a1, 0);
    v7 = v4;
    v9 = v5;
    v10 = 0;
    v11 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a0
        }
        end_or_len: a1 + a0
        _marker: core::marker::PhantomData<&u8> { }
    };
    v25 = core::str::validations::next_code_point(&v11) as u128;
    if let Some(_) = v25 {
        do {
            v18 = v17;
            if v18 as u32 != 92 {
LABEL_4ac310:
                uu_paste::parse_delimiters::{{closure}}(&v0, &v7, v18);
            } else {
                v24 = core::str::validations::next_code_point(&v11) as u128;
                if let None = v24 {
                    v14 = format!("delimiter list ends with an unescaped backslash: {}", &v12);
                    v6 = 1;
                    v2 = *(&v14.vec.buf.cap as &i128) as u128;
                    v5 = v14.vec.len;
                    *((v23 + 8) as &double) = alloc::boxed::Box<T>::new(&v2 as u384);
                    *((v23 + 16) as &&u8) = &g_5135a0;
                    *(v23 as &i64) = 1;
                    return;
                }
                if v19 as u32 <= 109 {
                    if v19 as u32 == 48 {
                        v7 = alloc::vec::Vec<T,A>::push(alloc::boxed::Box<T>::new(), 0);
                    }
                    v20 = 92;
                    v18 = v19;
                    if v18 as u32 == 92 {
                        goto LABEL_4ac374;
                    }
                    goto LABEL_4ac310;
                }
                if !(v19 as u32 == 110 || (v18 = v19, v18 as u32 == 116)) {
                    goto LABEL_4ac310;
                }
LABEL_4ac374:
                v7 = uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(v20 as u64);
            }
        } while ((v26 = core::str::validations::next_code_point(&v11) as u128, v26 as i32));
    }
    v5 = 0;
    v1 = *(&v7 as &i128);
    *((v22 + 8) as &long long) = alloc::vec::Vec<T,A>::into_boxed_slice(&v3);
    *((v22 + 16) as &u64) = v19;
    *(v22 as &i64) = 0;
    return;
}
