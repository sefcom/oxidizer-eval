fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x50]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v4: u64;  // r14
    let v5: u32;  // edx
    let v7: u8;  // bpl
    let v8: u32;  // r13d
    let v9: u64;  // rax
    let v10: core::option::Option<u32>;  // rax:rax
    let v11: core::option::Option<u32>;  // rax:rax

    v1 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v10 = core::str::validations::next_code_point(&v1) as u128;
    if let None = v10 {
        return struct24 {
            field_0: *(a0 as &i64) + a2
            padding_8: <UNKNOWN>
            field_32: <UNKNOWN>
        };
    }
    do {
        v8 = v5;
        if v8 - 9 < 5 || v8 == 32 || v8 >= 128 && core::unicode::unicode_data::white_space::lookup(v8) {
            *(a3 as &i8) = 0;
        } else if !v7 {
            *(a3 as &i8) = 1;
            v0 += 1;
            *((a0 + 24) as &struct16) = v0;
            v7 = 1;
        }
        if v8 == 10 {
            v4 += 1;
            *((a0 + 16) as &u64) = v4;
        }
        v11 = core::str::validations::next_code_point(&v1) as u128;
    } while (v11 as i32);
    return struct24 {
        field_0: *(a0 as &i64) + a2
        padding_8: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
