fn uu_split::handle_extract_obs_lines(a1: i64, a2: i64, a3: i64) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0xb9]
    let v1: void*;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: void*;  // [bp-0xa8]
    let v4: struct24;  // [bp-0xa0]
    let v5: u64;  // [bp-0x98]
    let v6: u64;  // [bp-0x90]
    let v7: struct24;  // [bp-0x88]
    let v8: u64;  // [bp-0x78]
    let v9: struct32;  // [bp-0x70]
    let v10: struct24;  // [bp-0x50]
    let v11: u64;  // [bp-0x40]
    let v12: std::sys::os_str::bytes::Buf;  // [bp-0x38]
    let v14: i64;  // rdi
    let v15: u128;  // xmm0
    let v16: i64;  // rdi

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v0 = 0;
    v9 = struct32 {
        field_0: a0
        field_8: a0 + a1
        field_16: &v0
        field_24: &v1
    };
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
    if v3 {
        v7 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(0x4, 4 + v3 * 4);
        *((a2 + 16) as &u64) = v8;
        *(a2 as &u128) = v7.field_0;
        if v6 < 2 {
            *(v16 as &i64) = 0x8000000000000000;
        } else {
            v10 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v5, v5 + v6 * 4);
            *((v14 + 16) as &u64) = v11;
            v15 = v10.field_0;
LABEL_4c9e7a:
            *(v14 as &u128) = v15;
        }
    } else {
        v12 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
        *((v14 + 16) as &u64) = v12.inner.len;
        v15 = *(&v12.inner.buf.cap as &i128);
        goto LABEL_4c9e7a;
    }
    return;
}
