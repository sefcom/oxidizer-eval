fn uu_expr::syntax_tree::Parser::parse_simple_expression(a0: &struct40, a1: void*) -> u64 {
    let v0: i320;  // [sp-0x118], Other Possible Types: struct40, Option<struct16>, struct24
    let v1: i8;  // [bp-0x108]
    let v2: i8;  // [bp-0x100]
    let v3: i128;  // [bp-0xe8]
    let v4: i128;  // [sp-0xd8]
    let v5: i128;  // [sp-0xc8]
    let v6: i128;  // [sp-0xb8]
    let v7: i32;  // [sp-0xa0]
    let v8: i8;  // [sp-0x9c]
    let v9: i128;  // [sp-0x98]
    let v10: i128;  // [sp-0x88]
    let v11: i64;  // [sp-0x70]
    let v12: i128;  // [sp-0x68]
    let v13: i128;  // [sp-0x58]
    let v14: i128;  // [sp-0x48]
    let v15: i128;  // [sp-0x38]
    let v17: struct40;  // rax
    let v18: i64;  // r15
    let v19: i64;  // r12
    let v20: i64;  // rcx
    let v21: i64;  // 4098
    let v22: i128;  // xmm1
    let v23: i64;  // 4098
    let v24: i128;  // xmm1
    let v25: i64;  // 4098
    let v26: i128;  // xmm1
    let v27: i64;  // rax
    let v28: i64;  // 4098
    let v29: i128;  // xmm1
    let v30: i64;  // 4098
    let v31: i128;  // xmm1
    let v32: i8;  // sil
    let v33: i128;  // xmm0
    let v34: i64;  // 4098
    let v35: i128;  // xmm1
    let v36: i64;  // 4098
    let v37: i128;  // xmm1
    let v38: i64;  // 4098
    let v39: i128;  // xmm1
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i64;  // rax
    let v43: i64;  // rsi
    let v44: i64;  // 4098
    let v45: i128;  // xmm1
    let v46: i128;  // xmm0
    let v47: i64;  // rcx
    let v48: i64;  // rdi
    let v49: i64;  // rsi
    let v50: i64;  // rax
    let v51: i64;  // rcx
    let v53: i64;  // rax

    v0 = uu_expr::syntax_tree::Parser::next(a1);
    v17 = v0;
    v18 = *((&v0 as &char + 8) as &i64);
    v19 = v1;
    match v0 {
        None => {
            v20 = v2;
            return struct40 {
                field_0: 1
                field_8: v17
                field_16: v18
                field_24: v19
                field_32: v20
            };
        },
        Some(_) => {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "match") as i8 {
                uu_expr::syntax_tree::Parser::parse_expression(a1);
                v21 = v0;
                v22 = v2;
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v22;
                if v21 {
                    vvar_737{reg 224} = v3;
                    return struct40 {
                        field_0: 1
                        field_8: v46
                        field_24: v4
                    };
                }
                v10 = v4;
                v9 = v3;
                v0 = uu_expr::syntax_tree::Parser::parse_expression(a1);
                v23 = v0;
                v24 = *((&v0 as &char + 24) as &i128);
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v24;
                if !v23 {
                    v6 = v4;
                    v5 = v3;
                    v1 = v10;
                    v0 = v9;
                    v27 = alloc::boxed::Box<T>::new(&v0);
                    v3 = v27;
                    v1 = v6;
                    v0 = v5;
                    v17 = alloc::boxed::Box<T>::new(&v0);
                    return struct40 {
                        field_0: 0
                        field_8: 1
                        field_9: 2
                        field_10: 0
                        field_11: v7
                        field_15: v8
                        field_16: v27
                        field_24: v17
                        field_32: v42
                    };
                }
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "substr") as i8 {
                uu_expr::syntax_tree::Parser::parse_expression(a1);
                v25 = v0;
                v26 = v2;
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v26;
                if v25 {
                    vvar_743{reg 224} = v3;
                    return struct40 {
                        field_0: 1
                        field_8: v46
                        field_24: v4
                    };
                }
                v13 = v4;
                v12 = v3;
                v0 = uu_expr::syntax_tree::Parser::parse_expression(a1);
                v28 = v0;
                v29 = *((&v0 as &char + 24) as &i128);
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v29;
                if v28 {
                    v33 = v3;
                    *((a0 + 24) as &i128) = v4;
                    *((a0 + 8) as &i128) = v33;
                    *(a0 as &i64) = 1;
                } else {
                    v10 = v4;
                    v9 = v3;
                    v0 = uu_expr::syntax_tree::Parser::parse_expression(a1);
                    v34 = v0;
                    v35 = *((&v0 as &char + 24) as &i128);
                    v3 = *((&v0 as &char + 8) as &i128);
                    v4 = v35;
                    if !v34 {
                        v6 = v4;
                        v5 = v3;
                        v1 = v13;
                        v0 = v12;
                        v27 = alloc::boxed::Box<T>::new(&v0);
                        v11 = v27;
                        v1 = v10;
                        v0 = v9;
                        v17 = alloc::boxed::Box<T>::new(&v0);
                        *(&v3 as &struct40) = v17;
                        v1 = v6;
                        v0 = v5;
                        v42 = alloc::boxed::Box<T>::new(&v0);
                        return struct40 {
                            field_0: 0
                            field_8: 1
                            field_9: 2
                            field_10: v32
                            field_11: v7
                            field_15: v8
                            field_16: v27
                            field_24: v17
                            field_32: v42
                        };
                    }
                    v40 = v3;
                    *((a0 + 24) as &i128) = v4;
                    *((a0 + 8) as &i128) = v40;
                    *(a0 as &i64) = 1;
                }
                return v17;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "index") as i8 {
                uu_expr::syntax_tree::Parser::parse_expression(a1);
                v30 = v0;
                v31 = v2;
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v31;
                if v30 {
                    vvar_749{reg 224} = v3;
                    return struct40 {
                        field_0: 1
                        field_8: v46
                        field_24: v4
                    };
                }
                v10 = v4;
                v9 = v3;
                v0 = uu_expr::syntax_tree::Parser::parse_expression(a1);
                v36 = v0;
                v37 = *((&v0 as &char + 24) as &i128);
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v37;
                if !v36 {
                    v6 = v4;
                    v5 = v3;
                    v1 = v10;
                    v0 = v9;
                    v27 = alloc::boxed::Box<T>::new(&v0);
                    v3 = v27;
                    v1 = v6;
                    v0 = v5;
                    v17 = alloc::boxed::Box<T>::new(&v0);
                    v32 = (v43 | -0x100 | 1) as i8;
                    return struct40 {
                        field_0: 0
                        field_8: 1
                        field_9: 2
                        field_10: v32
                        field_11: v7
                        field_15: v8
                        field_16: v27
                        field_24: v17
                        field_32: v42
                    };
                }
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "length") as i8 {
                uu_expr::syntax_tree::Parser::parse_expression(a1);
                v38 = v0;
                v39 = v2;
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v39;
                if v38 {
                    vvar_731{reg 224} = v3;
                    return struct40 {
                        field_0: 1
                        field_8: v46
                        field_24: v4
                    };
                }
                v15 = v4;
                v14 = v3;
                v17 = alloc::boxed::Box<T>::new(&v14);
                return struct40 {
                    field_0: 0
                    field_8: 1
                    field_9: 2
                    field_10: v32
                    field_11: v7
                    field_15: v8
                    field_16: v27
                    field_24: v17
                    field_32: v42
                };
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "+") as i8 {
                v0 = uu_expr::syntax_tree::Parser::next(a1);
                v17 = v0;
                v18 = *((&v0 as &char + 8) as &i64);
                v19 = v1;
                match v0 {
                    None => {
                        v20 = v2;
                        return struct40 {
                            field_0: 1
                            field_8: v17
                            field_16: v18
                            field_24: v19
                            field_32: v20
                        };
                    },
                    Some(_) => {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v18, v19);
                        v27 = v0;
                        v17 = *((&v0 as &char + 8) as &i64);
                        v42 = *((&v0 as &char + 16) as &i64);
                        return struct40 {
                            field_0: 0
                            field_8: 1
                            field_9: 2
                            field_10: v32
                            field_11: v7
                            field_15: v8
                            field_16: v27
                            field_24: v17
                            field_32: v42
                        };
                    },
                }
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "(") as i8 {
                v17 = uu_expr::syntax_tree::Parser::parse_expression(a1);
                v44 = v0;
                v45 = v2;
                v3 = *((&v0 as &char + 8) as &i128);
                v4 = v45;
                if v44 {
                    v46 = v3;
                    return struct40 {
                        field_0: 1
                        field_8: v46
                        field_24: v4
                    };
                }
                v6 = v4;
                v5 = v3;
                v0 = uu_expr::syntax_tree::Parser::next(a1);
                v47 = v0;
                v48 = *((&v0 as &char + 8) as &i64);
                v49 = v1;
                if v47 != 7 {
                    v50 = v2;
                    *((a0 + 8) as &i64) = v47;
                    *((a0 + 16) as &i64) = v48;
                    *((a0 + 24) as &i64) = v49;
                    v51 = 32;
                } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v48, v49, ")") as i8 {
                    v53 = *(a1 as &i64);
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v53 + (*((a1 + 16) as &i64) - 1) * 16) as &i64), *((v53 + (*((a1 + 16) as &i64) - 1) * 16 + 8) as &i64));
                    *((a0 + 32) as &i64) = *((&v0 as &char + 16) as &i64);
                    *((a0 + 16) as &Option<struct16>) = v0;
                    v50 = 6;
                    v51 = 8;
                } else {
                    v32 = *((&v5 as &char + 2) as &i8);
                    v7 = *((&v5 as &char + 3) as &i32);
                    v8 = *((&v5 as &char + 7) as &i8);
                    v27 = *((&v5 as &char + 8) as &i64);
                    v17 = v6;
                    v42 = *((&v6 as &char + 8) as &i64);
                    return struct40 {
                        field_0: 0
                        field_8: 1
                        field_9: 2
                        field_10: v32
                        field_11: v7
                        field_15: v8
                        field_16: v27
                        field_24: v17
                        field_32: v42
                    };
                }
                *((a0 + v51) as &i64) = v50;
                return struct8 {
                    field_0: 1
                };
            } else {
                vvar_755{stack -280} = <T as alloc::slice::hack::ConvertVec>::to_vec(v18, v19);
                return struct40 {
                    field_0: 0
                    field_8: 1
                    field_9: 2
                    field_10: v32
                    field_11: v7
                    field_15: v8
                    field_16: v27
                    field_24: v17
                    field_32: v42
                };
            }
            v41 = v3;
            return struct40 {
                field_0: 1
                field_8: v41
                field_24: v4
            };
        },
    }
}
