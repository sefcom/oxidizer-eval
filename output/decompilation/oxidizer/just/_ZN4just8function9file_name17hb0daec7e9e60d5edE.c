fn just::function::file_name(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct16;  // [bp-0x58]
    let v1: struct24;  // [bp-0x48]
    let v3: void*;  // rax
    let v4: void*;  // rax
    let v5: u64;  // rax

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    v3 = std::path::Path::file_name(a2, a3);
    if !v3 {
        format!("Could not extract file name from `{}`", &v0);
    }
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3, a2);
    v4 = 0;
    return struct32 {
        field_0: v5
        field_8: v1.field_0
        field_16: *(&v1.field_8 as &i128)
    };
}
