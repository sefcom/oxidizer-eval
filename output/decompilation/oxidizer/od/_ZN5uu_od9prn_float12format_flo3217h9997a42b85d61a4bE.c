fn uu_od::prn_float::format_flo32() -> u64 {
    let v0: u32;  // [sp-0x8c]
    let v1: &u8;  // [sp-0x88]
    let v2: u64;  // [sp-0x80]
    let v3: u64;  // [sp-0x78]
    let v4: void*;  // [sp-0x70]
    let v5: u64;  // [sp-0x68]
    let v6: u64;  // [sp-0x60]
    let v7: &&struct_0;  // [sp-0x58]
    let v8: u64;  // [sp-0x50]
    let v9: &u8;  // [sp-0x48]
    let v10: u64;  // [sp-0x40]
    let v11: u64;  // [sp-0x38]
    let v12: u64;  // [sp-0x28]
    let v13: u64;  // [sp-0x20]
    let v14: void*;  // [sp-0x18]
    let v15: u64;  // [sp-0x10]
    let v16: u8;  // [sp-0x8]
    let v18: u32;  // ymm0
    let v19: u256;  // ymm1
    let v20: u256;  // ymm0
    let v21: u256;  // ymm1
    let v22: u32;  // rdi

    v0 = v18;
    v21 = (v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & v20;
    if !(((BinaryOp CmpF & 69) >> 6 & 1) != 1 && v21 && !(v20 & 0x7f800000)) {
        return uu_od::prn_float::format_float(v22, 14, 8);
    }
    v1 = &v0;
    v2 = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
    v3 = 14;
    v4 = 0;
    v11 = 2;
    v12 = 1;
    v13 = 1;
    v14 = 0;
    v15 = 32;
    v16 = 3;
    v5 = &g_40dad0;
    v6 = 1;
    v9 = &v11;
    v10 = 1;
    v7 = &v1;
    v8 = 2;
    return core::option::Option<T>::map_or_else();
}
