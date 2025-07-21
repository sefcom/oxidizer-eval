fn uu_rm::prompt_descend(a0: i64, a1: i64) -> long long {
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x58], Other Possible Types: u64
    let v2: core::result::Result<(), std::io::error::Error>;  // [bp-0x50], Other Possible Types: u64
    let v3: u64;  // [bp-0x48]
    let v4: u8;  // [bp-0x40]
    let v5: std::io::stdio::Stderr;  // [bp-0x38]
    let v7: u64;  // rdx

    v1 = uucore::util_name();
    v2 = v7;
    eprint!("{}: ", &v1);
    v1 = 1;
    v2 = a0;
    v3 = a1;
    v4 = 1;
    eprint!("descend into directory {}?", &v1);
    eprint!(" ");
    v5 = std::io::stdio::Stderr {
        inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
    };
    if <std::io::stdio::Stderr as std::io::Write>::flush(&v5) {
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v0);
        std::process::exit(1); /* do not return */
    }
    return uucore::read_yes();
}
