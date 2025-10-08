fn uu_kill::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x3e0]
    let v1: u64;  // [bp-0x3d8]
    let v2: void*;  // [bp-0x3d0]
    let v3: struct24;  // [bp-0x3c8], Other Possible Types: struct56
    let v4: u64;  // [bp-0x3c0]
    let v5: u128;  // [bp-0x388]
    let v6: struct24;  // [bp-0x388], Other Possible Types: struct56
    let v7: struct16;  // [bp-0x388]
    let v8: struct24;  // [bp-0x350], Other Possible Types: u8
    let v9: struct64;  // [bp-0x338]
    let v10: struct712;  // [bp-0x2f8]
    let v11: Result<struct40, struct16>;  // [bp-0x2f8]
    let v13: u128;  // [bp-0x2f8]
    let v14: struct56;  // [bp-0x2f8]
    let v15: u64;  // [bp-0x2f0]
    let v16: u64;  // [bp-0x2e8]
    let v17: u32;  // [bp-0x2e0]
    let v19: u8;  // al
    let v20: u64;  // rdx
    let v21: u64;  // rbx
    let v22: u64;  // rbp
    let v23: u64;  // rax
    let v25: i64;  // rax
    let v27: void*;  // r12
    let v28: void*;  // rbx

    uucore::Args::collect_ignore(&v8, a0, a1);
    v19 = uu_kill::handle_obsolete(&v8);
    v10 = uu_kill::uu_app();
    v3 = v8;
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v10, &v3);
    if (((0 ^ v7.field_0) & (0 ^ -(v7.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    }
    v3 = v6;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN7uu_kill7options5TABLE17hf5e406d79938cf60E.field_0, g_4e75e0.field_0) {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN7uu_kill7options4LIST17h983d52dbeefec214E.field_0, g_4e75d0.field_0) * 2;
    }
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3, _ZN7uu_kill7options15PIDS_OR_SIGNALS17h74df70473b295d74E.field_0, g_4e75c0.field_0);
    v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_kill7options15PIDS_OR_SIGNALS17h74df70473b295d74E.field_0, g_4e75c0.field_0, &v14);
    if !v9.field_0 as i64 {
LABEL_45909b:
        v0 = 0;
        v1 = 8;
        v2 = 0;
        if !v22 {
            goto LABEL_45910a;
        }
LABEL_4590bb:
        if v22 == 1 {
            uu_kill::table();
        } else {
            uu_kill::list(&v0);
        }
        goto LABEL_0x45922e;
    }
    core::iter::traits::iterator::Iterator::collect(&v14, &v9);
    v23 = v14.field_0;
    v5 = *(&v14.field_8 as &i128);
    if v23 == 0x8000000000000000 {
        goto LABEL_45909b;
    }
    v1 = v5;
    v0 = v23;
    if v22 {
        goto LABEL_4590bb;
    }
LABEL_45910a:
    if !(v19 & 1) {
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3, _ZN7uu_kill7options6SIGNAL17ha5de88967dceae53E.field_0, g_4e75f0.field_0);
        v25 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_kill7options6SIGNAL17ha5de88967dceae53E.field_0, g_4e75f0.field_0, &v11);
        if !v25 {
            goto LABEL_4591b7;
        }
        v13 = uu_kill::parse_signal_value(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        if v15 {
            return v15;
        }
    }
    if v21 >= 32 {
        goto LABEL_4591c5;
    }
LABEL_4591b7:
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(("EXIT" + v21 * 16) as &i64), *(("EXIT" + v21 * 16 + 8) as &i64), "EXIT") {
        goto LABEL_4591e5;
    }
LABEL_4591c5:
    if (<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(v21 & 4294967295) & 1) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20 * 0x100000000 | 2);
        return v15;
    }
LABEL_4591e5:
    uu_kill::parse_pids(&v13, v1, v2);
    if v11 as i64 == 0x8000000000000000 {
        return v15;
    } else if v16 {
        uu_kill::kill(v27 & 4294967295, v15, v16);
    } else {
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no process ID specified\nTry --help for more information.");
        v16 = v6.field_16;
        v13 = v6.field_0;
        v17 = 1;
        alloc::boxed::Box<T>::new(&v13);
    }
    return v28;
}
