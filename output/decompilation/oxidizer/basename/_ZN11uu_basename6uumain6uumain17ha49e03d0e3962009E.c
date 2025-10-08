fn uu_basename::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x411]
    let v1: alloc::string::String;  // [bp-0x410]
    let v2: u64;  // [bp-0x410]
    let v3: u128;  // [bp-0x408]
    let v5: void*;  // [bp-0x3f8], Other Possible Types: struct24, struct64, u64
    let v6: struct16;  // [bp-0x3f8], Other Possible Types: u128
    let v7: u64;  // [bp-0x3f0]
    let v8: i8;  // [bp-0x3e8], Other Possible Types: u64
    let v9: u8;  // [bp-0x3e0]
    let v10: iNone;  // [bp-0x3d8]
    let v11: i8;  // [bp-0x3c8]
    let v12: u64;  // [bp-0x3b0]
    let v13: i64;  // [bp-0x3a8], Other Possible Types: struct_9 *
    let v14: u64;  // [bp-0x3a0]
    let v15: u64;  // [bp-0x398]
    let v16: u64;  // [bp-0x390]
    let v17: iNone;  // [bp-0x388]
    let v18: iNone;  // [bp-0x378]
    let v19: u64;  // [bp-0x368]
    let v20: struct32;  // [bp-0x360]
    let v21: struct24;  // [bp-0x340]
    let v22: u8;  // [bp-0x328]
    let v23: alloc::string::String;  // [bp-0x310]
    let v24: u64;  // [bp-0x300]
    let v25: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: core::fmt::Arguments, struct56
    let v26: struct712;  // [bp-0x2f8], Other Possible Types: u128
    let v27: u64;  // [bp-0x2f8]
    let v28: Result<struct40, struct16>;  // [bp-0x2f8]
    let v29: alloc::string::String;  // [bp-0x2f8], Other Possible Types: u128
    let v30: u64;  // [bp-0x2f0]
    let v31: u64;  // [bp-0x2e8]
    let v32: void*;  // [bp-0x2e0], Other Possible Types: u32
    let v33: u128;  // [bp-0x2d8]
    let v34: void*;  // [bp-0x2d0]
    let v35: u128;  // [bp-0x2c8]
    let v36: void*;  // [bp-0x2c0]
    let v39: core::fmt::Arguments;  // xmm0
    let v40: u128;  // xmm1
    let v41: i64;  // rax
    let v42: u64;  // r14
    let v43: u64;  // rax
    let v44: i64;  // rax

    uucore::Args::collect_lossy(&v22, a0, a1);
    v26 = uu_basename::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v26, &v22);
    if (((0 ^ v6.field_0) & (0 ^ -(v5))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    }
    v19 = *(&v11 as &i64);
    v18 = v10;
    v17 = *(&v8 as &i128);
    v15 = v6.field_0;
    v16 = v7;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN11uu_basename7options4ZERO17ha91d35f0c64c90c4E.field_0, g_4df528.field_0) ? 0 : 10);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, _ZN11uu_basename7options4NAME17h428f91de9a3840f2E.field_0, g_4df508.field_0);
    v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options4NAME17h428f91de9a3840f2E.field_0, g_4df508.field_0, &v25);
    if v5.field_0 as i64 {
        v39 = v5.field_0;
        v40 = v5.field_16;
        v35 = v5.field_48;
        *(&v33 as void*) = v10;
        v31 = v40;
        v25 = v39;
    } else {
        v27 = core::ops::function::FnOnce::call_once;
        v30 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
        v31 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
        v32 = 0;
        v34 = 0;
        v36 = 0;
    }
    vvar_635{stack -760} = struct16 OrderedDict([(0, 𝜙@64b [((4524309, None), None), ((4524363, None), vvar_532{stack -760})]), (8, 𝜙@64b [((4524309, None), None), ((4524363, None), vvar_533{stack -752})])])
    core::iter::traits::iterator::Iterator::collect(&v12, &v26);
    if !v14 {
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
        v31 = v8;
        v26 = v5.field_0;
        v32 = 1;
        v42 = alloc::boxed::Box<T>::new(&v26) as u64;
        return v42;
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, _ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E.field_0, g_4df518.field_0);
    if clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E.field_0, g_4df518.field_0, &v28) || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN11uu_basename7options8MULTIPLE17hd62add6aaf7d3d12E.field_0, g_4df4f8.field_0) {
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, _ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E.field_0, g_4df518.field_0);
        v43 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E.field_0, g_4df518.field_0, &v25);
        if v43 {
            v29 = <alloc::string::String as core::clone::Clone>::clone(v43);
            v6 = *(&v29.vec.buf.inner.ptr as &i128);
            if v29.vec.buf.inner.cap.__0 != 0x8000000000000000 {
                v3 = v6;
                v2 = v29.vec.buf.inner.cap.__0;
            }
        }
    } else if v14 == 2 {
        v14 = 1;
        v1 = <alloc::string::String as core::clone::Clone>::clone(*((v13 + 8) as &i64));
    } else if v14 != 1 {
        v41 = v13;
        v5 = 0;
        v7 = *((*((v41 + 16) as &i64) + 8) as &i64);
        v8 = *((*((v41 + 16) as &i64) + 16) as &i64);
        v9 = 1;
        v23 = format!("extra operand {}", &v5);
        v32 = 1;
        v29 = *(&v23.vec.buf.inner.cap as &i128);
        v31 = v24;
        v42 = alloc::boxed::Box<T>::new(&v29) as u64;
        return v42;
    }
    v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
    v44 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20);
    if !v44 {
        return 0;
    }
    do {
        uu_basename::basename(&v21, *((v44 + 8) as &i64), *((v44 + 16) as &i64), v1);
        print!("{}{}", &v21, &v0);
        v44 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20);
    } while (v44);
    return 0;
}
