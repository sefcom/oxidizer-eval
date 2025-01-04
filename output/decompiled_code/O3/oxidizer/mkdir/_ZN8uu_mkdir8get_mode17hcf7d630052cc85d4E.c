fn uu_mkdir::get_mode(a0: &Result<struct24, struct12>, a1: u32, a2: u8) -> u64 {
    let v0: i192;  // [sp-0x100], Other Possible Types: struct24
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i128;  // [sp-0xc8]
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: i64;  // [sp-0xa8]
    let v7: i192;  // [sp-0x90]
    let v8: struct16;  // [sp-0x78], Other Possible Types: Result<struct40, struct16>, i320
    let v9: i64;  // [sp-0x70]
    let v10: struct41;  // [sp-0x68]
    let v11: i16;  // [sp-0x38]
    let v13: i64;  // rax
    let v14: i64;  // r14
    let v16: i64;  // rax
    let v17: i32;  // ebp
    let v18: i64;  // rbx
    let v19: i32;  // ebp
    let v21: i64;  // rdx
    let v22: i32;  // ebp
    let v24: i64;  // rdx
    let v28: i64;  // rsi
    let v29: i64;  // r13
    let v30: i256;  // ymm0
    let v31: i64;  // rax
    let v32: i128;  // xmm0
    let v34: i64;  // rax
    let v37: i64;  // rsi
    let v38: i256;  // ymm0
    let v39: i128;  // xmm0
    let v41: i32;  // ecx
    let v42: i32;  // ecx

    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "mode");
    v13 = clap_builder::parser::error::MatchesError::unwrap("mode", &v8);
    if !v13 {
        v17 = ~(uucore::features::mode::get_umask() as i32) & 511;
        *((a0 + 8) as &i32) = v17;
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v14 = *((v13 + 8) as &i64);
    v10 = <char as core::str::pattern::Pattern>::into_searcher(v14, v9);
    v8 = struct16 {
        field_0: 0
        field_8: v15
    };
    v11 = 1;
    v16 = core::str::iter::SplitInternal<P>::next(&v8);
    if !v16 {
        v19 = 511;
    } else {
        v18 = v16;
        if a2 {
            v19 = 511;
            do {
                v5 = v18;
                v6 = v29;
                v0 = v18;
                v1 = v6 + v18;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v28, v21) as i32) {
                    v7 = format!("-{:?}", &v5);
                    v4 = *((&v7 as &char + 16) as &i64);
                    v32 = v7;
                    v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
                    v3 = v32;
                    v0 = uucore::features::mode::parse_symbolic(v19, *((&v3 as &char + 8) as &i64), v4, uucore::features::mode::get_umask() as i32, 1);
                    v34 = v0;
                    if v34 != 0x8000000000000000 {
                        vvar_544{reg 24} = *((&v0 as &char + 8) as &i32);
                        vvar_545{reg 112} = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v34;
                        *((a0 + 8) as &i32) = v42;
                        return a0;
                    }
                    v19 = *((&v0 as &char + 8) as &i32);
                } else {
                    v0 = uucore::features::mode::parse_numeric(v19, v14, v9, 1);
                    v31 = v0;
                    if v31 != 0x8000000000000000 {
                        vvar_551{reg 24} = *((&v0 as &char + 8) as &i32);
                        vvar_552{reg 112} = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v31;
                        *((a0 + 8) as &i32) = v41;
                        return a0;
                    }
                    v19 = *((&v0 as &char + 8) as &i32);
                }
            } while ((v18 = core::str::iter::SplitInternal<P>::next(&v8), v18));
        } else {
            v22 = 511;
            do {
                v5 = v18;
                v6 = v29;
                v0 = v18;
                v1 = v18 + v6;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v37, v24) as i32) {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v18, v6);
                    v4 = v2;
                    v39 = v0;
                    v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                    v3 = v39;
                    v0 = uucore::features::mode::parse_symbolic(v22, *((&v3 as &char + 8) as &i64), v4, uucore::features::mode::get_umask() as i32, 1);
                    v34 = v0;
                    if v34 != 0x8000000000000000 {
                        v42 = *((&v0 as &char + 8) as &i32);
                        a0 = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v34;
                        *((a0 + 8) as &i32) = v42;
                        return a0;
                    }
                    v19 = *((&v0 as &char + 8) as &i32);
                } else {
                    v0 = uucore::features::mode::parse_numeric(v22, v14, v9, 1);
                    v31 = v0;
                    if v31 != 0x8000000000000000 {
                        v41 = *((&v0 as &char + 8) as &i32);
                        a0 = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v31;
                        *((a0 + 8) as &i32) = v41;
                        return a0;
                    }
                    v19 = *((&v0 as &char + 8) as &i32);
                }
            } while ((v18 = core::str::iter::SplitInternal<P>::next(&v8), v18));
        }
    }
    *((a0 + 8) as &i32) = v17;
    *(a0 as &i64) = 0x8000000000000000;
    return a0;
}
