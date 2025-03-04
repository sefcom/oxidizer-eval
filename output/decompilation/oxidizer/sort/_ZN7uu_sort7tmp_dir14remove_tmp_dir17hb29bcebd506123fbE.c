fn uu_sort::tmp_dir::remove_tmp_dir(a0: u32, a1: u32) -> u64 {
    let v0: struct9;  // [sp-0x130]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: struct40;  // [bp-0x108]
    let v4: struct8;  // [sp-0xe0]
    let v5: i8;  // [bp-0xd0]
    let v7: i64;  // [sp-0xb8]
    let v8: i64;  // [sp-0x88]
    let v9: struct9;  // [sp-0x58]
    let v10: i8;  // [sp-0x50]
    let v11: struct24;  // [sp-0x48]
    let v13: i64;  // rbx
    let v14: i64;  // r14
    let v16: iNone;  // ymm0
    let v17: iNone;  // ymm1

    v13 = a1;
    v14 = a0;
    v0 = std::fs::read_dir(a0, a1);
    if v10 == 2 {
        return std::fs::remove_dir(v14, v13);
    }
    v1 = a0;
    v2 = a1;
    v7 = 0;
    v8 = 0;
    v9 = v0;
    loop {
        v4 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v7);
        if !v4.field_0 {
            break;
        }
        v16 = v16 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v4 as &i128);
        v17 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v5 as &i128);
        v3 = struct40 {
            field_0: v18
            field_16: v19
            field_32: *(&v6 as &i64)
        };
        v11 = std::fs::DirEntry::path(&v3);
    }
    v13 = v2;
    v14 = v1;
}
