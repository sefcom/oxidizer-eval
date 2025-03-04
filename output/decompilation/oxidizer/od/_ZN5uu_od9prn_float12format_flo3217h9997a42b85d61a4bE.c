fn uu_od::prn_float::format_flo32(a0: &struct24) -> u64 {
    let v0: u32;  // [sp-0x8c]
    let v1: &u8;  // [sp-0x88]
    let v2: u64;  // [sp-0x80]
    let v3: u64;  // [sp-0x78]
    let v4: void*;  // [sp-0x70]
    let v5: struct40;  // [bp-0x68]
    let v6: u64;  // [sp-0x40]
    let v7: u64;  // [sp-0x38]
    let v8: u64;  // [sp-0x28]
    let v9: u64;  // [sp-0x20]
    let v10: void*;  // [sp-0x18]
    let v11: u64;  // [sp-0x10]
    let v12: u8;  // [sp-0x8]
    let v14: u32;  // ymm0
    let v15: u256;  // ymm1
    let v16: u256;  // ymm0
    let v17: u256;  // ymm1

    v0 = v14;
    v17 = (v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & v16;
    if !(((BinaryOp CmpF & 69) >> 6 & 1) != 1 && v17 && !(v16 & 0x7f800000)) {
        return uu_od::prn_float::format_float(a0, 14, 8);
    }
    v1 = &v0;
    v2 = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
    v3 = 14;
    v4 = 0;
    v7 = 2;
    v8 = 1;
    v9 = 1;
    v10 = 0;
    v11 = 32;
    v12 = 3;
    v5 = struct40 {
        field_0: &g_40dad0
        field_8: 1
        field_16: &v1
        field_24: 2
        field_32: &v7
    };
    v6 = 1;
    return core::option::Option<T>::map_or_else(a0, &v5);
}
