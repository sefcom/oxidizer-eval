fn uu_rmdir::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3e9]
    let v1: u64;  // [bp-0x3e8]
    let v2: struct64;  // [bp-0x3e0], Other Possible Types: struct9
    let v3: struct16;  // [bp-0x3e0], Other Possible Types: struct9
    let v4: u32;  // [bp-0x3dc]
    let v5: u64;  // [bp-0x3d8]
    let v6: i8;  // [bp-0x3d0]
    let v7: i8;  // [bp-0x3c0]
    let v8: u64;  // [bp-0x3b0]
    let v9: u64;  // [bp-0x3a0]
    let v10: u64;  // [bp-0x398]
    let v11: u64;  // [bp-0x390]
    let v12: u8;  // [bp-0x388]
    let v13: struct24;  // [bp-0x360]
    let v14: u64;  // [bp-0x348]
    let v15: u64;  // [bp-0x340]
    let v16: iNone;  // [bp-0x338]
    let v17: iNone;  // [bp-0x328]
    let v18: u64;  // [bp-0x318]
    let v19: u64;  // [bp-0x308]
    let v20: u64;  // [bp-0x300]
    let v21: struct56;  // [bp-0x2f8], Other Possible Types: struct64, struct712
    let v23: iNone;  // xmm1
    let v24: u32;  // eax
    let v25: u32;  // eax
    let v26: u64;  // rax
    let v27: u128;  // xmm0
    let v28: void*;  // rdx
    let v29: core::fmt::rt::Argument;  // rax
    let v30: u64;  // rbx
    let v31: u64;  // r12
    let v32: u64;  // rdx
    let v33: u64;  // rcx
    let v34: u64;  // rax
    let v35: iNone;  // [bp-0x3df]
    let v37: Option<struct24>;  // [bp-0x310]

    v21 = uu_rmdir::uu_app();
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v21, a0, a1);
    if (((0 ^ v3.field_0) & (0 ^ -(v3.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
    }
    v18 = v8;
    v23 = *(&v7 as &i128);
    v17 = *(&v7 as &i128);
    v16 = *(&v6 as &i128);
    v14 = v3.field_0;
    v15 = v5;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17hf4e19f0806591dd6E.field_0, g_4de6f0.field_0);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN8uu_rmdir11OPT_PARENTS17h7b499da3e630b2c1E.field_0, g_4de700.field_0);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN8uu_rmdir11OPT_VERBOSE17h678d7fcdef697353E.field_0, g_4de710.field_0);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, _ZN8uu_rmdir8ARG_DIRS17h6d9706b52a198fb1E.field_0, g_4de720.field_0);
    v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_rmdir8ARG_DIRS17h6d9706b52a198fb1E.field_0, g_4de720.field_0, &v21);
    v21 = struct64 {
        field_0: v26
        field_8: v5
        field_16: v23
        field_32: v27
        field_48: v8
        field_56: v28
    };
    loop {
        do {
            do {
                v29 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v21);
                if !v29 {
                    return 0;
                }
                v37 = uu_rmdir::remove(*((v29 + 8) as &i64), *((v29 + 16) as &i64), v25 * 0x10000 | v24 * 0x100 | v0);
            } while (!v37 as i64);
            v30 = v19;
            v31 = v20;
            v1 = v37 as i64;
        } while (v0 && uu_rmdir::dir_not_empty(&v1, v30, v31) as u8);
        uucore::mods::error::set_exit_code(1);
        v2 = std::io::error::repr_bitpacked::decode_repr(v1);
        if !v2.field_0 && v4 == 20 && core::slice::<impl [T]>::ends_with(v30, v31, v32, v33) {
            v34 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v31 - 1, v30, v31);
            if std::path::Path::is_symlink(v34, v32) {
                v3 = uu_rmdir::uumain::uumain::points_to_directory(v34, v32);
                if v3.field_0 || v35 as i8 {
                    v9 = uucore::util_name();
                    v10 = v32;
                    eprint!("{}: ", &v9);
                    v9 = 1;
                    v10 = v30;
                    v11 = v31;
                    v12 = 1;
                    eprintln!("failed to remove {}: Symbolic link not followed", &v9);
                }
            }
        }
        v9 = uucore::util_name();
        v10 = v32;
        eprint!("{}: ", &v9);
        v9 = 1;
        v10 = v30;
        v11 = v31;
        v12 = 1;
        v13 = uucore::mods::error::strip_errno(&v1);
        eprintln!("failed to remove {}: {}", &v9, &v13);
    }
}
