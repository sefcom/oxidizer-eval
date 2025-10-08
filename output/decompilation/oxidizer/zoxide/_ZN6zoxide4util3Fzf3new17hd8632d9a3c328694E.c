fn zoxide::util::Fzf::new() -> : struct224 {
    let a0: u64;  // rdi
    let v0: struct48;  // [bp-0x120]
    let v1: struct157;  // [bp-0xf0], Other Possible Types: struct8
    let v3: u32;  // rsi
    let v4: u32;  // rdx

    v1 = std::process::Command::new();
    v0 = struct48 {
        field_0: "--delimiter=\t"
        field_16: "--nth=2"
        field_32: "--read0"
    };
    std::process::Command::args(&v1, &v0);
    v1 = std::process::Command::stdin(v3, v4);
    v1 = std::process::Command::stdout(v3, v4);
    memcpy(a0, &v1, 224);
    return;
}
