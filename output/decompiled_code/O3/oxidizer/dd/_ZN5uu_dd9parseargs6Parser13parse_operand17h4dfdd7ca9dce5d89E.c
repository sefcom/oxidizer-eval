fn uu_dd::parseargs::Parser::parse_operand(a0: &struct33, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i256;  // [sp-0x88], Other Possible Types: struct32, Option<struct24>, struct24
    let v1: i8;  // [bp-0x80]
    let v2: i8;  // [bp-0x7f]
    let v3: i8;  // [bp-0x70]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: Option<struct32>;  // [sp-0x50], Other Possible Types: i256
    let v8: i64;  // r14
    let v9: i64;  // r15
    let v10: i64;  // rbx
    let v11: i64;  // r12
    let v12: i64;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // r12
    let v16: i64;  // rcx
    let v17: i64;  // rdx
    let v18: i64;  // rcx
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i64;  // r14
    let v22: i64;  // rcx
    let v23: i64;  // rdx
    let v24: i64;  // rdx
    let v25: i64;  // rdx
    let v26: i64;  // rdx
    let v27: i64;  // rsi
    let v28: i64;  // rdi
    let v29: i64;  // rcx
    let v30: i64;  // rsi

    v6 = core::str::<impl str>::split_once(a2, a3);
    v8 = v6;
    match v6 {
        None => {
            v13 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, a3);
            *(a0 as &i64) = 0;
            return v13;
        },
        Some(_) => {
            v9 = *((&v6 as &char + 8) as &i64);
            v10 = *((&v6 as &char + 16) as &i64);
            v11 = *((&v6 as &char + 24) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "bs") as i8 {
                v0 = uu_dd::parseargs::Parser::parse_bytes(v10, v11);
                v12 = v0;
                v13 = *((&v0 as &char + 8) as &i64);
                if v12 != 14 {
                    vvar_564{reg 32} = a0;
                    *((v23 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
                    *(v23 as &i64) = v12;
                    *((v23 + 8) as &i64) = v13;
                    return v13;
                }
                v14 = a1;
                *(v14 as &i64) = 1;
                *((v14 + 8) as &i64) = v13;
            } else {
                v5 = v10;
                v4 = v11;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "cbs") as i8 {
                    v0 = uu_dd::parseargs::Parser::parse_bytes(v5, v4);
                    v12 = v0;
                    v13 = *((&v0 as &char + 8) as &i64);
                    if v12 != 14 {
                        vvar_570{reg 32} = a0;
                        *((v23 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
                        *(v23 as &i64) = v12;
                        *((v23 + 8) as &i64) = v13;
                        return v13;
                    }
                    v16 = a1;
                    *((v16 + 48) as &i64) = 1;
                    *((v16 + 56) as &i64) = v13;
                } else {
                    v15 = v5;
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "conv") as i8 {
                        *((a1 + 192) as &i8) = 1;
                        v0 = uu_dd::parseargs::Parser::parse_conv_flags(a1, v15, v4);
                        goto LABEL_4d30d6;
                    }
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "count") as i8 {
                        v0 = uu_dd::parseargs::Parser::parse_n(v15, v4);
                        v17 = v0;
                        v13 = *((&v0 as &char + 8) as &i64);
                        v18 = *((&v0 as &char + 16) as &i64);
                        if v17 != 14 {
                            vvar_549{reg 64} = *((&v0 as &char + 24) as &i64);
                            vvar_550{reg 72} = a0;
                            *(v28 as &i64) = v17;
                            *((v28 + 8) as &i64) = v13;
                            *((v28 + 16) as &i64) = v18;
                            *((v28 + 24) as &i64) = v27;
                            return v13;
                        }
                        v19 = a1;
                        *((v19 + 96) as &i64) = v13;
                        *((v19 + 104) as &i64) = v18;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "ibs") as i8 {
                        v0 = uu_dd::parseargs::Parser::parse_bytes(v15, v4);
                        v12 = v0;
                        v13 = *((&v0 as &char + 8) as &i64);
                        if v12 != 14 {
                            vvar_576{reg 32} = a0;
                            *((v23 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
                            *(v23 as &i64) = v12;
                            *((v23 + 8) as &i64) = v13;
                            return v13;
                        }
                        v20 = a1;
                        *((v20 + 16) as &i64) = 1;
                        *((v20 + 24) as &i64) = v13;
                    } else {
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "if") as i8 {
                            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v15, v4);
                            v21 = a1 + 112;
                            goto LABEL_4d31ee;
                        }
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "iflag") as i8 {
                            v0 = uu_dd::parseargs::Parser::parse_input_flags(a1, v15, v4);
                            goto LABEL_4d30d6;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "obs") as i8 {
                            v0 = uu_dd::parseargs::Parser::parse_bytes(v15, v4);
                            v12 = v0;
                            v13 = *((&v0 as &char + 8) as &i64);
                            if v12 != 14 {
                                v23 = a0;
                                *((v23 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
                                *(v23 as &i64) = v12;
                                *((v23 + 8) as &i64) = v13;
                                return v13;
                            }
                            v22 = a1;
                            *((v22 + 32) as &i64) = 1;
                            *((v22 + 40) as &i64) = v13;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "of") as i8 {
                            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v15, v4);
                            v21 = a1 + 136;
LABEL_4d31ee:
                            *((v21 + 16) as &i64) = *((&v0 as &char + 16) as &i64);
                            *(v21 as &i192) = v0;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "oflag") as i8 {
                            v0 = uu_dd::parseargs::Parser::parse_output_flags(a1, v15, v4);
LABEL_4d30d6:
                            v13 = v0;
                            if v13 != 14 {
                                v24 = a0;
                                *((v24 + 24) as &i8) = v3;
                                *((v24 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
                                *(v24 as &i64) = v13;
                                return v13;
                            }
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "seek") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "oseek") as i8 {
                            v0 = uu_dd::parseargs::Parser::parse_n(v15, v4);
                            v17 = v0;
                            v13 = *((&v0 as &char + 8) as &i64);
                            v18 = *((&v0 as &char + 16) as &i64);
                            if v17 != 14 {
                                vvar_557{reg 64} = *((&v0 as &char + 24) as &i64);
                                vvar_558{reg 72} = a0;
                                *(v28 as &i64) = v17;
                                *((v28 + 8) as &i64) = v13;
                                *((v28 + 16) as &i64) = v18;
                                *((v28 + 24) as &i64) = v27;
                                return v13;
                            }
                            v25 = a1;
                            *((v25 + 80) as &i64) = v13;
                            *((v25 + 88) as &i64) = v18;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "skip") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "iseek") as i8 {
                            v0 = uu_dd::parseargs::Parser::parse_n(v15, v4);
                            v17 = v0;
                            v13 = *((&v0 as &char + 8) as &i64);
                            v18 = *((&v0 as &char + 16) as &i64);
                            if v17 != 14 {
                                v27 = *((&v0 as &char + 24) as &i64);
                                v28 = a0;
                                *(v28 as &i64) = v17;
                                *((v28 + 8) as &i64) = v13;
                                *((v28 + 16) as &i64) = v18;
                                *((v28 + 24) as &i64) = v27;
                                return v13;
                            }
                            v26 = a1;
                            *((v26 + 64) as &i64) = v13;
                            *((v26 + 72) as &i64) = v18;
                        } else {
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "status") as i8 {
                                vvar_541{reg 16} = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, a3);
                                *(a0 as &i64) = 0;
                                return v13;
                            }
                            v0 = uu_dd::parseargs::Parser::parse_status_level(v5, v4);
                            v29 = v0;
                            v13 = v1 as u8 as u64;
                            match v0 {
                                None => {
                                    v30 = a0;
                                    *((v30 + 24) as &i8) = v3;
                                    *((v30 + 9) as &i8) = v2;
                                    *(v30 as &i64) = v29;
                                    *((v30 + 8) as &i8) = v13 as i8;
                                    return v13;
                                },
                                Some(_) => {
                                    *((a1 + 208) as &i8) = v13 as i8;
                                },
                            }
                        }
                    }
                }
            }
            v13 = a0;
            *(v13 as &i64) = 14;
            return v13;
        },
    }
}
