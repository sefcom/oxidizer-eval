fn uu_paste::parse_delimiters(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xc4]
    let v1: struct8;  // [sp-0xc0], Other Possible Types: u64
    let v3: u64;  // [bp-0xb8]
    let v4: void*;  // [bp-0xb0]
    let v5: u128;  // [bp-0xa8]
    let v6: void*;  // [bp-0x98], Other Possible Types: u64
    let v7: u32;  // [bp-0x90]
    let v8: core::slice::iter::Iter<u8>;  // [bp-0x70]
    let v9: u64;  // [bp-0x60]
    let v10: u64;  // [bp-0x58]
    let v11: alloc::string::String;  // [bp-0x40]
    let v13: u64;  // rdx
    let v15: u64;  // rdx
    let v16: u64;  // rdx
    let v17: u8;  // al
    let v19: core::option::Option<u32>;  // rax:rax
    let v20: core::option::Option<u32>;  // rax:rax
    let v21: core::option::Option<u32>;  // rax:rax

    v9 = a1;
    v10 = a2;
    v0 = 0;
    v1 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 8, 16, "src/uu/paste/src/paste.rs");
    v3 = v13;
    v4 = 0;
    v8 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a2 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v20 = core::str::validations::next_code_point(&v8) as u128;
    if let Some(_) = v20 {
        do {
            v16 = v15;
            if v16 as u32 != 92 {
LABEL_456e10:
                uu_paste::parse_delimiters::{{closure}}(&v0, &v1, v16);
            } else {
                v19 = core::str::validations::next_code_point(&v8) as u128;
                if let None = v19 {
                    v11 = format!("delimiter list ends with an unescaped backslash: {}", &v9);
                    v7 = 1;
                    v5 = *(&v11.vec.buf.inner.cap as &i128) as u128;
                    v6 = v11.vec.len;
                    return Err(struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v5 as u384) as u64
                        field_8: &g_4decf0
                    });
                }
                if v13 as u32 <= 109 {
                    if v13 as u32 == 48 {
                        v1 = alloc::vec::Vec<T,A>::push(alloc::boxed::Box<T>::new(), 0, "src/uu/paste/src/paste.rs");
                    }
                    v17 = 92;
                    v16 = v13;
                    if v16 as u32 == 92 {
                        goto LABEL_456e77;
                    }
                    goto LABEL_456e10;
                }
                if v13 as u32 != 110 {
                    v16 = v13;
                    if v16 as u32 == 116 {
                        goto LABEL_456e77;
                    }
                    goto LABEL_456e10;
                } else {
LABEL_456e77:
                    v1 = uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(v17 as u64);
                }
            }
            v21 = core::str::validations::next_code_point(&v8) as u128;
        } while ((v21 as i8 & 1));
    }
    v6 = 0;
    v5 = *(&v1 as &i128);
    return Ok(struct16 {
        field_0: alloc::vec::Vec<T,A>::into_boxed_slice(&v5 as u8)
        field_8: v13
    });
}
