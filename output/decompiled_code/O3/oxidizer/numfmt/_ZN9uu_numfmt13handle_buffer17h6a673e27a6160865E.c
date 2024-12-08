fn uu_numfmt::handle_buffer(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct8;  // [bp-0xc0]
    let v1: struct24;  // [sp-0xb0], Other Possible Types: i64
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa0]
    let v4: struct32;  // [sp-0x98], Other Possible Types: i64
    let v5: i64;  // [sp-0x90]
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x68]
    let v8: struct16;  // [bp-0x60]
    let v9: i256;  // [sp-0x50], Other Possible Types: struct32
    let v11: i64;  // rax
    let v12: i64;  // r12
    let v13: i64;  // rdi
    let v14: i64;  // rbp
    let v15: i64;  // rdx

    v7 = a0;
    v8 = struct16 {
        field_0: &v7
        field_8: 0
    };
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8, a2);
    v11 = *((&v9 as &char + 8) as &i64);
    if v11 == 9223372036854775809 {
        return 0;
    }
    v12 = *((a1 + 192) as &i64);
    do {
        v13 = *((&v9 as &char + 16) as &i64);
        if v11 == 0x8000000000000000 {
            v0 = struct8 {
                field_0: v13
            };
            v1 = <T as alloc::string::ToString>::to_string(&v0);
            v4 = struct32 {
                field_0: 0
                field_8: v1
                field_24: v3
            };
            v14 = alloc::boxed::Box<T>::new(&v4);
            return v14;
        }
        if v9 < v12 {
            v1 = v11;
            v2 = v13;
            v3 = v6;
            println!("{:?}", &v1);
        } else {
            v4 = v11;
            v5 = v13;
            v6 = v3;
            v14 = uu_numfmt::format_and_handle_validation() as i64;
            if v14 {
                return v14;
            }
        }
        v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8, v15);
        v11 = *((&v9 as &char + 8) as &i64);
    } while (v11 != 9223372036854775809);
}
