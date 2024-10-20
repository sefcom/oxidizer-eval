fn uu_unexpand::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x3c0], Other Possible Types: struct24
    let v1: i64;  // [sp-0x3b8]
    let v2: i8;  // [bp-0x3a8], Other Possible Types: Argument
    let v3: i64;  // [sp-0x398]
    let v4: i64;  // [sp-0x388], Other Possible Types: struct16, Argument
    let v5: i128;  // [sp-0x380]
    let v6: i64;  // [sp-0x378]
    let v7: i64;  // [sp-0x370]
    let v8: i128;  // [sp-0x368]
    let v9: i64;  // [sp-0x358]
    let v10: i64;  // [sp-0x348], Other Possible Types: Argument
    let v11: i64;  // [sp-0x340]
    let v12: String;  // [sp-0x310], Other Possible Types: i192
    let v13: Arguments;  // [sp-0x2f8], Other Possible Types: i128, struct712
    let v14: i64;  // [sp-0x2e8]
    let v15: i64;  // [sp-0x2e0]
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v19: i64;  // rdi
    let v20: i64;  // r12
    let v21: i64;  // rcx
    let v22: i64;  // rsi
    let v23: i64;  // rdx
    let v24: i64;  // r8
    let v25: i64;  // r9
    let v27: i32;  // eax
    let v28: i64;  // r15
    let v29: i64;  // rax

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    v13 = uu_unexpand::uu_app();
    v17 = v1;
    v18 = *((&v0 as &char + 16) as &i64);
    uu_unexpand::expand_shortcuts(&v2, v1, *((&v0 as &char + 16) as &i64));
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v13, &v2);
    v19 = v5;
    if v10 != 0x8000000000000000 {
        v10 = v4;
        uu_unexpand::Options::new(&v13, &v10);
        v2 = *((&v13 as &char + 8) as &i128);
        v3 = v15;
        if v4 == 0x8000000000000000 {
            v14 = v3;
            v13 = v2;
            v20 = __rust_alloc(24, 8);
            *((v20 + 16) as &i64) = v14;
            *(v20 as &i128) = v13;
        } else {
            v9 = *((&v13 as &char + 48) as &i64);
            v8 = *((&v13 as &char + 32) as &i128);
            v5 = v2;
            v21 = v3;
            v7 = v3;
            v4 = v13;
            v20 = uu_unexpand::unexpand(&v4, v22, v23, v3, v24, v25);
            if !v20 {
                v27 = uucore::mods::error::get_exit_code() as i32;
                return v27;
            }
        }
    } else {
        v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        if !v20 {
            vvar_452{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v27;
        }
    }
    v0 = v20;
    v1 = &g_4e42d8;
    v4 = Argument {
        value: &v0
        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
    };
    v13 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v4]
        fmt: None
    };
    v12 = alloc::fmt::format::format_inner(&v13);
    v4 = v12;
    v6 = *((&v12 as &char + 16) as &i64);
    if v6 {
        v10 = uucore::util_name();
        v11 = v23;
        v2 = Argument {
            value: &v10
            formatter: <&T as core::fmt::Display>::fmt
        };
        v13 = Arguments {
            pieces: [&g_4e4240, ": "]
            args: [&v2]
            fmt: None
        };
        std::io::stdio::_eprint(&v13);
        v10 = Argument {
            value: &v4
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v13 = Arguments {
            pieces: [&g_4e4260, "\n"]
            args: [&v10]
            fmt: None
        };
        std::io::stdio::_eprint(&v13);
    }
    if *((v1 + 104) as &i64)() {
        v10 = uucore::execution_phrase();
        v11 = v23;
        v2 = &v10;
        v13 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: [&v2]
            fmt: None
        };
        v14 = &v2;
        std::io::stdio::_eprint(&v13);
    }
    v27 = *((v1 + 96) as &i64)();
    v28 = v1;
    if *(v28 as &i64) {
        v29();
    }
    if *((v28 + 8) as &i64) {
        return v27;
    }
    return v27;
}
