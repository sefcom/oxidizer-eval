fn uu_env::string_parser::StringParser::get_chunk_with_length_at(a1: i64, a2: i32) -> : struct32 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x38]
    let v1: i8;  // [bp-0x30]
    let v3: u32;  // r8
    let v4: struct32;  // r14
    let v5: u32;  // eax
    let v6: u64;  // rax
    let v7: u64;  // r12
    let v8: i64;  // r12
    let v9: u8;  // dl
    let v10: u64;  // rax
    let v11: i64;  // r12
    let v12: u64;  // rdx

    if *((a1 + 8) as &i64) < a2 {
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(*(a1 as &i64), *((a1 + 8) as &i64), a2, v3);
    v4 = *(&v1 as &i64);
    if !v4 {
        *((a0 + 8) as &i64) = *((a1 + 32) as &i64);
        *((a0 + 16) as &i8) = 0;
        v6 = 1;
    }
    v5 = uu_env::native_int_str::get_char_from_native_int(*(v0 as &i8)) as i32;
    if v5 != 0x110000 {
        return struct32 {
            field_0: v10
            field_8: 0
            field_16: v5
            field_20: v9
            field_24: 1
        };
    }
    v7 = 1;
    if v4 != 1 {
        loop {
            v8 = v7;
            if uu_env::native_int_str::get_char_from_native_int(*((v0 + v8) as &i8)) as i32 != 0x110000 {
                break;
            }
            v7 += 1;
            if v4 == v7 {
                v8 = v4;
                break;
            }
        }
    }
    v11 = v7;
    *((a0 + 8) as &long long) = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, v0, v4);
    *((a0 + 16) as &u64) = v12;
    *((a0 + 24) as &u64) = v12;
}
