fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(a0: i64, a1: i64, a2: i64, a3: i128, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64) -> u64 {
    let v0: struct26;  // [sp-0x70], Other Possible Types: struct16
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x50]
    let v3: struct16;  // rbx
    let v4: u64;  // rdx
    let v5: u64;  // rax
    let v6: u64;  // r15
    let v7: u64;  // rbp
    let v8: struct21;  // r12
    let v9: u64;  // rax
    let v11: &mut [u8];  // rbp
    let v12: struct16;  // rdx
    let v13: struct80;  // r8
    let v14: struct16;  // r15
    let v15: struct16;  // r15
    let v16: u64;  // rbp
    let v17: struct80;  // r12
    let v18: u64;  // r15
    let v19: u64;  // [bp-0x58]

    v3 = a5;
    v5 = smallvec::infallible(smallvec::SmallVec<A>::try_reserve(a8, *((a0 + 16) as &i64) * 2 - 1), v4);
    v6 = *((a0 + 16) as &i64);
    if !v6 {
        return v5;
    }
    v7 = *((a0 + 8) as &i64);
    v1 = a1;
    v8 = a7;
    v19 = a2;
    v0 = 0;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    v0 = struct26 {
        field_0: 3
        field_8: ""
        field_24: 2
        field_25: *((a0 + 36) as &i8)
    };
    v9 = smallvec::SmallVec<A>::push(a8, &v0);
    if v6 == 1 {
        return v9;
    }
    v11 = v7 + 80;
    v2 = v6 * 80 + v7 - 80;
    v12 = a6;
    v13 = a8;
    if v11 != v2 {
        do {
            v15 = v14;
            v16 = v11 + 80;
            v0 = struct16 {
                field_0: 1
                field_8: v11
            };
            ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, v3, v12, v8, v13);
            v0 = struct26 {
                field_0: 3
                field_8: ""
                field_24: 2
                field_25: *((a0 + 36) as &i8)
            };
            smallvec::SmallVec<A>::push(v17, &v0);
            v18 = v15 - 80;
            v11 = v16;
            v14 = v18;
        } while (v15 != 80);
    }
    v1 = a3;
    v19 = a4;
    v0 = struct16 {
        field_0: 2
        field_8: v2
    };
    return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, v3, v12, v8, v13);
}
