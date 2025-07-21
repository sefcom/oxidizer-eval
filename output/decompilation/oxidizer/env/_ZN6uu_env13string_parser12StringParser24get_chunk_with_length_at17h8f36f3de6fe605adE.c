fn uu_env::string_parser::StringParser::get_chunk_with_length_at(a1: i64, a2: i32) -> Result<struct21, struct9> {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x78]
    let v1: i64;  // [bp-0x38]
    let v2: i8;  // [bp-0x30]
    let v4: u32;  // r8
    let v5: struct32;  // r14
    let v6: u32;  // eax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: struct16;  // r12
    let v10: i64;  // r12
    let v11: u8;  // dl
    let v12: i64;  // r12
    let v13: u64;  // rdx

    if *((a1 + 8) as &i64) < a2 {
        v0 = struct40 {
            field_0: "mid > len"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(*(a1 as &i64), *((a1 + 8) as &i64), a2, v4);
    v5 = *(&v2 as &i64);
    if !v5 {
        v7 = 1;
        return struct24 {
            field_0: v8
            field_8: *((a1 + 32) as &i64)
            field_16: 0
        };
    }
    v6 = uu_env::native_int_str::get_char_from_native_int(*(v1 as &i8)) as i32;
    if v6 != 0x110000 {
        *((a0 + 8) as &i64) = 0;
        *((a0 + 16) as &u32) = v6;
        *((a0 + 20) as &u8) = v11;
        *((a0 + 24) as &i64) = 1;
    }
    v9 = 1;
    if v5 != 1 {
        loop {
            v10 = v9;
            if uu_env::native_int_str::get_char_from_native_int(*((v1 + v10) as &i8)) as i32 != 0x110000 {
                break;
            }
            v9 += 1;
            if v5 == v9 {
                v10 = v5;
                break;
            }
        }
    }
    v12 = v9;
    *((a0 + 8) as &long long) = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v1, v5);
    *((a0 + 16) as &u64) = v13;
    *((a0 + 24) as &u64) = v13;
}
