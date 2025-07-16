fn uu_mktemp::find_last_contiguous_block_of_xs(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // rdx

    v0 = v2;
    v3 = core::str::<impl str>::rfind(a1, a2);
    v5 = v4 + 3;
    return struct24 {
        field_0: v3
        field_8: core::option::Option<T>::map_or(core::str::<impl str>::rfind(a1, v5), v4)
        field_16: v5
    };
}
