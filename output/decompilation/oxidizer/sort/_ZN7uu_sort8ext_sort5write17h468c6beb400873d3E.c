fn uu_sort::ext_sort::write(a1: i64, a2: &struct32, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rsi
    let v0: i8;  // [bp-0x98], Other Possible Types: struct8, struct24
    let v1: u64;  // [bp-0x90]
    let v2: i8;  // [bp-0x88], Other Possible Types: u128
    let v3: u128;  // [bp-0x80]
    let v4: i8;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: u448;  // [bp-0x58]
    let v7: u64;  // [bp-0x48]
    let v8: u64;  // rdx
    let v9: core::option::Option<&str>;  // rcx
    let v10: i64;  // rdi
    let v11: u64;  // rax
    let v12: struct8;  // xmm0

    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(a1, a2);
    v8 = *(&v0 as &i64);
    v9 = *(&v2 as &i64);
    if v8 != 0x8000000000000000 {
        v6 = struct56 {
            field_0: v8
            field_8: v1
            field_16: v9
            field_24: v3
            field_40: *(&v4 as &i128)
        };
        v11 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v6);
        uu_sort::ext_sort::write_lines(*((a0 + 32) as &i64), *((a0 + 40) as &i64), v11, a4);
        v5 = *((&v6 as &char + 48) as &i64);
        v12 = v6 as i128;
        memcpy(&v3, &v6, 16);
        v2 = *((&v6 as &char + 16) as &i128);
        v0 = v12;
        v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1);
        return;
    }
    *((v10 + 8) as &u64) = v1;
    *((v10 + 16) as &u64) = v7;
    *(v10 as &i64) = 0x8000000000000000;
    return;
}
