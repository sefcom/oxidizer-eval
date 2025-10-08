fn uu_tail::args::Settings::from_obsolete_args(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct66;  // [bp-0x98]
    let v1: i64;  // [bp-0x98]
    let v2: i64;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: struct16;  // [bp-0x80]
    let v5: u128;  // [bp-0x78]
    let v6: u128;  // [bp-0x68]
    let v8: struct48;  // [bp-0x48]
    let v11: i64;  // rax
    let v12: u64;  // rcx
    let v14: u64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rcx
    let v17: iNone;  // xmm0
    let v18: iNone;  // xmm1

    v0 = <uu_tail::args::Settings as core::default::Default>::default();
    v11 = *((a1 + 8) as &i8);
    v12 = *(a1 as &i64);
    if !*((a1 + 9) as &i8) {
        v15 = v11;
    } else {
        v15 = v12;
    }
    v16 = v15;
    v1 = v11;
    v2 = v16;
    v3 = v14;
    if a2 {
        v8 = uu_tail::paths::Input::from(a2);
    } else {
        v8 as u256 = <uu_tail::paths::Input as core::default::Default>::default();
    }
    v4 = alloc::vec::Vec<T,A>::push(&v8 as u256);
    v17 = *(&v1 as &i128);
    v18 = *(&v3 as &i128);
    return struct80 {
        field_0: v17
        field_16: v18
        field_32: v5
        field_48: v6
        field_64: *(&v0.field_0 as &i128)
    };
}
