fn uu_pr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i320;  // [sp-0x6f8], Other Possible Types: struct32, Result<struct32, struct4>, struct40, struct24
    let v1: i64;  // [bp-0x6e8]
    let v2: i128;  // [sp-0x6c8]
    let v3: i64;  // [sp-0x6b8]
    let v4: i192;  // [sp-0x6a8], Other Possible Types: struct24
    let v5: i192;  // [sp-0x690], Other Possible Types: struct24, struct16
    let v6: i192;  // [sp-0x678], Other Possible Types: Option<struct24>
    let v7: struct56;  // [sp-0x660], Other Possible Types: i64
    let v8: i64;  // [sp-0x658]
    let v9: i256;  // [sp-0x628], Other Possible Types: Result<struct32, struct4>
    let v10: i8;  // [bp-0x608]
    let v12: struct32;  // [sp-0x5f0], Other Possible Types: i256
    let v13: struct24;  // [sp-0x5d0], Other Possible Types: i192
    let v14: i448;  // [bp-0x5b8], Other Possible Types: struct64, struct24, struct56
    let v15: i128;  // [sp-0x5b0]
    let v16: i64;  // [bp-0x5a8]
    let v19: i320;  // [bp-0x468], Other Possible Types: struct24, struct40, struct64
    let v20: i256;  // [sp-0x318], Other Possible Types: struct32
    let v21: i5696;  // [sp-0x2f8], Other Possible Types: struct712
    let v23: i128;  // xmm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v29: i64;  // rax
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0
    let v32: i64;  // rax
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i64;  // rbp
    let v36: i64;  // r9
    let v37: i128;  // xmm0
    let v38: i64;  // rax
    let v40: i64;  // rbx

    v4 = uucore::Args::collect_ignore(a0, a1);
    uu_pr::recreate_arguments(&v10, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
    v21 = uu_pr::uu_app();
    v23 = v10;
    *(&v19.field_0 as &struct24) = struct24 {
        field_0: v23
        field_16: v11
    };
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v14, &v21, &v19);
    if v7 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v40;
    }
    v27 = (v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
    v7 = struct56 {
        field_0: v14
        field_8: v15
        field_16: v25
        field_32: v17
        field_48: v18
    };
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "files");
    v19 = clap_builder::parser::error::MatchesError::unwrap("files", &v14);
    if !v19 || (v14 = struct64 {
    field_0: v28
    field_16: *((&v19 as &char + 16) as &i128)
    field_32: *((&v19 as &char + 32) as &i128)
    field_48: *((&v19 as &char + 48) as &i128)
}, v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v14), v29 = v0, v30 = *((&v0 as &char + 8) as &i128), v27 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u128 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u128 as u256, v9 = v30, v14 == 0x8000000000000000) {
        v14 = 0;
        v15 = 8;
        v16 = 0;
    } else {
        v31 = v9;
        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
        v15 = v31;
        v14 = v29;
    }
    v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v14);
    if !*((&v5 as &char + 16) as &i64) {
        v5 = alloc::vec::Vec<T,A>::insert(None, "-");
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "merge") as i8 {
        v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v13 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v20);
    } else {
        v32 = alloc::alloc::Global::alloc_impl();
        v33 = v5;
        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
        *((v32 + 16) as &i64) = *((&v5 as &char + 16) as &i64);
        *(v32 as &i128) = v33;
        v13 = alloc::slice::hack::into_vec(v32, 1);
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
    match v6 {
        Some(_) => {
            do {
                v3 = *((&v6 as &char + 16) as &i64);
                v34 = v6;
                v2 = v34;
                v35 = *((&v2 as &char + 8) as &i64);
                v14 = alloc::str::join_generic_copy(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), " ");
                v36 = *((&v14 as &char + 16) as &i64);
                v1 = *((&v14 as &char + 16) as &i64);
                v37 = v14;
                v27 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u128 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                v0 = v37;
                v19 = uu_pr::build_options(&v7, v35, v3, *((&v0 as &char + 8) as &i64), v36);
                if v19 == 2 {
                    *(&v0.field_0 as &struct32) = struct32 {
                        field_0: v39
                        field_16: *((&v19 as &char + 24) as &i128)
                    };
                    uu_pr::print_error(&v7, &v0);
                    uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
                    return v40;
                }
                memcpy(&v14, &v19, 328);
                v0 = itertools::Itertools::exactly_one(*((&v2 as &char + 8) as &i64), v3 * 16 + *((&v2 as &char + 8) as &i64));
                if v0 == 2 {
                    v38 = *((&v0 as &char + 8) as &i64);
                    v9 = uu_pr::pr(*(v38 as &i64), *((v38 + 8) as &i64), &v14);
                } else {
                    uu_pr::mpr();
                }
                if v9 != 9223372036854775813 {
                    v0 = v9;
                    uu_pr::print_error(&v7, &v0);
                    uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
                    return v40;
                }
                v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
            } while (v6 != 0x8000000000000000);
        },
        None => {
            v40 = 0;
        },
    }
    return 0;
}
