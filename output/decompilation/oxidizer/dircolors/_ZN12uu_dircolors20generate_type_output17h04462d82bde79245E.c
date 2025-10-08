fn uu_dircolors::generate_type_output(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u32;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28], Other Possible Types: u192
    let v4: iNone;  // [bp-0x28]

    if *(a1 as &i8) == 2 {
        core::iter::traits::iterator::Iterator::collect(&v0, _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0, _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 864);
        v3 = alloc::str::join_generic_copy(v1, v2, "\n");
    } else {
        core::iter::traits::iterator::Iterator::collect(&v0, _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0, _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 864);
        v3 = alloc::str::join_generic_copy(v1, v2, ":");
    }
    return struct24 {
        field_0: v4
        field_16: *((&v3 as &char + 16) as &i64)
    };
}
