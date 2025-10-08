fn uu_env::string_parser::StringParser::get_chunk_with_length_at(a0: void*, a1: i64, a2: u32) -> long long {
    let v0: struct32;  // [bp-0x48]
    let v1: i64;  // [bp-0x38]
    let v3: i64;  // r14
    let v4: i64;  // r15
    let v5: u64;  // rax
    let v6: struct40;  // r12
    let v7: i64;  // r12
    let v8: void*;  // r13
    let v9: struct16;  // rax
    let v10: u64;  // rdx
    let v11: u64;  // r13
    let v12: u8;  // dl
    let v13: void*;  // r13
    let v15: u64;  // r13

    if a2 > *((a1 + 8) as &i64) {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(a1 as &i64), *((a1 + 8) as &i64), a2);
    v3 = v0.field_24;
    if !v3 {
        *(&a0[8] as &i64) = *((a1 + 32) as &i64);
        *(&a0[16] as &i8) = 0;
        v15 = 1;
    }
    v4 = v1;
    v5 = uu_env::native_int_str::get_char_from_native_int(*(v4 as &i8));
    if v5 != 0x110000 {
        *(&a0[8] as &i64) = 0;
        *(&a0[16] as &u32) = v5;
        *(&a0[20] as &u8) = v12;
        *(&a0[24] as &i64) = 1;
        v13 = 0;
    }
    v6 = 1;
    if v3 != 1 {
        loop {
            v7 = v6;
            if uu_env::native_int_str::get_char_from_native_int(*((v4 + v7) as &i8)) != 0x110000 {
                break;
            }
            v6 += 1;
            if v3 == v6 {
                v7 = v3;
                break;
            }
        }
    }
    v8 = 0;
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v6, v4, v3, "src/uu/env/src/string_parser.rs");
    return struct32 {
        field_0: v11
        field_8: v9
        field_16: v10
        field_24: v10
    };
}
