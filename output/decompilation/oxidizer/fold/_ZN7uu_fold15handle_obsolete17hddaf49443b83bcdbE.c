fn uu_fold::handle_obsolete(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x90], Other Possible Types: u32
    let v1: struct16;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: void*;  // [bp-0x78]
    let v4: struct24;  // [bp-0x60]
    let v5: u128;  // [bp-0x48]
    let v6: i8;  // [bp-0x38]
    let v8: u64;  // rax
    let v9: i64;  // rdx
    let v12: u64;  // rsi
    let v13: i64;  // r12
    let v15: u64;  // rcx
    let v16: u64;  // rbx
    let v17: core::option::Option<&str>;  // rax
    let v18: &mut [u8];  // rax:rdx
    let v19: core::option::Option<u32>;  // rax:rax

    v4 = struct24 {
        field_0: a1
        field_8: a1 + a2 * 24
        field_16: 0
    };
    v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v4);
    if v9 {
        do {
            v13 = v9;
            v0 = 0;
            v18 = core::char::methods::encode_utf8_raw(&v0 as u32, v12, v9);
            if core::slice::<impl [T]>::starts_with(*((v13 + 8) as &i64), *((v13 + 16) as &i64), v18.data_ptr, v15) {
                v1 = struct16 {
                    field_0: *((v13 + 8) as &i64)
                    field_8: *((v13 + 16) as &i64) + *((v13 + 8) as &i64)
                };
                if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v1) {
                    v19 = core::str::validations::next_code_point(&v1) as u128;
                    if let Some(_) = v19 {
                        if v9 as u32 - 48 < 10 {
                            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v5, a1, a2);
                            alloc::vec::Vec<T,A>::remove(&v1, &v5, v8);
                            v16 = *((v13 + 16) as &i64);
                            v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*((v13 + 8) as &i64), v16, a2) as u64;
                            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, a2);
                            *(&v3[40] as &u64) = v2;
                            *(&v3[24] as &i128) = *(&v0.field_0 as &i128);
                            *(&v3[16] as &i64) = *(&v6 as &i64);
                            *(v3 as &u128) = v5;
                            return a0;
                        }
                    }
                }
            }
            v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v4);
        } while (v9);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3, a1, a2);
    *(&v3[24] as &i64) = 0x8000000000000000;
    return a0;
}
