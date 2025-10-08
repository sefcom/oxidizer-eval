fn uu_uniq::handle_extract_obs_skip_chars(a1: i64, a2: i32, a3: &struct24) -> : struct8 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x90]
    let v1: void*;  // [bp-0x88], Other Possible Types: struct16
    let v2: u64;  // [bp-0x80]
    let v3: void*;  // [bp-0x78]
    let v4: struct24;  // [bp-0x70]
    let v5: u64;  // [bp-0x60]
    let v6: core::slice::iter::Iter<u8>;  // [bp-0x58]
    let v7: u128;  // [bp-0x48]
    let v8: u64;  // [bp-0x38]
    let v10: u64;  // r15
    let v12: u32;  // edx
    let v13: core::option::Option<u32>;  // rax:rax
    let v14: core::option::Option<u32>;  // rax:rax

    v10 = a2;
    v1 = 0;
    v2 = 4;
    v3 = 0;
    v6 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2 as u64
        _marker: core::marker::PhantomData<&u8> { }
    };
    v13 = core::str::validations::next_code_point(&v6) as u128;
    v7 = *(&v6.ptr as &i128);
    loop {
        v14 = core::str::validations::next_code_point(&v7) as u128;
        if let None = v14 {
            break;
        }
        if v12 - 48 >= 10 {
            *(a3 as &i64) = 0x8000000000000000;
            v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v10);
            *((v0 + 16) as &u64) = v5;
            *(v0 as &u128) = v4.field_0;
        }
        v1 = alloc::vec::Vec<T,A>::push(v12, "src/uu/uniq/src/uniq.rs");
    }
    if !v3 {
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v10);
        *((v0 + 16) as &u64) = v5;
        *(v0 as &u128) = v4.field_0;
    }
    v4 = core::iter::traits::iterator::Iterator::collect(v2, v2 + v3 * 4);
    v8 = v5;
    v7 = v4.field_0;
    *(&a3[16] as &u64) = v8;
    *(a3 as &u128) = v7;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
