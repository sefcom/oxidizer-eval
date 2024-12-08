fn uu_df::mount_info_lt(a0: &struct_0, a1: &struct_1) -> u64 {
    let v0: u64;  // [bp-0x38], Other Possible Types: struct1
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
    let v12: void*;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax

    v0 = v3;
    v4 = a0->field_20;
    v5 = a0->field_28;
    v0 = struct1 {
        field_0: 0
    };
    if core::slice::<impl [T]>::starts_with(v4, v5, core::char::methods::encode_utf8_raw(&v0), 1) as i8 {
        v6 = a1->field_20;
        v7 = a1->field_28;
        v1 = struct1 {
            field_0: 0
        };
        if !core::slice::<impl [T]>::starts_with(v6, v7, core::char::methods::encode_utf8_raw(&v1), 1) as i8 {
            return 0;
        }
    }
    v8 = a0->field_58;
    v9 = a0->field_70;
    v10 = a1->field_70;
    if !(v8) || !((v11 = a1->field_58, v11)) {
        if !(v9 < v10) {
            goto LABEL_4c6d3d;
        }
    } else {
        if !(v9 < v10) || !(v8 <= v11) {
LABEL_4c6d3d:
            v13 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v4, v5, a1->field_20, a1->field_28);
            v12 = v13 | -0x100 | 1;
            if !v13 {
                v14 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(a0->field_68, v9, a1->field_68, v10);
                v12 = v14 | -0x100 | v14 ^ 1;
                return v12;
            }
            return v12;
        }
    }
    return 0;
}
