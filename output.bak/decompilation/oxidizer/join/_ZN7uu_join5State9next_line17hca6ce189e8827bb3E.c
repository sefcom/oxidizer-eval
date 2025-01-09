fn uu_join::State::next_line(a0: &struct48, a1: &struct1, a2: &u64) -> u64 {
    let v0: i8;  // [sp-0x159]
    let v1: i64;  // [sp-0x158], Other Possible Types: Option<Result<struct48, struct8>>
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128]
    let v8: i64;  // [sp-0x120]
    let v9: i128;  // [sp-0x118]
    let v10: i128;  // [sp-0x108]
    let v11: i128;  // [sp-0xf8]
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: i64;  // [sp-0xb8]
    let v18: i64;  // [sp-0xb0]
    let v19: i64;  // [sp-0xa0]
    let v20: i128;  // [bp-0x98]
    let v21: i8;  // [sp-0x88]
    let v22: i8;  // [bp-0x80]
    let v23: i8;  // [bp-0x70]
    let v24: i128;  // [sp-0x68]
    let v25: i128;  // [sp-0x58]
    let v26: i192;  // [sp-0x48], Other Possible Types: struct24
    let v28: i64;  // r13
    let v29: i64;  // rcx
    let v30: i64;  // rax
    let v32: i64;  // rdx

    v28 = 0x8000000000000000;
    v1 = uu_join::State::read_line(a1);
    v29 = v1;
    v30 = v2;
    if v29 == 9223372036854775809 {
        *((a0 + 8) as &i64) = 0x8000000000000000;
        *((a0 + 16) as &i64) = v30;
        v28 = 9223372036854775809;
    } else {
        v25 = *((&v1 as &char + 32) as &i128);
        v24 = *((&v1 as &char + 16) as &i128);
        if v29 != 0x8000000000000000 {
            v7 = v29;
            v8 = v30;
            v10 = v25;
            v9 = v24;
            v0 = *((a2 + 1) as &i8);
            if v0 == 1 {
                return struct48 {
                    field_0: v31
                    field_8: v8
                    field_16: v9
                    field_32: v10
                };
            }
            v13 = uu_join::State::get_current_key(a1);
            if !(uu_join::Input<Sep>::compare(*(a2 as &i8), v13, v32, uu_join::Line::get_field(&v7, *((a1 + 64) as &i64)), v32) as i8 == 1 && (v0 == 2 || *((a1 + 91) as &i8) && !*((a1 + 90) as &i8))) {
                return struct48 {
                    field_0: v36
                    field_16: v9
                    field_32: v10
                };
            }
            v19 = 0;
            v20 = *((a1 + 24) as &i128);
            v21 = 0;
            v26 = alloc::string::String::from_utf8_lossy(v10, *((&v10 as &char + 8) as &i64));
            v1 = &v19;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            v3 = a1 + 80;
            v4 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v5 = &v26;
            v6 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v14 = &g_532728;
            v15 = 3;
            v18 = 0;
            v16 = &v1;
            v17 = 3;
            core::option::Option<T>::map_or_else();
            v11 = v22;
            v12 = v23;
            if v0 == 2 {
                *((a0 + 24) as &i64) = v12;
                *((a0 + 8) as &i128) = v11;
                *(a0 as &i64) = 9223372036854775809;
            } else {
                v19 = uucore::execution_phrase();
                v20 = v32;
                eprintln!("{:?}: {:?}", &v19, &v11);
                *((a1 + 90) as &i8) = 1;
            }
        }
    }
    *(a0 as &i64) = v28;
}
