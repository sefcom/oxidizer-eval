fn uu_rm::prompt_descend(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: u64;  // [sp-0x48]
    let v4: u8;  // [sp-0x40]
    let v5: struct8;  // [bp-0x38]
    let v7: u64;  // rdx
    let v8: u64;  // rsi
    let v9: u64;  // rax
    let v10: u32;  // rdi

    v1 = uucore::util_name();
    v2 = v7;
    eprint!("{:?}: ", &v1);
    v1 = 1;
    v2 = a0;
    v3 = a1;
    v4 = 1;
    eprint!("descend into directory {:?}?", &v1);
    eprint!(" ");
    v5 = struct8 {
        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
    };
    v9 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v8, v7);
    if v9 {
        v0 = v9;
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{:?}: ", &v1);
        eprintln!("{:?}", &v0);
        std::process::exit(1); /* do not return */
    }
    return uucore::read_yes(v10, v8, v7);
}
