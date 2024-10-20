fn uu_readlink::show(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: u8;  // [sp-0x69]
    let v1: u128;  // [sp-0x68], Other Possible Types: Arguments, Enum
    let v2: Argument;  // [bp-0x38]
    let v3: u128;  // [sp-0x28]
    let v5: u64;  // rsi
    let v6: u64;  // rdx

    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a0, a1);
    if v1 {
        core::option::unwrap_failed(); /* do not return */
    }
    v3 = v1;
    v2 = Argument {
        value: &v3
        formatter: <&T as core::fmt::Display>::fmt
    };
    v1 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v2]
        fmt: None
    };
    std::io::stdio::_print(&v1);
    if a2 == 11 {
        v1 = std::io::stdio::stdout();
        return <std::io::stdio::Stdout as std::io::Write>::flush(&v1, v5, v6);
    }
    v0 = a2;
    v2 = Argument {
        value: &v0
        formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
    };
    v1 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v2]
        fmt: None
    };
    std::io::stdio::_print(&v1);
}
