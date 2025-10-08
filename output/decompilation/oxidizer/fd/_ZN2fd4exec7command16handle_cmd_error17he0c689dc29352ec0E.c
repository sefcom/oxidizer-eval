fn fd::exec::command::handle_cmd_error(a0: i64, a1: i64, a2: i64) {
    let v0: u64;  // [bp-0xa0]
    let v1: u64;  // [bp-0x90]
    let v2: Result<struct24, struct24>;  // [bp-0x88]
    let v3: alloc::string::String;  // [bp-0x40]
    let v4: alloc::string::String;  // [bp-0x28]

    if !a0 || std::io::error::Error::kind(a1) as u8 {
        v0 = a1;
        v4 = format!("Problem while executing command: {}", &v0);
        fd::error::print_error(&v4);
    } else {
        v1 = a1;
        v2 = alloc::string::String::from_utf8_lossy(std::process::Command::get_program(a0), a2);
        v3 = format!("Command not found: {}", &v2);
        fd::error::print_error(&v3);
    }
    return;
}
