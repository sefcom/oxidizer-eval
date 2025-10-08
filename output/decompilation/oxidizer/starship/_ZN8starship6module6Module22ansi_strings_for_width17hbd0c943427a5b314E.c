fn starship::module::Module::ansi_strings_for_width(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [sp-0xa8], Other Possible Types: struct8, u64
    let v2: core::fmt::rt::Argument;  // [bp-0xa0]
    let v3: struct24;  // [bp-0x98]
    let v4: i64;  // [bp-0x90]
    let v5: struct16;  // [bp-0x88]
    let v6: struct16;  // [bp-0x78]
    let v7: struct24;  // [bp-0x68]
    let v8: struct32;  // [bp-0x50]

    v6 = struct16 {
        field_0: *((a1 + 56) as &i64)
        field_8: *((a1 + 64) as &i64) * 56 + *((a1 + 56) as &i64)
    };
    v5 = 0;
    v0 = 0;
    v2 = 8;
    v3 = 0;
    if *(core::option::Option<T>::get_or_insert_with(&v5, &v6) as &i64) {
        do {
            starship::module::ansi_line(&v7, &v5, a2, a3);
            v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
            v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v8);
        } while (*(core::option::Option<T>::get_or_insert_with(&v5, &v6) as &i64));
    }
    *((v4 + 16) as &i64) = 0;
    *(v4 as &i128) = *(&v0 as &i128);
    return v4;
}
