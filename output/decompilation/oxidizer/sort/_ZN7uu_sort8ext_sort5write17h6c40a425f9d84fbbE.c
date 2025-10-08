fn uu_sort::ext_sort::write(a0: u64, a1: i64, a2: void*, a3: void*, a4: u32, a5: u32) -> long long {
    let v0: Result<struct112, struct24>;  // [bp-0x108], Other Possible Types: struct112
    let v1: u64;  // [bp-0x100]
    let v2: struct112;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v6: u64;  // rdx
    let v7: u64;  // rcx
    let v8: iNone;  // xmm0
    let v9: iNone;  // xmm1
    let v10: iNone;  // xmm2
    let v11: u64;  // rax
    let v12: iNone;  // xmm0
    let v13: iNone;  // xmm1
    let v14: iNone;  // xmm2

    v0 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(a2, a3, a4);
    v6 = v0 as i64;
    v7 = *((&v0 as &char + 16) as &i64);
    if !((((0 ^ v6) & (0 ^ -(v6))) >> 63) as char) {
        v8 = *((&v0 as &char + 24) as &i128);
        v9 = *((&v0 as &char + 40) as &i128);
        v10 = *((&v0 as &char + 56) as &i128);
        v2 = struct112 {
            field_0: v6
            field_8: v1
            field_16: v7
            field_24: v8
            field_40: v9
            field_56: v10
            field_72: *((&v0 as &char + 72) as &i128)
            field_88: *((&v0 as &char + 88) as &i128)
            field_104: *((&v0 as &char + 104) as &i64)
        };
        v11 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v2);
        uu_sort::ext_sort::write_lines(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v11, a5);
        v12 = *(&v2.field_0 as &i128);
        v13 = *(&v2.field_16 as &i128);
        v14 = *((&v2.field_24 as &char + 8) as &i128);
        v0 = struct112 {
            field_0: v12
            field_16: v13
            field_32: v14
            field_48: *((&v2.field_40 as &char + 8) as &i128)
            field_64: *((&v2.field_56 as &char + 8) as &i128)
            field_80: *((&v2.field_72 as &char + 8) as &i128)
            field_96: *((&v2.field_88 as &char + 8) as &i128)
        };
        return <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a0, &v0);
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v3
        field_16: v4
    };
}
