fn uu_ls::return_total(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i64;  // [bp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [sp-0x70]
    let v11: struct24;  // [sp-0x48], Other Possible Types: i192
    let v13: struct8;  // rax
    let v15: i64;  // r12
    let v18: i64;  // r14

    v4 = a1;
    v5 = a2 * 304 + a1;
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v13 {
        v15 = 0;
    } else {
        v15 = 0;
        do {
            v0 = uu_ls::PathData::get_metadata(v13, a4);
            if v0 {
                v18 = stack_base + -176;
            } else {
                v18 = v0;
            }
            v15 += core::option::Option<T>::map_or(v18, *((a3 + 216) as &i64), *((a3 + 241) as &i8));
            v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v13);
    }
    if *((a3 + 238) as &i8) {
        uu_ls::dired::indent(a4);
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v20
            field_16: v21
        };
    }
    v11 = uu_ls::display_size(v15, *((a3 + 241) as &i8));
    v0 = &v11;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = a3 + 250;
    v3 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v4 = "total ";
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    core::option::Option<T>::map_or_else();
    return struct24 {
        field_0: v9
        field_16: v22
    };
}
