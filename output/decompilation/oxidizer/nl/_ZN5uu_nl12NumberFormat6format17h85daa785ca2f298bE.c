fn uu_nl::NumberFormat::format(a0: u32, a1: &u8, a2: u32, a3: u32) -> u64 {
    let v0: &u8;  // [sp-0xa0], Other Possible Types: u64
    let v1: u64;  // [sp-0x98]
    let v2: u64;  // [sp-0x90]
    let v3: void*;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: u64;  // [sp-0x78]
    let v6: &u8;  // [sp-0x70]
    let v7: u64;  // [sp-0x68]
    let v8: &u8;  // [sp-0x60]
    let v9: u64;  // [sp-0x58]
    let v10: u64;  // [sp-0x50]
    let v11: u64;  // [sp-0x48]
    let v12: u64;  // [sp-0x38]
    let v13: u64;  // [sp-0x30]
    let v14: void*;  // [sp-0x28]
    let v15: u64;  // [sp-0x20]
    let v16: u8;  // [sp-0x18]
    let v17: u64;  // [sp-0x10]
    let v19: u32;  // eax
    let v20: u64;  // rax

    v10 = a2;
    v19 = *(a1);
    if !v19 {
        v0 = &v10;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        v16 = 0;
        goto LABEL_5acdc5;
    }
    if v19 == 1 {
        v0 = &v10;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        goto LABEL_5acdbd;
    } else if a2 < 0 {
        v17 = -(a2);
        v0 = &v17;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3 - 1;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
        v16 = 1;
        v20 = "-";
    } else {
        v0 = &v10;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3;
        v3 = 0;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
LABEL_5acdbd:
        v16 = 1;
LABEL_5acdc5:
        v20 = &g_461370;
    }
    v4 = v20;
    v5 = 1;
    v8 = &v11;
    v9 = 1;
    v6 = &v0;
    v7 = 2;
    core::option::Option<T>::map_or_else();
    return a0;
}
