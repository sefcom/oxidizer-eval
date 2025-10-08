fn bat::assets::clear_asset(a0: i64, a1: i64, a2: i64) -> int {
    let v0: u64;  // [bp-0x80]
    let v1: u64;  // [bp-0x48]
    let v2: struct48;  // [bp-0x28]
    let v3: struct48;  // [bp-0x20]
    let v5: u64;  // r14

    v2 = a1;
    v3 = a2;
    print!("Clearing {} ... ", &v2);
    v5 = std::fs::remove_file(a0);
    if !v5 {
        println!("okay");
    } else if std::io::error::Error::kind(v5) as u8 {
        v0 = v5;
        println!("could not remove the cache file {}: {}", a0, &v0);
    } else {
        v1 = v5;
        println!("skipped (not present)");
    }
    return;
}
