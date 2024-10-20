fn uu_join::State::next_line(a0: void*, a1: void*, a2: &u64) -> u64 {
    let v0: i8;  // [sp-0x159]
    let v1: i64;  // [sp-0x158], Other Possible Types: Arguments, Argument, struct16, Enum
    let v2: Argument;  // [sp-0x150], Other Possible Types: i64
    let v3: Argument;  // [bp-0x148]
    let v4: i64;  // [sp-0x138]
    let v5: i128;  // [bp-0x128]
    let v6: i64;  // [sp-0x118]
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [sp-0x100]
    let v9: i128;  // [sp-0xf8]
    let v10: i128;  // [sp-0xe8]
    let v11: struct16;  // [bp-0xd8], Other Possible Types: Arguments, Argument
    let v12: Argument;  // [bp-0xd0]
    let v13: i64;  // [sp-0xc0]
    let v14: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v15: i64;  // [sp-0x90]
    let v16: i64;  // [bp-0x88]
    let v17: i8;  // [sp-0x78]
    let v18: i192;  // [sp-0x70], Other Possible Types: String
    let v19: i128;  // [sp-0x58]
    let v20: i128;  // [sp-0x48]
    let v22: i64;  // rbp
    let v23: i64;  // rcx
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // r13
    let v27: i64;  // rax
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rdx
    let v35: i128;  // xmm0

    v22 = 0x8000000000000000;
    v1 = uu_join::State::read_line(a1, a2 + 2);
    v23 = v1;
    v24 = v2;
    if v23 == 9223372036854775809 {
        *((a0 + 8) as &i64) = 0x8000000000000000;
        *((a0 + 16) as &i64) = v24;
        v22 = 9223372036854775809;
    } else {
        v20 = *((&v1 as &char + 32) as &i128);
        v19 = *((&v1 as &char + 16) as &i128);
        if v23 != 0x8000000000000000 {
            v7 = v23;
            v8 = v24;
            v10 = v20;
            v9 = v19;
            v0 = *((a2 + 1) as &i8);
            if v0 == 1 {
                v25 = v7;
                *((a0 + 32) as &i128) = v10;
                *((a0 + 16) as &i128) = v9;
                *(a0 as &i64) = v25;
                *((a0 + 8) as &i64) = v8;
                return v25;
            }
            v26 = uu_join::State::get_current_key(a1);
            v27 = uu_join::Line::get_field(&v7, *((a1 + 64) as &i64));
            if !(!v26 || !v27) {
                if *(a2 as &i8) {
                    v11 = struct16 {
                        field_0: v26
                        field_8: v32
                    };
                    v1 = struct16 {
                        field_0: v27
                        field_8: v32
                    };
                    v27 = <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v11, &v1);
                }
                v30 = memcmp(v26, v27, v29) as u32;
                v27 = v30 | -0x100 | v31;
                if !(v31 >= 0) || !(v27 == 1) {
LABEL_441ef3:
                    v35 = v7;
                    *((a0 + 32) as &i128) = v10;
                    *((a0 + 16) as &i128) = v9;
                    *(a0 as &i128) = v35;
                    return v25;
                }
            } else if !v26 {
                vvar_433{reg 224} = v7;
                *((a0 + 32) as &i128) = v10;
                *((a0 + 16) as &i128) = v9;
                *(a0 as &i128) = v35;
                return v25;
            }
            if v0 == 2 || *((a1 + 91) as &i8) && !*((a1 + 90) as &i8) {
                v15 = 0;
                v16 = *((a1 + 24) as &i128);
                v17 = 0;
                v14 = alloc::string::String::from_utf8_lossy(v10, *((&v10 as &char + 8) as &i64));
                v1 = Argument {
                    value: &v15
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v2 = Argument {
                    value: <os_display::Quoted as core::fmt::Display>::fmt
                    formatter: a1 + 80
                };
                v3 = Argument {
                    value: a1 + 80
                    formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                };
                v4 = &v14;
                v11 = Arguments {
                    pieces: [&g_4fb0b8, ":", ": is not sorted: "]
                    args: [&v1, &v2, &v3]
                    fmt: None
                };
                v18 = alloc::fmt::format::format_inner(&v11);
                v5 = v18;
                if v0 == 2 {
                    *((a0 + 24) as &i64) = v6;
                    *((a0 + 8) as &i128) = v5;
                    *(a0 as &i64) = 9223372036854775809;
                    return v25;
                }
                v15 = uucore::execution_phrase();
                v16 = v32;
                v11 = Argument {
                    value: &v15
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v12 = Argument {
                    value: <&T as core::fmt::Display>::fmt
                    formatter: &v5
                };
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = Arguments {
                    pieces: [&g_4fb0e8, ": ", "\n"]
                    args: [&v11, &v12]
                    fmt: None
                };
                std::io::stdio::_eprint(&v1);
                *((a1 + 90) as &i8) = 1;
            }
            goto LABEL_441ef3;
        }
    }
    *(a0 as &i64) = v22;
    return v25;
}
