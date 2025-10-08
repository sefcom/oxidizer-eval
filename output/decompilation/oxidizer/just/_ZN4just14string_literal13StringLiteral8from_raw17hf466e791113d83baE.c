fn just::string_literal::StringLiteral::from_raw(a0: i64, a1: void*, a2: u32) -> long long {
    let v1: u64;  // rax

    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1, a2);
    *((a0 + 42) as &i8) = 0;
    *((a0 + 40) as &i16) = 0x200;
    *((a0 + 24) as &void*) = a1;
    *((a0 + 32) as &u32) = a2;
    return v1;
}
