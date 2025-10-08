fn starship::modules::line_break::module(a0: i64, a1: i64) -> double {
    let v0: struct72;  // [bp-0x98], Other Possible Types: char
    let v1: struct24;  // [bp-0x90]
    let v2: Result<struct48, struct32>;  // [bp-0x88], Other Possible Types: char
    let v3: iNone;  // [bp-0x78]
    let v4: struct92;  // [bp-0x68]
    let v5: struct24;  // [bp-0x68]
    let v6: &str;  // [bp-0x58]
    let v7: struct16;  // [bp-0x48]
    let v8: struct16;  // [bp-0x38]
    let v9: struct24;  // [bp-0x28]
    let v11: i64;  // rax
    let v12: struct16;  // xmm0
    let v13: &mut [u8];  // xmm1

    v4 = starship::context::Context::new_module(a1, "line_break");
    v11 = alloc::alloc::Global::alloc_impl(8, 56, 0);
    *(v11 as &i64) = 2;
    v12 = *(&v0 as &i128);
    v13 = *(&v2 as &i128);
    *((v11 + 40) as void*) = v3;
    *((v11 + 24) as &&mut [u8]) = v13;
    *((v11 + 8) as &struct16) = v12;
    v0 = 1;
    v1 = v11;
    v2 = 1;
    v5 = starship::module::Module::set_segments(&v0);
    return struct96 {
        field_0: v4.field_0
        field_16: v6
        field_32: v7
        field_48: v8
        field_64: v9
        field_80: *(&v4.field_80 as &i128)
    };
}
