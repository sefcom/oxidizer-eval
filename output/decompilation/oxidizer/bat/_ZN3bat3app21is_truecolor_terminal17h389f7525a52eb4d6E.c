fn bat::app::is_truecolor_terminal() -> char {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x20]
    let v3: u8;  // al

    v0 = std::env::var("COLORTERM");
    match v0 {
        Ok(_) => {
            return bat::app::is_truecolor_terminal::{{closure}}(&v0 as u8) as u8 & 1;
        },
        Err(_) => {
            return v3 & 1;
        },
    }
}
