fn starship::generate_shell() -> void {
    let v0: struct40;  // [bp-0x2e0], Other Possible Types: u8
    let v1: std::io::stdio::Stdout;  // [bp-0x2d8]
    let v2: struct700;  // [bp-0x2d0]

    v2 = <starship::Cli as clap_builder::derive::CommandFactory>::command();
    v1 = std::io::stdio::stdout();
    v0 = struct40 {
        field_0: std::io::stdio::Stderr::lock(&v1) as u64
        padding_8: <UNKNOWN>
        field_16: clap_complete::aot::generator::generate(&v0 as u64)
    };
    return;
}
