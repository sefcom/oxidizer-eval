fn uu_tail::follow::watch::Observer::add_stdin(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i192;  // [sp-0x68]
    let v3: i192;  // [sp-0x48], Other Possible Types: struct24
    let v5: i8;  // al

    v5 = *((a0 + 142) as &i8);
    if v5 != 2 && !(v5 & 1) {
        v3 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
        v1 = a5;
        v0 = a4;
        return uu_tail::follow::watch::Observer::add_path(a0, *((&v2 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), a1, a2, a3);
    }
    return 0;
}
