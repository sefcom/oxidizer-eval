fn uu_ls::return_total(a0: &u64, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i64;  // [bp-0xb0]
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i192;  // [sp-0x60]
    let v4: struct24;  // [sp-0x48]
    let v6: struct8;  // rax
    let v8: i64;  // r12
    let v11: i64;  // r14
    let v13: i64;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // rdx
    let v16: i64;  // rax
    let v17: i64;  // rcx

    v1 = a1;
    v2 = a2 * 304 + a1;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v6 {
        v8 = 0;
    } else {
        v8 = 0;
        do {
            v0 = uu_ls::PathData::get_metadata(v6, a4);
            if !v0 {
                v11 = v0;
            }
            v8 += core::option::Option<T>::map_or(v11, *((a3 + 216) as &i64), *((a3 + 241) as &i8));
            v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v6);
    }
    if *((a3 + 238) as &i8) {
        v13 = uu_ls::dired::indent(a4);
        if v13 {
            v14 = a0;
            *((v14 + 8) as &i64) = v13;
            *((v14 + 16) as &i64) = v15;
            *(v14 as &i64) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    v4 = uu_ls::display_size(v8, *((a3 + 241) as &i8));
    v3 = format!("total {:?}{:?}", &v4, a3 + 250);
    v16 = *((&v3 as &char + 16) as &i64);
    v17 = a0;
    *((v17 + 16) as &i64) = v16;
    *(v17 as &i192) = v3;
    return v16;
}
