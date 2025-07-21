fn uu_tail::follow::watch::Observer::add_stdin(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> long long {
    let v0: u128;  // [bp-0x68]
    let v1: u32;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: std::sys::os_str::bytes::Buf;  // [bp-0x48]
    let v5: u64;  // rdx
    let v6: u64;  // rax

    if *((a0 + 142) as &i8) != 2 && !(*((a0 + 142) as &i8) & 1) {
        v3 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
        v5 = v3.inner.len;
        v2 = v3.inner.len;
        v0 = *(&v3.inner.buf.cap as &i128);
        v6 = uu_tail::follow::watch::Observer::add_path(a0, v1, v5, a1, a2, a3, a4, a5);
        return v6;
    }
    return 0;
}
