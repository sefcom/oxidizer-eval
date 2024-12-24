fn uu_ls::dired::indent(a0: u32) -> u64 {
    let v0: struct72;  // [bp-0x30]
    let v2: u64;  // rax

    *(&v0 as &struct72) = struct72 {
        field_0: "  "
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
    v2 = std::io::Write::write_fmt(a0, &v0);
    if v2 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    return 0;
}
