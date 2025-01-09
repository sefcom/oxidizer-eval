fn uu_sync::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: i128;  // [sp-0x3a0]
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: i512;  // [bp-0x388], Other Possible Types: struct64, struct24
    let v9: struct56;  // [sp-0x348], Other Possible Types: i64
    let v10: i64;  // [sp-0x340]
    let v11: i192;  // [sp-0x310], Other Possible Types: struct24
    let v12: i5696;  // [sp-0x2f8], Other Possible Types: struct712, struct24, struct64, struct56
    let v16: i64;  // rax
    let v20: struct8;  // rax
    let v21: i64;  // r12
    let v22: i64;  // rbx
    let v23: i32;  // edx
    let v24: i64;  // rax

    v12 = uu_sync::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v12, a0, a1);
    if v9 == 0x8000000000000000 {
        v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v16;
    }
    v9 = struct56 {
        field_0: v14
        field_8: v15
        field_16: v6
        field_32: v7
        field_48: v8
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058, &v12);
    if !v4 || (v12 = struct64 {
    field_0: v17
    field_16: *((&v4 as &char + 16) as &i128)
    field_32: *((&v4 as &char + 32) as &i128)
    field_48: *((&v4 as &char + 48) as &i128)
}, v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12), v12 = *((&v11 as &char + 8) as &i128), v0 == 0x8000000000000000) {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v1 = v12;
        v0 = v11;
    }
    if (!v2 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE, g_50f048) as i8) {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v12 = v4;
        alloc::boxed::Box<T>::new(&v12);
        return v16;
    }
    v3 = _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE;
    *(&v12.field_0 as &struct24) = struct24 {
        field_0: v1
        field_16: <UNKNOWN>
    };
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v20 {
        do {
            v21 = *((v20 + 8) as &i64);
            v22 = *((v20 + 16) as &i64);
            if nix::fcntl::open(v21, v22, 0x800, 0) as i32 == 1 && (v23 != 13 || std::path::Path::is_dir(v21, v22) as i8) && <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v23, v20) {
                return v16;
            }
        } while ((v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v20));
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE, g_50f038) as i8 {
        v24 = uu_sync::syncfs(&v12);
        goto LABEL_460671;
    } else {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, v3, g_50f048) as i8 {
            v12 = v0;
            v24 = uu_sync::fdatasync(&v12);
LABEL_460671:
            if v24 {
                return v16;
            }
        } else if uu_sync::sync() {
            return v16;
        }
        return 0;
    }
}
