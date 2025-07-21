fn uu_yes::exec(a0: i64, a1: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x38]
    let v1: u64;  // [bp-0x2c]
    let v2: std::io::stdio::Stdout;  // [bp-0x28]
    let v5: core::result::Result<(), std::io::error::Error>;  // rax

    v2 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v2);
    if uucore::features::signals::enable_pipe_errors() as i32 == 134 {
        v1 = 1;
        v5 = uu_yes::splice::splice_data(a0, a1, &v1);
        if let Ok(_) = v5 {
            do {
                v5 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, a0, a1);
            } while (!v5);
        }
    }
    return v5;
}
