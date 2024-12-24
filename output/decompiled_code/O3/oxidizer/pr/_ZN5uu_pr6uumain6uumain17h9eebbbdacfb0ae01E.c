fn uu_pr::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x6f8], Other Possible Types: struct40, struct32, struct24
    let v1: i64;  // [bp-0x6e8]
    let v2: i128;  // [sp-0x6c8]
    let v3: i64;  // [sp-0x6b8]
    let v4: struct24;  // [sp-0x6a8], Other Possible Types: i192
    let v5: i192;  // [sp-0x690], Other Possible Types: struct24, struct16
    let v6: i192;  // [sp-0x678], Other Possible Types: Option<struct24>
    let v7: i64;  // [sp-0x660]
    let v8: i64;  // [sp-0x658]
    let v9: i128;  // [sp-0x650]
    let v10: i128;  // [sp-0x640]
    let v11: i64;  // [sp-0x630]
    let v12: struct32;  // [sp-0x628], Other Possible Types: i128
    let v13: i192;  // [sp-0x608], Other Possible Types: struct24
    let v14: struct32;  // [sp-0x5f0], Other Possible Types: i256
    let v15: struct24;  // [sp-0x5d0], Other Possible Types: i192
    let v16: i64;  // [sp-0x5b8], Other Possible Types: struct24, struct64, struct56, Result<struct56, struct16>
    let v17: i128;  // [sp-0x5b0]
    let v18: i64;  // [bp-0x5a8]
    let v19: i128;  // [sp-0x598]
    let v20: i512;  // [sp-0x468], Other Possible Types: struct64, struct40
    let v21: i64;  // [sp-0x458]
    let v22: i256;  // [sp-0x318], Other Possible Types: struct32
    let v23: struct712;  // [sp-0x2f8], Other Possible Types: i5696
    let v25: i64;  // rcx
    let v26: i64;  // r8
    let v27: i64;  // r9
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i128;  // xmm0
    let v31: i64;  // rax
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i64;  // rax
    let v36: i128;  // xmm0
    let v37: i128;  // xmm0
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i256;  // ymm0
    let v41: i128;  // xmm0
    let v42: i64;  // rbp
    let v43: i64;  // r9
    let v44: i128;  // xmm0
    let v45: i64;  // rax

    v4 = uucore::Args::collect_ignore(a0, a1);
    v13 = uu_pr::recreate_arguments(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), v25, v26, v27);
    v23 = uu_pr::uu_app(v28, v29);
    v21 = *((&v13 as &char + 16) as &i64);
    v30 = v13;
    v20 = v30;
    v16 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v23, &v20, v25);
    if v7 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v31;
    }
    v11 = *((&v16 as &char + 48) as &i64);
    v32 = *((&v16 as &char + 16) as &i128);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v10 = v19;
    v9 = v32;
    v7 = v16;
    v8 = v17;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "files");
    v20 = clap_builder::parser::error::MatchesError::unwrap("files", &v16);
    if !v20 || (v16 = struct64 {
    field_0: v33 as u128
    field_16: *((&v20 as &char + 16) as &i128)
    field_32: *((&v20 as &char + 32) as &i128)
    field_48: *((&v20 as &char + 48) as &i128)
}, v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v16, v29), v35 = v0, v36 = *((&v0 as &char + 8) as &i128), v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u128 as u256, v12 = v36, v16 == 0x8000000000000000) {
        v16 = 0;
        v16.field_8 = 8;
        v18 = 0;
    } else {
        v37 = v12;
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
        v17 = v37;
        v16 = v35;
    }
    v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16);
    if !*((&v5 as &char + 16) as &i64) {
        v5 = alloc::vec::Vec<T,A>::insert(0, "-");
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "merge") as i8 {
        v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v15 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v22);
    } else {
        v38 = alloc::alloc::Global::alloc_impl();
        v39 = v5;
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
        *((v38 + 16) as &i64) = *((&v5 as &char + 16) as &i64);
        *(v38 as &i128) = v39;
        v15 = alloc::slice::hack::into_vec(v38, 1);
    }
    v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
    v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14);
    if v6 == 0x8000000000000000 {
        return 0;
    }
    do {
        v3 = *((&v6 as &char + 16) as &i64);
        v41 = v6;
        v2 = v41;
        v42 = *((&v2 as &char + 8) as &i64);
        v16 = alloc::str::join_generic_copy(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), " ");
        v43 = *((&v16 as &char + 16) as &i64);
        v1 = *((&v16 as &char + 16) as &i64);
        v44 = v16;
        v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
        v0 = v44;
        v20 = uu_pr::build_options(&v7, v42, v3, *((&v0 as &char + 8) as &i64), v43);
        if v20 == 2 {
            *(&v0.field_0 as &struct32) = struct32 {
                field_0: v33 as u128
                field_16: *((&v20 as &char + 24) as &i128)
            };
            uu_pr::print_error(&v7, &v0);
            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            return v31;
        }
        memcpy(&v16, &v20, 328);
        v0 = itertools::Itertools::exactly_one(*((&v2 as &char + 8) as &i64), v3 * 16 + *((&v2 as &char + 8) as &i64));
        if v0 == 2 {
            v45 = *((&v0 as &char + 8) as &i64);
            v12 = uu_pr::pr(*(v45 as &i64), *((v45 + 8) as &i64), &v16);
        } else {
            v12 = uu_pr::mpr(*((&v2 as &char + 8) as &i64), v3, &v16);
        }
        if v12 != 9223372036854775813 {
            v0 = v12;
            uu_pr::print_error(&v7, &v0);
            v31 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            return v31;
        }
        v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14);
    } while (v6 != 0x8000000000000000);
}
