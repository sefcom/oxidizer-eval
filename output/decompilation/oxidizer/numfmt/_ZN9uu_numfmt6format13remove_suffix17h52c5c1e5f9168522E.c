fn uu_numfmt::format::remove_suffix(a0: &struct16, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: &&struct_0;  // [sp-0x60]
    let v4: u64;  // [sp-0x58]
    let v5: void*;  // [sp-0x50]
    let v6: &u8;  // [sp-0x30]
    let v7: u64;  // [sp-0x28]
    let v9: u256;  // ymm0
    let v10: u8;  // al
    let v11: u32;  // r8d

    v0 = v9;
    v10 = a3 - 2 & 4294967295;
    if a2 != 2 {
        v11 = (v10 < 4 ? v10 : 2);
        goto *((4337252 + vvar_5{reg 80} * 4) as &i32) + 4337252;
    } else {
        if !((a3 & 1) && !(v10 < 4 & v10 != 2)) {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v9 as u64
            };
        }
        v6 = &v0;
        v7 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v1 = "missing 'i' suffix in input: '";
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        return core::option::Option<T>::map_or_else();
    }
}
