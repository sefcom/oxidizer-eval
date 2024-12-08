fn uu_tail::args::Settings::from_obsolete_args(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0xc8], Other Possible Types: struct66
    let v1: i8;  // [sp-0x7c]
    let v2: struct48;  // [sp-0x78], Other Possible Types: i384
    let v3: struct48;  // [bp-0x48]
    let v5: i64;  // rax
    let v6: i64;  // rcx
    let v8: i64;  // rcx
    let v11: i64;  // rax
    let v13: i128;  // xmm0
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0
    let v16: i128;  // xmm1
    let v17: i128;  // xmm2

    v0 = <uu_tail::args::Settings as core::default::Default>::default();
    if *((a1 + 10) as &i8) {
        v1 = a2;
    }
    v5 = *((a1 + 8) as &i8);
    v6 = *(a1 as &i64);
    if !*((a1 + 9) as &i8) {
        v5 = 4;
    }
    v0 = v5;
    v0.field_8 = v11;
    v0.field_16 = vvar_11{reg 32};
    if !a2 {
        v2 = <uu_tail::paths::Input as core::default::Default>::default();
    } else {
        v2 = uu_tail::paths::Input::from(a2, v8);
    }
    v13 = v2;
    *(&v3.field_0 as &struct48) = struct48 {
        field_0: v13
        field_16: *((&v2 as &char + 16) as &i128)
        field_32: *((&v2 as &char + 32) as &i128)
    };
    v0.24 = alloc::vec::Vec<T,A>::push(stack_base + -72);
    v14 = v0;
    v15 = v0;
    v16 = *((&v0 as &char + 16) as &i128);
    v17 = *((&v0 as &char + 32) as &i128);
    return struct80 {
        field_0: v15
        field_16: v16
        field_32: v17
        field_48: *((&v0 as &char + 48) as &i128)
        field_64: v14
    };
}
