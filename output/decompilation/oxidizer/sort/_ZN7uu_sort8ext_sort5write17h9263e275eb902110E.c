fn uu_sort::ext_sort::write(a1: i64, a2: &struct32, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rsi
    let v0: i8;  // [bp-0x108], Other Possible Types: Result<struct48, struct24>, u128
    let v1: u64;  // [bp-0x100]
    let v2: struct96;  // [bp-0xf8], Other Possible Types: char
    let v3: i8;  // [bp-0xf0]
    let v4: u128;  // [bp-0xe8]
    let v5: struct24;  // [bp-0xe0]
    let v6: i8;  // [bp-0xd0]
    let v7: u128;  // [bp-0xc8]
    let v8: u128;  // [bp-0xc0]
    let v9: i8;  // [bp-0xb0]
    let v10: u128;  // [bp-0xa8]
    let v11: i8;  // [bp-0xa0]
    let v12: u896;  // [bp-0x90]
    let v14: core::option::Option<&str>;  // rdx
    let v15: u64;  // rcx
    let v17: u128;  // xmm0
    let v18: u128;  // xmm2
    let v19: &str;  // rax
    let v20: core::result::Result<(), std::io::error::Error>;  // xmm0
    let v21: struct96;  // xmm1

    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(a1, a2, a3, a3);
    v14 = *(&v0 as &i64);
    v15 = *(&v2 as &i64);
    if let None = v14 {
        v17 = *(&v3 as &i128);
        v18 = *(&v6 as &i128);
        v12 = struct112 {
            field_0: v14
            field_8: v1
            field_16: v15
            field_24: v17
            field_40: v5
            field_56: v18
            field_72: v8
            field_88: *(&v9 as &i128)
            field_104: *(&v11 as &i64)
        };
        v19 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v12);
        uu_sort::ext_sort::write_lines(*((a0 + 32) as &i64), *((a0 + 40) as &i64), v19, a4 as u64);
        v10 = *((&v12 as &char + 96) as &i128) as u128;
        memcpy(&v8 as u8, &v12 as u8, 16);
        v7 = *((&v12 as &char + 64) as &i128) as u128;
        v20 = v12 as i128;
        v21 = *((&v12 as &char + 16) as &i128);
        memcpy(&v5 as u8, &v12 as u8, 16);
        v4 = *((&v12 as &char + 32) as &i128) as u128;
        v2 = v21;
        *(&v0 as &core::result::Result<(), std::io::error::Error>) = v20;
        v0 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1);
        return;
    }
}
