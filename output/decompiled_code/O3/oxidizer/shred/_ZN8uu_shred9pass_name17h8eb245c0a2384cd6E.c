fn uu_shred::pass_name(a0: void*, a1: &u8) -> u64 {
    let v0: u64;  // [sp-0xf8]
    let v1: u64;  // [sp-0xf0]
    let v2: u64;  // [sp-0xe8]
    let v3: u64;  // [sp-0xe0]
    let v4: u64;  // [sp-0xd8]
    let v5: u64;  // [sp-0xd0]
    let v6: u64;  // [sp-0xc8]
    let v7: void*;  // [sp-0xc0], Other Possible Types: u64
    let v8: u64;  // [sp-0xb8]
    let v9: u64;  // [sp-0xb0]
    let v10: u64;  // [sp-0xa8]
    let v11: u64;  // [sp-0xa0]
    let v12: u64;  // [sp-0x98]
    let v13: u64;  // [sp-0x90]
    let v14: u64;  // [sp-0x88], Other Possible Types: void*
    let v15: u64;  // [sp-0x80]
    let v16: u8;  // [sp-0x78]
    let v17: u64;  // [sp-0x70]
    let v18: u64;  // [sp-0x60]
    let v19: void*;  // [sp-0x50]
    let v20: u64;  // [sp-0x48]
    let v21: u8;  // [sp-0x40]
    let v22: u64;  // [sp-0x38]
    let v23: u64;  // [sp-0x28]
    let v24: void*;  // [sp-0x18]
    let v25: u64;  // [sp-0x10]
    let v26: u8;  // [sp-0x8]

    switch (*(a1)) {
    case 0:
        v0 = a1 + 1;
        v1 = &v0;
        v2 = <&T as core::fmt::LowerHex>::fmt;
        v10 = 2;
        v12 = 2;
        v14 = 0;
        v15 = 32;
        v16 = 3;
        v17 = 2;
        v18 = 2;
        v19 = 0;
        v20 = 32;
        v21 = 3;
        v22 = 2;
        v23 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v3 = &g_41eea8;
        v4 = 3;
        v7 = &v10;
        v8 = 3;
        v5 = &v1;
        v6 = 1;
        break;
    case 2:
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a0);
    default:
        v9 = a1 + 1;
        v0 = a1 + 2;
        v1 = a1 + 3;
        v10 = &v9;
        v11 = <&T as core::fmt::LowerHex>::fmt;
        v12 = &v0;
        v13 = <&T as core::fmt::LowerHex>::fmt;
        v14 = &v1;
        v15 = <&T as core::fmt::LowerHex>::fmt;
        v3 = &g_41eea8;
        v4 = 3;
        v7 = 0;
        v5 = &v10;
        v6 = 3;
        break;
    }
    return core::option::Option<T>::map_or_else(a0, &v3);
}
