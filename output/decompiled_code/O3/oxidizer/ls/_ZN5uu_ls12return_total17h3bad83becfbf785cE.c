fn uu_ls::return_total(a0: &u64, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i64;  // [bp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [sp-0x70]
    let v9: i192;  // [sp-0x60], Other Possible Types: struct24
    let v10: i192;  // [sp-0x48], Other Possible Types: struct24
    let v12: struct8;  // rax
    let v14: i64;  // r12
    let v17: i64;  // r14
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // rcx

    v4 = a1;
    v5 = a2 * 304 + a1;
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v12 {
        v14 = 0;
    } else {
        v14 = 0;
        do {
            v0 = uu_ls::PathData::get_metadata(v12, a4);
            if !v0 {
                v17 = v0;
            }
            v14 += core::option::Option<T>::map_or(v17, *((a3 + 216) as &i64), *((a3 + 241) as &i8));
            v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v12);
    }
    if *((a3 + 238) as &i8) {
        v19 = uu_ls::dired::indent(a4);
        if v19 {
            v20 = a0;
            *((v20 + 8) as &i64) = v19;
            *((v20 + 16) as &i64) = v21;
            *(v20 as &i64) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    v10 = uu_ls::display_size(v14, *((a3 + 241) as &i8));
    v0 = &v10;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = a3 + 250;
    v3 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v4 = "total ";
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    v9 = core::option::Option<T>::map_or_else(&v4);
    v22 = *((&v9 as &char + 16) as &i64);
    v23 = a0;
    *((v23 + 16) as &i64) = v22;
    *(v23 as &i192) = v9;
    return v22;
}
