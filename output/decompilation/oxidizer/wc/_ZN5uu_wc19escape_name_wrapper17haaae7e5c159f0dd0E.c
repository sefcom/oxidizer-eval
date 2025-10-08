fn uu_wc::escape_name_wrapper(a0: &struct24, a1: i64, a2: i64) -> u64 {
    let v0: Result<struct40, struct32>;  // [bp-0x50], Other Possible Types: struct32
    let v1: struct24;  // [bp-0x28]
    let v2: Result<struct16, struct16>;  // [bp-0x18]
    let v4: core::result::Result<usize, std::io::error::Error>;  // 4106
    let v5: u64;  // rcx
    let v6: u64;  // cc_ndep

    v1 = uucore::features::quoting_style::escape_name(a1, a2, &g_41a13f);
    v0 = alloc::string::String::from_utf8(&v1);
    v4 = v0 as i64;
    v5 = ((0 ^ v4) & (0 ^ -(v4))) >> 63 & 255;
    v2 = *(&(&v0 as u8)[8 * v5] as &i64);
    v0 = struct32 {
        field_0: _ccall(1, 8, 0, v4, v6) & 255
        field_8: *((&v0 as &u8 + 8 * v5) as &i128)
        field_24: v2
    };
    core::result::Result<T,E>::expect(a0, &v0, "src/uu/wc/src/wc.rs");
    return a0;
}
