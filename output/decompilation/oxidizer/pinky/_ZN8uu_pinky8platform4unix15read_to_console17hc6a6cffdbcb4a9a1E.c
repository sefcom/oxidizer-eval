fn uu_pinky::platform::unix::read_to_console(a0: i32) {
    let v0: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xa8]
    let v1: struct24;  // [bp-0x50]
    let v2: struct44;  // [bp-0x38]
    let v5: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a0);
    v0 = Vec::new();
    v5 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(&v2, &v0);
    if let Ok(_) = v5 {
        v1 = alloc::string::String::from_utf8_lossy(0x1, 0);
        print!("{}", &v1);
    }
    return;
}
