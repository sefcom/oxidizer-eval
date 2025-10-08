fn check_docs::check_validity_of_anchor_pair(a0: i64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x60]
    let v1: i64;  // [bp-0x58]
    let v2: core::fmt::rt::Argument;  // [bp-0x50]
    let v3: u128;  // [bp-0x50]
    let v4: core::fmt::rt::Argument;  // [bp-0x40]
    let v5: u128;  // [bp-0x40]
    let v6: core::fmt::Arguments;  // [bp-0x30]

    v0 = a0;
    v1 = a1;
    if *((a0 + 48) as &i64) > *((a1 + 48) as &i64) {
        v2 = core::fmt::rt::Argument {
            ty: &v1
        };
        v4 = core::fmt::rt::Argument {
            ty: &v0
        };
        v6 = core::fmt::Arguments {
            pieces: ["The end of the anchor appears before the beginning. End anchor: ", ". Begin anchor: "]
            args: [v3, v5]
            fmt: 0
        };
        return anyhow::__private::format_err(&v6);
    }
    return 0;
}
