fn uu_join::State::next_line(a0: void*, a1: void*, a2: &u64) -> u64 {
    let v0: i8;  // [sp-0x159]
    let v1: i64;  // [sp-0x158], Other Possible Types: Option<Result<struct48, struct16>>
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: i128;  // [sp-0x118]
    let v6: i128;  // [sp-0x108]
    let v7: i192;  // [bp-0xf8]
    let v9: i64;  // [sp-0xd8]
    let v10: i64;  // [sp-0xa0]
    let v11: i128;  // [bp-0x98]
    let v12: i8;  // [sp-0x88]
    let v13: i192;  // [sp-0x80]
    let v14: i128;  // [sp-0x68]
    let v15: i128;  // [sp-0x58]
    let v16: struct24;  // [sp-0x48]
    let v18: i64;  // r13
    let v19: i64;  // rcx
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v26: i128;  // xmm0

    v18 = 0x8000000000000000;
    v1 = uu_join::State::read_line(a1, a2 + 2);
    v19 = v1;
    v20 = v2;
    if v19 == 9223372036854775809 {
        *((a0 + 8) as &i64) = 0x8000000000000000;
        *((a0 + 16) as &i64) = v20;
        v18 = 9223372036854775809;
    } else {
        v15 = *((&v1 as &char + 32) as &i128);
        v14 = *((&v1 as &char + 16) as &i128);
        if v19 != 0x8000000000000000 {
            v3 = v19;
            v4 = v20;
            v6 = v15;
            v5 = v14;
            v0 = *((a2 + 1) as &i8);
            if v0 == 1 {
                v21 = v3;
                return struct48 {
                    field_0: v21
                    field_8: v4
                    field_16: v5
                    field_32: v6
                };
            }
            v9 = uu_join::State::get_current_key(a1);
            v23 = uu_join::Input<Sep>::compare(*(a2 as &i8), v9, v22, uu_join::Line::get_field(&v3, *((a1 + 64) as &i64)), v22);
            if v23 == 1 && (v0 == 2 || *((a1 + 91) as &i8) && !*((a1 + 90) as &i8)) {
                v10 = 0;
                v11 = *((a1 + 24) as &i128);
                v12 = 0;
                v16 = alloc::string::String::from_utf8_lossy(v6, *((&v6 as &char + 8) as &i64));
                v13 = format!("{:?}:{:?}: is not sorted: {:?}", &v10, a1 + 80, &v16);
                v7 = v13;
                if v0 == 2 {
                    return struct32 {
                        field_0: 9223372036854775809
                        field_8: v7
                        field_24: v8
                    };
                }
                v10 = uucore::execution_phrase();
                v11 = v22;
                eprintln!("{:?}: {:?}", &v10, &v7);
                *((a1 + 90) as &i8) = 1;
            }
            v26 = v3;
            return struct48 {
                field_0: v26
                field_16: v5
                field_32: v6
            };
        }
    }
    return struct8 {
        field_0: v18
    };
}
