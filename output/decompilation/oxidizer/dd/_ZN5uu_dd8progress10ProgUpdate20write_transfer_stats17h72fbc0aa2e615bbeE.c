fn uu_dd::progress::ProgUpdate::write_transfer_stats(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u128;  // [sp-0x28]
    let v5: u64;  // rax
    let v6: u64;  // rax

    if !a2 || (v0 = "\n", v1 = 1, v2 = 8, v3 = 0, v5 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v0), !v5) {
        v5 = uu_dd::progress::ProgUpdate::write_io_lines(a0, a1);
        if !v5 {
            v6 = uu_dd::progress::ProgUpdate::write_prog_line(a0, a1, 0);
            return v6;
        }
    }
    v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    return v6;
}
