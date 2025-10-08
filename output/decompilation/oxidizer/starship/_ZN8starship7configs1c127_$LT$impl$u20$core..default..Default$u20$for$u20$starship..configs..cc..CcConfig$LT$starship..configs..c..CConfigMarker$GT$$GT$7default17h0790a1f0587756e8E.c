fn starship::configs::c::<impl core::default::Default for starship::configs::cc::CcConfig<starship::configs::c::CConfigMarker>>::default(a0: i64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v4: i64;  // rbx
    let v6: struct700;  // r14
    let v8: i64;  // r12
    let v10: i64;  // r13
    let v11: i64;  // rax

    v0 = v2;
    v4 = alloc::alloc::Global::alloc_impl(8, 32, 0);
    *(v4 as &&u8) = &g_533d7b;
    *((v4 + 8) as &i64) = 1;
    *((v4 + 16) as &&u8) = &g_533d7c;
    *((v4 + 24) as &i64) = 1;
    v6 = alloc::alloc::Global::alloc_impl(8, 72, 0);
    v8 = alloc::alloc::Global::alloc_impl(8, 32, 0);
    *(v8 as &&u8) = &g_533d7d;
    *((v8 + 8) as &i64) = 2;
    *((v8 + 16) as &&u8) = &g_53387f;
    *((v8 + 24) as &i64) = 9;
    v10 = alloc::alloc::Global::alloc_impl(8, 32, 0);
    *(v10 as &&u8) = &g_533d7f;
    *((v10 + 8) as &i64) = 3;
    *((v10 + 16) as &&u8) = &g_53387f;
    *((v10 + 24) as &i64) = 9;
    v11 = alloc::alloc::Global::alloc_impl(8, 32, 0);
    *(v11 as &&u8) = &g_533d82;
    *((v11 + 8) as &i64) = 5;
    *((v11 + 16) as &&u8) = &g_53387f;
    *((v11 + 24) as &i64) = 9;
    *(v6 as &i64) = 2;
    *((v6 + 8) as &struct_0 *) = v8;
    *((v6 + 16) as &i64) = 2;
    *((v6 + 24) as &i64) = 2;
    *((v6 + 32) as &struct_1 *) = v10;
    *((v6 + 40) as &i64) = 2;
    *((v6 + 48) as &i64) = 2;
    *((v6 + 56) as &struct_2 *) = v11;
    *((v6 + 64) as &i64) = 2;
    return struct168 {
        field_0: 2
        field_8: v4
        field_16: 2
        field_24: 0
        field_32: 8
        field_40: 0
        field_56: 8
        field_64: 0
        field_72: 3
        field_80: v6
        field_88: 3
        field_96: &g_533d87
        field_104: 40
        field_112: &g_533d4d
        field_120: 7
        field_128: &g_523e30
        field_136: 8
        field_144: &g_533daf
        field_152: 2
        field_160: 0
    };
}
