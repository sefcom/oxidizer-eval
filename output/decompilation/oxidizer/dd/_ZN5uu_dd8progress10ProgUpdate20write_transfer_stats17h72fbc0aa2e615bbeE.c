fn uu_dd::progress::ProgUpdate::write_transfer_stats(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x40], Other Possible Types: struct40
    let v2: core::result::Result<(), std::io::error::Error>;  // rax

    if a2 {
        v0 = struct40 {
            field_0: "\n"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = core::fmt::Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        v2 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v0);
        if let Err(_) = v2 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        }
    }
    v2 = uu_dd::progress::ProgUpdate::write_io_lines(a0, a1);
    return uu_dd::progress::ProgUpdate::write_prog_line(a0, a1, 0);
}
