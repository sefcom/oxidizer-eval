fn uu_timeout::report_if_verbose(a0: u64, a1: u64, a2: u64, a3: u32) -> long long {
    let v0: void*;  // [bp-0x60], Other Possible Types: u64
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u8;  // [bp-0x48]
    let v4: u128;  // [bp-0x40]
    let v6: u64;  // rdx
    let v7: u64;  // rax

    if !a3 {
        return v7;
    }
    core::option::unwrap(a0);
    v4 = *(("EXIT" + a0 * 16) as &i128);
    v0 = uucore::util_name();
    v1 = v6;
    eprint!("{}: ", &v0);
    v0 = 0;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    return eprintln!("sending signal {} to command {}", &v4, &v0);
}
