fn uu_uniq::handle_extract_obs_skip_chars(a1: i64, a2: i64, a3: &struct24) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0x98], Other Possible Types: struct16
    let v1: u64;  // [bp-0x90]
    let v2: void*;  // [bp-0x88]
    let v3: std::sys::os_str::bytes::Buf;  // [bp-0x80], Other Possible Types: u128
    let v4: u64;  // [bp-0x70]
    let v5: u8;  // [bp-0x68]
    let v6: u128;  // [bp-0x68]
    let v7: u64;  // [bp-0x58]
    let v8: u128;  // [bp-0x48]
    let v11: u32;  // edx
    let v12: i64;  // rdi
    let v13: i64;  // rdi
    let v15: core::option::Option<u32>;  // rax:rax
    let v16: core::option::Option<u32>;  // rax:rax

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v8 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a0
        }
        end_or_len: a0 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v16 = core::str::validations::next_code_point(&v8) as u128;
    memcpy(&v5, &v8, 16);
    loop {
        vvar_171{stack -104} = core::slice::iter::Iter<u8> OrderedDict({0: core::ptr::non_null::NonNull<u8> OrderedDict({0: 𝜙@128b [((4971518, None), vvar_145{stack -104}), ((4971468, None), None)]}), 16: core::marker::PhantomData<&u8> OrderedDict()})
        v15 = core::str::validations::next_code_point(&v6) as u128;
        match v15 {
            Some(_) => {
                if v11 - 48 < 10 {
                    v0 = alloc::vec::Vec<T,A>::push(v11 as u64);
                } else {
                    *(a2 as &i64) = 0x8000000000000000;
                    v3 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
                    *((v12 + 16) as &u64) = v4;
                    *(v12 as &u128) = v3;
                    break;
                }
            },
            None => {
                if v2 {
                    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(0x4, 4 + v2 * 4, a2);
                    v7 = v4;
                    memcpy(&v6, &v3 as u8, 16);
                    *((a2 + 16) as &u64) = v7;
                    *(a2 as &u128) = v6;
                    *(v13 as &i64) = 0x8000000000000000;
                    break;
                } else {
                    v3 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
                }
            },
        }
    }
    return;
}
