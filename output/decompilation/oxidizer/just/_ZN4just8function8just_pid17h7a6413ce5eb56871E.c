fn just::function::just_pid(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x30]
    let v1: u8;  // [bp-0x12]
    let v4: u32;  // rdx
    let v5: core::result::Result<(), core::fmt::Error>;  // rax

    v5 = core::fmt::num::imp::<impl u32>::_fmt(std::process::id(), &v1) as u64;
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v5 as &i64), v4);
    return struct32 {
        field_0: 0
        field_8: *(&v0.field_0 as &i128)
        field_24: v0.field_16
    };
}
