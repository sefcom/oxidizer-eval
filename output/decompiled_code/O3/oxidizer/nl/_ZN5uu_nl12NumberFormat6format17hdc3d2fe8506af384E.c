fn uu_nl::NumberFormat::format(a0: &struct24, a1: &u8, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0xa0]
    let v1: u64;  // [sp-0x98]
    let v2: u64;  // [sp-0x90]
    let v3: void*;  // [sp-0x88]
    let v4: struct48;  // [bp-0x80]
    let v5: u64;  // [sp-0x50]
    let v6: u64;  // [sp-0x48]
    let v7: u64;  // [sp-0x38]
    let v8: u64;  // [sp-0x30]
    let v9: void*;  // [sp-0x28]
    let v10: u64;  // [sp-0x20]
    let v11: u8;  // [sp-0x18]
    let v12: u64;  // [sp-0x10]
    let v14: u32;  // eax

    v5 = a2;
    v14 = *(a1);
    if !v14 {
        v0 = &v5;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3;
        v3 = 0;
        v6 = 2;
        v7 = 1;
        v8 = 1;
        v9 = 0;
        v10 = 32;
        v11 = 0;
        goto LABEL_5acc35;
    }
    if v14 == 1 {
        v0 = &v5;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3;
        v3 = 0;
        v6 = 2;
        v7 = 1;
        v8 = 1;
        v9 = 0;
        v10 = 32;
        goto LABEL_5acc2d;
    } else if a2 < 0 {
        v12 = -(a2);
        v0 = &v12;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3 - 1;
        v3 = 0;
        v6 = 2;
        v7 = 1;
        v8 = 1;
        v9 = 0;
        v10 = 48;
        v11 = 1;
    } else {
        v0 = &v5;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = a3;
        v3 = 0;
        v6 = 2;
        v7 = 1;
        v8 = 1;
        v9 = 0;
        v10 = 48;
LABEL_5acc2d:
        v11 = 1;
LABEL_5acc35:
    }
    v4 = struct48 {
        field_0: v15
        field_8: 1
        field_16: &v0
        field_24: 2
        field_32: &v6
        field_40: 1
    };
    core::option::Option<T>::map_or_else(a0, &v4);
    return a0;
}
