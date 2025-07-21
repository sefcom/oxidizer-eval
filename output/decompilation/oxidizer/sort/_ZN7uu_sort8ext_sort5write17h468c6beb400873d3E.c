fn uu_sort::ext_sort::write(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct128;  // [bp-0x98], Other Possible Types: char
    let v1: u64;  // [bp-0x90]
    let v2: i8;  // [bp-0x88], Other Possible Types: u128
    let v3: i8;  // [bp-0x80]
    let v4: u128;  // [bp-0x78]
    let v5: i8;  // [bp-0x70]
    let v6: core::option::Option<&str>;  // [bp-0x68]
    let v7: struct56;  // [bp-0x58]
    let v8: u64;  // [bp-0x50]
    let v9: u64;  // [bp-0x48]
    let v11: u64;  // rdx
    let v12: u64;  // rcx
    let v13: u128;  // xmm0
    let v14: u64;  // rax
    let v15: struct128;  // xmm0
    let v16: u128;  // xmm1

    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(a2, a3);
    v11 = *(&v0 as &i64);
    v12 = *(&v2 as &i64);
    if v11 != 0x8000000000000000 {
        v13 = *(&v3 as &i128);
        v7 = struct56 {
            field_0: v11
            field_8: v1
            field_16: v12
            field_24: v13
            field_40: *(&v5 as &i128)
        };
        v14 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v7);
        uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v14, a5);
        v6 = *((&v7.field_40 as &char + 8) as &i64);
        v15 = *(&v7.field_0 as &i128);
        v16 = *(&v7.field_16 as &i128);
        v4 = *((&v7.field_24 as &char + 8) as &i128);
        v2 = v16;
        v0 = v15;
        return <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a2);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v8
        field_16: v9
    };
}
