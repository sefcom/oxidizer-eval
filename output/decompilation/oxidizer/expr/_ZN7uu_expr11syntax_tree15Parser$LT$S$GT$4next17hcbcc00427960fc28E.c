fn uu_expr::syntax_tree::Parser<S>::next(a1: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x20]
    let v2: u64;  // rax
    let v3: u64;  // rdi
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rdi
    let v7: void*;  // rax
    let v8: u32;  // rdx

    v2 = *((a1 + 8) as &i64);
    v3 = *((a1 + 16) as &i64);
    if v3 >= v2 {
        v6 = v3 - 1;
        v7 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(*((*(a1 as &i64) + v6 * 24 + 8) as &i64), *((*(a1 as &i64) + v6 * 24 + 16) as &i64));
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v8);
        return Ok(struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v0.field_16
        });
    }
    v4 = *(a1 as &i64);
    *((a1 + 16) as &u64) = v3 + 1;
    return Err(struct16 {
        field_0: <alloc::string::String as core::convert::AsRef<str>>::as_ref(*((v4 + v3 * 24 + 8) as &i64), *((v4 + v3 * 24 + 16) as &i64))
        field_8: v5
    });
}
