fn just::subcommand::Subcommand::summary(a0: u32, a1: u8, a2: void*) -> long long {
    let v0: struct157;  // [bp-0x40]
    let v1: core::fmt::Arguments;  // [bp-0x38], Other Possible Types: struct24
    let v3: struct32;  // 4098

    v0 = 0;
    v1 = struct24 {
        field_0: 0
        field_8: ""
    };
    just::subcommand::Subcommand::summary_recursive(a0, &v1, &v0, a2);
    v1 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    v3 = v0;
    return std::io::stdio::_print(&v1) & -0x100 | v3;
}
