fn uu_sort::ext_sort::write(a0: &struct24, a1: &u64, a2: &struct32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i448;  // [sp-0x98], Other Possible Types: struct56
    let v1: i64;  // [sp-0x58]
    let v2: i64;  // [sp-0x50]
    let v3: i64;  // [sp-0x48]
    let v4: i128;  // [sp-0x40]
    let v5: i128;  // [sp-0x30]
    let v8: i64;  // rax

    v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(a2);
    v8 = *((&v0 as &char + 8) as &i64);
    if v1 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v2
            field_16: v3
        };
    }
    v5 = *((&v0 as &char + 40) as &i128);
    v4 = *((&v0 as &char + 24) as &i128);
    v1 = v0;
    v2 = v8;
    v3 = *((&v0 as &char + 16) as &i64);
    uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v1), a5);
    v0 = v1;
    v8 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
    return v8;
}
