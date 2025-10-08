fn uu_tee::process_error(a0: i64, a1: u64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: u64;  // [bp-0xa0]
    let v1: void*;  // [bp-0x48], Other Possible Types: u64
    let v2: u64;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v4: u8;  // [bp-0x30]
    let v6: u64;  // rdx

    v0 = a1;
    if std::io::error::Error::kind(a1) as u8 == 11 {
        return 0;
    }
    v1 = uucore::util_name();
    v2 = v6;
    eprint!("{}: ", &v1);
    v1 = 0;
    v2 = a2;
    v3 = a3;
    v4 = 0;
    eprintln!("{}: {}", &v1, &v0);
    *(a4 as &i64) = *(a4 as &i64) + 1;
    return 0;
}
