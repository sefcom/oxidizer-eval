fn uu_hashsum::uu_app_bits(a0: u32) -> u64 {
    let v0: u8;  // [bp-0x2d8]

    uu_hashsum::uu_app_common(&v0);
    uu_hashsum::uu_app_opt_bits(a0, &v0);
    return a0;
}
