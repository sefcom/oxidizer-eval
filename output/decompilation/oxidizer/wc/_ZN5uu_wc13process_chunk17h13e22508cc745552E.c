fn uu_wc::process_chunk(a0: i64, a1: u64, a2: u64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x58]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x40]
    let v4: u64;  // r12
    let v5: i32;  // edx
    let v7: u8;  // r14b
    let v8: u32;  // ebp
    let v9: u64;  // rax
    let v10: core::option::Option<u32>;  // rax:rax
    let v11: core::option::Option<u32>;  // rax:rax

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
            *(a4 as &i8) = 0;
        } else if !(v7 & 1) {
            *(a4 as &i8) = 1;
            v0 += 1;
            *((a0 + 24) as &u64) = v0;
            v7 = 1;
        }
        if v8 == 10 {
            v4 += 1;
            *((a0 + 16) as &u64) = v4;
        }
        v11 = core::str::validations::next_code_point(&v1) as u128;
    } while ((v11 as i8 & 1));
    return struct24 {
        field_0: *(a0 as &i64) + a2
        padding_8: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
