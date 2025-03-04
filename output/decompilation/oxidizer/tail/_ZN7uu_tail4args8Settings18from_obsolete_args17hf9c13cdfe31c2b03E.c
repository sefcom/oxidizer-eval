fn uu_tail::args::Settings::from_obsolete_args(a0: &struct80, a1: u64, a2: u64) -> int {
    let v0: struct66;  // [sp-0xc8], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: struct16;  // [sp-0xb0]
    let v4: i8;  // [sp-0x7c]
    let v5: i8;  // [bp-0x78], Other Possible Types: struct48
    let v6: struct48;  // [bp-0x48]
    let v8: i64;  // rax
    let v9: i64;  // rcx
    let v10: i8;  // cc_dep1
    let v11: i64;  // rdx

    v0 = <uu_tail::args::Settings as core::default::Default>::default();
    if *((a1 + 10) as &i8) {
        v4 = a2;
    }
    v8 = *((a1 + 8) as &i8);
    v9 = *(a1 as &i64);
    v10 = *((a1 + 9) as &i8);
    v11 = (!*((a1 + 9) as &i8) ? 10 : v9);
    if !v10 {
        v9 = v8;
    }
    v0 = (v10 ? v8 : 4);
    v1 = v9;
    v2 = v11;
    if !a2 {
        v5 = <uu_tail::paths::Input as core::default::Default>::default();
    } else {
        uu_tail::paths::Input::from(&v5, a2);
    }
    *(&v6.field_0 as &struct48) = struct48 {
        field_0: v13
        field_16: *(&v5.field_16 as &i128)
        field_32: *((&v5.field_24 as &char + 8) as &i128)
    };
    v3 = alloc::vec::Vec<T,A>::push(&v6);
    return struct80 {
        field_0: v15
        field_16: v16
        field_32: v17
        field_48: *((&v0.field_48 as &char + 7) as &i128)
        field_64: v14
    };
}
