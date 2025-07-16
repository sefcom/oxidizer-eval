fn uu_more::Pager::page_up() -> : struct8 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v6: u64;  // [bp-0x10]
    let v7: u64;  // [bp-0x8]
    let v9: i64;  // rdi
    let v10: u64;  // rcx
    let v11: u64;  // rax
    let v12: u64;  // rcx
    let v15: void*;  // rsi
    let v16: u64;  // r15
    let v17: u64;  // r14
    let v18: u64;  // r13
    let v19: u64;  // r12
    let v20: u64;  // rbx
    let v21: void*;  // r13
    let v23: void*;  // rdx
    let v24: core::option::Option<&u8>;  // rax

    v10 = *((v9 + 64) as &i16);
    v11 = *((v9 + 24) as &i64);
    v12 = v10 + *((v9 + 56) as &i64);
    *((v9 + 24) as &void*) = v15;
    if !*((v9 + 67) as &i8) {
        return;
    }
    v7 = v16;
    v6 = v17;
    v5 = v18;
    v4 = v19;
    v3 = v20;
    v0 = *((v9 + 8) as &i64);
    v1 = *((v9 + 8) as &i64) + *((v9 + 16) as &i64) * 24;
    if v11 <= v12 {
        return;
    }
    v21 = v15;
    do {
        v2 = v15 - 1;
        v23 = (v1 - v0) / 24 - v15;
    } while ((v24 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back(&v0, v23), (v24 && !*((v24 + 16) as &i64) && (*((v9 + 24) as &void*) = v21, v15 = v2, v2) || !((*((v9 + 24) as &void*) = v21, v15 = v2, v2))) && (*((v9 + 24) as &void*) = v21, v15 = v2, v2)));
    return;
}
