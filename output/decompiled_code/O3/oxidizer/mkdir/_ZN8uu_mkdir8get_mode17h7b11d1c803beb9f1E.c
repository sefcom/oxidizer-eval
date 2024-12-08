fn uu_mkdir::get_mode(a0: void*, a1: u32, a2: u8) -> u64 {
    let v0: i64;  // [sp-0x100], Other Possible Types: struct24
    let v1: i128;  // [sp-0xc8]
    let v2: i64;  // [sp-0xb8]
    let v3: i64;  // [sp-0xb0]
    let v4: i64;  // [sp-0xa8]
    let v5: i192;  // [sp-0x90]
    let v6: Result<struct40, struct16>;  // [sp-0x78], Other Possible Types: i320, struct16
    let v7: i64;  // [sp-0x70]
    let v8: struct41;  // [sp-0x68]
    let v9: i16;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v14: i64;  // rax
    let v15: i32;  // ebp
    let v16: i64;  // rbx
    let v17: i32;  // ebp
    let v19: i64;  // rdx
    let v20: i32;  // ebp
    let v22: i64;  // rdx
    let v26: i64;  // rsi
    let v27: i64;  // r13
    let v28: i256;  // ymm0
    let v29: i64;  // rax
    let v30: i128;  // xmm0
    let v32: i64;  // rax
    let v35: i64;  // rsi
    let v36: i256;  // ymm0
    let v37: i128;  // xmm0
    let v39: i32;  // ecx
    let v40: i32;  // ecx

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "mode");
    v11 = clap_builder::parser::error::MatchesError::unwrap("mode", &v6);
    if !v11 {
        v15 = ~(uucore::features::mode::get_umask() as i32) & 511;
        *((a0 + 8) as &i32) = v15;
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v12 = *((v11 + 8) as &i64);
    v8 = <char as core::str::pattern::Pattern>::into_searcher(v12, v7);
    v6 = struct16 {
        field_0: 0
        field_8: v13
    };
    v9 = 1;
    v14 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v14 {
        v17 = 511;
    } else {
        v16 = v14;
        if a2 {
            v17 = 511;
            do {
                v3 = v16;
                v4 = v27;
                v0 = v16;
                v0.8 = vvar_484{stack -168} + vvar_59{reg 40};
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v26, v19) as i32) {
                    v5 = format!("-{:?}", &v3);
                    v2 = *((&v5 as &char + 16) as &i64);
                    v30 = v5;
                    v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
                    v1 = v30;
                    v0 = uucore::features::mode::parse_symbolic(v17, *((&v1 as &char + 8) as &i64), v2, uucore::features::mode::get_umask() as i32, 1);
                    v32 = v0;
                    if v32 != 0x8000000000000000 {
                        vvar_544{reg 24} = *((&v0 as &char + 8) as &i32);
                        vvar_545{reg 112} = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v32;
                        *((a0 + 8) as &i32) = v40;
                        return a0;
                    }
                    v17 = *((&v0 as &char + 8) as &i32);
                } else {
                    v0 = uucore::features::mode::parse_numeric(v17, v12, v7, 1);
                    v29 = v0;
                    if v29 != 0x8000000000000000 {
                        vvar_551{reg 24} = *((&v0 as &char + 8) as &i32);
                        vvar_552{reg 112} = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v29;
                        *((a0 + 8) as &i32) = v39;
                        return a0;
                    }
                    v17 = *((&v0 as &char + 8) as &i32);
                }
            } while ((v16 = core::str::iter::SplitInternal<P>::next(&v6), v16));
        } else {
            v20 = 511;
            do {
                v3 = v16;
                v4 = v27;
                v0 = v16;
                v0.8 = vvar_44{reg 40} + vvar_505{stack -168};
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v35, v22) as i32) {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v16, v4);
                    v2 = v0.field_16;
                    v37 = v0;
                    v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
                    v1 = v37;
                    v0 = uucore::features::mode::parse_symbolic(v20, *((&v1 as &char + 8) as &i64), v2, uucore::features::mode::get_umask() as i32, 1);
                    v32 = v0;
                    if v32 != 0x8000000000000000 {
                        v40 = *((&v0 as &char + 8) as &i32);
                        a0 = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v32;
                        *((a0 + 8) as &i32) = v40;
                        return a0;
                    }
                    v17 = *((&v0 as &char + 8) as &i32);
                } else {
                    v0 = uucore::features::mode::parse_numeric(v20, v12, v7, 1);
                    v29 = v0;
                    if v29 != 0x8000000000000000 {
                        v39 = *((&v0 as &char + 8) as &i32);
                        a0 = a0;
                        *((a0 + 20) as &i32) = *((&v0 as &char + 20) as &i32);
                        *((a0 + 12) as &i64) = *((&v0 as &char + 12) as &i64);
                        *(a0 as &i64) = v29;
                        *((a0 + 8) as &i32) = v39;
                        return a0;
                    }
                    v17 = *((&v0 as &char + 8) as &i32);
                }
            } while ((v16 = core::str::iter::SplitInternal<P>::next(&v6), v16));
        }
    }
    *((a0 + 8) as &i32) = v15;
    *(a0 as &i64) = 0x8000000000000000;
    return a0;
}
