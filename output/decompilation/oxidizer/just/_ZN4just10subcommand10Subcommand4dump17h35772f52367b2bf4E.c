fn just::subcommand::Subcommand::dump(a0: i64, a1: u8, a2: u64) -> void {
    let v0: u64;  // [bp-0x58]
    let v1: core::fmt::Arguments;  // [bp-0x50]
    let v3: struct24;  // rax

    if (a1 & 1) {
        v0 = just::compilation::Compilation::root_ast(a2);
        print!("{}", &v0);
    } else {
        v3 = serde_json::ser::to_writer(std::io::stdio::stdout(), a2);
        if v3 {
            return struct16 {
                field_0: 18
                padding_1: <UNKNOWN>
                field_8: v3
            };
        }
        v1 = core::fmt::Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v1);
    }
    return struct1 {
        field_0: 56
    };
}
