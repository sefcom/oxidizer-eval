fn uu_env::variable_parser::VariableParser::parse_variable(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xd8], Other Possible Types: Enum, struct40, Arguments, struct16
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i128;  // [bp-0xc0]
    let v4: i8;  // [bp-0xa4]
    let v5: i192;  // [sp-0x98], Other Possible Types: String, struct24
    let v6: i64;  // [bp-0x90]
    let v7: i64;  // [sp-0x88]
    let v8: i32;  // [sp-0x7c]
    let v9: i64;  // [bp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i64;  // [sp-0x60]
    let v13: i64;  // [sp-0x58], Other Possible Types: Argument
    let v15: i64;  // [sp-0x50]
    let v16: String;  // [sp-0x48]
    let v18: i64;  // r14
    let v19: i64;  // r15
    let v21: i64;  // rax
    let v22: i64;  // rdx
    let v23: i64;  // r15
    let v25: i64;  // rax
    let v26: i8;  // cl
    let v27: i64;  // rax
    let v31: i32;  // eax
    let v32: i64;  // rax
    let v33: i32;  // eax
    let v34: i64;  // rdx
    let v35: i64;  // rax
    let v36: i32;  // ecx
    let v37: i64;  // r14
    let v38: i64;  // rax
    let v39: i64;  // rsi
    let v41: i64;  // rax
    let v42: i64;  // rdx
    let v44: i64;  // r12
    let v47: i32;  // ecx
    let v48: i64;  // rdx
    let v50: i32;  // eax
    let v52: i32;  // ecx
    let v53: i64;  // rdx
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // r15
    let v61: i32;  // ecx
    let v64: i32;  // ecx
    let v65: i8;  // sil
    let v66: i32;  // edi
    let v67: i16;  // r8w
    let v68: i8;  // r9b

    v18 = *(a1 as &i64);
    v0 = uu_env::string_parser::StringParser::consume_chunk(v18, a2);
    if v0 {
LABEL_4a182a:
        v25 = v1;
        v26 = *((&v0 as &char + 16) as &i8);
        *(a0 as &i32) = 5;
        *((a0 + 8) as &i64) = v25;
        *((a0 + 16) as &i64) = v25;
        *((a0 + 24) as &i8) = v26;
        return a0;
    }
    v19 = *((v18 + 32) as &i64);
    if *((v18 + 8) as &i64) < v19 {
LABEL_4a1bf7:
        v0 = "mid > len";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v0 = core::panicking::panic_fmt();
    }
    if *((v18 + 8) as &i64) == v19 {
        v21 = __rust_alloc(21, 1);
        *(v21 as &i128) = 134814791028905390117784995422593575277;
        *((v21 + 13) as &i64) = 7308604895909997666;
        *(a0 as &i32) = 4;
        *((a0 + 8) as &i64) = v19;
        *((a0 + 16) as &i64) = 21;
        *((a0 + 24) as &i64) = v21;
        *((a0 + 32) as &i64) = 21;
        return a0;
    }
    if uu_env::native_int_str::get_char_from_native_int(*((*(v18 as &i64) + v19) as &i8)) as i32 != 123 {
        v23 = *((v18 + 32) as &i64);
        if *((v18 + 8) as &i64) < v23 {
            goto LABEL_4a1bf7;
        }
        if *((v18 + 8) as &i64) == v23 {
            goto LABEL_4a1a34;
        }
        v31 = uu_env::native_int_str::get_char_from_native_int(*((*(v18 as &i64) + v23) as &i8)) as i32;
        if v31 != 0x110000 && (v8 = v31, v31 - 48 < 10) {
            v9 = &v8;
            v10 = <char as core::fmt::Display>::fmt;
            v0 = Arguments {
                pieces: ["Unexpected character: '", "', expected variable name must not start with 0..9"]
                args: [&v9]
                fmt: None
            };
            v16 = alloc::fmt::format::format_inner(&v0);
            goto LABEL_0x4a1b4c;
        } else {
            v34 = *((v18 + 8) as &i64);
            v35 = *((v18 + 32) as &i64);
            if v34 < v35 {
                goto LABEL_4a1bf7;
            }
LABEL_4a1a34:
        }
    } else {
        v0 = uu_env::string_parser::StringParser::consume_chunk(v18, v22);
        if !(!v0) {
            goto LABEL_4a182a;
        }
        v27 = *((v18 + 32) as &i64);
        if *((v18 + 8) as &i64) < v27 {
            goto LABEL_4a1bf7;
        }
        v12 = v27;
        if *((v18 + 8) as &i64) != v27 {
            v33 = uu_env::native_int_str::get_char_from_native_int(*((*(v18 as &i64) + v12) as &i8)) as i32;
            if v33 != 0x110000 && (v9 = v33, v33 - 48 < 10) {
                v44 = *((v18 + 32) as &i64);
                v13 = &v9;
                goto LABEL_4a1d69;
            } else {
                v32 = *((v18 + 8) as &i64);
                v27 = *((v18 + 32) as &i64);
                if v32 < v27 {
                    goto LABEL_4a1bf7;
                }
            }
        }
        loop {
            if v44 == v27 {
                v54 = __rust_alloc(21, 1);
                *(v54 as &i128) = 43072341861285339599737224862310295885;
                *((v54 + 13) as &i64) = 7305790164425533294;
                v5 = 21;
                v6 = v54;
                v7 = 21;
                goto LABEL_4a1da3;
            }
            v50 = uu_env::native_int_str::get_char_from_native_int(*((*(v18 as &i64) + v27) as &i8)) as i32;
            if v52 < 128 && v52 - 48 >= 10 && (v52 & 95) - 65 > 25 && v52 != 95 {
                break;
            }
            v0 = uu_env::string_parser::StringParser::consume_chunk(v18, v22);
            if !(!v0) {
                goto LABEL_4a1cac;
            }
            v44 = *((v18 + 8) as &i64);
            v27 = *((v18 + 32) as &i64);
            if v44 < v27 {
                goto LABEL_4a1bf7;
            }
        }
        if v52 != 58 {
            if v52 != 125 {
                v9 = v52;
                v44 = *((v18 + 32) as &i64);
                v13 = Argument {
                    value: &v9
                    formatter: <char as core::fmt::Display>::fmt
                };
                v15 = <char as core::fmt::Display>::fmt;
            } else {
                v0 = uu_env::string_parser::StringParser::consume_chunk(v18, v22);
                if !v0 {
                    goto LABEL_4a1e04;
                }
            }
LABEL_4a1d69:
            v0 = Arguments {
                pieces: &[&str] {
                    ptr: v58
                    len: 2
                }
                args: [&v13]
                fmt: None
            };
            v5 = alloc::fmt::format::format_inner(&v0);
LABEL_4a1da3:
            v64 = v4;
            v65 = *((&v5 as &char + 8) as &i8);
            v66 = *((&v5 as &char + 9) as &i32);
            v67 = *((&v5 as &char + 13) as &i16);
            v68 = *((&v5 as &char + 15) as &i8);
            *(a0 as &i32) = 4;
            *((a0 + 4) as &i32) = v64;
            *((a0 + 8) as &i64) = v44;
            *((a0 + 16) as &i64) = v5;
            *((a0 + 24) as &i8) = v65;
            *((a0 + 25) as &i32) = v66;
            *((a0 + 29) as &i16) = v67;
            *((a0 + 31) as &i8) = v68;
            *((a0 + 32) as &i64) = v7;
            return a0;
        }
        v44 = *((v18 + 8) as &i64);
        v11 = *((v18 + 32) as &i64);
        if v44 < v11 {
            goto LABEL_4a1bf7;
        }
        loop {
            if v44 == v11 {
LABEL_4a1e6b:
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                goto LABEL_4a1da3;
            }
            if v61 == 125 {
                break;
            }
            if v61 == 0x110000 {
                v44 = *((v18 + 32) as &i64);
                goto LABEL_4a1e6b;
            }
            v0 = uu_env::string_parser::StringParser::consume_chunk(v18, v22);
            if !(!v0) {
                goto LABEL_4a1cac;
            }
            v44 = *((v18 + 8) as &i64);
            v11 = *((v18 + 32) as &i64);
            if v44 < v11 {
                goto LABEL_4a1bf7;
            }
        }
        v0 = uu_env::string_parser::StringParser::consume_chunk(v18, v22);
        if v0 {
LABEL_4a1cac:
            v5 = v1;
            v6 = *((&v0 as &char + 16) as &i8);
            goto LABEL_0x4a1da8;
        } else {
            v0 = struct16 {
                field_0: vvar_592{reg 56} + 1
                field_8: v63
            };
            uu_env::string_parser::StringParser::substring(v18, &v0);
LABEL_4a1e04:
            v0 = v12;
            uu_env::string_parser::StringParser::substring(v18, &v0);
            goto LABEL_0x4a1b1f;
        }
    }
    do {
        if v42 == v41 {
LABEL_4a1ab1:
            v53 = v42 - v23;
            if v42 == v23 {
                v38 = __rust_alloc(21, 1);
                *(v38 as &i128) = 134814791028905390117784995422593575245;
                *((v38 + 13) as &i64) = 7308604895909997666;
                goto LABEL_0x4a1b4c;
            } else {
                v55 = *((v18 + 8) as &i64);
                if v55 < v23 {
                    v0 = "mid > len";
                    v1 = 1;
                    v2 = 8;
                    v3 = 0;
                    v0 = core::panicking::panic_fmt();
                } else if v53 <= v55 - v23 {
                    v56 = v23 + *(v18 as &i64);
                } else {
                    v0 = "mid > len";
                    v1 = 1;
                    v2 = 8;
                    v3 = 0;
                    v0 = core::panicking::panic_fmt();
                }
            }
            *((a0 + 8) as &i64) = v56;
            *((a0 + 16) as &i64) = v53;
            *((a0 + 24) as &i64) = 0;
            *((a0 + 32) as &void*) = uu_env::native_int_str::get_char_from_native_int;
            *(a0 as &i32) = 8;
            return a0;
        }
        if v47 != 95 && v47 - 48 >= 10 && (v47 & 2097119) - 65 >= 26 {
            v42 = *((v18 + 32) as &i64);
            goto LABEL_4a1ab1;
        }
        v0 = uu_env::string_parser::StringParser::consume_chunk(v18, v48);
        if v0 {
            v37 = v1;
            v38 = *((&v0 as &char + 16) as &i8);
            *(a0 as &i32) = 5;
            *((a0 + 4) as &i32) = v36;
            *((a0 + 8) as &i64) = v23;
            *((a0 + 16) as &i64) = v37;
            *((a0 + 24) as &i64) = v38;
            *((a0 + 32) as &i64) = v39;
            return a0;
        }
        v42 = *((v18 + 8) as &i64);
        v41 = *((v18 + 32) as &i64);
    } while (v42 >= v41);
}
