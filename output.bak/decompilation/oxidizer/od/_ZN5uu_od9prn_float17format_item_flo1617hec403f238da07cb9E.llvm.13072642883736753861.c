fn uu_od::prn_float::format_item_flo16(a0: &struct24) -> int {
    let v0: &u8;  // [sp-0x80]
    let v1: u64;  // [sp-0x78]
    let v2: i8;  // [bp-0x70]
    let v4: u64;  // [sp-0x58]
    let v5: u64;  // [sp-0x50]
    let v6: &&struct_0;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v8: void*;  // [sp-0x38]
    let v9: u8;  // [bp-0x28]
    let v11: u128;  // xmm0

    if !std_detect::detect::cache::test() as i8 {
        uu_od::prn_float::format_flo16(&v9, half::binary16::arch::f64_to_f16_fallback() as i32);
        v0 = &v9;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = " ";
        v5 = 1;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        core::option::Option<T>::map_or_else();
        v11 = v2;
        return struct24 {
            field_0: v11
            field_16: v3
        };
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
