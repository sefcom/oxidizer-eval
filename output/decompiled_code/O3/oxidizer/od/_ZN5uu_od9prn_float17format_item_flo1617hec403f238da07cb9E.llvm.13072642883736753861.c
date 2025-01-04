fn uu_od::prn_float::format_item_flo16(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i192;  // [sp-0x70]
    let v1: u8;  // [bp-0x28]
    let v3: u64;  // rdx
    let v4: u128;  // xmm0

    if !std_detect::detect::cache::test(a0, a1, a2) as i8 {
        uu_od::prn_float::format_flo16(&v1, half::binary16::arch::f64_to_f16_fallback() as i32, v3);
        v0 = format!(" {:?}", &v1);
        v4 = v0;
        return struct24 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i64)
        };
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
