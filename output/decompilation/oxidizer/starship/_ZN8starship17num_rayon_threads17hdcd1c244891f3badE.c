fn starship::num_rayon_threads() -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rdx

    v0 = v2;
    if !(starship::num_configured_starship_threads() & 1) {
        return starship::num_rayon_threads::{{closure}}();
    }
    return v3;
}
