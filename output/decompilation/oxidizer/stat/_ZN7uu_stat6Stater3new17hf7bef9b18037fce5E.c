fn uu_stat::Stater::new(a1: &struct56) -> Result<struct99, struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x149]
    let v1: struct24;  // [bp-0x148], Other Possible Types: u128
    let v2: u64;  // [bp-0x140]
    let v3: u64;  // [bp-0x138]
    let v4: u64;  // [bp-0x130]
    let v5: u64;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x118]
    let v8: i64;  // [bp-0x110]
    let v9: struct56;  // [bp-0x108], Other Possible Types: struct24, u64
    let v10: Result<struct40, struct16>;  // [bp-0x108], Other Possible Types: u640
    let v11: u128;  // [bp-0x108]
    let v12: u64;  // [bp-0x100]
    let v13: u64;  // [bp-0x100]
    let v14: u64;  // [bp-0xf8]
    let v15: void*;  // [bp-0xf8]
    let v16: u32;  // [bp-0xf0]
    let v17: u64;  // [bp-0xc0]
    let v18: u128;  // [bp-0xb8]
    let v19: u64;  // [bp-0xb0]
    let v21: iNone;  // [bp-0xa8]
    let v22: u64;  // [bp-0x98]
    let v23: struct24;  // [bp-0x88]
    let v24: u64;  // [bp-0x80]
    let v25: void*;  // [bp-0x78]
    let v26: struct64;  // [bp-0x70]
    let v29: alloc::string::String;  // rbp
    let v30: Result<struct99, struct24>;  // rax
    let v31: u64;  // rcx
    let v32: u32;  // r15d
    let v33: u8;  // r13b
    let v34: u64;  // rbp
    let v35: Result<struct24, struct24>;  // al

    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
    v26 = clap_builder::parser::error::MatchesError::unwrap(&v9);
    if v26.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v9, &v26);
        v1 = *(&v9.field_8 as &i128);
        if v9.field_0 != 0x8000000000000000 {
            v18 = v1;
            v17 = v9.field_0;
            if v19 {
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "printf") {
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41d64e);
                    if !clap_builder::parser::error::MatchesError::unwrap(&g_41d64e, &v10) {
                        core::option::expect_failed("Invalid format string"); /* do not return */
                    }
                } else {
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41d654);
                    v30 = clap_builder::parser::error::MatchesError::unwrap(&g_41d654, &v10);
                    v8 = v30;
                    v29 = (v31 ? v31 : 1);
                }
                v32 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "printf");
                v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "terse");
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "file-system");
                if v8 {
                    uu_stat::Stater::generate_tokens(&v10, v29, v8, v32);
                    v34 = v14;
                    v5 = v10;
                    if v10 as i64 == 0x8000000000000000 {
                        *((a0 + 8) as &u64) = v12;
                        *((a0 + 16) as &u64) = v14;
                    }
                    v4 = v12;
                } else {
                    v9 = uu_stat::Stater::default_format(v0, v33, 0);
                    uu_stat::Stater::generate_tokens(&v1, v12, v14, v32);
                    v34 = v3;
                    v5 = v1;
                    if v1 as i64 == 0x8000000000000000 {
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: v2
                            field_16: v3
                        };
                    }
                    v4 = v2;
                }
                v9 = uu_stat::Stater::default_format(v0, v33, 1);
                uu_stat::Stater::generate_tokens(&v1, v12, v14, v32);
                v7 = v1;
                if v1 as i64 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: v2
                        field_16: v3
                    };
                }
                v6 = v2;
                if !v0 {
                    v23 = uucore::features::fsext::read_fs_list();
                    if v23.field_0 == 0x8000000000000000 {
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: uu_stat::Stater::new::{{closure}}(v13, v15)
                            field_16: &g_519a38
                        };
                    }
                    v9 = v23.field_0;
                    v13 = v24;
                    v15 = v25;
                    core::iter::traits::iterator::Iterator::collect(&v1, v13, v15 * 152 + v13);
                    alloc::slice::stable_sort(v2, v3);
                    core::slice::<impl [T]>::reverse(v2, v3);
                    v22 = v3;
                    v21 = v1;
                }
                v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "dereference");
                return Ok(struct104 {
                    field_0: *((&v10 as &char + 72) as &i128)
                    field_16: v19
                    field_24: v5
                    field_32: v4
                    field_40: v34
                    field_48: v7
                    field_56: v6
                    field_64: v3
                    field_72: v21
                    field_88: v22
                    field_96: v35
                    field_97: v0
                    field_98: (v8) as u8 as u8
                });
            }
        }
    }
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand\nTry 'stat --help' for more information.");
    v14 = v3;
    v11 = *(&v1.field_0 as &i128);
    v16 = 1;
    return struct24 {
        field_0: 0x8000000000000000
        field_8: alloc::boxed::Box<T>::new(&v9) as u64
        field_16: &g_519a38
    };
}
