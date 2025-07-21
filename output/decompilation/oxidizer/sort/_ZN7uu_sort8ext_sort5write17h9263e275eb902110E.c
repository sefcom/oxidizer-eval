fn uu_sort::ext_sort::write(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x108], Other Possible Types: char
    let v1: u64;  // [bp-0x100]
    let v2: i8;  // [bp-0xf8], Other Possible Types: u128
    let v3: i8;  // [bp-0xf0]
    let v4: u128;  // [bp-0xe8]
    let v5: i8;  // [bp-0xe0]
    let v6: u128;  // [bp-0xd8]
    let v7: i8;  // [bp-0xd0]
    let v8: u128;  // [bp-0xc8]
    let v9: i8;  // [bp-0xc0]
    let v10: u128;  // [bp-0xb8]
    let v11: i8;  // [bp-0xb0]
    let v12: u128;  // [bp-0xa8]
    let v13: i8;  // [bp-0xa0]
    let v14: struct112;  // [bp-0x90]
    let v15: u64;  // [bp-0x88]
    let v16: u64;  // [bp-0x80]
    let v18: u64;  // rdx
    let v19: u64;  // rcx
    let v20: alloc::vec::Vec<u8, alloc::alloc::Global>;  // xmm0
    let v21: struct8;  // xmm1
    let v22: u128;  // xmm2
    let v23: struct16;  // rax
    let v24: struct24;  // xmm0
    let v25: u128;  // xmm1
    let v26: u128;  // xmm2

    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(a2, a3, a4, a4);
    v18 = *(&v0 as &i64);
    v19 = *(&v2 as &i64);
    if v18 != 0x8000000000000000 {
        v20 = *(&v3 as &i128);
        v21 = *(&v5 as &i128);
        v22 = *(&v7 as &i128);
        v14 = struct112 {
            field_0: v18
            field_8: v1
            field_16: v19
            field_24: v20
            field_40: v21
            field_56: v22
            field_72: *(&v9 as &i128)
            field_88: *(&v11 as &i128)
            field_104: *(&v13 as &i64)
        };
        v23 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v14);
        uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v23, a5);
        v12 = *((&v14.field_88 as &char + 8) as &i128);
        v10 = *((&v14.field_72 as &char + 8) as &i128);
        v8 = *((&v14.field_56 as &char + 8) as &i128);
        v24 = *(&v14.field_0 as &i128);
        v25 = *(&v14.field_16 as &i128);
        v26 = *((&v14.field_24 as &char + 8) as &i128);
        v6 = *((&v14.field_40 as &char + 8) as &i128);
        v4 = v26;
        v2 = v25;
        v0 = v24;
        return <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a2);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v15
        field_16: v16
    };
}
