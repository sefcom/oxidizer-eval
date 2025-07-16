fn uu_cp::Attributes::diff(a1: i64, a2: i64) -> : struct12 {
    let a0: i64;  // rdi
    let v1: u64;  // rax
    let v3: u128;  // xmm0

    v1 = *((a2 + 8) as &i8);
    v3 = ...;
    return struct12 {
        field_0: ...
        field_8: ~(v3) as u32 & 0x1000100 | *((a1 + 8) as &i32) & v3 as u32
    };
}
