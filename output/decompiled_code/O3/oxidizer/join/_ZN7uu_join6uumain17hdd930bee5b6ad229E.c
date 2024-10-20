fn uu_join::uumain(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: Arguments;  // [bp-0x98]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [sp-0x68], Other Possible Types: Argument
    let v4: i64;  // [sp-0x60]
    let v5: Argument;  // [bp-0x58], Other Possible Types: i128
    let v6: i64;  // [sp-0x50]
    let v7: i64;  // [sp-0x48]
    let v8: i64;  // [bp-0x40], Other Possible Types: Argument
    let v9: i192;  // [sp-0x30], Other Possible Types: String
    let v11: i64;  // rax
    let v12: i64;  // rsi
    let v13: i64;  // rdi
    let v14: i64;  // rdx
    let v15: i32;  // eax
    let v16: i64;  // rax

    v11 = uu_join::uumain::uumain(a0, a1);
    if !v11 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v11;
    v5 = Argument {
        value: &v0
        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
    };
    v1 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v5]
        fmt: None
    };
    v9 = alloc::fmt::format::format_inner(&v1);
    v5 = v9;
    v12 = *((&v9 as &char + 16) as &i64);
    v7 = *((&v9 as &char + 16) as &i64);
    v13 = v6;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, *((&v9 as &char + 16) as &i64), 1, 0) as i8 {
        v3 = uucore::util_name();
        v4 = v14;
        v8 = Argument {
            value: &v3
            formatter: <&T as core::fmt::Display>::fmt
        };
        v1 = Arguments {
            pieces: [&g_4fafb8, ": "]
            args: [&v8]
            fmt: None
        };
        std::io::stdio::_eprint(&v1);
        v3 = Argument {
            value: &v5
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v1 = Arguments {
            pieces: [&g_4fafd8, "\n"]
            args: [&v3]
            fmt: None
        };
        std::io::stdio::_eprint(&v1);
    }
    if *((v14 + 104) as &i64)() {
        v3 = uucore::execution_phrase();
        v4 = v14;
        v8 = &v3;
        v1 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: [&v8]
            fmt: None
        };
        v2 = &v8;
        std::io::stdio::_eprint(&v1);
    }
    v15 = *((v14 + 96) as &i64)();
    if *(v14 as &i64) {
        v16();
        return v15;
    }
    return v15;
}
