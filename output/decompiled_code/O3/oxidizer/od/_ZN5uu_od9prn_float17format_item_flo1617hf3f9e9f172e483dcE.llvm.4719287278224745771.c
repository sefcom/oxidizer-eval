fn uu_od::prn_float::format_item_flo16(a0: u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // r12
    let v9: u64;  // rbx
    let v11: u256;  // ymm0

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    if !_ZN10std_detect6detect5cache5CACHE17hd60da8ebd6d34d77E {
        v0 = v11;
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
