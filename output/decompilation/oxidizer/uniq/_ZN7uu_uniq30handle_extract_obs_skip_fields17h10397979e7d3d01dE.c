fn uu_uniq::handle_extract_obs_skip_fields(a1: i64, a2: i64, a3: i64) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: alloc::string::String;  // [bp-0xca]
    let v1: u8;  // [bp-0xc9]
    let v2: alloc::string::String;  // [bp-0xc8], Other Possible Types: u128
    let v3: u64;  // [bp-0xb8], Other Possible Types: struct24
    let v4: void*;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa0]
    let v6: void*;  // [bp-0x98]
    let v7: struct24;  // [bp-0x90]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: struct24;  // [bp-0x78]
    let v11: struct24;  // [bp-0x68]
    let v12: u320;  // [bp-0x60]
    let v13: struct24;  // [bp-0x38]
    let v15: i64;  // rdi
    let v16: u128;  // xmm0
    let v18: i64;  // rdi
    let v20: &[u8];  // rax:rdx

    v4 = 0;
    v5 = 4;
    v6 = 0;
    v1 = 0;
    v0 = 0;
    v12 = struct40 {
        field_0: a0
        field_8: a0 + a1
        field_16: &v0
        field_24: &v1
        field_32: &v4
    };
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
    if v6 {
        if v0 {
            *(a2 as &i64) = 0x8000000000000000;
        } else {
            v10 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(0x4, 4 + v6 * 4);
            if *(a2 as &i64) != 0x8000000000000000 {
                v20 = core::slice::iter::Iter<T>::make_slice(*((a2 + 8) as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v10, v20.ptr, a1);
            }
            v3 = v11;
            memcpy(&v2 as u8, &v10, 16);
            *((a2 + 16) as &struct24) = v3;
            *(a2 as &u128) = v2;
        }
        if v9 < 2 {
            *(v18 as &i64) = 0x8000000000000000;
        } else {
            v13 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v8, v8 + v9 * 4);
            *((v15 + 16) as &u64) = v13.field_16;
            v16 = v13.field_0;
LABEL_4bdab2:
            *(v15 as &u128) = v16;
        }
    } else {
        v2 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
        *((v15 + 16) as &u64) = v3;
        v16 = *(&v2.vec.buf.ptr as &i128);
        goto LABEL_4bdab2;
    }
    return;
}
