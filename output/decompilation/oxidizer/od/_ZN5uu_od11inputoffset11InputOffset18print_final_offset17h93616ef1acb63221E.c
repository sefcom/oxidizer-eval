fn uu_od::inputoffset::InputOffset::print_final_offset(a0: i64) -> int {
    let v0: u8;  // [bp-0x20]

    if *((a0 + 24) as &i8) == 3 && !*(a0 as &i64) {
        return;
    }
    uu_od::inputoffset::InputOffset::format_byte_offset(&v0, a0);
    println!("{}", &v0);
    return;
}
