fn uu_rmdir::dir_not_empty(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct9;  // [sp-0x40]
    let v1: i64;  // [sp-0x10]
    let v2: i64;  // [sp-0x8]
    let v4: i64;  // r14
    let v5: i64;  // rbx

    v2 = v4;
    v1 = v5;
    v0 = std::io::error::repr_bitpacked::decode_repr(*(a0 as &i64));
    goto *((4308652 + (stack_base)[64] as i8 * 4) as &i32) + 4308652;
}
