fn uu_realpath::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u32;  // [bp-0x3ec]
    let v1: u64;  // [bp-0x3e8]
    let v2: u64;  // [bp-0x3e0]
    let v3: u64;  // [bp-0x3d8]
    let v4: void*;  // [bp-0x3d0]
    let v5: u32;  // [bp-0x3c4]
    let v6: struct16;  // [bp-0x3c0]
    let v7: void*;  // [bp-0x3b0]
    let v8: u64;  // [bp-0x3a8]
    let v9: u64;  // [bp-0x3a0]
    let v10: struct56;  // [bp-0x398]
    let v11: u64;  // [bp-0x390]
    let v12: struct16;  // [bp-0x360]
    let v13: struct56;  // [bp-0x360], Other Possible Types: struct64, u64
    let v14: u8;  // [bp-0x320]
    let v15: u64;  // [bp-0x318]
    let v16: u64;  // [bp-0x310]
    let v17: u64;  // [bp-0x308]
    let v18: u64;  // [bp-0x300]
    let v19: struct56;  // [bp-0x2f8], Other Possible Types: struct64, struct712
    let v20: void*;  // [bp-0x2f0]
    let v21: u64;  // [bp-0x2e8]
    let v22: u64;  // [bp-0x2e0]
    let v23: u64;  // [bp-0x2d8]
    let v24: u64;  // [bp-0x2d0]
    let v26: iNone;  // xmm0
    let v27: iNone;  // xmm1
    let v28: u8;  // al
    let v29: u32;  // r13d
    let v30: u8;  // al
    let v31: u8;  // al
    let v32: u8;  // al
    let v33: u32;  // r15d
    let v34: u64;  // rbp
    let v35: u32;  // edi
    let v36: u64;  // r13
    let v37: u64;  // r14
    let v38: void*;  // r12
    let v39: u64;  // rax
    let v40: void*;  // rbx
    let v41: u64;  // rax
    let v42: u64;  // rax
    let v44: u64;  // rdx

    v19 = uu_realpath::uu_app();
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if (((0 ^ v12.field_0) & (0 ^ -(v13))) >> 63) as char {
        return alloc::boxed::Box<T>::new(v11, 1);
    }
    v10 = v13;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN11uu_realpath9ARG_FILES17hb7f3293541c84ef7E.field_0, g_4eced8.field_0);
    v13 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17hb7f3293541c84ef7E.field_0, g_4eced8.field_0, &v19);
    core::option::unwrap(v13);
    v26 = v13.field_0;
    v27 = v13.field_16;
    v19 = struct64 {
        field_0: v26
        field_16: v27
        field_32: v13.field_32
        field_48: v13.field_48
    };
    core::iter::traits::iterator::Iterator::collect(&v14, &v19);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath9OPT_STRIP17hea98d883e06261d4E.field_0, g_4ecea8.field_0);
    v29 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath8OPT_ZERO17h541106c6f648941bE.field_0, g_4eceb8.field_0) ? 0 : 10);
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath9OPT_QUIET17h2de9e0ed8df49daeE.field_0, g_4ece98.field_0);
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath11OPT_LOGICAL17he80554cf4834d4bbE.field_0, g_4ecec8.field_0);
    v32 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "canonicalize-existing") {
        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "canonicalize-missing") * 2;
    }
    v33 = (!v28 ? v31 + 1 : 0);
    v0 = v32;
    uu_realpath::prepare_relative_options(&v19, &v10, v32, v33);
    v34 = v21;
    if v19.field_0 as i64 == 9223372036854775809 {
        return v4;
    }
    v3 = v19.field_0;
    v4 = v20;
    v1 = v22;
    v2 = v23;
    if !v16 {
        return 0;
    }
    v35 = v29;
    v9 = v24;
    v36 = v15;
    v7 = v4;
    v8 = (v1 != 0x8000000000000000 ? v2 : 0);
    v37 = v16 * 24;
    if v30 {
        do {
            v39 = uu_realpath::resolve_path(*((8 + v36 + v38 as &u8) as &i64), *((16 + v36 + v38 as &u8) as &i64), v35, v33, v0, v7, v34, v8, v9);
            v38 += 24;
        } while (v37 != v38);
    } else {
        v40 = 0;
        v5 = v35;
        do {
            v41 = uu_realpath::resolve_path(*((8 + v36 + v40 as &u8) as &i64), *((16 + v36 + v40 as &u8) as &i64), v5, v33, v0, v7, v34, v8, v9);
            v42 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v41, *((8 + v36 + v40 as &u8) as &i64), *((16 + v36 + v40 as &u8) as &i64));
            if v42 {
                v6 = struct16 {
                    field_0: v42
                    field_8: &g_4ebb08
                };
                uucore::mods::error::set_exit_code(uucore::mods::error::UError::code());
                v17 = uucore::util_name();
                v18 = v44;
                eprintln!("{}: {}", &v17, &v6);
            }
            v40 += 24;
        } while (v37 != v40);
    }
    return 0;
}
