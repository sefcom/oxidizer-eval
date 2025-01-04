fn uu_sort::ext_sort::write(a0: &Result<struct48, struct24>, a1: &u64, a2: &struct32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i896;  // [sp-0x108], Other Possible Types: Result<struct112, struct24>
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [sp-0x80]
    let v4: i128;  // [sp-0x78]
    let v5: i128;  // [sp-0x68]
    let v6: i128;  // [sp-0x58]
    let v7: i128;  // [sp-0x48]
    let v8: i128;  // [sp-0x38]
    let v9: i64;  // [sp-0x28]
    let v12: i64;  // rax

    v0 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(a2, a3, a4);
    v12 = *((&v0 as &char + 8) as &i64);
    match v0 {
        Err(_) => {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v2
                field_16: v3
            };
        },
        Ok(_) => {
            v9 = *((&v0 as &char + 104) as &i64);
            v8 = *((&v0 as &char + 88) as &i128);
            v7 = *((&v0 as &char + 72) as &i128);
            v6 = *((&v0 as &char + 56) as &i128);
            v5 = *((&v0 as &char + 40) as &i128);
            v4 = *((&v0 as &char + 24) as &i128);
            v1 = v0;
            v2 = v12;
            v3 = *((&v0 as &char + 16) as &i64);
            uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v1), a5 as u32 as u64);
            v0 = v1;
            v12 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
            return v12;
        },
    }
}
