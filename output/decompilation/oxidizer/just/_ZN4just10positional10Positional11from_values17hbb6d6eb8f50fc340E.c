fn just::positional::Positional::from_values(a0: i768, a1: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x138], Other Possible Types: struct24, u128
    let v1: u64;  // [bp-0x128]
    let v2: struct24;  // [bp-0x118]
    let v3: struct24;  // [bp-0x118]
    let v4: u64;  // [bp-0x110]
    let v5: u64;  // [bp-0x108]
    let v6: u64;  // [bp-0x100]
    let v7: struct24;  // [bp-0xf8]
    let v8: u64;  // [bp-0xf8]
    let v9: struct4;  // [bp-0xf8]
    let v10: core::fmt::rt::Argument;  // [bp-0xe8]
    let v11: struct16;  // [bp-0xd8]
    let v12: struct16;  // [bp-0xd8]
    let v13: struct16;  // [bp-0xd8]
    let v14: void*;  // [bp-0xd8]
    let v15: core::option::Option<(&u16, &mut u32)>;  // [bp-0xd0]
    let v16: void*;  // [bp-0xc8]
    let v17: void*;  // [bp-0xc0]
    let v18: struct16;  // [bp-0xc0]
    let v19: u64;  // [bp-0xb8]
    let v20: void*;  // [bp-0xb0]
    let v21: u384;  // [bp-0xa0]
    let v22: struct64;  // [bp-0x70]
    let v24: core::result::Result<&str, core::str::error::Utf8Error>;  // r15
    let v25: u64;  // rdx
    let v27: Option<struct32>;  // [bp-0x118], Other Possible Types: struct24

    v17 = 0;
    v19 = 8;
    v20 = 0;
    v8 = 0x8000000000000000;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    if *(a1 as &i64) {
        v22 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
        loop {
            v24 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v22);
            if let Ok(_) = v24 {
                break;
            }
            if v7 != 0x8000000000000000 || v16 {
                v27 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, v25);
                v0 = v3;
                v13 = alloc::vec::Vec<T,A>::push(&v0, "src/positional.rs");
            } else {
                just::positional::Positional::override_from_value(&v21, v24, v25);
                if v21 as i64 != 0x8000000000000000 {
                    v18 = alloc::vec::Vec<T,A>::push(&v21);
                } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v25, ".") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v25, "..") {
                    v27 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, v25);
                    v1 = v5;
                    v0 = v27.field_0;
                    v10 = v1;
                    v9 = v0;
                } else if (core::str::<impl str>::rfind(v24, v25) & 1) {
                    v27 = core::str::<impl str>::split_at_checked(v24, v25, v25 + 1);
                    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v27 as i64, v4);
                    v1 = v5;
                    v0 = v2.field_0;
                    v10 = v1;
                    v9 = v0;
                    if v6 {
                        v27 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, v6);
                        v0 = v3;
                        v11 = alloc::vec::Vec<T,A>::push(&v0, "src/positional.rs");
                    }
                } else {
                    v27 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, v25);
                    v0 = v3;
                    v12 = alloc::vec::Vec<T,A>::push(&v0, "src/positional.rs");
                }
            }
        }
    }
    *((a0 + 16) as &void*) = v16;
    *(a0 as &u64) = v13.field_0;
    *((a0 + 8) as &i64) = 8;
    *((a0 + 24) as &void*) = v17;
    *((a0 + 32) as &i64) = 8;
    *((a0 + 40) as &i64) = 0;
    *((a0 + 48) as &struct4) = v9;
    *((a0 + 64) as &core::fmt::rt::Argument) = v10;
    return v10;
}
