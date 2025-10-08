fn forc_tx::Command::try_parse() -> Option<struct256> {
    let a0: u64;  // rdi
    let v0: std::env::Args;  // [bp-0x30]

    v0 = std::env::args();
    forc_tx::Command::try_parse_from_args(a0, &v0);
    return;
}
