fn just::assignment::<impl core::fmt::Display for just::binding::Binding<just::expression::Expression>>::fmt(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x68]
    let v1: u64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58], Other Possible Types: u64
    let v3: u64;  // [bp-0x50]
    let v4: void*;  // [bp-0x48]
    let v5: u64;  // [bp-0x38]
    let v6: u64;  // [bp-0x30]
    let v7: i64;  // [bp-0x28]
    let v8: u64;  // [bp-0x20]
    let v10: u64;  // rbx
    let v11: u64;  // rax
    let v12: u64;  // r15
    let v13: u64;  // rax

    v10 = *(a1 as &i64);
    if *((a0 + 206) as &i8) {
        v0 = "[private]\n";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v11 = core::fmt::Formatter::write_fmt(v10, *((a1 + 8) as &i64), &v0);
        if v11 {
            return v11 & -0x100 | 1;
        }
    }
    if *((a0 + 205) as &i8) {
        v0 = "export ";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v13 = core::fmt::Formatter::write_fmt(v10, *((a1 + 8) as &i64), &v0);
        if v13 {
            return v13 & -0x100 | 1;
        }
    }
    v5 = a0 + 128;
    v6 = <just::name::Name as core::fmt::Display>::fmt;
    v7 = a0;
    v8 = <just::expression::Expression as core::fmt::Display>::fmt;
    v0 = &g_82db50;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 2;
    return core::fmt::Formatter::write_fmt(v10, v12, &v0);
}
