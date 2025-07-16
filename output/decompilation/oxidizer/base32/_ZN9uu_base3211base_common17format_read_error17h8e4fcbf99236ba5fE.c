fn uu_base32::base_common::format_read_error() -> long long {
    let v0: u64;  // [bp-0xd8]
    let v1: u64;  // [bp-0xd0]
    let v2: void*;  // [bp-0xc8]
    let v3: struct24;  // [bp-0xc0], Other Possible Types: u64
    let v4: u64;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0], Other Possible Types: struct_0 *
    let v6: u64;  // [bp-0xa8]
    let v7: void*;  // [bp-0xa0]
    let v8: i64;  // [bp-0x88]
    let v10: u64;  // [bp-0x80]
    let v12: struct24;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: u32;  // [bp-0x50]
    let v15: u192;  // [bp-0x48]
    let v17: core::option::Option<(usize, char)>;  // rax
    let v18: u64;  // rdx
    let v19: u64;  // rdx
    let v20: u64;  // rdx
    let v22: u64;  // rdi

    v12 = <T as alloc::string::ToString>::to_string(&vvar_69{reg 64});
    v3 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v14, 0);
    v0 = v4;
    v1 = v5;
    v2 = 0;
    v15 = core::str::iter::CharIndices {
        front_offset: v13
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v14 + v13
                }
                end_or_len: 0
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
    };
    v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v15) as u64;
    if v18 != 0x110000 {
        do {
            v20 = v19;
            if let None = v17 {
                alloc::string::String::push(&v0, v20 as u8);
            }
        } while ((v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v15) as u64, v19 as u32 != 0x110000));
    }
    v8 = &v0;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = "read error: ";
    v4 = 1;
    v7 = 0;
    v5 = &v8;
    v6 = 1;
    v3 = core::option::Option<T>::map_or_else(v19);
    return v22;
}
