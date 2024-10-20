fn uu_od::prn_float::format_item_flo64(a0: u64) -> int {
    let v0: i8;  // [bp-0x80]
    let v1: Argument;  // [bp-0x68]
    let v2: String;  // [sp-0x58], Other Possible Types: i192
    let v3: Arguments;  // [bp-0x40]
    let v5: i128;  // xmm0
    let v6: i256;  // ymm0

    uu_od::prn_float::format_float(&v0, 24, 17);
    v1 = Argument {
        value: &v0
        formatter: <alloc::string::String as core::fmt::Display>::fmt
    };
    v3 = Arguments {
        pieces: [" "]
        args: [&v1]
        fmt: None
    };
    v2 = alloc::fmt::format::format_inner(&v3);
    *((a0 + 16) as &i64) = *((&v2 as &char + 16) as &i64);
    v5 = v2;
    *(a0 as &i128) = v5;
    return Conv(256->64, ((vvar_40{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_39{reg 224})));
}
