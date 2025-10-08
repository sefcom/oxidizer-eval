fn fd::fmt::FormatTemplate::parse(a0: i64, a1: i64, a2: i64) {
    let v0: void*;  // [bp-0xc0]
    let v1: u64;  // [bp-0xb8]
    let v2: void*;  // [bp-0xb0]
    let v3: i64;  // [bp-0xa8]
    let v4: void*;  // [bp-0xa0]
    let v5: struct16;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: void*;  // [bp-0x90]
    let v8: u32;  // [bp-0x84]
    let v9: core::option::Option<&str>;  // [bp-0x80]
    let v10: struct16;  // [bp-0x78], Other Possible Types: u128
    let v11: u32;  // [bp-0x78]
    let v12: u128;  // [bp-0x78]
    let v14: i64;  // [bp-0x58]
    let v15: struct32;  // [bp-0x50]
    let v16: i64;  // [bp-0x48]
    let v17: i64;  // [bp-0x40]
    let v19: void*;  // rax
    let v20: i64;  // 4096
    let v21: i64;  // r12
    let v22: Result<struct232, struct16>;  // r15
    let v23: Result<struct24, struct24>;  // r14
    let v24: core::option::Option<&str>;  // rax
    let v25: i64;  // r14
    let v26: core::option::Option<&str>;  // rax
    let v27: u64;  // rdx
    let v29: core::option::Option<&str>;  // rax
    let v31: core::option::Option<&str>;  // rax
    let v33: i64;  // rdx
    let v36: &mut [u8];  // rax:rdx

    v4 = 0;
    v6 = 8;
    v7 = 0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v19 = std::sync::once_lock::OnceLock<T>::get_or_try_init();
    v20 = a2;
    loop {
        v21 = v33;
        aho_corasick::ahocorasick::AhoCorasick::try_find(&v10, v19, a1, v21);
        v15 = core::result::Result<T,E>::expect(&v10);
        if v15.field_0 as i32 != 1 {
            break;
        }
        v22 = v16;
        v23 = v17;
        if *((&v15.field_16 as &char + 8) as &i32) < 2 {
            v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v22 + 1, a1, v21) as u64;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v24, v27 + v24);
            a1 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v23, a1, v21) as u64;
            v10 = v10;
        } else {
            v8 = *((&v15.field_16 as &char + 8) as &i32);
            v3 = v23;
            v9 = a1;
            v25 = v21;
            v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v23, a1, v21) as u64;
            v11 = 0;
            v36 = core::char::methods::encode_utf8_raw(125, &v11, a2);
            a1 = v9;
            v21 = v25;
            if core::slice::<impl [T]>::starts_with(v26, v27, v36.data_ptr, v36.length) {
                v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v3, a1, v21) as u64;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v29, v27 + v29);
                a1 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3 + 1, a1, v21) as u64;
                v10 = v12;
            } else {
                v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v22, a1, v21) as u64;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v31, v27 + v31);
                v10 = v12;
                fd::fmt::token_from_pattern_id(&v10, v8);
                v5 = alloc::vec::Vec<T,A>::push(&v10, "src/fmt/mod.rs");
                a1 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, a1, v21) as u64;
                v10 = v10;
            }
        }
        v10 = v10;
    }
    if v21 {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, a1, v21 + a1);
    }
    if v7 {
        *((v14 + 24) as &void*) = v7;
        *((v14 + 8) as &i128) = *(&v5.field_0 as &i128);
        *(v14 as &i64) = 0;
        return;
    }
    *((v14 + 24) as &i64) = 0;
    *((v14 + 8) as &i128) = *(&v0 as &i128);
    *(v14 as &i64) = 1;
    return;
}
