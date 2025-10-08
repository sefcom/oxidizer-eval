fn just::subcommand::Subcommand::man() -> Option<struct8> {
    let a0: i64;  // rdi
    let v0: struct72;  // [bp-0x628]
    let v1: u64;  // [bp-0x620]
    let v2: Result<struct8, struct4>;  // [bp-0x618]
    let v3: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // [bp-0x610], Other Possible Types: struct712
    let v4: std::io::stdio::Stdout;  // [bp-0x348], Other Possible Types: struct832
    let v7: core::result::Result<(), std::io::error::Error>;  // rax
    let v8: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = just::config::Config::app();
    v4 = clap_mangen::Man::new(&v3);
    core::result::Result<T,E>::expect(clap_mangen::Man::render(&v4, &v0, &g_831178));
    v4 = std::io::stdio::stdout();
    v3 = std::io::stdio::Stderr::lock(&v4);
    v7 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, 1, 0);
    match v7 {
        Err(_) => {
            return Some(v7);
        },
        Ok(_) => {
            v8 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v3);
            match v8 {
                Ok(_) => {
                    return struct1 {
                        field_0: 56
                    };
                },
                Err(_) => {
                    return Some(v8);
                },
            }
        },
    }
}
