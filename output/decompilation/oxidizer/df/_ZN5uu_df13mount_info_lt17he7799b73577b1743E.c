fn uu_df::mount_info_lt(a0: void*, a1: void*) -> u64 {
    let v0: struct1;  // [bp-0x38], Other Possible Types: u64
    let v1: struct1;  // [bp-0x34]
    let v3: u64;  // rax
    let v4: u64;  // r15
    let v5: u64;  // r12
    let v6: u64;  // r13
    let v7: u64;  // rbp
    let v8: u64;  // rax
    let v9: u64;  // rbp
    let v10: u64;  // r13
    let v11: u64;  // rcx
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax

    v0 = v3;
    v4 = a0[4];
    v5 = a0[5];
    v0 = struct1 {
        field_0: 0
    };
    if core::slice::<impl [T]>::starts_with(v4, v5, core::char::methods::encode_utf8_raw(&v0), 1) as i8 {
        v6 = a1[4];
        v7 = a1[5];
        v1 = struct1 {
            field_0: 0
        };
        if !core::slice::<impl [T]>::starts_with(v6, v7, core::char::methods::encode_utf8_raw(&v1), 1) as i8 {
            return 0;
        }
    }
    v8 = a0[11];
    v9 = a0[14];
    v10 = a1[14];
    if !(v8) || !((v11 = a1[11], v11)) {
        if !(v9 < v10) {
            goto LABEL_4c689d;
        }
    } else {
        if !(v9 < v10) || !(v8 <= v11) {
LABEL_4c689d:
            v13 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v4, v5, a1[4], a1[5]);
            v12 = v13 & -0x100 | 1;
            if !v13 {
                v14 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0[13], v9, a1[13], v10);
                v12 = v14 & -0x100 | v14 ^ 1;
                return v12;
            }
            return v12;
        }
    }
    return 0;
}
