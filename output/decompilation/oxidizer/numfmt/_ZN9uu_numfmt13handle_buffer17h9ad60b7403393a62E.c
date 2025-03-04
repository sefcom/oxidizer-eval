fn uu_numfmt::handle_buffer(a0: u32, a1: void*) -> u64 {
    let v0: struct8;  // [bp-0xc0]
    let v1: struct24;  // [sp-0xb0], Other Possible Types: unsigned long
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa0]
    let v4: i64;  // [sp-0x98]
    let v5: i64;  // [sp-0x90], Other Possible Types: struct24
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x68]
    let v8: struct8;  // [bp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: struct32;  // [sp-0x50], Other Possible Types: int
    let v12: i64;  // rax
    let v13: i64;  // r12
    let v14: i64;  // rdi
    let v15: i64;  // rbp

    v7 = a0;
    v8 = struct8 {
        field_8: &v7
    };
    v9 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
    v12 = v10.field_8 as i64;
    if v12 == 9223372036854775809 {
        return 0;
    }
    v13 = *((a1 + 192) as &i64);
    do {
        v14 = (&v10)[16] as i64;
        if v12 == 0x8000000000000000 {
            *(&v0.field_8 as &struct8) = struct8 {
                field_0: v14
            };
            v1 = <T as alloc::string::ToString>::to_string(&v0);
            v5 = v1;
            v4 = 0;
            return v15;
        }
        if v10.field_0 < v13 {
            v1 = v12;
            v2 = v14;
            v3 = v6;
            println!("{}", &v1);
            v3 = v3;
        } else {
            v4 = v12;
            v5 = v14;
            v6 = v3;
            v3 = v3;
            if vvar_243{reg 56} {
                return v15;
            }
        }
        v3 = v3;
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
        v12 = v10.field_8 as i64;
    } while (v12 != 9223372036854775809);
}
