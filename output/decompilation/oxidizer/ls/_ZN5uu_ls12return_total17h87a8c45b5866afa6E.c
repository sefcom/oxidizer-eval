fn uu_ls::return_total(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: String;  // [sp-0x60]
    let v4: struct24;  // [sp-0x48]
    let v6: struct8;  // rax
    let v8: i64;  // r12
    let v10: i64;  // rax

    v1 = a1;
    v2 = a2 * 304 + a1;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v6 {
        v8 = 0;
    } else {
        v8 = 0;
        do {
            v10 = uu_ls::PathData::get_metadata(v6, a4);
            v0 = v10;
            if v0 {
                v10 = &v0;
            }
            v8 += core::option::Option<T>::map_or(v10, *((a3 + 216) as &i64), *((a3 + 241) as &i8));
            v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v6);
    }
    if *((a3 + 238) as &i8) && uu_ls::dired::indent(a4) {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v11
            field_16: v14
        };
    }
    v4 = uu_ls::display_size(v8, *((a3 + 241) as &i8));
    v3 = format!("total {}{}", &v4, a3 + 250);
    return struct24 {
        field_0: *(&v3.ptr as &i128)
        field_16: v13
    };
}
