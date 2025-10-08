fn uu_stdbuf::set_command_env(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u8;  // [bp-0x4c]
    let v1: u8;  // [bp-0x38]
    let v2: u64;  // [bp-0x20]
    let v3: u64;  // [bp-0x18]
    let v4: u64;  // [bp-0x10]
    let v5: u64;  // [bp-0x8]
    let v7: u64;  // rax
    let v8: u64;  // r15
    let v9: u64;  // r14
    let v10: u64;  // r12
    let v11: u64;  // rbx
    let v13: core::result::Result<(), core::fmt::Error>;  // rax

    v7 = *(a3 as &i64);
    if !v7 {
        return v7;
    } else if v7 != 1 {
        v5 = v8;
        v4 = v9;
        v3 = v10;
        v2 = v11;
        v13 = core::fmt::num::imp::<impl u64>::_fmt(*((a3 + 8) as &i64), &v0) as u64;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v1, *(&v13 as &i64), a2);
        return std::process::Command::env(a0, a1, a2, &v1);
    } else {
        return std::process::Command::env(a0, a1, a2);
    }
}
