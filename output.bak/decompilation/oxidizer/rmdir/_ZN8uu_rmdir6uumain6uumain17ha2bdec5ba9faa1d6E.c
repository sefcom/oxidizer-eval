fn uu_rmdir::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3e9]
    let v1: i64;  // [sp-0x3e8]
    let v2: i64;  // [sp-0x3e0], Other Possible Types: Result<struct1, struct8>, struct9, struct64
    let v3: i64;  // [sp-0x3d8]
    let v4: i64;  // [sp-0x3a0]
    let v5: i64;  // [sp-0x398]
    let v6: i64;  // [sp-0x390]
    let v7: i8;  // [sp-0x388]
    let v8: i64;  // [sp-0x360]
    let v9: i64;  // [sp-0x358]
    let v10: i128;  // [sp-0x350]
    let v11: i128;  // [sp-0x340]
    let v12: i64;  // [sp-0x330]
    let v13: i192;  // [sp-0x328], Other Possible Types: Option<struct24>
    let v14: struct24;  // [sp-0x310]
    let v15: i448;  // [sp-0x2f8], Other Possible Types: struct56, struct712
    let v16: i64;  // [sp-0x2f0]
    let v17: i128;  // [sp-0x2e8]
    let v18: i128;  // [sp-0x2d8]
    let v19: i64;  // [sp-0x2c8]
    let v20: i64;  // [sp-0x2c0]
    let v25: i64;  // rax
    let v29: i64;  // rdx
    let v31: struct8;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rdx
    let v35: i64;  // r15
    let v36: i64;  // r12
    let v37: i64;  // rax

    v15 = uu_rmdir::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if v8 == 0x8000000000000000 {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    }
    v12 = *((&v2 as &char + 48) as &i64);
    v11 = *((&v2 as &char + 32) as &i128);
    v10 = *((&v2 as &char + 16) as &i128);
    v8 = v2;
    v9 = v3;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17ha93be87fa7180288E, g_50da80) as i8;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, _ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE, g_50dab0);
    v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE, g_50dab0, &v15);
    v25 = v2;
    if !v25 {
        v25 = core::ops::function::FnOnce::call_once;
        v29 = 0;
    } else {
        v29 = *((&v2 as &char + 56) as &i64);
    }
    v15 = v25;
    v16 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
    v17 = *((&v2 as &char + 16) as &i128);
    v18 = *((&v2 as &char + 32) as &i128);
    v19 = *((&v2 as &char + 48) as &i64);
    v20 = v29;
    loop {
        loop {
            do {
                v31 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
                if !(v31) || !((v32 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v15, v31), v32)) {
                    return 0;
                }
            } while ((v13 = uu_rmdir::remove(v32, v33, ((clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN8uu_rmdir11OPT_VERBOSE17hb864c3260c03eaf9E, g_50daa0) as i32 as u32 as u64 * 0x10000) as u32 | (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN8uu_rmdir11OPT_PARENTS17h0a6c604b2fb79096E, g_50da90) as i32 as u32 as u64 * 0x100) as u32 | v0 as u8 as u32) as u64), !v1));
            v35 = *((&v13 as &char + 8) as &i64);
            v36 = *((&v13 as &char + 16) as &i64);
            v1 = v13;
            if !(!v0) && !(!uu_rmdir::dir_not_empty(&v1, v35, v36) as i8) {
                break;
            }
            uucore::mods::error::set_exit_code(1);
            v2 = std::io::error::repr_bitpacked::decode_repr(v1);
            if !v2 && *((&v2 as &char + 4) as &i32) == 20 && core::slice::<impl [T]>::ends_with(v35, v36, "/") as i8 {
                v37 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v36 - 1, v35, v36);
                if std::path::Path::is_symlink(v37, v33) as i8 {
                    v2 = uu_rmdir::uumain::uumain::points_to_directory(v37, v33) as u64;
                    if !v2 && !*((&v2 as &char + 1) as &i8) {
                        goto LABEL_462590;
                    }
                    v4 = uucore::util_name();
                    v5 = v33;
                    eprint!("{:?}: ", &v4);
                    v4 = 1;
                    v5 = v35;
                    v6 = v36;
                    v7 = 1;
                    eprintln!("failed to remove {:?}: Symbolic link not followed", &v4);
                    break;
                }
            }
LABEL_462590:
            v4 = uucore::util_name();
            v5 = v33;
            eprint!("{:?}: ", &v4);
            v4 = 1;
            v5 = v35;
            v6 = v36;
            v7 = 1;
            v14 = uucore::mods::error::strip_errno(&v1);
            eprintln!("failed to remove {:?}: {:?}", &v4, &v14);
        }
    }
}
