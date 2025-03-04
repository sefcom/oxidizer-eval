fn uu_tail::follow::watch::Observer::add_stdin(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x70]
    let v1: iNone;  // [sp-0x68]
    let v2: struct24;  // [sp-0x48]
    let v4: i8;  // al

    v4 = *((a0 + 142) as &i8);
    if v4 != 2 && !(v4 & 1) {
        v2 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
        v0 = a5 as u64;
        return uu_tail::follow::watch::Observer::add_path(a0, (&v1)[8] as i64, v2.field_16, a1, a2, a3, a4);
    }
    return 0;
}
