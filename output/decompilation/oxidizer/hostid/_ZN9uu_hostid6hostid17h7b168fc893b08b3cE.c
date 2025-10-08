fn uu_hostid::hostid() -> u64 {
    let v0: u64;  // [bp-0x48]

    v0 = gethostid();
    return println!("{}", &v0);
}
