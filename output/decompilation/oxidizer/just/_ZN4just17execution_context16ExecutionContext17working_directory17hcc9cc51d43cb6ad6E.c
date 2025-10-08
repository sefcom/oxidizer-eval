fn just::execution_context::ExecutionContext::working_directory(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v1: u64;  // rdx
    let v2: struct72;  // rax
    let v3: struct72;  // rax

    v1 = a2 + 24;
    v2 = a1 + 120;
    if a1[560] as i8 != 37 {
        v3 = v2;
    } else {
        v3 = v1;
    }
    if (((0 ^ a1[456] as i64) & (0 ^ -(a1[456] as i64))) >> 63) as char {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, *((v3 + 8) as &i64), *((v3 + 16) as &i64));
        return;
    }
    std::path::Path::join(a0, *((v3 + 8) as &i64), *((v3 + 16) as &i64), a1 + 456);
    return;
}
