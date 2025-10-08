fn just::lexer::Lexer::lex_line_start(a0: u64, a1: i64) -> long long {
    let v0: u8;  // [bp-0xe4]
    let v1: u8;  // [bp-0xe3]
    let v2: u8;  // [bp-0xe2]
    let v3: u8;  // [bp-0xe1]
    let v4: i64;  // [bp-0xd8]
    let v5: struct16;  // [bp-0xd0], Other Possible Types: struct24, u64
    let v6: u32;  // [bp-0xd0]
    let v7: struct80;  // [bp-0xd0], Other Possible Types: u640
    let v8: struct80;  // [bp-0xd0]
    let v9: struct80;  // [bp-0xd0], Other Possible Types: u640
    let v10: u64;  // [bp-0xc8]
    let v11: void*;  // [bp-0xc0], Other Possible Types: core::fmt::Arguments
    let v12: u64;  // [bp-0xb8]
    let v13: core::fmt::rt::Argument;  // [bp-0xb0]
    let v14: u128;  // [bp-0xa0]
    let v15: u64;  // [bp-0x90]
    let v16: u8;  // [bp-0x88]
    let v17: struct16;  // [bp-0x68], Other Possible Types: u64
    let v18: u64;  // [bp-0x50]
    let v19: struct16;  // [bp-0x40]
    let v21: core::fmt::Arguments;  // rdx
    let v22: core::fmt::Arguments;  // rax
    let v23: core::fmt::Arguments;  // rdx
    let v25: core::option::Option<&str>;  // rax
    let v27: core::option::Option<&str>;  // rax
    let v28: u64;  // r12
    let v29: u64;  // rbx
    let v30: u64;  // rax
    let v31: core::option::Option<(usize, char)>;  // rax
    let v33: u64;  // r13
    let v34: u64;  // rbp
    let v36: core::option::Option<&str>;  // rax
    let v37: struct40;  // r15
    let v38: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v39: struct24;  // rbp
    let v40: struct24;  // r15
    let v41: core::fmt::Arguments;  // rbx
    let v42: struct24;  // rax
    let v43: u64;  // rax
    let v44: iNone;  // xmm0
    let v45: iNone;  // xmm1
    let v46: iNone;  // xmm2
    let v47: u32;  // edx
    let v49: core::fmt::rt::Argument;  // r13
    let v50: struct88;  // rax
    let v51: u64;  // rax
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm1
    let v54: iNone;  // xmm2
    let v55: u32;  // edx
    let v57: u8;  // al
    let v58: iNone;  // xmm0
    let v59: iNone;  // xmm1
    let v60: iNone;  // xmm2
    let v61: u32;  // edx
    let v62: core::option::Option<u32>;  // rax:rax
    let v63: core::option::Option<u32>;  // rax:rax
    let v64: core::option::Option<u32>;  // rax:rax
    let v65: &mut [u8];  // rax:rdx
    let v66: core::option::Option<u32>;  // rax:rax
    let v67: core::option::Option<u32>;  // rax:rax
    let v68: core::option::Option<u32>;  // rax:rax

    v5 = struct24 {
        field_0: just::lexer::Lexer::rest(a1)
        field_8: v21 + v5
        field_16: 0
    };
    v12 = 0;
    v22 = core::iter::traits::iterator::Iterator::try_fold(&v5, &v12);
    if v21 as u32 == 0x110000 {
        just::lexer::Lexer::rest(a1);
        v23 = v21;
    } else {
        v23 = v22;
    }
    v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v23, just::lexer::Lexer::rest(a1), v21) as u64;
    v18 = v25;
    v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v23, just::lexer::Lexer::rest(a1), v21) as u64;
    v28 = v27;
    v19 = struct16 {
        field_0: v27
        field_8: v21
    };
    v29 = v27 + v21;
    v30 = just::lexer::Lexer::indentation(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v5 = v28;
    v10 = v29;
    v11 = 0;
    v12 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v30, v21 + v30);
    if v12 {
        v12 -= 1;
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v5);
    }
    v33 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v31, v28, v21) as u64;
    v5 = struct16 {
        field_0: v28
        field_8: v29
    };
    v3 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5), 0x1);
    v5 = v28;
    v10 = v29;
    v2 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5), 0x1);
    v5 = v33;
    v10 = v33 + v21;
    v1 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5), 0x1);
    v5 = v33;
    v0 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5), 0x1);
    v6 = 0;
    v65 = core::char::methods::encode_utf8_raw(10, &v6, v21);
    v34 = v18;
    core::slice::<impl [T]>::starts_with(v34, v21, v65.data_ptr, v65.length);
    if v36 as u8 {
LABEL_6713b0:
        v37 = a0;
        if !v21 {
            *((v37 + 72) as &i8) = 37;
            return v36;
        } else if just::lexer::Lexer::next_is_whitespace(*((a1 + 192) as &i32)) {
            loop {
                v7 = just::lexer::Lexer::advance(a1);
                if v38 as u8 != 37 {
                    break;
                }
                if !just::lexer::Lexer::next_is_whitespace(*((a1 + 192) as &i32)) {
                    just::lexer::Lexer::token(a1, 36);
                    *((v37 + 72) as &i8) = 37;
                    return v36;
                }
            }
        } else {
            just::lexer::Lexer::token(a1, 36);
            *((v37 + 72) as &i8) = 37;
            return v36;
        }
        goto LABEL_6717ed;
    }
    core::slice::<impl [T]>::starts_with(v34, v21, "\r\n");
    if !v21 || v36 as u8 {
        goto LABEL_6713b0;
    }
    v39 = *((a1 + 8) as &i64);
    v40 = *((a1 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v21, just::lexer::Lexer::indentation(v39, v40), v21) {
LABEL_671482:
        just::lexer::Lexer::indentation(v39, v40);
        if v21 {
            v17 = struct16 {
                field_0: just::lexer::Lexer::indentation(v39, v40)
                field_8: v21 + v17
            };
            v67 = core::str::validations::next_code_point(&v17) as u128;
            if let Some(_) = v67 {
                do {
                    v8 = just::lexer::Lexer::advance(a1);
                    v43 = v16 as u64;
                    if v43 as u8 != 37 {
                        *((v4 + 64) as &u64) = v15;
                        v44 = *(&v8.field_0 as &i128);
                        v45 = *((&v8.field_8 as &char + 8) as &i128);
                        v46 = *((&v8.field_24 as &char + 8) as &i128);
                        *((v4 + 48) as &u128) = v14;
                        *((v4 + 32) as void*) = v46;
                        *((v4 + 16) as void*) = v45;
                        *(v4 as void*) = v44;
                        v47 = *((&v8.field_72 as &char + 4) as &i32);
                        *((v4 + 73) as &i32) = *((&v8.field_72 as &char + 1) as &i32);
                        *((v4 + 76) as &u32) = v47;
                        *((v4 + 72) as &u8) = v43 as u8;
                        return v43;
                    }
                    v66 = core::str::validations::next_code_point(&v17) as u128;
                } while ((v66 as i8 & 1));
            }
            just::lexer::Lexer::token(a1, 36);
        }
        *((v4 + 72) as &i8) = 37;
        return v42;
    }
    if <T as core::slice::cmp::SliceContains>::slice_contains(&v19, v39, v40) {
        v41 = v21;
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(just::lexer::Lexer::indentation(v39, v40), v21, v28, v41);
        if !v36 as u8 {
            do {
                just::lexer::Lexer::lex_dedent(a1);
                <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(just::lexer::Lexer::indentation(*((a1 + 8) as &i64), *((a1 + 16) as &i64)), v21, v28, v41);
            } while (!v36 as u8);
        }
        v37 = a0;
        if !v41 {
            *((v37 + 72) as &i8) = 37;
            return v36;
        } else if !just::lexer::Lexer::next_is_whitespace(*((a1 + 192) as &i32)) {
            just::lexer::Lexer::token(a1, 36);
            *((v37 + 72) as &i8) = 37;
            return v36;
        } else {
            loop {
                v7 = just::lexer::Lexer::advance(a1);
                if v38 as u8 != 37 {
                    break;
                }
                if !just::lexer::Lexer::next_is_whitespace(*((a1 + 192) as &i32)) {
                    just::lexer::Lexer::token(a1, 36);
                    *((v37 + 72) as &i8) = 37;
                    return v36;
                }
            }
        }
        goto LABEL_6717ed;
    } else {
        if *((a1 + 196) as &i8) {
            if core::slice::<impl [T]>::starts_with(v28, v21, just::lexer::Lexer::indentation(v39, v40), v21) {
                goto LABEL_671482;
            }
            if (v0 & v1) {
                goto LABEL_671650;
            }
            just::lexer::Lexer::indentation(v39, v40);
            if v21 >= v21 {
                just::lexer::Lexer::indentation(v39, v40);
                if v21 < v21 || core::slice::<impl [T]>::starts_with(v33, v21, just::lexer::Lexer::indentation(v39, v40), v21) {
LABEL_67172a:
                    just::lexer::Lexer::indentation(v39, v40);
                    if v49 < v21 || core::slice::<impl [T]>::starts_with(v28, v49, just::lexer::Lexer::indentation(v39, v40), v21) {
                        v37 = a0;
                        if just::lexer::Lexer::next_is_whitespace(*((a1 + 192) as &i32)) {
                            loop {
                                v7 = just::lexer::Lexer::advance(a1);
                                if v38 as u8 != 37 {
                                    break;
                                }
                                if !just::lexer::Lexer::next_is_whitespace(*((a1 + 192) as &i32)) {
                                    goto LABEL_6717a0;
                                }
                            }
                        } else {
LABEL_6717a0:
                            if *((a1 + 64) as &i64) {
                                just::lexer::Lexer::token(a1, 36);
                                *((v37 + 72) as &i8) = 37;
                                return v36;
                            }
                            alloc::vec::Vec<T,A>::push(a1, just::lexer::Lexer::lexeme(a1), v21, "src/lexer.rs");
                            just::lexer::Lexer::token(a1, 25);
                            if *((a1 + 197) as &i8) {
                                *((a1 + 196) as &i8) = 1;
                                *((v37 + 72) as &i8) = 37;
                                return v36;
                            }
                            *((v37 + 72) as &i8) = 37;
                            return v36;
                        }
LABEL_6717ed:
                        *((v37 + 64) as &u64) = v15;
                        v52 = v7 as i128;
                        v53 = *((&v7 as &char + 16) as &i128);
                        v54 = *((&v7 as &char + 32) as &i128);
                        *((v37 + 48) as &u128) = v14;
                        *((v37 + 32) as void*) = v54;
                        *((v37 + 16) as void*) = v53;
                        *(v37 as void*) = v52;
                        v55 = *((&v7 as &char + 76) as &i32);
                        *((v37 + 73) as &i32) = *((&v7 as &char + 73) as &i32);
                        *((v37 + 76) as &u32) = v55;
                        *((v37 + 72) as &u8) = v38 as u8;
                        return v38;
                    }
                }
            }
        } else if (v2 & v3) {
LABEL_671650:
            v17 = struct16 {
                field_0: v33
                field_8: v33 + v49
            };
            v68 = core::str::validations::next_code_point(&v17) as u128;
            match v68 {
                None => {
                    v5 = v51;
                    return just::lexer::Lexer::error(a0, a1, &v5) as u64;
                },
                Some(_) => {
                    loop {
                        v9 = just::lexer::Lexer::advance(a1);
                        if v50 as u8 != 37 {
                            break;
                        }
                        v62 = core::str::validations::next_code_point(&v17) as u128;
                        if let None = v62 {
                            v5 = v51;
                            return just::lexer::Lexer::error(a0, a1, &v5) as u64;
                        }
                    }
                },
            }
            goto LABEL_6718ec;
        } else {
            just::lexer::Lexer::indentation(v39, v40);
            if v49 >= v21 {
                goto LABEL_67172a;
            }
        }
        v17 = struct16 {
            field_0: v28
            field_8: v29
        };
        v63 = core::str::validations::next_code_point(&v17) as u128;
        match v63 {
            None => {
                v10 = just::lexer::Lexer::indentation(v39, v40);
                v11 = v21;
                v12 = v28;
                v13 = v49;
                v5 = v51;
                return just::lexer::Lexer::error(a0, a1, &v5) as u64;
            },
            Some(_) => {
                loop {
                    v9 = just::lexer::Lexer::advance(a1);
                    if v50 as u8 != 37 {
                        break;
                    }
                    v64 = core::str::validations::next_code_point(&v17) as u128;
                    if let None = v64 {
                        v10 = just::lexer::Lexer::indentation(v39, v40);
                        v11 = v21;
                        v12 = v28;
                        v13 = v49;
                        v5 = v51;
                        return just::lexer::Lexer::error(a0, a1, &v5) as u64;
                    }
                }
            },
        }
LABEL_6718ec:
        *((v4 + 64) as &u64) = v15;
        v58 = v9 as i128;
        v59 = *((&v9 as &char + 16) as &i128);
        v60 = *((&v9 as &char + 32) as &i128);
        *((v4 + 48) as &u128) = v14;
        *((v4 + 32) as void*) = v60;
        *((v4 + 16) as void*) = v59;
        *(v4 as void*) = v58;
        v61 = *((&v9 as &char + 76) as &i32);
        *((v4 + 73) as &i32) = *((&v9 as &char + 73) as &i32);
        *((v4 + 76) as &u32) = v61;
        *((v4 + 72) as &u8) = v57;
        return v50;
    }
}
