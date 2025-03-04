fn uu_pr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: Result<struct32, struct4>;  // [sp-0x6f8], Other Possible Types: struct32, struct24, struct40, int
    let v1: i64;  // [bp-0x6e8]
    let v2: iNone;  // [sp-0x6c8]
    let v3: i64;  // [sp-0x6b8]
    let v4: struct24;  // [sp-0x6a8]
    let v5: struct24;  // [sp-0x690], Other Possible Types: struct16, int
    let v6: Option<struct24>;  // [sp-0x678], Other Possible Types: int
    let v7: i64;  // [bp-0x660], Other Possible Types: struct56
    let v8: i64;  // [sp-0x658]
    let v9: iNone;  // [sp-0x628], Other Possible Types: Result<struct32, struct4>
    let v10: i8;  // [bp-0x608]
    let v12: struct32;  // [sp-0x5f0]
    let v13: struct24;  // [sp-0x5d0], Other Possible Types: int
    let v14: i8;  // [sp-0x5b8], Other Possible Types: struct56, struct24, struct64
    let v15: i64;  // [sp-0x5b8]
    let v16: iNone;  // [sp-0x5b0], Other Possible Types: unsigned long
    let v17: i64;  // [bp-0x5a8], Other Possible Types: char
    let v20: struct64;  // [sp-0x468], Other Possible Types: struct24, int, struct40
    let v21: struct32;  // [sp-0x318]
    let v22: struct712;  // [sp-0x2f8]
    let v24: iNone;  // xmm0
    let v26: iNone;  // ymm0
    let v27: iNone;  // ymm0
    let v28: i64;  // rbx
    let v30: i64;  // rax
    let v31: iNone;  // xmm0
    let v32: iNone;  // xmm0
    let v33: i64;  // rax
    let v34: iNone;  // xmm0
    let v35: iNone;  // xmm0
    let v36: i64;  // rbp
    let v37: i64;  // r9
    let v38: iNone;  // xmm0
    let v39: i64;  // rax

    v4 = uucore::Args::collect_ignore(a0, a1);
    uu_pr::recreate_arguments(&v10, *((&v4.field_0 as &char + 8) as &i64), v4.field_16);
    v22 = uu_pr::uu_app();
    v24 = *(&v10 as &i128);
    v20 = struct24 {
        field_0: v24
        field_16: *(&v11 as &i64)
    };
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v14, &v22, &v20);
    if v7 == 0x8000000000000000 {
        v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v28;
    }
    v27 = (v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v17 as &i128);
    v7 = struct56 {
        field_0: v14
        field_8: v16
        field_16: v25
        field_32: v18
        field_48: *(&v19 as &i64)
    };
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "files");
    v20 = clap_builder::parser::error::MatchesError::unwrap("files", &v14);
    if !v20.field_0 as i64 || (v14 = struct64 {
    field_0: v29
    field_16: v20.field_16
    field_32: v20.field_32
    field_48: v20.field_48
}, v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v14), v30 = v0.field_0 as i64, v31 = *((&v0.field_0 as &char + 8) as &i128), v27 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u256, v9 = v31, v15 == 0x8000000000000000) {
        v15 = 0;
        v16 = 8;
        *(&v17 as &i64) = 0;
    } else {
        v32 = v9;
        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256;
        v16 = v32;
        v15 = v30;
    }
    v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v15);
    if !v5.field_16 {
        v5 = alloc::vec::Vec<T,A>::insert(None, "-");
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "merge") as i8 {
        v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v13 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v21);
    } else {
        v33 = alloc::alloc::Global::alloc_impl();
        v34 = v5 as i128;
        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256;
        *((v33 + 16) as &u64) = v5.field_16;
        *(v33 as void*) = v34;
        v13 = alloc::slice::hack::into_vec(v33, 1);
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
    if v6 as i64 == 0x8000000000000000 {
        return 0;
    }
    do {
        v3 = (&v6)[16] as i64;
        v35 = v6 as i128;
        v2 = v35;
        v36 = (&v2)[8] as i64;
        v14 = alloc::str::join_generic_copy(*((&v4.field_0 as &char + 8) as &i64), v4.field_16, " ");
        v37 = v14.field_16;
        *(&v1 as &u64) = v14.field_16;
        v38 = v14.field_0;
        v27 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256;
        v0 = v38;
        v20 = uu_pr::build_options(&v7, v36, v3, (&v0)[8] as i64, v37);
        if v20.field_0 == 2 {
            *(&v0.field_0 as &struct32) = struct32 {
                field_0: v40
                field_16: *((&v20.field_16 as &char + 8) as &i128)
            };
            uu_pr::print_error(&v7, &v0);
            return v28;
        }
        memcpy(&v14, &v20, 328);
        v0 = itertools::Itertools::exactly_one((&v2)[8] as i64, v3 * 16 + (&v2)[8] as i64);
        if v0.field_0 as i32 == 2 {
            v39 = v0.field_8;
            v9 = uu_pr::pr(*(v39 as &i64), *((v39 + 8) as &i64), &v14);
        } else {
            uu_pr::mpr();
        }
        if v9 as i64 != 9223372036854775813 {
            v0 = v9;
            uu_pr::print_error(&v7, &v0);
            return v28;
        }
        v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
    } while (v6 as i64 != 0x8000000000000000);
}
