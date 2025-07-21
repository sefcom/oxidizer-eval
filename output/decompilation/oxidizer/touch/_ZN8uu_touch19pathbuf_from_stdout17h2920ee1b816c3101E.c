fn uu_touch::pathbuf_from_stdout() -> : struct8 {
    let a0: i64;  // rsi
    let v1: i64;  // rdi

    std::sys::os_str::bytes::Slice::to_owned(v1 + 8, "/dev/stdout");
    *(v1 as &i64) = 9223372036854775812;
    return;
}
