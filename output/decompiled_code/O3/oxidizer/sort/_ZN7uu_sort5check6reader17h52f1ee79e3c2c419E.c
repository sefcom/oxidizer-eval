fn uu_sort::check::reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x118]
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [sp-0x108]
    let v3: i64;  // [sp-0x100]
    let v4: i8;  // [bp-0xe9]
    let v5: i8;  // [bp-0xe8]
    let v6: struct8;  // [bp-0xd8]
    let v7: i64;  // [sp-0xd0]
    let v8: i64;  // [sp-0xc8]
    let v9: i64;  // [sp-0xc0]
    let v10: struct16;  // [sp-0xb8], Other Possible Types: i128
    let v11: Option<struct120>;  // [sp-0xa8], Other Possible Types: i960
    let v14: i64;  // r8
    let v15: i64;  // r12

    v6 = struct8 {
        field_16: 0
    };
    v7 = 1;
    v8 = 0;
    v9 = a2;
    loop {
        v11 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v11 == 0x8000000000000000 {
            break;
        }
        v3 = a4;
        v2 = *((a4 + 153) as &i8);
        v1 = &v4;
        v0 = &v5;
        v10 = uu_sort::chunks::read(a3, &v11, 0, v14, &v6);
        v15 = v10;
        if v15 {
            return v15;
        }
        if !*((&v10 as &char + 8) as &i8) {
            break;
        }
    }
    return 0;
}
