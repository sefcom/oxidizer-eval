fn uu_join::State::next_line(a0: &struct48, a1: void*, a2: &u64) -> u64 {
    let v0: i8;  // [sp-0x159]
    let v1: i64;  // [sp-0x158], Other Possible Types: Option<Result<struct48, struct8>>
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: iNone;  // [sp-0x118]
    let v9: iNone;  // [sp-0x108]
    let v10: String;  // [sp-0xf8]
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: i64;  // [sp-0xc8]
    let v14: i64;  // [sp-0xc0]
    let v15: i64;  // [sp-0xb8]
    let v16: i64;  // [sp-0xa0]
    let v17: iNone;  // [bp-0x98], Other Possible Types: unsigned long
    let v18: i8;  // [sp-0x88]
    let v19: String;  // [sp-0x80]
    let v20: iNone;  // [sp-0x68]
    let v21: iNone;  // [sp-0x58]
    let v22: struct24;  // [sp-0x48]
    let v24: i64;  // r13
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v28: i64;  // rdx

    v24 = 0x8000000000000000;
    v1 = uu_join::State::read_line(a1);
    v25 = v1;
    v26 = v2;
    if v25 == 9223372036854775809 {
        *((a0 + 8) as &i64) = 0x8000000000000000;
        *((a0 + 16) as &unsigned long) = v26;
        v24 = 9223372036854775809;
    } else {
        v21 = *((&v1 as &char + 32) as &i128);
        v20 = *((&v1 as &char + 16) as &i128);
        if v25 != 0x8000000000000000 {
            v6 = v25;
            v7 = v26;
            v9 = v21;
            v8 = v20;
            v0 = *((a2 + 1) as &i8);
            if v0 == 1 {
                return struct48 {
                    field_0: v27
                    field_8: v7
                    field_16: v8
                    field_32: v9
                };
            }
            v11 = uu_join::State::get_current_key(a1);
            if !(uu_join::Input<Sep>::compare(*(a2 as &i8), v11, v28, uu_join::Line::get_field(&v6, *((a1 + 64) as &i64)), v28) as i8 == 1 && (v0 == 2 || *((a1 + 91) as &i8) && !*((a1 + 90) as &i8))) {
                return struct48 {
                    field_0: v32
                    field_16: v8
                    field_32: v9
                };
            }
            v16 = 0;
            *(&v17 as &i128) = *((a1 + 24) as &i128);
            v18 = 0;
            v22 = alloc::string::String::from_utf8_lossy(v9 as i64, (&v9)[8] as i64);
            v19 = format!("{}:{}: is not sorted: {}", &v16, a1 + 80, &v22);
            v10 = v19;
            if v0 != 2 {
                v16 = uucore::execution_phrase();
                v17 = v28;
                v12 = &v16;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v10;
                v15 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_532758;
                v2 = 3;
                v5 = 0;
                v3 = &v12;
                v4 = 2;
                std::io::stdio::_eprint(&v1);
            }
        }
    }
    *(a0 as &unsigned long) = v24;
}
