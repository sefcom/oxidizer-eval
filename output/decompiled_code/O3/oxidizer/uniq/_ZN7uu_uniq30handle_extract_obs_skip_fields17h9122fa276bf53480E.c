fn uu_uniq::handle_extract_obs_skip_fields(a0: &u64, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i8;  // [sp-0xca]
    let v1: i8;  // [sp-0xc9]
    let v2: i128;  // [sp-0xc8], Other Possible Types: struct24
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i64;  // [sp-0x98]
    let v7: struct24;  // [sp-0x90], Other Possible Types: i192
    let v8: i192;  // [sp-0x78], Other Possible Types: struct16, struct24
    let v9: struct40;  // [bp-0x60]
    let v10: struct24;  // [sp-0x38], Other Possible Types: i192
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v14: i64;  // rax

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
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, a2);
    v12 = v6;
    if !v12 {
        v2 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
        *((a0 + 16) as &struct24) = v2.field_16;
        *(a0 as &i128) = v2;
    } else {
        if v0 {
            *(a3 as &i64) = 0x8000000000000000;
        } else {
            v8 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v5, v5 + v12 * 4);
            if *(a3 as &i64) != 0x8000000000000000 {
                v8 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((a3 + 8) as &i64), *((a3 + 16) as &i64) + *((a3 + 8) as &i64)), v13);
            }
            v3 = *((&v8 as &char + 16) as &i64);
            v2 = v8;
            *((a3 + 16) as &i64) = v3;
            *(a3 as &i128) = v2;
        }
        v14 = *((&v7 as &char + 16) as &i64);
        if v14 <= 1 {
            *(a0 as &i64) = 0x8000000000000000;
        } else {
            v10 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(*((&v7 as &char + 8) as &i64), *((&v7 as &char + 8) as &i64) + v14 * 4);
            *((a0 + 16) as &i64) = *((&v10 as &char + 16) as &i64);
            *(a0 as &i192) = v10;
        }
    }
    return;
}
