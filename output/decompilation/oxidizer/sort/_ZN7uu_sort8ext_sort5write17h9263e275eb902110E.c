fn uu_sort::ext_sort::write(a0: &struct24, a1: &u64, a2: &struct32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u8;  // [bp-0x108]
    let v1: i8;  // [bp-0x100]
    let v2: u128;  // [bp-0xf8], Other Possible Types: i8
    let v3: i8;  // [bp-0xf0]
    let v4: u128;  // [sp-0xe8]
    let v5: i8;  // [bp-0xe0]
    let v6: u128;  // [sp-0xd8]
    let v7: i8;  // [bp-0xd0]
    let v8: u128;  // [sp-0xc8]
    let v9: i8;  // [bp-0xc0]
    let v10: u128;  // [sp-0xb8]
    let v11: i8;  // [bp-0xb0]
    let v12: u128;  // [sp-0xa8]
    let v13: i8;  // [bp-0xa0]
    let v14: u64;  // [sp-0x90]
    let v15: u64;  // [sp-0x88]
    let v16: u64;  // [sp-0x80]
    let v17: u128;  // [sp-0x78]
    let v18: u128;  // [sp-0x68]
    let v19: u128;  // [sp-0x58]
    let v20: u128;  // [sp-0x48]
    let v21: u128;  // [sp-0x38]
    let v22: u64;  // [sp-0x28]
    let v25: u64;  // rax

    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v0, a2, a3, a4);
    v25 = v1;
    if v14 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v15
            field_16: v16
        };
    }
    v22 = v13;
    v21 = v11;
    v20 = v9;
    v19 = v7;
    v18 = v5;
    v17 = v3;
    v14 = *(&v0 as &i64);
    v15 = v25;
    v16 = v2;
    uu_sort::ext_sort::write_lines(a1[4], a1[5], <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v14), a5);
    v12 = *((&v21 as &char + 8) as &i128);
    v10 = *((&v20 as &char + 8) as &i128);
    v8 = *((&v19 as &char + 8) as &i128);
    v6 = *((&v18 as &char + 8) as &i128);
    v4 = *((&v17 as &char + 8) as &i128);
    v2 = *(&v16 as &i128);
    v0 = *(&v14 as &i128);
    v25 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
}
