fn uu_tail::args::Settings::from_obsolete_args(a1: i64, a2: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: struct66;  // [bp-0xc8]
    let v1: u64;  // [bp-0xc8]
    let v2: u64;  // [bp-0xc0]
    let v3: u64;  // [bp-0xb8]
    let v4: struct16;  // [bp-0xb0]
    let v5: u128;  // [bp-0xa8]
    let v6: u128;  // [bp-0x98]
    let v8: struct48;  // [bp-0x78]
    let v9: struct48;  // [bp-0x78]
    let v10: struct48;  // [bp-0x48]
    let v12: u64;  // rax
    let v13: u64;  // rcx
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v17: u64;  // rcx
    let v18: u128;  // xmm0
    let v19: u128;  // xmm1

    v0 = <uu_tail::args::Settings as core::default::Default>::default();
    v12 = *((a1 + 8) as &i8);
    v13 = *(a1 as &i64);
    if !*((a1 + 9) as &i8) {
        v16 = v12;
    } else {
        v16 = v13;
    }
    v17 = v16;
    v1 = v12;
    v2 = v17;
    v3 = v15;
    if a2 {
        v9 = uu_tail::paths::Input::from(a2);
    } else {
        v9 = <uu_tail::paths::Input as core::default::Default>::default();
    }
    v10 = v8;
    v4 = alloc::vec::Vec<T,A>::push(&v10);
    v18 = *(&v1 as &i128);
    v19 = *(&v3 as &i128);
    return struct80 {
        field_0: v18
        field_16: v19
        field_32: v5
        field_48: v6
        field_64: *(&v0.field_0 as &i128)
    };
}
