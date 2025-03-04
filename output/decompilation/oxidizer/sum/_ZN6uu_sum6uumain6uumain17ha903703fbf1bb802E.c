fn uu_sum::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x43a]
    let v1: i8;  // [sp-0x439]
    let v2: struct64;  // [bp-0x438], Other Possible Types: char, unsigned long
    let v3: i64;  // [bp-0x3f8], Other Possible Types: unsigned short
    let v4: i64;  // [sp-0x3f0]
    let v5: iNone;  // [bp-0x3e8], Other Possible Types: unsigned long
    let v6: i64;  // [sp-0x3e0]
    let v7: i64;  // [sp-0x3d8]
    let v8: i64;  // [sp-0x3c0]
    let v9: struct24;  // [sp-0x3b0], Other Possible Types: int
    let v10: i64;  // [sp-0x398]
    let v11: i64;  // [sp-0x390]
    let v12: struct8;  // [sp-0x388]
    let v13: i64;  // [sp-0x380]
    let v14: i64;  // [sp-0x378]
    let v15: iNone;  // [sp-0x370], Other Possible Types: unsigned long
    let v16: i64;  // [sp-0x368]
    let v17: struct64;  // [sp-0x338]
    let v18: i64;  // [sp-0x2f8], Other Possible Types: struct24, struct56, struct712
    let v19: i64;  // [sp-0x2e8]
    let v20: i64;  // [sp-0x2e0]
    let v21: i64;  // [sp-0x2d8]
    let v22: i64;  // [sp-0x2d0]
    let v23: i8;  // [sp-0x2c8]
    let v24: i64;  // [sp-0x2c0]
    let v25: i64;  // [sp-0x2b0]
    let v26: i64;  // [sp-0x2a8]
    let v27: i64;  // [sp-0x2a0]
    let v28: i64;  // [sp-0x298]
    let v29: i8;  // [sp-0x290]
    let v30: i64;  // [sp-0x288]
    let v31: i64;  // [sp-0x278]
    let v32: i64;  // [sp-0x268]
    let v33: i64;  // [sp-0x260]
    let v34: i8;  // [sp-0x258]
    let v38: i64;  // r15
    let v39: iNone;  // xmm0
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: struct8;  // rax
    let v44: i64;  // rdi
    let v46: i64;  // dx

    v18 = uu_sum::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v18, a0, a1);
    if v15 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    }
    v15 = *(&v2 as &i448);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, _ZN6uu_sum7options4FILE17h2195fcf4470791a0E, g_5125a8);
    v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_sum7options4FILE17h2195fcf4470791a0E, g_5125a8, &v18);
    if v2 {
        v17 = v2;
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
    } else {
        v38 = alloc::alloc::Global::alloc_impl();
        v18 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v7 = v19;
        v39 = v18.field_0;
        v5 = v39;
        *((v38 + 16) as &unsigned long) = v7;
        *(v38 as void*) = v39;
        v9 = alloc::slice::hack::into_vec(v38, 1);
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, _ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hb669b9fdd31f7f9cE, g_5125b8) as i8;
    v40 = (&v9)[16] as i64;
    v0 = 1;
    if v40 <= 1 {
        v41 = (&v9)[8] as i64;
        v0 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((v41 + 8) as &i64), *((v41 + 16) as &i64));
        v40 = (&v9)[16] as i64;
    }
    v10 = (&v9)[8] as i64;
    v11 = v10 + v40 * 24;
    v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v42 {
        return 0;
    }
    do {
        v12 = v42;
        uu_sum::open(&v5, *((v42 + 8) as &i64), *((v42 + 16) as &i64));
        v44 = v6;
        if v5 {
            v3 = v44;
            v4 = v7;
            uucore::mods::error::set_exit_code(*((v4 + 96) as &i64)());
            v13 = uucore::util_name();
            v14 = v46;
            eprintln!("{}: {}", &v13, &v3);
        } else {
            v13 = (!v1 ? uu_sum::bsd_sum(v44, v4) : uu_sum::sysv_sum(v44, v4));
            *(&v3 as &u16) = v46 as u16;
            if !v0 {
                v18 = 2;
                v19 = 1;
                v20 = 2;
                v21 = 0;
                v22 = 34359738400;
                v23 = 3;
                v24 = 2;
                v25 = 1;
                v26 = 2;
                v27 = 1;
                v28 = 32;
                v29 = 3;
                v8 = 2;
                print!("{} {}
{}", &v3, &v13, v43);
            } else {
                v18 = 2;
                v19 = 1;
                v20 = 3;
                v21 = 0;
                v22 = 34359738400;
                v23 = 3;
                v24 = 2;
                v25 = 1;
                v26 = 3;
                v27 = 1;
                v28 = 32;
                v29 = 3;
                v30 = 2;
                v31 = 2;
                v32 = 2;
                v33 = 32;
                v34 = 3;
                v8 = 3;
                print!("{} {} {}
{}", &v3, &v13, &v12, v43);
            }
        }
    } while ((v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v42));
}
