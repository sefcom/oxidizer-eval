fn uu_expr::syntax_tree::Parser<S>::parse_simple_expression(a1: i64) -> Result<struct36, struct40> {
    let a0: void*;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x178]
    let v1: Result<struct24, struct16>;  // [bp-0x178]
    let v2: Result<struct24, struct16>;  // [bp-0x178]
    let v3: u128;  // [bp-0x178]
    let v4: u128;  // [bp-0x178]
    let v5: u128;  // [bp-0x178]
    let v6: u128;  // [bp-0x178]
    let v7: u128;  // [bp-0x178]
    let v8: u128;  // [bp-0x178]
    let v9: u128;  // [bp-0x178]
    let v10: void*;  // [bp-0x170]
    let v11: u128;  // [bp-0x168]
    let v12: u64;  // [bp-0x160]
    let v13: u64;  // [bp-0x158]
    let v14: u128;  // [bp-0x148]
    let v15: struct36;  // [bp-0x148], Other Possible Types: u128
    let v16: struct24;  // [bp-0x148]
    let v17: u128;  // [bp-0x140]
    let v18: u128;  // [bp-0x138]
    let v19: u128;  // [bp-0x138]
    let v20: u128;  // [bp-0x130]
    let v21: u64;  // [bp-0x128]
    let v22: u64;  // [bp-0x120]
    let v23: u128;  // [bp-0x118]
    let v24: u128;  // [bp-0x108]
    let v25: u64;  // [bp-0x100]
    let v26: u64;  // [bp-0xf8]
    let v27: u128;  // [bp-0xf8]
    let v28: u128;  // [bp-0xf0]
    let v29: u128;  // [sp-0xe8]
    let v30: u128;  // [bp-0xe8]
    let v31: u128;  // [bp-0xe0]
    let v32: u128;  // [bp-0xc8]
    let v34: u64;  // [bp-0xc0]
    let v35: u64;  // [bp-0xb8]
    let v36: u128;  // [bp-0xb8]
    let v37: u64;  // [sp-0xb0]
    let v38: iNone;  // [bp-0xa8], Other Possible Types: u64
    let v39: iNone;  // [bp-0x98]
    let v40: u64;  // [bp-0x88]
    let v41: struct40;  // [bp-0x80]
    let v42: struct40;  // [bp-0x58]
    let v44: u64;  // r12
    let v45: u64;  // rax
    let v46: iNone;  // xmm0
    let v47: u64;  // rax
    let v48: iNone;  // xmm0
    let v49: u128;  // xmm0
    let v51: iNone;  // xmm0
    let v53: u64;  // rax
    let v54: iNone;  // xmm0
    let v55: u64;  // rax
    let v57: iNone;  // xmm0
    let v58: u64;  // rax
    let v59: iNone;  // xmm0
    let v60: iNone;  // xmm0
    let v61: u128;  // xmm0
    let v63: u64;  // rax
    let v64: iNone;  // xmm0
    let v65: u64;  // rax
    let v66: iNone;  // xmm0
    let v67: iNone;  // xmm1
    let v68: iNone;  // xmm0
    let v69: iNone;  // xmm0
    let v70: iNone;  // xmm0
    let v71: u64;  // rax
    let v72: iNone;  // xmm0
    let v73: iNone;  // xmm1
    let v74: i64;  // rdi
    let v76: u64;  // rcx
    let v77: u64;  // rax
    let v78: iNone;  // xmm1
    let v81: u32;  // rdx
    let v84: u32;  // rdx
    let v85: u32;  // eax

    v6 = uu_expr::syntax_tree::Parser<S>::next(a1);
    v44 = *((&v0 as &char + 16) as &i64);
    match v6 as u256 {
        Ok(_) => {
            *(&a0[8] as &i64) = v0 as i64;
            *(&a0[16] as &void*) = v10;
            *(&a0[24] as &u64) = v44;
        },
        Err(_) => {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v44, "match") as u8 {
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v45 = v0 as i64;
                *(&v14 as &i32) = vvar_188{stack -368};
                v18 = *(&v10 as &i128) as u128;
                if v45 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v72
                        field_24: v73
                    };
                }
                v46 = v14;
                v24 = v18;
                *(&v23 as void*) = v46;
                v22 = v45;
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v47 = v0 as i64;
                *(&v27 as &i32) = vvar_188{stack -368};
                v30 = *(&(&v10)[2] as &i128) as u128;
                if v47 == 9223372036854775813 {
                    a0[24] = v67;
                    a0[8] = v66;
                }
                v48 = v27;
                v20 = v30;
                *(&v17 as void*) = v48;
                v15 = v47;
                v13 = v25;
                v49 = *(&v22 as &i128);
                v11 = *((&v23 as &char + 8) as &i128) as u128;
                v3 = v49;
                v26 = alloc::boxed::Box<T>::new(&v6 as u256) as u64;
                v13 = v21;
                v51 = *(&v15 as &i128);
                v11 = *((&v17 as &char + 8) as &i128) as u128;
                *(&v4 as void*) = v51;
                alloc::boxed::Box<T>::new(&v6 as u256);
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v44, "substr") as u8 {
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v53 = v0 as i64;
                *(&v14 as &i32) = vvar_188{stack -368};
                v18 = v11;
                if v53 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v72
                        field_24: v73
                    };
                }
                v54 = v14;
                v31 = v18;
                *(&v28 as void*) = v54;
                v26 = v53;
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v55 = v0 as i64;
                *(&v15 as &i32) = vvar_188{stack -368};
                v19 = *((&v11 as &char + 8) as &i128) as u128;
                if v55 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v15
                        field_24: v19
                    };
                }
                v57 = v15;
                v24 = v19;
                *(&v23 as void*) = v57;
                v22 = v55;
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v58 = v0 as i64;
                v38 = *((&v0 as &char + 8) as &i128);
                v39 = *((&v11 as &char + 8) as &i128);
                if v58 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v38
                        field_24: v39
                    };
                }
                *(&v20 as void*) = v39;
                *(&v17 as void*) = v38;
                v15 = v58;
                v13 = *((&v31 as &char + 8) as &i64);
                v59 = *(&v26 as &i128);
                v11 = *((&v28 as &char + 8) as &i128) as u128;
                *(&v5 as void*) = v59;
                v40 = alloc::boxed::Box<T>::new(&v6 as u256) as u64;
                v13 = v25;
                v60 = *(&v22 as &i128);
                v11 = *((&v23 as &char + 8) as &i128) as u128;
                *(&v6 as void*) = v60;
                v38 = alloc::boxed::Box<T>::new(&v6 as u256) as u64;
                v13 = v21;
                v61 = *(&v15 as &i128);
                v11 = *((&v17 as &char + 8) as &i128) as u128;
                v7 = v61;
                v34 = v40;
                v35 = v38;
                v37 = alloc::boxed::Box<T>::new(&v6 as u256) as u64;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v44, "index") as u8 {
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v63 = v0 as i64;
                *(&v14 as &i32) = vvar_188{stack -368};
                v18 = v11;
                if v63 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v72
                        field_24: v73
                    };
                }
                v64 = v14;
                v24 = v18;
                *(&v23 as void*) = v64;
                v22 = v63;
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v65 = v0 as i64;
                *(&v27 as &i32) = vvar_188{stack -368};
                v30 = *((&v11 as &char + 8) as &i128) as u128;
                if v65 == 9223372036854775813 {
                    a0[24] = v67;
                    a0[8] = v66;
                }
                v68 = v27;
                v20 = v30;
                *(&v17 as void*) = v68;
                v15 = v65;
                v13 = v25;
                v69 = *(&v22 as &i128);
                v11 = *((&v23 as &char + 8) as &i128) as u128;
                *(&v8 as void*) = v69;
                v26 = alloc::boxed::Box<T>::new(&v6 as u256) as u64;
                v13 = v21;
                v70 = *(&v15 as &i128);
                v11 = *((&v17 as &char + 8) as &i128) as u128;
                *(&v9 as void*) = v70;
                alloc::boxed::Box<T>::new(&v6 as u256);
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v44, "length") as u8 {
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v71 = v0 as i64;
                *(&v14 as &i32) = vvar_188{stack -368};
                v18 = v11;
                if v71 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v72
                        field_24: v73
                    };
                }
                v41 = struct40 {
                    field_0: v71
                    field_8: v14
                    field_24: v18
                };
                v34 = alloc::boxed::Box<T>::new(&v41) as u64;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v44, "+") as u8 {
                v1 = uu_expr::syntax_tree::Parser<S>::next(a1);
                if let Ok(_) = v1 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v1 as i64
                        field_16: v10
                        field_24: *((&v1 as &char + 16) as &i64)
                        field_32: v76
                    };
                }
LABEL_49bcce:
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v74, v10, v44);
            } else {
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v44, "(") as u8 {
                    goto LABEL_49bcce;
                }
                uu_expr::syntax_tree::Parser<S>::parse_expression();
                v77 = v0 as i64;
                *(&v26 as &i32) = vvar_188{stack -368};
                v29 = *(&v12 as &i128) as u128;
                if v77 == 9223372036854775813 {
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v72
                        field_24: v73
                    };
                }
                v42 = struct40 {
                    field_0: v77
                    field_8: v26
                    field_24: v29
                };
                v15 = uu_expr::syntax_tree::AstNode::evaluated(&v42);
                v38 = *((&v15.field_0 as &char + 8) as &i128);
                v39 = *((&v15.field_16 as &char + 8) as &i128);
                if v15.field_0 as i64 == 9223372036854775813 {
                    v72 = v38;
                    v73 = v39;
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: v72
                        field_24: v73
                    };
                }
                *(&v24 as void*) = v39;
                *(&v23 as void*) = v38;
                v22 = v15.field_0 as i64;
                v2 = uu_expr::syntax_tree::Parser<S>::next(a1);
                if v2 as i64 == 1 {
                    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(<alloc::string::String as core::convert::AsRef<str>>::as_ref(*((*(a1 as &i64) + (*((a1 + 16) as &i64) - 1) * 24 + 8) as &i64), *((*(a1 as &i64) + (*((a1 + 16) as &i64) - 1) * 24 + 16) as &i64)), v84);
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: 6
                        field_16: *(&v16.field_0 as &i128)
                        field_32: v16.field_16
                    };
                } else if v2 as i64 as i32 != 13 {
                    a0[24] = v67;
                    a0[8] = v66;
                } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, *((&v2 as &char + 16) as &i64), ")") as u8 {
                    v78 = *((&v23 as &char + 8) as &i128);
                    v32 = *(&v22 as &i128) as u128;
                    *(&v36 as void*) = v78;
                } else {
                    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(<alloc::string::String as core::convert::AsRef<str>>::as_ref(*((*(a1 as &i64) + (*((a1 + 16) as &i64) - 1) * 24 + 8) as &i64), *((*(a1 as &i64) + (*((a1 + 16) as &i64) - 1) * 24 + 16) as &i64)), v81);
                    return struct40 {
                        field_0: 9223372036854775813
                        field_8: 7
                        field_16: *(&v16.field_0 as &i128)
                        field_32: v16.field_16
                    };
                }
            }
            v85 = uu_expr::syntax_tree::get_next_id() as u32;
            return Ok(struct40 {
                field_0: v32
                field_16: *(&v35 as &i128)
                field_32: v85
            });
        },
    }
}
