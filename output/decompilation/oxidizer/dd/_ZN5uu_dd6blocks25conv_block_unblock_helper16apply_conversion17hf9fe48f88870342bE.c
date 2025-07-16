fn uu_dd::blocks::conv_block_unblock_helper::apply_conversion(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: struct32;  // rax

    v0 = v2;
    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0, a1) as u64;
    *((a0 + 32) as &u64) = a2;
    return v3;
}
