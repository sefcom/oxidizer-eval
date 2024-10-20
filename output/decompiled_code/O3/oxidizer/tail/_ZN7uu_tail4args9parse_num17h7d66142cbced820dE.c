fn uu_tail::args::parse_num(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: struct32;  // [sp-0xf8], Other Possible Types: i256
    let v2: Argument;  // [bp-0xd8]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i8;  // [sp-0xb0]
    let v7: struct8;  // [bp-0xa8]
    let v8: i64;  // [sp-0x98]
    let v9: i16;  // [sp-0x88]
    let v10: i8;  // [sp-0x86]
    let v11: Arguments;  // [bp-0x80]
    let v12: String;  // [sp-0x48], Other Possible Types: i192
    let v14: i64;  // r15
    let v15: i64;  // rdx
    let v16: i64;  // rax
    let v17: i8;  // r12b
    let v18: i64;  // r14
    let v19: i32;  // ecx
    let v20: i32;  // esi
    let v21: i32;  // edx
    let v22: i64;  // r12
    let v23: i64;  // r12
    let v25: i64;  // r14
    let v26: i64;  // rax
    let v29: i64;  // rbp
    let v30: i64;  // r12
    let v31: i64;  // rax
    let v32: i64;  // rax

    v14 = core::str::<impl str>::trim_matches(a1, a2);
    if !v15 {
        v17 = 0;
        v18 = 0;
        goto LABEL_4a56ab;
    }
    v16 = *(v14 as &i8);
    if v16 >= 0 {
LABEL_4a565f:
        if !(v16 == 43) {
            goto LABEL_4a5664;
        }
LABEL_4a5691:
        if v18 == 1 || *((v14 + 1) as &i8) > 191 {
            v14 += 1;
            v18 -= 1;
            v17 = v22 | -0x100 | 1;
            goto LABEL_4a56ab;
        }
    } else {
        v19 = v16 & 31;
        v20 = *((v14 + 1) as &i8) & 63;
        if (v16 & 255) <= 223 {
            v16 = v19 * 64 | v20;
            goto LABEL_4a565f;
        }
        v21 = *((v14 + 2) as &i8) & 63 | v20 * 64;
        if (v16 & 255) >= 240 {
            v16 = *((v14 + 3) as &i8) & 63 | v21 * 64 | (v19 & 7) * 0x40000;
            if v16 == 43 {
                goto LABEL_4a5691;
            }
        } else {
            v16 = v21 | v19 * 0x1000;
            if v16 == 43 {
                goto LABEL_4a5691;
            }
        }
LABEL_4a5664:
        if v16 != 45 {
LABEL_4a5680:
            v17 = 0;
LABEL_4a56ab:
            v9 = 0;
            v10 = 0;
            v7 = struct8 {
                field_0: 0
            };
            v8 = 0;
            v1 = uucore::parser::parse_size::Parser::parse(&v7, v14, v18);
            if v1 != 3 {
                v23 = *((&v1 as &char + 8) as &i64);
                if !v18 {
                    goto LABEL_4a5795;
                }
            } else {
                if !*((&v1 as &char + 24) as &i64) {
                    v26 = *((&v1 as &char + 16) as &i64);
                    if v26 {
                        if !v17 {
                            *((a0 + 8) as &i64) = 0;
                            *((a0 + 16) as &i64) = v26;
                        } else {
                            *((a0 + 8) as &i64) = 1;
                            *((a0 + 16) as &i64) = v26;
                        }
                    } else {
                        if v17 {
                            *((a0 + 8) as &i64) = 2;
                        } else {
                            *((a0 + 8) as &i64) = 3;
                        }
                    }
                    *(a0 as &i64) = 3;
                    return v26;
                }
                v3 = 0;
                v4 = v14;
                v5 = v18;
                v6 = 1;
                v2 = Argument {
                    value: &v3
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v11 = Arguments {
                    pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                    args: [&v2]
                    fmt: None
                };
                v12 = alloc::fmt::format::format_inner(&v11);
                v23 = v12;
                if !v18 {
LABEL_4a5795:
                    goto LABEL_4a57df;
                }
            }
            if v25 < 0 {
                v0 = 0;
            }
            v0 = 1;
            v31 = __rust_alloc(v18, 1);
LABEL_4a57df:
            v32 = memcpy(v29, v14, v18);
            *(a0 as &i64) = 1;
            *((a0 + 8) as &i64) = v18;
            *((a0 + 16) as &i64) = v29;
            *((a0 + 24) as &i64) = v18;
            if v30 {
                return v26;
            }
            return v26;
        } else if v18 == 1 || *((v14 + 1) as &i8) >= 192 {
            v14 += 1;
            v18 -= 1;
            goto LABEL_4a5680;
        }
    }
    core::str::slice_error_fail(); /* do not return */
}
