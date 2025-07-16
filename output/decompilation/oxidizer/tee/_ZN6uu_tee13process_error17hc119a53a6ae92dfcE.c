fn uu_tee::process_error(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: u64;  // [bp-0x40], Other Possible Types: void*
    let v2: u64;  // [bp-0x38]
    let v3: u8;  // [bp-0x28]
    let v5: u64;  // rdx

    v0 = a1;
    if std::io::error::Error::kind(a1) != 11 {
        v1 = uucore::util_name();
        v2 = v5;
        eprint!("{}: ", &v1);
        v1 = 0;
        v2 = *((a2 + 8) as &i128);
        v3 = 0;
        eprintln!("{}: {}", &v1, &v0);
        *(a3 as &i64) = *(a3 as &i64) + 1;
    }
    return 0;
}
