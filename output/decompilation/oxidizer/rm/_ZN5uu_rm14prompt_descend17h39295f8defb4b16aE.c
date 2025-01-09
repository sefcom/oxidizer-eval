fn uu_rm::prompt_descend(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: u64;  // [sp-0x48]
    let v4: u8;  // [sp-0x40]
    let v5: struct8;  // [bp-0x38]
    let v7: u64;  // rdx
    let v8: u64;  // rax

    v1 = uucore::util_name();
    v2 = v7;
    eprint!("{}: ", &v1);
    v1 = 1;
    v2 = a0;
    v3 = a1;
    v4 = 1;
    eprint!("descend into directory {}?", &v1);
    eprint!(" ");
    v5 = struct8 {
        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
    };
    v8 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
    if v8 {
        v0 = v8;
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v0);
        std::process::exit(1); /* do not return */
    }
    return uucore::read_yes();
}
