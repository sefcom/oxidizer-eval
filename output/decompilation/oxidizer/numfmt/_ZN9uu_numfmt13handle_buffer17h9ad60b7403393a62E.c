fn uu_numfmt::handle_buffer(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v1: struct24;  // [bp-0xb0], Other Possible Types: u64
    let v2: u64;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: struct32;  // [bp-0x98], Other Possible Types: u64
    let v5: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x90]
    let v7: u64;  // [bp-0x88]
    let v8: u64;  // [bp-0x68]
    let v9: i64;  // [bp-0x60]
    let v10: void*;  // [bp-0x58]
    let v11: struct32;  // [bp-0x50]
    let v12: u64;  // [sp-0x50]
    let v13: u64;  // [bp-0x48]
    let v14: u64;  // [bp-0x48]
    let v15: u64;  // [bp-0x40]
    let v17: i64;  // r14
    let v18: u64;  // rax
    let v19: u64;  // rdi
    let v20: u64;  // rsi
    let v21: u64;  // rbp

    v8 = a0;
    v9 = &v8;
    v10 = 0;
    v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v9);
    if v13 == 9223372036854775809 {
        return 0;
    }
    v17 = &v1;
    v14 = v13;
    do {
        v18 = v14;
        v19 = v15;
        if v18 == 0x8000000000000000 {
            v0 = v19;
            v1 = <T as alloc::string::ToString>::to_string(&v0);
            v4 = struct32 {
                field_0: 0
                field_8: v1.field_0
                field_24: v3
            };
            return alloc::boxed::Box<T>::new(&v4);
        }
        v20 = v11.field_24;
        if v12 < *((a1 + 192) as &i64) {
            v1 = v18;
            v2 = v19;
            v3 = v20;
            println!("{}", v17);
            v5 = v6;
        } else {
            v4 = v18;
            v5 = v19;
            v7 = v20;
            v21 = uu_numfmt::format_and_handle_validation(v19, v20, a1);
            v5 = v5;
            if v21 {
                return v21;
            }
        }
        v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v9);
        v17 = &v1;
        v14 = v13;
    } while (v14 != 9223372036854775809);
    return 0;
}
