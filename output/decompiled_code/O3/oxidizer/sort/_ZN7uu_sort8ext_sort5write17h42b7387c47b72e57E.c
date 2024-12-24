fn uu_sort::ext_sort::write(a0: &u64, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x108]
    let v1: i8;  // [bp-0x100]
    let v2: i8;  // [bp-0xf8]
    let v3: i8;  // [bp-0xf0]
    let v4: i8;  // [bp-0xe0]
    let v5: i8;  // [bp-0xd0]
    let v6: i8;  // [bp-0xc0]
    let v7: i8;  // [bp-0xb0]
    let v8: i8;  // [bp-0xa0]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i128;  // [sp-0x78]
    let v13: i128;  // [sp-0x68]
    let v14: i128;  // [sp-0x58]
    let v15: i128;  // [sp-0x48]
    let v16: i128;  // [sp-0x38]
    let v17: i64;  // [sp-0x28]
    let v20: i64;  // rax

    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v0, a2, a3, a4);
    v20 = v1;
    if v9 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v10
            field_16: v11
        };
    }
    v17 = v8;
    v16 = v7;
    v15 = v6;
    v14 = v5;
    v13 = v4;
    v12 = v3;
    v9 = v0;
    v10 = v20;
    v11 = v2;
    uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v9), a5);
    v0 = v9;
    v20 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
    return v20;
}
