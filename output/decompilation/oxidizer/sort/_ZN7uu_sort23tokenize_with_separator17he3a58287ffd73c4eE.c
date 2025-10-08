fn uu_sort::tokenize_with_separator(a0: i64, a1: i64, a2: i32, a3: i64) -> u64 {
    let v0: struct40;  // [bp-0x5c]
    let v2: core::option::Option<u32>;  // [bp-0x50]
    let v3: Result<struct4, struct8>;  // [bp-0x48]
    let v4: void*;  // [bp-0x40]
    let v5: i64;  // [bp-0x38]
    let v7: struct96;  // rax
    let v8: void*;  // r12
    let v9: u64;  // rdx
    let v11: u64;  // rbp
    let v12: u64;  // rax

    v0 = a2;
    v2 = a0;
    v3 = a0 + a1;
    v4 = 0;
    v5 = &v0;
    v7 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v5);
    if !(v7 as u8 & 1) {
        return v7;
    }
    do {
        v11 = v9;
        alloc::vec::Vec<T,A>::push(a3, v8, v11, "src/uu/sort/src/sort.rs");
        v8 = v11 + 1;
        v12 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v5);
    } while ((v12 & 1));
    return v12;
}
