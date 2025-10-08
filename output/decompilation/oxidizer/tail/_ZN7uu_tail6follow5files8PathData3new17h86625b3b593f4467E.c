fn uu_tail::follow::files::PathData::new(a0: i64, a1: u64, a2: u64, a3: u64, a4: void*, a5: u32) -> long long {
    let v0: struct24;  // [bp-0x38]

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a4, a5);
    *((a0 + 192) as &u64) = v0.field_16;
    *((a0 + 176) as &i128) = *(&v0.field_0 as &i128);
    *((a0 + 200) as &u64) = a1;
    *((a0 + 208) as &u64) = a2;
    return memcpy(a0, a3, 176);
}
