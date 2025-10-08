fn just::source::Source::root(a1: i64, a2: i64) -> : struct124 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x80]
    let v1: u64;  // [bp-0x70]
    let v2: alloc::string::String;  // [bp-0x68], Other Possible Types: struct80
    let v3: struct18;  // [bp-0x58], Other Possible Types: struct80
    let v4: struct72;  // [bp-0x50]
    let v5: struct16;  // [bp-0x48]
    let v6: u64;  // [bp-0x40]
    let v7: struct72;  // [bp-0x38]
    let v8: i8;  // [bp-0x28]
    let v11: &mut [u8];  // r12
    let v12: struct24;  // rax

    v11 = alloc::alloc::Global::alloc_impl(8, 24);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v3 = v1;
    v2 = *(&v0.field_0 as &i128);
    *((v11 + 16) as &u64) = v1;
    *(v11 as &i128) = *(&v0.field_0 as &i128);
    v4 = 1;
    v5 = v11;
    v6 = 1;
    v7 = 0x8000000000000000;
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v3 = v1;
    v2 = *(&v0.field_0 as &i128);
    v12 = std::path::Path::parent(a1, a2);
    core::option::unwrap(v12);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12, a2);
    return struct128 {
        field_0: v4.field_0
        field_16: 1
        field_24: 0
        field_32: 8
        field_40: 0
        field_48: v2
        field_64: v3
        field_72: *(&v0.field_0 as &i128)
        field_88: v1
        field_96: v7.field_0
        field_112: *(&v8 as &i64)
        field_120: 0
    };
}
