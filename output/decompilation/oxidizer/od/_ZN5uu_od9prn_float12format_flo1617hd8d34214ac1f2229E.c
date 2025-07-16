fn uu_od::prn_float::format_flo16(a0: i64, a1: i32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rdi

    v0 = v2;
    v3 = a1;
    if !std_detect::detect::cache::test() as i8 {
        half::binary16::arch::f16_to_f64_fallback(v3);
        return uu_od::prn_float::format_float(a0, 9, 4);
    }
    half::binary16::arch::x86::f16_to_f32_x86_f16c(v3); /* do not return */
}
