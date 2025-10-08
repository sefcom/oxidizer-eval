fn uu_od::prn_float::format_item_flo16(a0: u64) -> long long {
    let v0: u64;  // [bp-0x70]
    let v1: u8;  // [bp-0x28]
    let v3: u64;  // xmm0lq

    v0 = v3;
    if !std_detect::detect::cache::test() {
        uu_od::prn_float::format_flo16(&v1, half::binary16::arch::f64_to_f16_fallback());
        format!(" {}", &v1);
        return a0;
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
