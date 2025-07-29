fn metal_crusher::fun::execute_shell(a0: i64, a1: i64) {
    let v0: struct32;  // [bp-0x124]
    let v1: core::result::Result<std::process::Child, std::io::error::Error>;  // [bp-0x108]
    let v2: struct149;  // [bp-0xe8]

    v2 = std::process::Command::new("sh");
    v1 = std::process::Command::spawn(std::process::Command::arg(std::process::Command::arg(&v2, "-c"), a0, a1));
    v0 = core::result::Result<T,E>::unwrap(&v1);
    return;
}
