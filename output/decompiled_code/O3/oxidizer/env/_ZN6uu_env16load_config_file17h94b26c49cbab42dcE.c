fn uu_env::load_config_file(a0: u32) -> u64 {
    let v0: i64;  // [sp-0x2f8]
    let v2: i64;  // [sp-0x2e8]
    let v39: i64;  // rcx

    v39 = *((a0 + 16) as &i64);
    if !v39 {
        return 0;
    }
    v2 = 0x8000000000000000;
    v0 = v39 * 16 + *((a0 + 8) as &i64);
}
