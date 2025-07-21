fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v2: u64;  // r13
    let v3: u64;  // r14
    let v4: u64;  // rdx
    let v5: u8;  // bpl
    let v7: u64;  // r14
    let v8: u64;  // rax
    let v9: core::option::Option<u32>;  // rax:rax
    let v10: core::option::Option<u32>;  // rax:rax

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
    v9 = core::str::validations::next_code_point(&v0) as u128;
    do {
        if v4 - 9 < 5 || v4 == 32 || v4 >= 128 && core::unicode::unicode_data::white_space::lookup(v4) {
            *(a3 as &i8) = 0;
        } else if !v5 {
            *(a3 as &i8) = 1;
            v3 += 1;
            *((a0 + 24) as &u64) = v3;
            v5 = 1;
        }
    } while ((v10 = core::str::validations::next_code_point(&v0) as u128, v10 as i32));
    return struct32 {
        field_0: *(a0 as &i64) + v7
        field_8: v2 + 1
        padding_16: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
