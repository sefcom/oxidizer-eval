fn starship::print::preset_command(a0: void*, a1: u32, a2: i64, a3: u32) -> void {
    let v0: struct16;  // [bp-0x88]
    let v1: Option<struct48>;  // [bp-0x78], Other Possible Types: std::io::stdio::Stdout
    let v2: struct24;  // [bp-0x70]
    let v3: core::result::Result<(), std::io::error::Error>;  // [bp-0x28]
    let v5: &str;  // r14
    let v6: u64;  // rdx

    if a3 {
        v2 = starship::print::preset_list();
        println!("{}", &v2);
        return;
    } else if a0 {
        v5 = starship::shadow::get_preset_content(a0, a1);
        if (((0 ^ *(a2 as &i64)) & (0 ^ -(*(a2 as &i64)))) >> 63) as char {
            v1 = std::io::stdio::stdout();
            v3 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v1, v5, v6);
            match v3 {
                Err(v0) => {
                    eprintln!("Error writing preset to stdout: {}", &v0);
                    std::process::exit(1); /* do not return */
                },
                Ok(_) => {
                    return;
                },
            }
        } else {
            v1 = std::fs::write(a2, v5, a2);
            if let None = v1 {
                v0 = v1;
                eprintln!("Error writing preset to file: {}", &v0);
                std::process::exit(1); /* do not return */
            }
        }
    } else {
        core::option::expect_failed("name argument must be specified"); /* do not return */
    }
}
