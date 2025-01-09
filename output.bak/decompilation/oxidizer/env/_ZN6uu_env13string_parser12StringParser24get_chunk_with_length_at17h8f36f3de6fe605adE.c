fn uu_env::string_parser::StringParser::get_chunk_with_length_at(a0: &struct32, a1: void*, a2: u32) -> u64 {
    let v0: u256;  // [sp-0x48], Other Possible Types: struct32
    let v3: &u8;  // r14
    let v4: &u8;  // r15
    let v5: u32;  // eax
    let v7: &u8;  // r12
    let v8: &u8;  // r12
    let v9: u8;  // dl
    let v11: u64;  // rdx

    if a1->field_8 < a2 {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(&a1->field_0 as &i64), a1->field_8, a2);
    v3 = *((&v0 as &char + 24) as &i64);
    if !v3 {
        a0->field_8 = a1->field_20;
        a0->field_10 = 0;
    } else {
        v4 = *((&v0 as &char + 16) as &i64);
        v5 = uu_env::native_int_str::get_char_from_native_int(*(v4)) as i32;
        if v5 != 0x110000 {
            a0->field_8 = 0;
            a0->field_10 = v5;
            a0->padding_11[3] = v9;
            a0->field_18 = 1;
        } else {
            v7 = 1;
            v8 = 1;
            if v3 != 1 {
                loop {
                    v8 = v7;
                    if uu_env::native_int_str::get_char_from_native_int(*((v4 + v7) as &i8)) as i32 != 0x110000 {
                        break;
                    }
                    v7 += 1;
                    if v3 == v7 {
                        v8 = v3;
                        break;
                    }
                }
            }
            *(&a0->field_8 as &long long) = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v4, v3);
            a0->field_10 = v11;
            a0->field_18 = v11;
        }
    }
    return struct8 {
        field_0: v6
    };
}
