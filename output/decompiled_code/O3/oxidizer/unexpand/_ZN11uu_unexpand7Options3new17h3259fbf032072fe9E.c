fn uu_unexpand::Options::new(a0: void*, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x1b8], Other Possible Types: struct24
    let v1: i256;  // [sp-0x198], Other Possible Types: struct56, struct24, struct32
    let v2: struct24;  // [sp-0x148], Other Possible Types: i128
    let v3: i64;  // [sp-0x138]
    let v4: i128;  // [sp-0x128]
    let v5: i64;  // [sp-0x118]
    let v6: i128;  // [sp-0x108]
    let v7: i64;  // [sp-0xf8]
    let v8: struct64;  // [sp-0xe8], Other Possible Types: i512
    let v9: struct64;  // [bp-0xa8]
    let v10: struct64;  // [bp-0x68]
    let v12: i64;  // rdx
    let v13: i64;  // rax
    let v14: i64;  // 4098
    let v16: i8;  // bpl
    let v18: i64;  // r14

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v8 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v1);
    if !v8 {
        v13 = alloc::alloc::Global::alloc_impl(8, 8);
        *(v13 as &i64) = 8;
        v2 = alloc::slice::hack::into_vec(v13, 1);
    } else {
        v9 = struct64 {
            field_0: v8
            field_16: *((&v8 as &char + 16) as &i128)
            field_32: *((&v8 as &char + 32) as &i128)
            field_48: *((&v8 as &char + 48) as &i128)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v12);
        v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), v0.field_16, ",");
        v7 = v1.field_16;
        v6 = v1;
        v1 = uu_unexpand::tabstops_parse(*((&v6 as &char + 8) as &i64), v1.field_16);
        v14 = v1;
        v4 = *((&v1 as &char + 8) as &i128);
        v5 = *((&v1 as &char + 24) as &i64);
        if v14 {
            return struct32 {
                field_0: 0x8000000000000000
                field_8: v4
                field_24: v5
            };
        }
        v3 = v5;
        v2 = v4;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tabs") as i8 {
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 ^ 1;
    } else {
        v16 = 0;
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v8 = clap_builder::parser::error::MatchesError::unwrap("file", &v1);
    if v8 {
        v10 = struct64 {
            field_0: v8
            field_16: *((&v8 as &char + 16) as &i128)
            field_32: *((&v8 as &char + 32) as &i128)
            field_48: *((&v8 as &char + 48) as &i128)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10, v12);
    } else {
        v18 = alloc::alloc::Global::alloc_impl(8, 24);
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v0.field_16 = v1.field_16;
        v0 = v1;
        *((v18 + 16) as &struct24) = v0.field_16;
        *(v18 as &i128) = v0;
        alloc::slice::hack::into_vec(&v0, v18, 1);
    }
    v1.field_16 = vvar_319{stack -424};
    v1 = v0;
    v1.field_48 = vvar_330{stack -312};
    v1.field_24 = vvar_331{stack -328};
    return struct32 {
        field_0: 0x8000000000000000
        field_8: v4
        field_24: v5
    };
}
