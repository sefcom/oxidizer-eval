fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x40]
    let v2: alloc::borrow::Cow<str>;  // r12
    let v3: u64;  // r13
    let v5: u64;  // rdx
    let v6: struct32;  // rax
    let v7: u64;  // rax
    let v8: core::option::Option<u32>;  // rax:rax
    let v9: core::option::Option<u32>;  // rax:rax

    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v2 = *(a3 as &i64);
    v8 = core::str::validations::next_code_point(&v0) as u128;
    v3 = *((a0 + 32) as &i64);
    if let Some(_) = v8 {
        do {
            if (v5 - 12) as u32 < 2 {
LABEL_4bac8b:
                v3 = core::cmp::max_by(v2, v3);
                *((a0 + 32) as &u64) = v3;
                v2 = 0;
            } else {
                if v5 as u32 == 9 {
                    continue;
                }
                if v5 as u32 == 10 {
                    goto LABEL_4bac8b;
                }
                v6 = (v5 as u32 < 127 ? (32 <= v5 as u32) as u8 as u64 : (v5 as u32 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v5 & 4294967295)));
            }
        } while ((*(a3 as &alloc::borrow::Cow<str>) = v2, v9 = core::str::validations::next_code_point(&v0) as u128, v9 as i32));
    }
    return struct16 {
        field_0: *(a0 as &i64) + a2
        field_32: <UNKNOWN>
    };
}
