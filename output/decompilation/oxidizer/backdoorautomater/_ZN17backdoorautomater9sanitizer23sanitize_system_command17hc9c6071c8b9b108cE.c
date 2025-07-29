fn backdoorautomater::sanitizer::sanitize_system_command(a0: &struct24) -> int {
    let v0: i64;  // [bp-0x48]

    v0 = a0;
    if *((a0 + 16) as &i64) {
        panic!("Error: {} \n", &v0);
    }
    return;
}
