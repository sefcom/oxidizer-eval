fn uu_uniq::handle_extract_obs_skip_chars(a1: i64, a2: i64, a3: &struct24) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0x98], Other Possible Types: struct16
    let v1: u64;  // [bp-0x90]
    let v2: void*;  // [bp-0x88]
    let v3: std::sys::os_str::bytes::Buf;  // [bp-0x80], Other Possible Types: u128
    let v4: struct24;  // [bp-0x70], Other Possible Types: u64
    let v5: core::slice::iter::Iter<u8>;  // [bp-0x68], Other Possible Types: u128
    let v6: u64;  // [bp-0x58]
    let v7: core::slice::iter::Iter<u8>;  // [bp-0x48]
    let v10: u32;  // edx
    let v11: i64;  // rdi
    let v12: i64;  // rdi
    let v14: core::option::Option<u32>;  // rax:rax
    let v15: core::option::Option<u32>;  // rax:rax

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v7 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a0
        }
        end_or_len: a0 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v15 = core::str::validations::next_code_point(&v7) as u128;
    v5 = *(&v7.ptr as &i128);
    loop {
        v14 = core::str::validations::next_code_point(&v5) as u128;
        match v14 {
            Some(_) => {
                if v10 - 48 < 10 {
                    v0 = alloc::vec::Vec<T,A>::push(v10 as u64);
                } else {
                    *(a2 as &i64) = 0x8000000000000000;
                    v3 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
                    *((v11 + 16) as &struct24) = v4;
                    *(v11 as &u128) = v3;
                    break;
                }
            },
            None => {
                if v2 {
                    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(0x4, 4 + v2 * 4, a2);
                    v6 = v4;
                    v5 = v3;
                    *((a2 + 16) as &u64) = v6;
                    *(a2 as &u128) = v5;
                    *(v12 as &i64) = 0x8000000000000000;
                    break;
                } else {
                    v3 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
                }
            },
        }
    }
    return;
}
