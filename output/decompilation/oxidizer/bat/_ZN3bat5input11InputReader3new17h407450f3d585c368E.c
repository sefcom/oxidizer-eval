fn bat::input::InputReader::new(a0: i64, a1: i64) -> double {
    let v0: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x70]
    let v1: u64;  // [bp-0x60]
    let v3: Result<struct16, struct64>;  // [bp-0x48]
    let v4: u128;  // [bp-0x38]
    let v5: struct24;  // [bp-0x28]
    let v8: u64;  // rax
    let v9: u8;  // bpl
    let v10: u64;  // rax
    let v12: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = Vec::new();
    v12 = std::io::BufRead::read_until(a1, 10, &v0);
    if v1 {
        v8 = content_inspector::inspect(1, v1);
        if v8 == 4 {
            bat::input::read_utf16_line(&v12 as i64, a1, &v0, 10, 0);
        } else if v8 == 3 {
            bat::input::read_utf16_line(&v12 as i64, a1, &v0, 0, 10);
        }
    }
    v5 = *((a1 + 48) as &i64);
    v4 = *((a1 + 32) as &i128);
    v3 = *((a1 + 16) as &i128);
    v12 as i64 = *(a1 as &i128);
    v10 = alloc::boxed::Box<T>::new(&v12 as i64) as u64;
    return struct48 {
        field_0: *(&v0.buf.inner.cap as &i128)
        field_16: v1
        field_24: v10
        field_32: &g_ace530
        field_40: v9
    };
}
