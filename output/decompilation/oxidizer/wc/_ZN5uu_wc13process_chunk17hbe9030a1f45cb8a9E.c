fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v3: struct24;  // r13
    let v4: u64;  // rdx
    let v5: u8;  // bpl
    let v6: u64;  // rax
    let v7: core::option::Option<u32>;  // rax:rax
    let v8: core::option::Option<u32>;  // rax:rax

    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v7 = core::str::validations::next_code_point(&v0) as u128;
    if let Some(_) = v7 {
        do {
            if (v4 - 9) as u32 < 5 || v4 as u32 == 32 || v4 as u32 >= 128 && core::unicode::unicode_data::white_space::lookup(v4 as u8) as u8 {
                *(a3 as &i8) = 0;
            } else if !v5 {
                *(a3 as &i8) = 1;
                v3 += 1;
                *((a0 + 24) as &struct24) = v3;
                v5 = 1;
            }
        } while ((v8 = core::str::validations::next_code_point(&v0) as u128, v8 as i32));
    }
    return struct24 {
        field_0: *(a0 as &i64) + a2
        padding_8: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
