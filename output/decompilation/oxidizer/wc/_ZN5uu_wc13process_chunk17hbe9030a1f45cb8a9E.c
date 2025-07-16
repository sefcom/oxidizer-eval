fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x40]
    let v3: u64;  // r13
    let v4: u64;  // rdx
    let v5: u8;  // bpl
    let v6: u64;  // rax
    let v7: core::option::Option<u32>;  // rax:rax
    let v8: core::option::Option<u32>;  // rax:rax

    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v8 = core::str::validations::next_code_point(&v0) as u128;
    if let Some(_) = v8 {
        do {
            if (v4 - 9) as u32 < 5 || v4 as u32 == 32 || v4 as u32 >= 128 && core::unicode::unicode_data::white_space::lookup(v4 as u8) as u8 {
                *(a3 as &i8) = 0;
            } else if !v5 {
                *(a3 as &i8) = 1;
                v3 += 1;
                *((a0 + 24) as &u64) = v3;
                v5 = 1;
            }
        } while ((v7 = core::str::validations::next_code_point(&v0) as u128, v7 as i32));
    }
    return struct16 {
        field_0: *(a0 as &i64) + a2
        field_32: <UNKNOWN>
    };
}
