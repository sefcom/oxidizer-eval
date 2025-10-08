fn uu_numfmt::handle_buffer_iterator(a0: i64, a1: i64) -> u64 {
    let v0: i32;  // [bp-0xd4]
    let v1: u8;  // [bp-0xd0]
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: struct32;  // [bp-0xb8], Other Possible Types: u64
    let v5: u64;  // [bp-0xb0]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: struct24;  // [bp-0x88], Other Possible Types: u64
    let v9: u64;  // [bp-0x88]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x78]
    let v12: struct32;  // [bp-0x68], Other Possible Types: u64
    let v13: u64;  // [bp-0x60]
    let v14: u64;  // [bp-0x60]
    let v15: u64;  // [bp-0x58]
    let v16: u64;  // [bp-0x50]
    let v17: struct17;  // [bp-0x48]
    let v19: i64;  // r15
    let v20: u64;  // rax
    let v21: u64;  // rdi
    let v22: u64;  // rsi
    let v23: u64;  // rbp

    v0 = (*((a1 + 200) as &i8) ? 0 : 10);
    v17 = core::iter::traits::iterator::Iterator::enumerate(a0);
    v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v17);
    if v13 == 9223372036854775809 {
        return 0;
    }
    v19 = &v1;
    v14 = v13;
    loop {
        v20 = v14;
        v21 = v15;
        if v20 == 0x8000000000000000 {
            v1 = v21;
            v8 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
            v4 = struct32 {
                field_0: 0
                field_8: v8.field_0
                field_24: v10
            };
            return alloc::boxed::Box<T>::new(&v4) as u64;
        }
        v22 = v16;
        if v12 < *((a1 + 192) as &i64) {
            v1 = v20;
            v2 = v21;
            v3 = v22;
            print!("{}{}", v19, &v0);
            v8 = v9;
            v10 = v11;
            v5 = v6;
        } else {
            v4 = v20;
            v5 = v21;
            v7 = v22;
            v23 = uu_numfmt::format_and_handle_validation(v21, v22, a1);
            v8 = v8;
            v10 = v10;
            v5 = v5;
            if v23 {
                return v23;
            }
        }
        v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v17);
        v19 = &v1;
        v14 = v13;
        if v14 == 9223372036854775809 {
            return 0;
        }
    }
}
