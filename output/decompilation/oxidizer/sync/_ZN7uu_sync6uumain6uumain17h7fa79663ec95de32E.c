fn uu_sync::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x3c8]
    let v1: struct24;  // [bp-0x3c8]
    let v2: u64;  // [bp-0x3c0]
    let v3: void*;  // [bp-0x3b8]
    let v4: struct56;  // [bp-0x3b0]
    let v5: u64;  // [bp-0x3a8]
    let v6: struct24;  // [sp-0x378], Other Possible Types: struct56
    let v7: struct16;  // [bp-0x378]
    let v8: u128;  // [bp-0x378]
    let v9: struct64;  // [bp-0x338]
    let v10: struct712;  // [bp-0x2f8], Other Possible Types: struct24, u128
    let v11: struct56;  // [bp-0x2f8]
    let v12: u64;  // [bp-0x2e8]
    let v13: u32;  // [bp-0x2e0]
    let v15: u64;  // rax
    let v16: u64;  // rbx
    let v17: void*;  // rbp
    let v18: u32;  // edx
    let v19: u64;  // rax
    let v20: u64;  // rax

    v10 = uu_sync::uu_app();
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v10, a0, a1);
    if (((0 ^ v7.field_0) & (0 ^ -(v7.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    }
    v4 = v6;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, _ZN7uu_sync9ARG_FILES17h8f9deb3d73e42b94E.field_0, g_4de578.field_0);
    v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h8f9deb3d73e42b94E.field_0, g_4de578.field_0, &v11);
    if v9.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v11, &v9);
        v15 = v11.field_0;
        v8 = *(&v11.field_8 as &i128);
        if v15 != 0x8000000000000000 {
            v2 = v8;
            v0 = v15;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E.field_0, g_4de568.field_0) {
        if v3 {
            goto LABEL_45342e;
        }
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("--data needs at least one argument");
        v12 = v6.field_16;
        v10 = *(&v6.field_0 as &i128);
        v13 = 1;
        alloc::boxed::Box<T>::new(&v11);
    } else {
        if !v3 {
            goto LABEL_45348a;
        }
        do {
LABEL_45342e:
            if (nix::fcntl::open(*((8 + v2 + v17 as &u8) as &i64), *((16 + v2 + v17 as &u8) as &i64)) & 1) && (v18 != 13 || std::path::Path::is_dir(*((8 + v2 + v17 as &u8) as &i64), *((16 + v2 + v17 as &u8) as &i64))) {
                <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18, *((8 + v2 + v17 as &u8) as &i64), *((16 + v2 + v17 as &u8) as &i64));
                return v16;
            }
        } while (v3 * 24 != v17);
LABEL_45348a:
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN7uu_sync7options11FILE_SYSTEM17h935b9c99356008ffE.field_0, g_4de558.field_0) {
            v10 = v1;
            uu_sync::syncfs(&v10);
            goto LABEL_4534fb;
        } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E.field_0, g_4de568.field_0) {
            v10 = v1;
            uu_sync::fdatasync(&v10);
LABEL_4534fb:
            if !v19 {
                return 0;
            }
            v16 = v19;
        } else {
            v20 = uu_sync::sync();
            if !v20 {
                return 0;
            }
            v16 = v20;
        }
    }
    return v16;
}
