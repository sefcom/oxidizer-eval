fn uu_kill::handle_obsolete(a0: i64) -> u64 {
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x30], Other Possible Types: u32
    let v2: u64;  // rsi
    let v3: u64;  // rdx
    let v5: u64;  // rcx
    let v6: core::option::Option<&str>;  // rax
    let v7: core::option::Option<u32>;  // rax:rax
    let v8: &mut [u8];  // rax:rdx

    if *((a0 + 16) as &i64) >= 3 {
        v0 = 0;
        v8 = core::char::methods::encode_utf8_raw(&v0 as u32, v2, v3);
        v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v8.data_ptr, *((*((a0 + 8) as &i64) + 32) as &i64), *((*((a0 + 8) as &i64) + 40) as &i64), v5) as u64;
        if let Some(_) = v6 {
            v0 = core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v6
                }
                end_or_len: v6 + v3
                _marker: core::marker::PhantomData<&u8> { }
            };
            v7 = core::str::validations::next_code_point(&v0) as u128;
            if (!(v7 as i8 & 1) || v3 as u32 - 97 >= 26 && (v3 as u32 < 128 || !core::unicode::unicode_data::lowercase::lookup(v3 as u32 as u8) as u8)) && uucore::features::signals::signal_by_name_or_value(v0.ptr.pointer, v3) == 1 {
                alloc::vec::Vec<T,A>::remove(&v0, a0);
                return 1;
            }
        }
    }
    return 0;
}
