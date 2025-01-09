fn uu_sort::tmp_dir::remove_tmp_dir(a0: u32, a1: u32) -> u64 {
    let v0: i72;  // [sp-0x130], Other Possible Types: struct9
    let v1: struct40;  // [bp-0x108]
    let v2: i8;  // [bp-0xe0]
    let v3: i8;  // [bp-0xd0]
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0x88]
    let v7: struct9;  // [sp-0x58]
    let v8: i8;  // [sp-0x50]
    let v9: struct24;  // [sp-0x48]
    let v11: i8;  // al
    let v12: i256;  // ymm0
    let v13: i256;  // ymm1

    v0 = std::fs::read_dir(a0, a1);
    v11 = *((&v0 as &char + 8) as &i8);
    if v8 == 2 {
        goto LABEL_0x548d77;
    }
    v5 = 0;
    v6 = 0;
    v7 = v0;
    loop {
        <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v2, &v5);
        if !v2 {
            break;
        }
        v12 = v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2;
        v13 = v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3;
        v1 = struct40 {
            field_0: v14
            field_16: v15
            field_32: v4
        };
        v9 = std::fs::DirEntry::path(&v1);
    }
    return std::fs::remove_dir(a0, a1);
}
