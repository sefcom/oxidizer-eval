fn uu_sort::tmp_dir::remove_tmp_dir(a0: u32, a1: u32) -> u64 {
    let v0: i72;  // [sp-0x130], Other Possible Types: struct9
    let v1: i64;  // [sp-0x110]
    let v2: struct40;  // [bp-0x108]
    let v3: Option<struct40>;  // [sp-0xe0], Other Possible Types: i320
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0x88]
    let v6: struct9;  // [sp-0x58]
    let v7: i8;  // [sp-0x50]
    let v8: i192;  // [sp-0x48], Other Possible Types: struct24
    let v10: i8;  // al
    let v12: i256;  // ymm0
    let v14: i256;  // ymm1

    v0 = std::fs::read_dir(a0, a1);
    v10 = *((&v0 as &char + 8) as &i8);
    if v7 == 2 {
        goto LABEL_0x548d77;
    }
    v4 = 0;
    v5 = 0;
    v6 = v0;
    loop {
        v3 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v4);
        if !v3 {
            break;
        }
        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3;
        v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v3 as &char + 16) as &i128);
        v2 = struct40 {
            field_0: v11 as u128
            field_16: v13 as u128
            field_32: *((&v3 as &char + 32) as &i64)
        };
        v8 = std::fs::DirEntry::path(&v2);
        v1 = std::fs::remove_file(&v8);
    }
    return std::fs::remove_dir(a0, a1);
}
