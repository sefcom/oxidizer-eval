fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v2: core::fmt::rt::Argument;  // r12
    let v4: core::fmt::rt::Argument;  // r13
    let v6: alloc::string::String;  // r14
    let v7: core::fmt::rt::Argument;  // r13
    let v8: core::fmt::rt::Argument;  // r12
    let v10: u64;  // rdx
    let v11: core::fmt::rt::Argument;  // r12
    let v12: core::fmt::rt::Argument;  // r13
    let v13: alloc::string::String;  // r14
    let v14: i64;  // r12
    let v15: alloc::string::String;  // r14
    let v16: core::fmt::rt::Argument;  // r13
    let v17: core::fmt::rt::Argument;  // r12
    let v19: u64;  // r13
    let v20: void*;  // r12
    let v21: u64;  // rax
    let v22: u64;  // r12
    let v23: core::option::Option<u32>;  // rax:rax

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
    v2 = *(a3 as &i64);
    v23 = core::str::validations::next_code_point(&v0) as u128;
    v4 = *((a0 + 32) as &i64);
    v6 = *((a0 + 8) as &i64) + 1;
    v7 = v4;
    for (v8 = v2; true; v8 = v17) {
        v11 = v8;
        v12 = v7;
        v13 = v6;
        if v10 - 12 < 2 {
LABEL_4ba55b:
            v19 = core::cmp::max_by(v11, v12);
            v20 = 0;
            return struct32 {
                field_0: *(a0 as &i64) + a2
                field_8: v13
                padding_16: <UNKNOWN>
                field_32: <UNKNOWN>
            };
            v6 = v15;
            v7 = v16;
        } else {
            if v10 == 9 {
                v14 = (v11 & -8) + 8;
                v6 = v15;
                v7 = v16;
                continue;
            }
            if v10 == 10 {
                goto LABEL_4ba55b;
            }
            v22 = v11 + (v10 < 127 ? 32 <= v10 : (v10 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v10 & 4294967295)));
            v6 = v15;
            v7 = v16;
        }
    }
}
