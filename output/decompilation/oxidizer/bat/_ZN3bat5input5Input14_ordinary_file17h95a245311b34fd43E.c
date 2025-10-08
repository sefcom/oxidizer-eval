fn bat::input::Input::_ordinary_file(a0: &struct160, a1: &[u8]) -> u64 {
    let v0: u64;  // [bp-0x108]
    let v1: u64;  // [bp-0x100]
    let v2: u64;  // [bp-0xf8]
    let v3: struct32;  // [bp-0xe8]
    let v4: struct24;  // [bp-0xe0]
    let v5: struct32;  // [bp-0xd0]
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v8: struct32;  // [bp-0xb8]
    let v9: struct32;  // [bp-0xa8]
    let v10: struct32;  // [bp-0x98]
    let v11: u128;  // [bp-0x88]
    let v13: u32;  // esi
    let v14: u64;  // rax
    let v15: u64;  // rcx
    let v16: iNone;  // xmm0

    v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v13);
    v6 = std::fs::metadata(a1);
    v2 = 0x8000000000000000;
    v0 = v14;
    v1 = v15;
    bat::input::InputKind::description(&v6, &v4);
    v16 = *(&v0 as &i128);
    return struct160 {
        field_0: v16
        field_16: *(&v2 as &i128)
        field_32: v3
        field_40: v6 as i128
        field_56: v8
        field_72: v9
        field_88: v10
        field_104: v11
        field_120: *((&v6 as &char + 80) as &i128)
        field_136: *(&v4.field_0 as &i128)
        field_152: v5
    };
}
