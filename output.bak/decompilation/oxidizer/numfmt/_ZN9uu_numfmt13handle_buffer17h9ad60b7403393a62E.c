fn uu_numfmt::handle_buffer(a0: u32, a1: void*) -> u64 {
    let v0: struct8;  // [bp-0xc0]
    let v1: struct24;  // [sp-0xb0], Other Possible Types: i64
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa0]
    let v4: i64;  // [sp-0x98], Other Possible Types: struct32
    let v5: i64;  // [sp-0x90]
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x68]
    let v8: struct8;  // [bp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i256;  // [sp-0x50], Other Possible Types: struct32
    let v12: i64;  // rax
    let v13: i64;  // r12
    let v14: i64;  // rdi
    let v15: i64;  // rsi
    let v16: i64;  // rbp

    v7 = a0;
    v8 = struct8 {
        field_8: &v7
    };
    v9 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
    v12 = *((&v10 as &char + 8) as &i64);
    if v12 == 9223372036854775809 {
        return 0;
    }
    v13 = *((a1 + 192) as &i64);
    do {
        v14 = *((&v10 as &char + 16) as &i64);
        if v12 == 0x8000000000000000 {
            *(&v0.field_8 as &struct8) = struct8 {
                field_0: v14
            };
            v1 = <T as alloc::string::ToString>::to_string(&v0);
            v4 = struct32 {
                field_0: 0
                field_8: v1
                field_24: v3
            };
            v16 = alloc::boxed::Box<T>::new(&v4);
            return v16;
        }
        v15 = *((&v10 as &char + 24) as &i64);
        if v10 < v13 {
            v1 = v12;
            v2 = v14;
            v3 = v15;
            println!("{:?}", &v1);
        } else {
            v4 = v12;
            v5 = v14;
            v6 = v15;
            v16 = uu_numfmt::format_and_handle_validation(v14, v15, a1);
            if v16 {
                return v16;
            }
        }
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
        v12 = *((&v10 as &char + 8) as &i64);
    } while (v12 != 9223372036854775809);
}
