fn uu_uniq::handle_extract_obs_skip_fields(a0: &Option<struct24>, a1: u32, a2: u32, a3: &Option<struct8>) -> u64 {
    let v0: i8;  // [sp-0xca]
    let v1: i8;  // [sp-0xc9]
    let v2: struct24;  // [sp-0xc8], Other Possible Types: int
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i64;  // [sp-0x98]
    let v7: struct24;  // [sp-0x90]
    let v8: struct16;  // [sp-0x78], Other Possible Types: struct24
    let v9: struct40;  // [bp-0x60]
    let v10: struct24;  // [sp-0x38]
    let v12: i64;  // rax
    let v13: i64;  // rax

    v4 = 0;
    v5 = 4;
    v6 = 0;
    v1 = 0;
    v0 = 0;
    v9 = struct40 {
        field_0: a1
        field_8: a1 + a2
        field_16: &v0
        field_24: &v1
        field_32: &v4
    };
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
    v12 = v6;
    if !v12 {
        v2 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
        return v2;
    }
    if v0 {
        *(a3 as &i64) = 0x8000000000000000;
    } else {
        v8 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v5, v5 + v12 * 4);
        if *(a3 as &i64) != 0x8000000000000000 {
            v8 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((a3 + 8) as &i64), *((a3 + 16) as &i64) + *((a3 + 8) as &i64)), a2);
        }
        *((a3 + 16) as &unsigned long) = v3;
        *(a3 as void*) = v2;
    }
    v13 = v7.field_16;
    if v13 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v7.field_8, v7.field_8 + v13 * 4);
    *((a0 + 16) as &u64) = v10.field_16;
}
