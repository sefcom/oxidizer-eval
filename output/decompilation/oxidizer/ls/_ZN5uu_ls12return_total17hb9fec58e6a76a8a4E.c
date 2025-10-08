fn uu_ls::return_total(a0: i64, a1: void*, a2: u64, a3: i64, a4: u64) -> long long {
    let v0: void*;  // [bp-0xc0]
    let v1: u64;  // [bp-0xb0]
    let v2: alloc::string::String;  // [bp-0x60]
    let v3: u64;  // [bp-0x50]
    let v4: struct24;  // [bp-0x48]
    let v6: u64;  // rbx
    let v7: void*;  // r15
    let v8: u64;  // rbx
    let v9: u64;  // rbx
    let v10: i64;  // rbx
    let v11: u64;  // rax
    let v12: u64;  // rdx

    if a2 {
        do {
            v8 = v6;
            v1 = uu_ls::PathData::get_metadata(a1, a4);
            v7 += core::option::Option<T>::map_or((v1 ? &v1 : 0), *((a3 + 216) as &i64), *((a3 + 249) as &i8));
            a1 += 304;
            v9 = v8 - 304;
            v6 = v9;
        } while (v8 != 304);
        v10 = a3;
        if *((v10 + 246) as &i8) {
            goto LABEL_59c020;
        }
    } else {
        v7 = 0;
        v10 = a3;
        if *((v10 + 246) as &i8) {
LABEL_59c020:
            v11 = uu_ls::dired::indent(a4);
            if v11 {
                *(&v0[8] as &u64) = v11;
                *(&v0[16] as &u64) = v12;
                *(v0 as &i64) = 0x8000000000000000;
                return 0x8000000000000000;
            }
        }
    }
    v4 = uu_ls::display_size(v7, *((v10 + 249) as &i8));
    v2 = format!("total {}{}", &v4, v10 + 258);
    *(&v0[16] as &u64) = v3;
    *(v0 as &i128) = *(&v2.vec.buf.inner.cap as &i128);
    return v3;
}
