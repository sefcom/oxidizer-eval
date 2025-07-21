fn uu_rmdir::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x3e9]
    let v1: u64;  // [bp-0x3e8]
    let v2: struct64;  // [bp-0x3e0], Other Possible Types: struct9
    let v3: Result<struct56, struct16>;  // [bp-0x3e0], Other Possible Types: struct9
    let v4: u32;  // [bp-0x3dc]
    let v5: u64;  // [bp-0x3d8]
    let v6: u64;  // [bp-0x3b0]
    let v7: u64;  // [bp-0x3a0]
    let v8: u64;  // [bp-0x398]
    let v9: u64;  // [bp-0x390]
    let v10: u8;  // [bp-0x388]
    let v11: u64;  // [bp-0x360]
    let v12: u64;  // [bp-0x358]
    let v13: u128;  // [bp-0x350]
    let v14: u128;  // [bp-0x340]
    let v15: u64;  // [bp-0x330]
    let v16: u64;  // [bp-0x320]
    let v17: u64;  // [bp-0x318]
    let v18: struct56;  // [bp-0x2f8], Other Possible Types: struct64, u8
    let v19: u8;  // [bp-0x2b8]
    let v21: u128;  // xmm1
    let v22: u32;  // eax
    let v23: u32;  // eax
    let v24: u64;  // rax
    let v25: u128;  // xmm0
    let v26: core::fmt::rt::Argument;  // rdx
    let v27: &u64;  // rax
    let v28: u64;  // rax
    let v29: u64;  // rdx
    let v30: u64;  // r15
    let v31: u64;  // r12
    let v32: u64;  // rax
    let v33: u24;  // [bp-0x3df]
    let v34: Option<struct24>;  // [bp-0x328]
    let v35: struct24;  // [bp-0x310]

    uu_rmdir::uu_app(&v18);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v18, a0, a1);
    match v3 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        },
        Ok(_) => {
            v15 = v6;
            v21 = *((&v3 as &char + 32) as &i128);
            v14 = *((&v3 as &char + 32) as &i128);
            v13 = *((&v3 as &char + 16) as &i128);
            v11 = v3 as i64;
            v12 = v5;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17ha93be87fa7180288E.field_0, g_50da80.field_0) as i8;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_rmdir11OPT_PARENTS17h0a6c604b2fb79096E.field_0, g_50da90.field_0) as i32;
            v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_rmdir11OPT_VERBOSE17hb864c3260c03eaf9E.field_0, g_50daa0.field_0) as i32;
            v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, _ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE.field_0, g_50dab0.field_0);
            v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE.field_0, g_50dab0.field_0, &v18);
            v18 = struct64 {
                field_0: v24
                field_8: v5
                field_16: v21
                field_32: v25
                field_48: v6
                field_56: v26
            };
            loop {
                do {
                    v27 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v18);
                    if !v27 || !((v28 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v19, v27), v28)) {
                        return 0;
                    }
                    v34 = uu_rmdir::remove(v28, v29, (v23 * 0x10000 | v22 * 0x100 | v0 as u32) as u64);
                } while (!v34 as i64 || !((v30 = v16, v31 = v17, v1 = v34 as i64, !v0 || !uu_rmdir::dir_not_empty(&v1, v30, v31) as u8)));
                uucore::mods::error::set_exit_code(1);
                v2 = std::io::error::repr_bitpacked::decode_repr(v1);
                if !v2.field_0 && v4 == 20 && core::slice::<impl [T]>::ends_with(v30, v31, "/") as u8 && !((v32 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v31 - 1, v30, v31), !std::path::Path::is_symlink(v32, v29) as u8 || (v3 = uu_rmdir::uumain::uumain::points_to_directory(v32, v29), !v3.field_0 && !v33 as i8))) {
                    v7 = uucore::util_name();
                    v8 = v29;
                    eprint!("{}: ", &v7);
                    v7 = 1;
                    v8 = v30;
                    v9 = v31;
                    v10 = 1;
                    eprintln!("failed to remove {}: Symbolic link not followed", &v7);
                } else {
                    v7 = uucore::util_name();
                    v8 = v29;
                    eprint!("{}: ", &v7);
                    v7 = 1;
                    v8 = v30;
                    v9 = v31;
                    v10 = 1;
                    v35 = uucore::mods::error::strip_errno(&v1);
                    eprintln!("failed to remove {}: {}", &v7, &v35);
                }
            }
        },
    }
}
