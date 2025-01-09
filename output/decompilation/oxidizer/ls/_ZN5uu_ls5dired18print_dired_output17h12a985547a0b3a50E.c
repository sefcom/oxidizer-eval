fn uu_ls::dired::print_dired_output(a0: void*, a1: void*, a2: &u8) -> u64 {
    let v1: u64;  // rax
    let v3: u64;  // rcx

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
    if v1 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v3 = a1->field_10;
    if v3 {
        uu_ls::dired::print_positions("//DIRED//", a1->field_8, v3);
    }
    if a0->field_e6 {
        uu_ls::dired::print_positions("//SUBDIRED//", a1->field_20, a1->field_28);
    }
    println!("//DIRED-OPTIONS// --quoting-style={}", a0 + 245);
    return 0;
}
