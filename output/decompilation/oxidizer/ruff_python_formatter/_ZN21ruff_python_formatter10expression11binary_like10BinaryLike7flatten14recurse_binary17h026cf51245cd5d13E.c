fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64) -> u64 {
    let v0: struct16;  // [bp-0x50]
    let v1: struct26;  // [bp-0x50]
    let v2: struct24;  // [bp-0x40], Other Possible Types: u64
    let v3: u64;  // [bp-0x38]
    let v4: struct16;  // r8
    let v5: u64;  // rdx

    v4 = a6;
    v2 = a1;
    v3 = a2;
    v0 = struct16 {
        field_0: 0
        field_8: *(a0 as &i64)
    };
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    v1 = struct26 {
        field_0: 3
        field_8: ruff_python_formatter::comments::Comments::dangling(*(a5 as &i64), a0)
        field_16: v5
        field_24: 0
        field_25: *((a0 + 28) as &i8)
    };
    smallvec::SmallVec<A>::push(a8, &v1);
    v2 = a3;
    v3 = a4;
    v0 = struct16 {
        field_0: 2
        field_8: *((a0 + 8) as &i64)
    };
    return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
}
