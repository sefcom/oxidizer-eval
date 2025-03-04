fn uu_sync::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: iNone;  // [sp-0x3a0], Other Possible Types: unsigned long
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: struct64;  // [sp-0x388], Other Possible Types: char, struct24
    let v9: struct56;  // [sp-0x348], Other Possible Types: unsigned long
    let v10: i64;  // [sp-0x340]
    let v11: struct24;  // [sp-0x310]
    let v12: iNone;  // [sp-0x2f8], Other Possible Types: struct56, struct64, struct24, struct712
    let v13: i32;  // [sp-0x2e0]
    let v17: i64;  // r15
    let v21: i64;  // rax
    let v22: i64;  // r15
    let v23: i64;  // r12
    let v24: i64;  // rbx
    let v25: i32;  // edx
    let v26: i64;  // rax

    v12 = uu_sync::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v12, a0, a1);
    if v9 == 0x8000000000000000 {
        v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v17;
    }
    v9 = struct56 {
        field_0: v15
        field_8: v16
        field_16: *(&v6 as &i128)
        field_32: *(&v7 as &i128)
        field_48: *(&v8 as &i64)
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058, &v12);
    if !v4.field_0 as i64 || (v12 = struct64 {
    field_0: v18
    field_16: v4.field_16
    field_32: v4.field_32
    field_48: v4.field_48
}, v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12), *(&v12 as &i128) = *(&v11.field_8 as &i128), v0 == 0x8000000000000000) {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        *(&v1 as &i128) = v12 as i128;
        v0 = v11.field_0;
    }
    if (!v2 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE, g_50f048) as i8) {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v12 = v4;
        v13 = 1;
        v17 = alloc::boxed::Box<T>::new(&v12);
        return v17;
    }
    v3 = _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE;
    v12 = *(&v1 as &i128);
    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
    if v21 {
        v22 = v21;
        do {
            v23 = *((v22 + 8) as &i64);
            v24 = *((v22 + 16) as &i64);
            if nix::fcntl::open(v23, v24, 0x800, 0) as i32 == 1 && (v25 != 13 || std::path::Path::is_dir(v23, v24) as i8) {
                v17 = <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v25 as u64, v22);
                if v17 {
                    return v17;
                }
            }
        } while ((v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12), v22));
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE, g_50f038) as i8 {
        v26 = uu_sync::syncfs(&v12);
        goto LABEL_460671;
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, v3, g_50f048) as i8 {
            v17 = uu_sync::sync();
            if v17 {
                return v17;
            }
        } else {
            v12 = *(&v0 as &i192);
            v26 = uu_sync::fdatasync(&v12);
LABEL_460671:
            v17 = v26;
            if v26 {
                return v17;
            }
        }
        return 0;
    }
}
