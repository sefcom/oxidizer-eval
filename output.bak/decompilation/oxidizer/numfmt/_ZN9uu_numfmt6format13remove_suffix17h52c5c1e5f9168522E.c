fn uu_numfmt::format::remove_suffix(a0: &struct16, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v9: u256;  // ymm0
    let v10: u8;  // al
    let v11: u32;  // r8d

    v0 = v9;
    v10 = a3 - 2 & 4294967295;
    if a2 == 2 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v9 as u64
        };
    }
    v11 = (v10 < 4 ? v10 : 2);
    goto *((4337252 + vvar_5{reg 80} * 4) as &i32) + 4337252;
}
