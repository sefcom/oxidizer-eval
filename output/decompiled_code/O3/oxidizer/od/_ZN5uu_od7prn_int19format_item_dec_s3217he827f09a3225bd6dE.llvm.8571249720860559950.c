fn uu_od::prn_int::format_item_dec_s32(a0: &String, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: Argument;  // [bp-0x90]
    let v2: Argument;  // [bp-0x88]
    let v3: void*;  // [sp-0x78]
    let v4: Arguments;  // [bp-0x70]
    let v5: u64;  // [sp-0x40]
    let v6: u64;  // [sp-0x30]
    let v7: u64;  // [sp-0x28]
    let v8: void*;  // [sp-0x20]
    let v9: u64;  // [sp-0x18]
    let v10: u8;  // [sp-0x10]

    v0 = a1;
    v1 = Argument {
        value: &v0
        formatter: core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt
    };
    v2 = Argument {
        value: core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt
        formatter: 11
    };
    v3 = 0;
    v5 = 2;
    v6 = 1;
    v7 = 1;
    v8 = 0;
    v9 = 32;
    v10 = 3;
    v4 = Arguments {
        pieces: [" "]
        args: [&v1, &v2]
        fmt: 
    };
    alloc::fmt::format::format_inner(a0, &v4);
    return a0;
}
