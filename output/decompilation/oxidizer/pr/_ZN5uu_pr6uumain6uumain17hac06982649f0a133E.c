fn uu_pr::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x6f8]
    let v1: struct16;  // [bp-0x6f8]
    let v2: u64;  // [bp-0x6e8]
    let v3: u8;  // [bp-0x6e0]
    let v4: u64;  // [bp-0x6d8]
    let v5: u64;  // [bp-0x6d0]
    let v6: struct40;  // [bp-0x6c8], Other Possible Types: struct32
    let v7: i64;  // [bp-0x6c0]
    let v8: u64;  // [bp-0x6a0]
    let v9: u64;  // [bp-0x698]
    let v10: u64;  // [bp-0x690]
    let v11: Option<struct24>;  // [bp-0x688]
    let v12: &u64;  // [bp-0x680]
    let v13: void*;  // [bp-0x678]
    let v14: struct56;  // [bp-0x670]
    let v15: u64;  // [bp-0x668]
    let v16: iNone;  // [bp-0x638]
    let v17: Result<struct32, struct12>;  // [bp-0x638]
    let v18: struct32;  // [bp-0x638]
    let v19: struct24;  // [bp-0x618]
    let v20: u64;  // [bp-0x618]
    let v21: struct32;  // [bp-0x600]
    let v22: u8;  // [bp-0x5e0]
    let v23: struct32;  // [bp-0x5c8], Other Possible Types: struct56, u64
    let v24: Result<struct56, struct16>;  // [bp-0x5c8]
    let v25: u64;  // [bp-0x5c0]
    let v26: u64;  // [bp-0x5c0]
    let v27: struct64;  // [bp-0x480]
    let v28: struct32;  // [bp-0x438]
    let v29: struct712;  // [bp-0x2f8]
    let v31: void*;  // r15
    let v32: u64;  // rdx
    let v34: i64;  // rax
    let v36: Result<struct324, struct40>;  // [bp-0x440]

    uucore::Args::collect_ignore(&v3, a0, a1);
    uu_pr::recreate_arguments(&v22, v4, v5);
    v29 = uu_pr::uu_app();
    v24 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v29, &v22);
    if (((0 ^ v24 as i64) & (0 ^ -(v23))) >> 63) as char {
        v31 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
    } else {
        v14 = v23;
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14);
        v27 = clap_builder::parser::error::MatchesError::unwrap(&v23);
        if v27.field_0 as i64 {
            core::iter::traits::iterator::Iterator::collect(&v23, &v27);
            if v23.field_0 == 0x8000000000000000 {
                goto LABEL_523d8e;
            }
            v32 = v23.field_16;
            v26 = v25;
        } else {
LABEL_523d8e:
            v32 = 0;
            v26 = 8;
        }
        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v26, v32);
        if !v2 {
            v1 = alloc::vec::Vec<T,A>::insert();
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "merge") {
            v34 = alloc::alloc::Global::alloc_impl(8, 24);
            *((v34 + 16) as &u64) = v2;
            *(v34 as &struct16) = v1;
            v19 = struct24 {
                field_0: 1
                field_8: v34
                field_16: 1
            };
        } else {
            v23 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
            core::iter::traits::iterator::Iterator::collect(&v19 as u8, &v23);
        }
        v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v20);
        v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
        if let Some(_) = v11 {
            v10 = v4;
            v9 = v5;
            v8 = 9223372036854775813;
            do {
                v24 = alloc::str::join_generic_copy(v10, v9);
                v36 = uu_pr::build_options(&v14, v12, v13, v25, *((&v24 as &char + 16) as &i64));
                match v36 {
                    Ok(_) => {
                        memcpy(&v24, &v36, 328);
                        v6 = itertools::Itertools::exactly_one(v12, v13 * 16 + v12);
                        if v6.field_0 as i32 == 2 {
                            v17 = uu_pr::pr(*(v7 as &i64), *((v7 + 8) as &i64), &v24);
                        } else {
                            uu_pr::mpr(&v16, v12, v13);
                        }
                        if v16 as i64 != 9223372036854775813 {
                            v6 = v18;
                            uu_pr::print_error(&v14, &v6);
                            v31 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                        }
                    },
                    Err(_) => {
                        v6 = v28;
                        uu_pr::print_error(&v14, &v6);
                        v31 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                    },
                }
                v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
            } while (v11 as i64 != 0x8000000000000000);
        }
    }
    return v31;
}
