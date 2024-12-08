fn uu_uniq::Uniq::cmp_keys(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v2: u64;  // [sp-0x8]

    v0 = a0;
    v1 = a3;
    v2 = a4;
    return uu_uniq::Uniq::cmp_key(a0, a1, a2, &v0);
}
