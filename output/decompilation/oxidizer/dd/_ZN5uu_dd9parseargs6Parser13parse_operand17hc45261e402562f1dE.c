fn uu_dd::parseargs::Parser::parse_operand(a1: i64, a2: &str) -> : struct33 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x88]
    let v1: struct32;  // [bp-0x80], Other Possible Types: u256
    let v2: struct24;  // [bp-0x80], Other Possible Types: struct32, u64
    let v3: struct9;  // [bp-0x80], Other Possible Types: u64
    let v4: u8;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: u64;  // [bp-0x68]
    let v7: struct56;  // [bp-0x60]
    let v8: struct164;  // [bp-0x58]
    let v9: core::option::Option<(&str, &str)>;  // [bp-0x50]
    let v10: i64;  // [bp-0x48]
    let v11: i64;  // [bp-0x40]
    let v13: u64;  // rcx
    let v14: u64;  // rax
    let v15: core::fmt::Arguments;  // rax

    v9 = core::str::<impl str>::split_once(a2, v13);
    match v9 {
        None => {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a2);
            *(a0 as &i64) = 0;
            return;
        },
        Some(_) => {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "bs") as u8 {
                v1 = uu_dd::parseargs::Parser::parse_bytes(v11, *((&v9 as &char + 24) as &i64));
                if v1.field_0 as i64 != 14 {
                    return struct32 {
                        field_0: v2
                        field_8: v14
                        field_16: *((&v1 as &char + 16) as &i128)
                    };
                }
                *(v0 as &i64) = 1;
                *((v0 + 8) as &u64) = v14;
            } else {
                v8 = v11;
                v7 = *((&v9 as &char + 24) as &i64);
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "cbs") as u8 {
                    v1 = uu_dd::parseargs::Parser::parse_bytes(v8, v7);
                    if v1.field_0 as i64 != 14 {
                        return struct32 {
                            field_0: v2
                            field_8: v14
                            field_16: *((&v1 as &char + 16) as &i128)
                        };
                    }
                    *((v0 + 48) as &i64) = 1;
                    *((v0 + 56) as &u64) = v14;
                } else {
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "conv") as u8 {
                        *((a1 + 192) as &i8) = 1;
                        uu_dd::parseargs::Parser::parse_conv_flags(&v1 as u8, a1, v8, v7);
                        goto LABEL_48cf36;
                    }
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "count") as u8 {
                        v2 = uu_dd::parseargs::Parser::parse_n(v8, v7);
                        if v2.field_0 as i64 != 14 {
                            return struct32 {
                                field_0: v3
                                field_8: v15
                                field_16: v5
                                field_24: v6
                            };
                        }
                        *((v0 + 96) as &i64) = *((&v2.field_0 as &char + 8) as &i64);
                        *((v0 + 104) as &u64) = v5;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "ibs") as u8 {
                        v1 = uu_dd::parseargs::Parser::parse_bytes(v8, v7);
                        if v1.field_0 as i64 != 14 {
                            return struct32 {
                                field_0: v2
                                field_8: v14
                                field_16: *((&v1 as &char + 16) as &i128)
                            };
                        }
                        *((v0 + 16) as &i64) = 1;
                        *((v0 + 24) as &u64) = v14;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "if") as u8 {
                        v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8, v7);
                        *((v0 + 128) as &u64) = v5;
                        *((v0 + 112) as &i128) = *(&v2.field_0 as &i128);
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "iflag") as u8 {
                        uu_dd::parseargs::Parser::parse_input_flags(&v2 as u8, a1, v8, v7);
                        goto LABEL_48cf36;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "obs") as u8 {
                        v1 = uu_dd::parseargs::Parser::parse_bytes(v8, v7);
                        if v1.field_0 as i64 != 14 {
                            return struct32 {
                                field_0: v2
                                field_8: v14
                                field_16: *((&v1 as &char + 16) as &i128)
                            };
                        }
                        *((v0 + 32) as &i64) = 1;
                        *((v0 + 40) as &u64) = v14;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "of") as u8 {
                        v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8, v7);
                        *((v0 + 152) as &u64) = v5;
                        *((v0 + 136) as &i128) = *(&v2.field_0 as &i128);
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "oflag") as u8 {
                        uu_dd::parseargs::Parser::parse_output_flags(&v2 as u8, a1, v8, v7);
LABEL_48cf36:
                        if v3 != 14 {
                            return struct32 {
                                field_0: v3
                                field_8: *(&v2.field_0 as &i128)
                                field_24: v6
                            };
                        }
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "seek") as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "oseek") as u8 {
                        v2 = uu_dd::parseargs::Parser::parse_n(v8, v7);
                        if v2.field_0 as i64 != 14 {
                            return struct32 {
                                field_0: v3
                                field_8: v15
                                field_16: v5
                                field_24: v6
                            };
                        }
                        *((v0 + 80) as &i64) = *((&v2.field_0 as &char + 8) as &i64);
                        *((v0 + 88) as &u64) = v5;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "skip") as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "iseek") as u8 {
                        v2 = uu_dd::parseargs::Parser::parse_n(v8, v7);
                        if v2.field_0 as i64 != 14 {
                            return struct32 {
                                field_0: v3
                                field_8: v15
                                field_16: v5
                                field_24: v6
                            };
                        }
                        *((v0 + 64) as &i64) = *((&v2.field_0 as &char + 8) as &i64);
                        *((v0 + 72) as &u64) = v5;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9 as i64, v10, "status") as u8 {
                        v3 = uu_dd::parseargs::Parser::parse_status_level(v8, v7);
                        if v3.field_0 != 14 {
                            return struct40 {
                                field_0: v3.field_0
                                field_8: v4
                                field_9: <UNKNOWN>
                                field_24: <UNKNOWN>
                            };
                        }
                        *((a1 + 208) as &u8) = v4;
                    } else {
                        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a2);
                        *(a0 as &i64) = 0;
                        return;
                    }
                }
            }
            return struct8 {
                field_0: 14
            };
        },
    }
}
