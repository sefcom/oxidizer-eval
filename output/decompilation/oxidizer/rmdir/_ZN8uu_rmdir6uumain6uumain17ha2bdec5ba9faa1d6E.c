fn uu_rmdir::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3e9]
    let v1: i64;  // [sp-0x3e8]
    let v2: i64;  // [bp-0x3e0], Other Possible Types: struct64, Result<struct1, struct8>, struct9
    let v3: i64;  // [sp-0x3d8]
    let v4: i8;  // [bp-0x3d0]
    let v5: i8;  // [bp-0x3c0]
    let v6: i8;  // [bp-0x3b0]
    let v7: i64;  // [sp-0x3a0]
    let v8: i64;  // [sp-0x398]
    let v9: i64;  // [sp-0x390]
    let v10: i8;  // [sp-0x388]
    let v11: i64;  // [sp-0x360]
    let v12: i64;  // [sp-0x358]
    let v13: i128;  // [sp-0x350]
    let v14: i128;  // [sp-0x340]
    let v15: i64;  // [sp-0x330]
    let v16: Option<struct24>;  // [sp-0x328], Other Possible Types: i192
    let v17: struct24;  // [sp-0x310]
    let v18: i64;  // [sp-0x2f8], Other Possible Types: struct712, struct56
    let v19: i64;  // [sp-0x2f0]
    let v20: i128;  // [sp-0x2e8]
    let v21: i128;  // [sp-0x2d8]
    let v22: i64;  // [sp-0x2c8]
    let v23: i64;  // [sp-0x2c0]
    let v28: i64;  // rax
    let v32: i64;  // rdx
    let v34: struct8;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rdx
    let v38: i64;  // r15
    let v39: i64;  // r12
    let v40: i64;  // rax

    v18 = uu_rmdir::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v18, a0, a1);
    if v11 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    }
    v15 = v6;
    v14 = v5;
    v13 = v4;
    v11 = v2;
    v12 = v3;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17ha93be87fa7180288E, g_50da80) as i8;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, _ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE, g_50dab0);
    v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE, g_50dab0, &v18);
    v28 = v2;
    if !v28 {
        v28 = core::ops::function::FnOnce::call_once;
        v32 = 0;
    } else {
        v32 = *((&v2 as &char + 56) as &i64);
    }
    v18 = v28;
    v19 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
    v20 = *((&v2 as &char + 16) as &i128);
    v21 = *((&v2 as &char + 32) as &i128);
    v22 = *((&v2 as &char + 48) as &i64);
    v23 = v32;
    loop {
        do {
            v34 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if !(v34) || !((v35 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v18, v34), v35)) {
                return 0;
            }
        } while ((v16 = uu_rmdir::remove(v35, v36, ((clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_rmdir11OPT_VERBOSE17hb864c3260c03eaf9E, g_50daa0) as i32 as u32 as u64 * 0x10000) as u32 | (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_rmdir11OPT_PARENTS17h0a6c604b2fb79096E, g_50da90) as i32 as u32 as u64 * 0x100) as u32 | v0 as u8 as u32) as u64), !v1));
        v38 = *((&v16 as &char + 8) as &i64);
        v39 = *((&v16 as &char + 16) as &i64);
        v1 = v16;
        if !(v0) || !(uu_rmdir::dir_not_empty(&v1, v38, v39) as i8) {
            break;
        }
LABEL_46237f:
    }
    uucore::mods::error::set_exit_code(1);
    v2 = std::io::error::repr_bitpacked::decode_repr(v1);
    if !v2 && *((&v2 as &char + 4) as &i32) == 20 && core::slice::<impl [T]>::ends_with(v38, v39, "/") as i8 {
        v40 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v39 - 1, v38, v39);
        if !std::path::Path::is_symlink(v40, v36) as i8 {
            goto LABEL_462590;
        }
        v2 = uu_rmdir::uumain::uumain::points_to_directory(v40, v36);
        if v2 {
            goto LABEL_4624b1;
        } else if *((&v2 as &char + 1) as &i8) {
LABEL_4624b1:
            v7 = uucore::util_name();
            v8 = v36;
            eprint!("{}: ", &v7);
            v7 = 1;
            v8 = v38;
            v9 = v39;
            v10 = 1;
            eprintln!("failed to remove {}: Symbolic link not followed", &v7);
            goto LABEL_46237f;
        }
    }
LABEL_462590:
    v7 = uucore::util_name();
    v8 = v36;
    eprint!("{}: ", &v7);
    v7 = 1;
    v8 = v38;
    v9 = v39;
    v10 = 1;
    v17 = uucore::mods::error::strip_errno(&v1);
    eprintln!("failed to remove {}: {}", &v7, &v17);
    continue;
}
