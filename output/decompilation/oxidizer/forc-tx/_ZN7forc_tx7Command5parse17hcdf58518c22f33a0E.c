fn forc_tx::Command::parse() -> : struct256 {
    let a0: u64;  // rdi
    let v0: struct48;  // [bp-0x138]
    let v1: Option<struct256>;  // [bp-0x108]
    let v2: struct48;  // [bp-0x100]
    let v4: u64;  // rax

    v1 = forc_tx::Command::try_parse();
    match v1 {
        None => {
            v0 = v2;
            v4 = forc_tx::ParseError::print(&v0) as u64;
            std::process::exit(1); /* do not return */
        },
        Some(_) => {
            memcpy(a0, &v1, 0x100);
            return;
        },
    }
}
