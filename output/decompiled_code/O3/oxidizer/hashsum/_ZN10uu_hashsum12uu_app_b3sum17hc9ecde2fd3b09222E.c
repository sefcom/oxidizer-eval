fn uu_hashsum::uu_app_b3sum(a0: u32) -> u64 {
    let v0: u8;  // [bp-0x2d8]

    uu_hashsum::uu_app_common(&v0);
    uu_hashsum::uu_app_b3sum_opts(a0, &v0);
    return a0;
}
