fn uu_od::inputoffset::InputOffset::print_final_offset(a0: void*) -> u64 {
    let v0: u8;  // [bp-0x20]
    let v2: u64;  // rax

    if a0->field_18 == 3 && !a0->field_0 {
        return v2;
    }
    uu_od::inputoffset::InputOffset::format_byte_offset(&v0, a0);
    println!("{}", &v0);
    return v2;
}
