fn uu_numfmt::parse_unit_size_suffix(a0: i64, a1: i64) -> u64 {
    let v0: u32;  // [bp-0x24]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x20], Other Possible Types: struct16
    let v7: u64;  // rdx
    let v11: &mut [u8];  // rax:rdx
    let v12: core::option::Option<u32>;  // rax:rax

    if !a1 {
        return 1;
    }
    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a0
        }
        end_or_len: a0 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v12 = core::str::validations::next_code_point(&v1) as u128;
    match v12 {
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
        Some(_) => {
            v1 = struct16 {
                field_0: &g_41aec4
                field_8: &g_41aedc
            };
            if !(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v1, &vvar_67{reg 32}) as u8 & 1) {
                return 0;
            }
            if a1 == 2 {
                v0 = 0;
                v11 = core::char::methods::encode_utf8_raw(105, &v0, v7);
                if !core::slice::<impl [T]>::ends_with(a0 as u32, 2) as u8 {
                    return 0;
                }
            } else if a1 != 1 {
                return 0;
            }
            return 1;
        },
    }
}
