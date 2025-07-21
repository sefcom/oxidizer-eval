fn uu_ptx::tex_mapper(a1: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x4c]
    let v1: u64;  // [bp-0x48]
    let v2: struct56;  // [bp-0x48], Other Possible Types: u64
    let v7: u64;  // [bp-0x28]
    let v9: void*;  // rdx
    let v11: u32;  // rcx
    let v12: u64;  // rdx
    let v13: &mut [u8];  // rax:rdx

    v0 = a1;
    if a1 - 35 < 4 {
        return core::option::Option<T>::map_or_else(v12);
    }
    match (a1) {
        92 => {
            break;
        }
        _ => {
            v1 = 0;
            v1 = v2 & -0x100000000;
            v13 = core::char::methods::encode_utf8_raw(a1, &v1, v9);
            <T as alloc::slice::hack::ConvertVec>::to_vec(v13.data_ptr, v9, v11);
            return struct24 {
                field_0: *(&v2.field_0 as &i128)
                field_16: v7
            };
        }
    }
    return <T as alloc::slice::hack::ConvertVec>::to_vec("\\backslash{}", &g_45e6fc.field_0) as u64;
}
