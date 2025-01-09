fn uu_tail::args::Settings::from_obsolete_args(a0: &struct80, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0xc8], Other Possible Types: struct66
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: struct16;  // [sp-0xb0]
    let v4: i8;  // [sp-0x7c]
    let v5: struct48;  // [sp-0x78]
    let v6: struct48;  // [bp-0x48]
    let v8: i64;  // rax
    let v9: i64;  // rcx
    let v10: i8;  // cc_dep1
    let v11: i64;  // rcx
    let v14: i64;  // rax

    v0 = <uu_tail::args::Settings as core::default::Default>::default();
    if *((a1 + 10) as &i8) {
        v4 = a2;
    }
    v8 = *((a1 + 8) as &i8);
    v9 = *(a1 as &i64);
    v10 = *((a1 + 9) as &i8);
    if !*((a1 + 9) as &i8) {
        v11 = v9;
    } else {
        v11 = 10;
    }
    if !v10 {
        v14 = v8;
    } else {
        v14 = v9;
    }
    if !v10 {
        v8 = 4;
    }
    v0 = v8;
    v1 = v14;
    v2 = v11;
    if !a2 {
        v5 = <uu_tail::paths::Input as core::default::Default>::default();
    } else {
        v5 = uu_tail::paths::Input::from(a2);
    }
    *(&v6.field_0 as &struct48) = struct48 {
        field_0: v16
        field_16: *((&v5 as &char + 16) as &i128)
        field_32: *((&v5 as &char + 32) as &i128)
    };
    v3 = alloc::vec::Vec<T,A>::push(&v6);
    return struct80 {
        field_0: v18
        field_16: v19
        field_32: v20
        field_48: *((&v0 as &char + 48) as &i128)
        field_64: v17
    };
}
