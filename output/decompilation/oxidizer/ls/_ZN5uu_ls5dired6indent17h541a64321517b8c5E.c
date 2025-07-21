fn uu_ls::dired::indent(a0: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x30], Other Possible Types: struct40
    let v2: u64;  // rax

    v0 = struct40 {
        field_0: "  "
        field_8: 1
        field_16: 8
        field_24: 0
    };
    v0 = core::fmt::Arguments {
        pieces: ["  "]
        args: []
        fmt: 0
    };
    v2 = std::io::Write::write_fmt(a0, &v0);
    if !v2 {
        return 0;
    }
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
}
