fn fd::fmt::input::dirname(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x30]
    let v2: void*;  // rax

    v2 = std::path::Path::parent(a1, a2);
    if !v2 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1, a2);
        return;
    }
    v0 = fd::fmt::input::dirname::{{closure}}(v2, a2);
    return struct24 {
        field_0: v0.field_0
        field_8: *(&v0.field_8 as &i128)
    };
}
