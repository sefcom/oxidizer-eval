fn uu_mktemp::find_last_contiguous_block_of_xs(a0: &struct24, a1: &u8, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rdx

    v0 = v2;
    if core::str::<impl str>::rfind(a1, a2) {
        v6 = v5 + 3;
        *(&a0[1] as &long long) = core::option::Option<T>::map_or(core::str::<impl str>::rfind(a1, v6), v5);
        a0[2] = v6;
    }
    return struct8 {
        field_0: v3
    };
}
