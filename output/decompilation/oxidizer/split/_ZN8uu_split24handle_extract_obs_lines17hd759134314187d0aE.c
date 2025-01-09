fn uu_split::handle_extract_obs_lines(a0: &Option<struct24>, a1: u32, a2: u32, a3: &struct24) -> u64 {
    let v0: i8;  // [sp-0xb9]
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i192;  // [sp-0xa0], Other Possible Types: struct24
    let v5: i192;  // [sp-0x88], Other Possible Types: struct24
    let v6: struct32;  // [bp-0x70]
    let v7: struct24;  // [sp-0x50]
    let v8: i192;  // [sp-0x38], Other Possible Types: struct24
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i128;  // xmm0

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v0 = 0;
    v6 = struct32 {
        field_0: a1
        field_8: a1 + a2
        field_16: &v0
        field_24: &v1
    };
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6);
    v10 = v3;
    if !v10 {
        v8 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
        *((a0 + 16) as &i64) = *((&v8 as &char + 16) as &i64);
        v12 = v8;
    }
    v5 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v2, v2 + v10 * 4);
    *((a3 + 16) as &i64) = *((&v5 as &char + 16) as &i64);
    *(a3 as &i192) = v5;
    v11 = *((&v4 as &char + 16) as &i64);
    if v11 >= 2 {
        v7 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 8) as &i64) + v11 * 4);
        return Some(struct24 {
            field_0: v12
            field_16: *((&v7 as &char + 16) as &i64)
        });
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
