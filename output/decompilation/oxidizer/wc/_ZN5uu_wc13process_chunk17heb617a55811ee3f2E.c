fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x50]
    let v1: u128;  // [bp-0x40]
    let v3: u64;  // r14
    let v4: u64;  // r12
    let v5: alloc::string::String;  // edx
    let v7: u8;  // bpl
    let v8: alloc::string::String;  // r13d
    let v10: u64;  // r14
    let v11: u64;  // rax
    let v12: core::option::Option<u32>;  // rax:rax
    let v13: core::option::Option<u32>;  // rax:rax

    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v13 = core::str::validations::next_code_point(&v1) as u128;
    do {
        v8 = v5;
        if v8 - 9 < 5 || v8 == 32 || v8 >= 128 && core::unicode::unicode_data::white_space::lookup(v8 as u8) {
            *(a3 as &i8) = 0;
        } else if !v7 {
            *(a3 as &i8) = 1;
            v0 += 1;
            *((a0 + 24) as &u64) = v0;
            v7 = 1;
        }
        if v8 == 10 {
            v4 += 1;
            *((a0 + 16) as &u64) = v4;
        }
        v3 += 1;
        v12 = core::str::validations::next_code_point(&v1) as u128;
    } while (v12 as i32);
    return struct24 {
        field_0: *(a0 as &i64) + v10
        field_8: v3
        field_32: <UNKNOWN>
    };
}
