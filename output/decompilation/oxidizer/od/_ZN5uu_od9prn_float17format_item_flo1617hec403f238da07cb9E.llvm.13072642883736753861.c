fn uu_od::prn_float::format_item_flo16(a0: &struct24) -> int {
    let v0: String;  // [sp-0x70]
    let v1: u8;  // [bp-0x28]
    let v3: u128;  // xmm0

    if !std_detect::detect::cache::test() as i8 {
        uu_od::prn_float::format_flo16(&v1, half::binary16::arch::f64_to_f16_fallback() as i32);
        v0 = format!(" {}", &v1);
        v3 = *(&v0.ptr as &i128);
        return struct24 {
            field_0: v3
            field_16: v0.len
        };
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
