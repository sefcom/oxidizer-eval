fn uu_sort::numeric_str_cmp::human_numeric_str_cmp(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x70]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v6: u64;  // rbp
    let v7: u64;  // rcx
    let v8: u64;  // r13
    let v9: u64;  // r15
    let v10: u64;  // rax
    let v18: core::option::Option<u32>;  // rax:rax

    v6 = *((*((a0 + 16) as &i64) + 8) as &i8);
    v7 = *((*((a1 + 16) as &i64) + 8) as &i8);
    if v6 != v7 {
        v10 = -((v6 & 255) < (v7 & 255));
        return v10 & 0xffffff00 | v10 | 1;
    }
    v8 = *(a0 as &i64);
    v9 = *(a1 as &i64);
    v2 = *((a1 + 8) as &i64);
    v3 = *((a0 + 8) as &i64);
    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: v8
        }
        end_or_len: v8 + *((a0 + 8) as &i64)
        _marker: core::marker::PhantomData<&u8> { }
    };
    v18 = core::str::validations::next_code_point_reverse(&v0) as u128;
}
