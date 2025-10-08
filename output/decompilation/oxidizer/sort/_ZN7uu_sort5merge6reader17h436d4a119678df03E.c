fn uu_sort::merge::reader(a0: &u64, a1: i64, a2: u64, a3: u64, a4: u32) -> long long {
    let v0: i64;  // [bp-0x110]
    let v1: u64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: Result<struct16, struct9>;  // [bp-0x100]
    let v4: u128;  // [bp-0xf8]
    let v5: u128;  // [bp-0xe8]
    let v6: u128;  // [bp-0xd8]
    let v7: u64;  // [bp-0xd0]
    let v8: struct152;  // [bp-0xc8]
    let v9: struct152;  // [bp-0xc8]
    let v10: u64;  // [bp-0xc8]
    let v12: u64;  // r13
    let v13: u64;  // rbx
    let v14: i64;  // r15
    let v15: &u64;  // r12
    let v16: i64;  // r14
    let v17: i64;  // r15
    let v18: void*;  // r14
    let v19: u64;  // rax
    let v20: u64;  // r14
    let v21: u128;  // xmm0
    let v22: u128;  // xmm1

    v12 = a3;
    v13 = a2;
    v14 = a1;
    v15 = a0;
    v8 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(a0);
    if (((0 ^ (&v8)[1].field_0) & (0 ^ -((&v8)[1].field_0))) >> 63) as char {
        return 0;
    }
    v1 = a4;
    v0 = a1;
    loop {
        v16 = v10 * 56;
        v17 = v14;
        if *((v17 + v16) as &i64) != 3 {
            v18 = v16 + v14;
            v3 = uu_sort::chunks::read(*((v14 + v16) as &i64), v18[8] as i64, &v8 as u8, v18 + 16, v18 + 40, v1, v12);
            match v3 {
                Ok(_) => {
                    return v3 as i64;
                },
                Err(_) => {
                    v17 = v14;
                    if !*((&v3 as &char + 8) as &i8) {
                        v19 = *(v18 as &i64);
                        *(v18 as &i64) = 3;
                        core::option::unwrap(v19);
                        v20 = v18 + 8;
                        v2 = v19;
                        v21 = *(v20 as &i128);
                        v22 = *((v20 + 16) as &i128);
                        v6 = *((v20 + 32) as &i128) as u128;
                        v5 = v22;
                        v4 = v21;
                        <uu_sort::merge::PlainMergeInput<R> as uu_sort::merge::MergeInput>::finished_reading(v6 as i64, v7);
                        v17 = v0;
                    }
                },
            }
        }
        v14 = v17;
        v9 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(v15);
        if (&v9)[1].field_0 == 0x8000000000000000 {
            return 0;
        }
    }
}
