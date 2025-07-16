fn uu_od::prn_float::format_item_flo16() -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x88]
    let v1: alloc::string::String;  // [bp-0x70]
    let v2: struct32;  // [bp-0x60]
    let v3: u8;  // [bp-0x28]
    let v5: u64;  // xmm0lq

    v0 = v5;
    if !std_detect::detect::cache::test() as i8 {
        uu_od::prn_float::format_flo16(&v3, half::binary16::arch::f64_to_f16_fallback() as i32);
        v1 = format!(" {}", &v3);
        return struct24 {
            field_0: *(&v1.vec.buf.cap as &i128)
            field_16: v2
        };
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
