fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x40]
    let v2: alloc::string::String;  // r12
    let v3: u32;  // eax
    let v4: u64;  // r13
    let v5: u64;  // r14
    let v6: u64;  // r13
    let v7: alloc::string::String;  // r12
    let v9: u64;  // rdx
    let v10: alloc::string::String;  // r12
    let v11: u64;  // r13
    let v13: u64;  // rax
    let v14: u64;  // r13
    let v15: void*;  // r12
    let v18: u64;  // r13
    let v19: alloc::string::String;  // r12
    let v20: core::option::Option<u32>;  // rax:rax

    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v2 = *(a3 as &i64);
    v20 = core::str::validations::next_code_point(&v0) as u128;
    v4 = *((a0 + 32) as &i64);
    v5 = *((a0 + 8) as &i64) + 1;
    v6 = v4;
    v7 = v2;
    loop {
        v10 = v19;
        v11 = v18;
        if v9 - 12 < 2 {
            v14 = core::cmp::max_by(v10, v11);
            v15 = 0;
            return struct24 {
                field_0: *(a0 as &i64) + a2
                field_8: v5
                field_32: <UNKNOWN>
            };
            goto LABEL_4ba574;
        } else if v9 == 9 {
LABEL_4ba574:
            v5 += 1;
        } else if v9 != 10 {
            v13 = (v9 < 127 ? 32 <= v9 : (v9 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v9 & 4294967295)));
            goto LABEL_4ba574;
        }
    }
}
