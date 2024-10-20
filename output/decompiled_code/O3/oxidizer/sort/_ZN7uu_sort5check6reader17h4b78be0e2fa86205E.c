fn uu_sort::check::reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x118]
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [sp-0x108]
    let v3: i64;  // [sp-0x100]
    let v4: i8;  // [bp-0xe9]
    let v5: i8;  // [bp-0xe8]
    let v6: i64;  // [sp-0xd8]
    let v7: i64;  // [sp-0xd0]
    let v8: i64;  // [sp-0xc8]
    let v9: i64;  // [sp-0xc0]
    let v10: i8;  // [bp-0xb8]
    let v11: i8;  // [bp-0xb0]
    let v12: i896;  // [sp-0xa8], Other Possible Types: Enum
    let v15: i64;  // r8
    let v16: i64;  // rbx
    let v17: i64;  // rax
    let v18: i64;  // rax

    v6 = 0;
    v7 = 1;
    v8 = 0;
    v9 = a2;
    loop {
        v12 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9, a2);
        if v12 == 0x8000000000000000 {
LABEL_4f3300:
            if *(a1 as &i64) {
                v17();
            }
            break;
        } else {
            v3 = a4;
            v2 = *((a4 + 153) as &i8);
            v1 = &v4;
            v0 = &v5;
            uu_sort::chunks::read(&v10, a3, &v12, 0, v15, &v6);
            v16 = v10;
            if v16 {
                if !*(a1 as &i64) {
                    return v16;
                }
                v18();
            }
            if !v11 {
                goto LABEL_4f3300;
            }
        }
    }
    return 0;
}
