fn uu_numfmt::parse_unit_size_suffix(a0: i64, a1: i64) -> long long {
    let v0: u32;  // [bp-0x24]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x20], Other Possible Types: struct16
    let v7: u64;  // rdx
    let v9: u8;  // al
    let v13: &mut [u8];  // rax:rdx
    let v14: core::option::Option<u32>;  // rax:rax

    if !a1 {
        return 1;
    }
    v1 = struct16 {
        field_0: a0
        field_8: a0 + a1
    };
    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a0
        }
        end_or_len: a0 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v14 = core::str::validations::next_code_point(&v1) as u128;
    match v14 {
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
        Some(_) => {
            v1 = struct16 {
                field_0: &g_422450
                field_8: &g_422468
            };
            v1 = struct16 {
                field_0: &g_422450
                field_8: &g_422468
            };
            if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v1, &vvar_66{reg 32}) != 1 {
                return 0;
            }
            if a1 == 1 {
                return 1;
            } else if a1 == 2 {
                v0 = 0;
                v13 = core::char::methods::encode_utf8_raw(&v0 as u32, a1, v7);
                v9 = core::slice::<impl [T]>::ends_with() as u8;
            }
            return 0;
        },
    }
}
