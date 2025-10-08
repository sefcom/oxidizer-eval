fn uu_head::wrap_in_stdout_error(a0: u64) -> long long {
    let v0: u64;  // [bp-0x68]
    let v1: alloc::string::String;  // [bp-0x20]
    let v4: u64;  // rax

    v0 = a0;
    v1 = format!("error writing 'standard output': {}", &v0);
    v4 = std::io::error::Error::new(std::io::error::Error::kind(a0) as u32, &v1);
    return v4;
}
