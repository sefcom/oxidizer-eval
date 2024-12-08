fn uu_sort::ext_sort::write(a0: &u64, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct56;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: u8;  // [bp-0x88]
    let v3: i8;  // [bp-0x80]
    let v4: i8;  // [bp-0x70]
    let v5: u64;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u64;  // [sp-0x48]
    let v8: u128;  // [sp-0x40]
    let v9: u128;  // [sp-0x30]
    let v12: u64;  // rax

    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v0, a2);
    v12 = *(&v1 as &i64);
    if v5 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v6
            field_16: v7
        };
    }
    v9 = v4;
    v8 = v3;
    v5 = v0.field_0;
    v6 = v12;
    v7 = *(&v2 as &i64);
    uu_sort::ext_sort::write_lines(a1[4], a1[5], <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v5), a5);
    *(&v0 as &struct56) = struct56 {
        field_0: *(&v5 as &i128)
        field_16: *(&v7 as &i128)
        field_32: *((&v8 as &char + 8) as &i128)
        field_48: *((&v9 as &char + 8) as &i64)
    };
    v12 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
    return v12;
}
