fn uu_env::string_parser::StringParser::get_chunk_with_length_at(a0: &struct32, a1: void*, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x48]
    let v3: &u8;  // r14
    let v4: &u8;  // r15
    let v5: u32;  // eax
    let v7: &u8;  // r12
    let v8: u8;  // dl
    let v9: u64;  // rdx

    if a1->field_8 < a2 {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(&a1->field_0 as &i64), a1->field_8, a2);
    v3 = v0.field_24;
    if !v3 {
        a0->field_8 = a1->field_20;
        a0->field_10 = 0;
    } else {
        v4 = v0.field_16;
        v5 = uu_env::native_int_str::get_char_from_native_int(*(v4)) as i32;
        if v5 != 0x110000 {
            a0->field_8 = 0;
            a0->field_10 = v5;
            a0->padding_11[3] = v8;
            a0->field_18 = 1;
        } else {
            v7 = 1;
            if v3 != 1 {
                while (uu_env::native_int_str::get_char_from_native_int(*((v4 + v7) as &i8)) as i32 == 0x110000) {
                    v7 += 1;
                    if v3 == v7 {
                        v7 = v3;
                        break;
                    }
                }
            }
            *(&a0->field_8 as &long long) = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v4, v3);
            a0->field_10 = v9;
            a0->field_18 = v9;
        }
    }
    return struct8 {
        field_0: v6
    };
}
