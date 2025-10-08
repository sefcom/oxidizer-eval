fn uu_ls::display_symlink_count(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v1: u8;  // [bp-0x1c]
    let v4: u32;  // rdx
    let v5: core::result::Result<(), core::fmt::Error>;  // rax

    v5 = core::fmt::num::imp::<impl usize>::_fmt(a1, &v1) as u64;
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v5 as &i64), v4);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v0.field_16
    };
}
