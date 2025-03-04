fn uu_sort::ext_sort::write(a0: &Result<struct48, struct16>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: iNone;  // [bp-0x108], Other Possible Types: char
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
    let v12: iNone;  // [sp-0x78]
    let v13: iNone;  // [sp-0x68]
    let v14: iNone;  // [sp-0x58]
    let v15: iNone;  // [sp-0x48]
    let v16: iNone;  // [sp-0x38]
    let v17: i64;  // [sp-0x28]
    let v20: i64;  // rax

    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v0, a2, a3, a4);
    v20 = *(&v1 as &i64);
    if v9 == 0x8000000000000000 {
        return Err(struct16 {
            field_0: v10
            field_8: v11
        });
    }
    v17 = *(&v8 as &i64);
    v16 = *(&v7 as &i128);
    v15 = *(&v6 as &i128);
    v14 = *(&v5 as &i128);
    v13 = *(&v4 as &i128);
    v12 = *(&v3 as &i128);
    v9 = *(&v0 as &i64);
    v10 = v20;
    v11 = *(&v2 as &i64);
    uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v9), a5 as u64);
    v0 = *(&v9 as &i896);
    v20 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
}
