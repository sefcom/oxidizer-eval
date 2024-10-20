fn uu_df::blocks::read_block_size(a0: void*, a1: void*) -> u64 {
    let v0: Arguments;  // [sp-0x128], Other Possible Types: i64, Enum, struct32
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i64;  // [sp-0xf8], Other Possible Types: Enum, Argument
    let v6: i64;  // [sp-0xf0]
    let v7: i8;  // [bp-0xe0]
    let v8: i256;  // [sp-0xd8], Other Possible Types: struct32
    let v9: i64;  // [sp-0xd0]
    let v10: i128;  // [bp-0xb8], Other Possible Types: struct8
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [bp-0xa8]
    let v13: i8;  // [sp-0xa0]
    let v14: i64;  // [bp-0x98]
    let v15: i8;  // [sp-0x96]
    let v16: i64;  // [bp-0x90], Other Possible Types: Argument
    let v17: i64;  // [sp-0x88]
    let v18: i8;  // [bp-0x80]
    let v19: i8;  // [sp-0x78]
    let v20: i8;  // [bp-0x70]
    let v21: i128;  // [bp-0x68], Other Possible Types: Argument
    let v22: i64;  // [sp-0x50]
    let v23: i192;  // [sp-0x48], Other Possible Types: String
    let v24: i64;  // [sp-0x40]
    let v25: i64;  // [sp-0x38]
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rdx
    let v30: i64;  // rdi
    let v31: i64;  // rax
    let v32: i128;  // xmm0
    let v33: i64;  // r12
    let v34: i64;  // r15
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rsi
    let v39: i64;  // r15
    let v40: i64;  // r12
    let v41: i64;  // r12

    v27 = *((a1 + 16) as &i64);
    if v27 {
        v28 = *((a1 + 8) as &i64);
        v29 = 0;
        do {
            if *((v28 + v29 + 8) as &i64) == 9 {
                v30 = *((v28 + v29) as &i64);
                if !(*((v30 + 8) as &i8) ^ 101) && !(*(v30 as &i64) ^ 8820708250248768610) {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a1, &anon.5f995df778c88d2f993662794f843320.2.llvm.13646445757275454229, 9);
                    v8 = &anon.5f995df778c88d2f993662794f843320.2.llvm.13646445757275454229;
                    v9 = 9;
                    if v16 != 2 {
                        v14 = v20;
                        v32 = v16;
                        v12 = v18;
                        v10 = v32;
                        v22 = &v8;
                        v23 = <&T as core::fmt::Display>::fmt;
                        v24 = &v10;
                        v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                        v0 = "Mismatch between definition and access of `";
                        v1 = 2;
                        v4 = 0;
                        v2 = &v22;
                        v3 = 2;
                        v0 = core::panicking::panic_fmt();
                    }
                    v31 = v17;
                    if !v31 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v33 = *((v31 + 8) as &i64);
                    v34 = *((v31 + 16) as &i64);
                    v14 = 0;
                    v15 = 0;
                    v10 = struct8 {
                        field_0: 0
                    };
                    v12 = 0;
                    v8 = uucore::parser::parse_size::Parser::parse(&v10, v33, v34);
                    v36 = v8;
                    if v36 != 3 {
                        v21 = *((&v8 as &char + 16) as &i128);
                        v9 = v9;
                    } else if *((&v8 as &char + 24) as &i64) {
                        v16 = 0;
                        v17 = v33;
                        v18 = v34;
                        v19 = 1;
                        v5 = Argument {
                            value: &v16
                            formatter: <os_display::Quoted as core::fmt::Display>::fmt
                        };
                        v0 = Arguments {
                            pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                            args: [&v5]
                            fmt: None
                        };
                        v23 = alloc::fmt::format::format_inner(&v0);
                        v21 = *((&v23 as &char + 8) as &i128);
                        v36 = 2;
                        v9 = v23;
                    } else {
                        v37 = *((&v8 as &char + 16) as &i64);
                        if !v37 {
                            v10 = 0;
                            v11 = v33;
                            v12 = v34;
                            v13 = 1;
                            v16 = Argument {
                                value: &v10
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v0 = Arguments {
                                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                                args: [&v16]
                                fmt: None
                            };
                            alloc::fmt::format::format_inner(a0 + 8, &v0);
                            *(a0 as &i64) = 1;
                            return a0;
                        }
                        *((a0 + 8) as &i64) = v37;
                        *(a0 as &i64) = 3;
                        return a0;
                    }
                    *((a0 + 16) as &i128) = v21;
                    *(a0 as &i64) = v36;
                    *((a0 + 8) as &i64) = v9;
                    return a0;
                }
            }
        } while ((v29 += 16, v27 << 4 != v29));
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.5f995df778c88d2f993662794f843320.12.llvm.13646445757275454229, 11) as i8 {
        v0 = std::env::_var(&g_4149ee, 15);
        *((a0 + 8) as &i64) = ((v0 & 4294967295) * 0x200 & 4294967295) + 0x200;
    } else {
        v5 = std::env::_var(&g_4149fd, 13);
        if v5 {
            v5 = std::env::_var(&g_414a0a, 10);
            if v5 {
                v5 = std::env::_var(&g_414a14, 9);
                if v5 {
                    v38 = v6;
                    if v38 != 0x8000000000000000 && v38 {
                        goto LABEL_49e415;
                    }
                }
            }
        }
        v39 = *((&v5 as &char + 16) as &i64);
        v40 = v7;
        v14 = 0;
        v15 = 0;
        v10 = struct8 {
            field_0: 0
        };
        v12 = 0;
        v8 = uucore::parser::parse_size::Parser::parse(&v10, v39, v40);
        if v8 != 3 {
            v41 = v9;
            if !v41 {
                goto LABEL_49e3cf;
            }
            goto LABEL_49e3ea;
        } else if !*((&v8 as &char + 24) as &i64) {
            v41 = *((&v8 as &char + 16) as &i64);
        } else {
            v16 = 0;
            v17 = v39;
            v18 = v40;
            v19 = 1;
            v21 = Argument {
                value: &v16
                formatter: <os_display::Quoted as core::fmt::Display>::fmt
            };
            v0 = Arguments {
                pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                args: [&v21]
                fmt: None
            };
            v23 = alloc::fmt::format::format_inner(&v0);
            v41 = v23;
            if !v41 {
LABEL_49e3cf:
                v41 = 0;
                goto LABEL_49e410;
            }
LABEL_49e3ea:
        }
LABEL_49e410:
        if false {
LABEL_49e415:
            v0 = std::env::_var(&g_4149ee, 15);
            v41 = ((v0 & 4294967295) * 0x200 & 4294967295) + 0x200;
        }
        *((a0 + 8) as &i64) = v41;
    }
    *(a0 as &i64) = 3;
    return a0;
}
