fn uu_ls::PathData::new(a0: i64, a1: void*, a2: u64, a3: i64, a4: u32, a5: u32, a6: u8) -> void {
    let v1: struct24;  // [bp-0x150]
    let v5: u64;  // [bp-0x130]
    let v6: u32;  // [bp-0x124]
    let v7: struct8;  // [bp-0x120]
    let v8: struct24;  // [bp-0xe8]
    let v10: struct16;  // [bp-0x30]
    let v11: u64;  // [bp-0x28]
    let v12: u64;  // [bp-0x20]
    let v13: u64;  // [bp-0x18]
    let v14: u64;  // [bp-0x10]
    let v15: u64;  // r15
    let v16: u64;  // r14
    let v17: u64;  // r13
    let v18: u64;  // r12
    let v19: struct16;  // rbx
    let v20: void*;  // rax

    v14 = v15;
    v13 = v16;
    v12 = v17;
    v11 = v18;
    v10 = v19;
    v6 = a4;
    v7 = a3;
    v1 = a2;
    v5 = *(a3 as &i64);
    if a6 {
        v8 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1[8] as i64, a1[16] as i64);
    }
    v20 = std::path::Path::file_name(a1[8] as i64, a1[16] as i64);
    if !v20 {
        v20 = uu_ls::PathData::new::{{closure}}(a1[8] as i64, a1[16] as i64) as u64;
    }
    v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, a2);
}
