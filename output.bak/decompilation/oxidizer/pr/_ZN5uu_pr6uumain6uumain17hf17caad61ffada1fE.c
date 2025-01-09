fn uu_pr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x6f8], Other Possible Types: struct32, struct24, struct40
    let v1: i64;  // [bp-0x6e8]
    let v2: i128;  // [sp-0x6c8]
    let v3: i64;  // [sp-0x6b8]
    let v4: i192;  // [sp-0x6a8], Other Possible Types: struct24
    let v5: i192;  // [sp-0x690], Other Possible Types: struct16, struct24
    let v6: Option<struct24>;  // [sp-0x678], Other Possible Types: i192
    let v7: i64;  // [sp-0x660], Other Possible Types: struct56
    let v8: i64;  // [sp-0x658]
    let v9: i128;  // [sp-0x628], Other Possible Types: struct32
    let v10: i192;  // [sp-0x608], Other Possible Types: struct24
    let v11: struct32;  // [sp-0x5f0], Other Possible Types: i256
    let v12: struct24;  // [sp-0x5d0], Other Possible Types: i192
    let v13: i64;  // [sp-0x5b8], Other Possible Types: struct24, Result<struct56, struct8>, struct56, struct64
    let v14: i128;  // [sp-0x5b0]
    let v15: i64;  // [bp-0x5a8]
    let v17: i128;  // [bp-0x468], Other Possible Types: struct24, struct40, struct64
    let v18: struct32;  // [sp-0x318], Other Possible Types: i256
    let v19: struct712;  // [sp-0x2f8], Other Possible Types: i5696
    let v21: i128;  // xmm0
    let v22: i64;  // rax
    let v23: i256;  // ymm0
    let v24: i256;  // ymm0
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i64;  // rax
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm0
    let v32: i64;  // rbp
    let v33: i64;  // r9
    let v34: i128;  // xmm0
    let v35: i64;  // rax

    v4 = uucore::Args::collect_ignore(a0, a1);
    v10 = uu_pr::recreate_arguments(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
    v19 = uu_pr::uu_app();
    v21 = v10;
    v17 = struct24 {
        field_0: v21
        field_16: *((&v10 as &char + 16) as &i64)
    };
    v13 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v19, &v17);
    if v7 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v22;
    }
    v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v13 as &char + 16) as &i128);
    v7 = struct56 {
        field_0: v13
        field_8: v14
        field_16: v23 as u128
        field_32: v16
        field_48: *((&v13 as &char + 48) as &i64)
    };
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "files");
    v17 = clap_builder::parser::error::MatchesError::unwrap("files", &v13);
    if !v17 || (v13 = struct64 {
    field_0: v23 as u128
    field_16: *((&v17 as &char + 16) as &i128)
    field_32: *((&v17 as &char + 32) as &i128)
    field_48: *((&v17 as &char + 48) as &i128)
}, v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v13), v25 = v0, v26 = *((&v0 as &char + 8) as &i128), v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u128 as u256, v9 = v26, v13 == 0x8000000000000000) {
        v13 = 0;
        v14 = 8;
        v15 = 0;
    } else {
        v27 = v9;
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
        v14 = v27;
        v13 = v25;
    }
    v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v13);
    if !*((&v5 as &char + 16) as &i64) {
        v5 = alloc::vec::Vec<T,A>::insert(None, "-");
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "merge") as i8 {
        v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v12 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v18);
    } else {
        v28 = alloc::alloc::Global::alloc_impl();
        v29 = v5;
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
        *((v28 + 16) as &i64) = *((&v5 as &char + 16) as &i64);
        *(v28 as &i128) = v29;
        v12 = alloc::slice::hack::into_vec(v28, 1);
    }
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
    v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
    if v6 == 0x8000000000000000 {
        return 0;
    }
    do {
        v3 = *((&v6 as &char + 16) as &i64);
        v31 = v6;
        v2 = v31;
        v32 = *((&v2 as &char + 8) as &i64);
        v13 = alloc::str::join_generic_copy(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), " ");
        v33 = *((&v13 as &char + 16) as &i64);
        v1 = *((&v13 as &char + 16) as &i64);
        v34 = v13;
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
        v0 = v34;
        v17 = uu_pr::build_options(&v7, v32, v3, *((&v0 as &char + 8) as &i64), v33);
        if v17 == 2 {
            *(&v0.field_0 as &struct32) = struct32 {
                field_0: v23 as u128
                field_16: *((&v17 as &char + 24) as &i128)
            };
            uu_pr::print_error(&v7, &v0);
            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
            return v22;
        }
        memcpy(&v13, &v17, 328);
        v0 = itertools::Itertools::exactly_one(*((&v2 as &char + 8) as &i64), v3 * 16 + *((&v2 as &char + 8) as &i64));
        if v0 == 2 {
            v35 = *((&v0 as &char + 8) as &i64);
            v9 = uu_pr::pr(*(v35 as &i64), *((v35 + 8) as &i64), &v13);
        } else {
            uu_pr::mpr();
        }
        if v9 != 9223372036854775813 {
            *(&v0.field_0 as &struct32) = struct32 {
                field_0: v9
                field_16: *((&v9 as &char + 16) as &i128)
            };
            uu_pr::print_error(&v7, &v0);
            v22 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
            return v22;
        }
        v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
    } while (v6 != 0x8000000000000000);
}
