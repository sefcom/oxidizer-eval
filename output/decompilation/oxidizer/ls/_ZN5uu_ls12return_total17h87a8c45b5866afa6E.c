fn uu_ls::return_total(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: i64;  // [bp-0xc0]
    let v1: core::fmt::Arguments;  // [bp-0xb0], Other Possible Types: struct_2 *
    let v2: u64;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: u64;  // [bp-0x98]
    let v5: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x90], Other Possible Types: struct40
    let v6: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x88]
    let v7: u8;  // [bp-0x60]
    let v8: u64;  // [bp-0x50]
    let v9: u8;  // [bp-0x48]
    let v11: alloc::raw_vec::Cap;  // rax
    let v12: std::ffi::os_str::OsString;  // r12
    let v13: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v14: u64;  // rdx

    v5 = a1;
    v6 = a2 * 304 + a1;
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v11 {
        do {
            v1 = uu_ls::PathData::get_metadata(v11, a4);
            v12 += core::option::Option<T>::map_or((v1 ? &v1 : 0), *((a3 + 216) as &i64), *((a3 + 241) as &i8));
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v11);
    }
    if *((a3 + 238) as &i8) {
        v13 = uu_ls::dired::indent(a4);
        if let Ok(_) = v13 {
            *((v0 + 8) as &core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>) = v13;
            *((v0 + 16) as &u64) = v14;
            *(v0 as &i64) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    uu_ls::display_size(&v9, v12, *((a3 + 241) as &i8));
    v1 = &v9;
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = a3 + 250;
    v4 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v5 = struct40 {
        field_0: "total "
        field_8: 2
        field_16: &v1
        field_24: 2
        field_32: 0
    };
    core::option::Option<T>::map_or_else(&v7, &v5);
    *((v0 + 16) as &u64) = v8;
    *(v0 as &u128) = v7;
    return v8;
}
