fn uu_od::prn_char::format_item_a(a0: &String, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: Argument;  // [bp-0x80]
    let v2: Arguments;  // [bp-0x70]
    let v3: u64;  // [sp-0x40]
    let v4: void*;  // [sp-0x30]
    let v5: u64;  // [sp-0x28]
    let v6: void*;  // [sp-0x20]
    let v7: u64;  // [sp-0x18]
    let v8: u8;  // [sp-0x10]

    v0 = "nul" + (a1 & 127) * 16;
    v1 = Argument {
        value: &v0
        formatter: <&T as core::fmt::Display>::fmt
    };
    v3 = 2;
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v7 = 32;
    v8 = 1;
    v2 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v1]
        fmt: 
    };
    alloc::fmt::format::format_inner(a0, &v2);
    return a0;
}
