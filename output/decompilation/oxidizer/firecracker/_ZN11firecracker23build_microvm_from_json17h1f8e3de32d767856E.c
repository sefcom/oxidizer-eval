fn firecracker::build_microvm_from_json(a1: i64, a2: i64, a3: i64, a4: &struct80, a5: i8, a6: i8, a7: i64, a8: i64, a9: i64) -> : struct376 {
    let a0: i64;  // rdi
    let v0: i8;  // [bp-0x398], Other Possible Types: u128
    let v1: u128;  // [bp-0x391]
    let v2: u128;  // [bp-0x388]
    let v3: u128;  // [bp-0x381]
    let v4: u128;  // [bp-0x378]
    let v5: u128;  // [bp-0x371]
    let v6: u128;  // [bp-0x369]
    let v7: struct16;  // [bp-0x361]
    let v9: struct376;  // [bp-0x320]
    let v10: struct65;  // [bp-0x320]
    let v11: u64;  // [bp-0x320]
    let v12: u32;  // [bp-0x31c]
    let v16: u128;  // [bp-0x2e8]
    let v17: struct57;  // [bp-0x1a8]
    let v18: u8;  // [bp-0x160]
    let v19: struct24;  // [bp-0x38]
    let v20: struct24;  // [bp-0x37]
    let v21: struct48;  // r12
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm1
    let v24: u8;  // r13b
    let v25: Result<struct4, struct8>;  // al
    let v27: struct17;  // ecx
    let v28: struct56;  // rcx

    v9 = vmm::resources::VmResources::from_json(*((a3 + 8) as &i64), *((a3 + 16) as &i64), a4, a7, a8, a9);
    v21 = v9.field_0;
    if (((0 ^ v21) & (0 ^ -(v21))) >> 63) as char {
        v7 = (&v9)[7].field_0;
        v22 = *(&(&v9)[1] as &i128);
        v23 = *(&(&v9)[3] as &i128);
        v5 = *(&(&v9)[5] as &i128);
        *(&v3 as void*) = v23;
        *(&v1 as void*) = v22;
        return struct80 {
            field_0: 0x8000000000000000
            field_8: 27
            field_9: <UNKNOWN>
            field_25: <UNKNOWN>
            field_41: <UNKNOWN>
            field_56: v7
            field_64: <UNKNOWN>
        };
    }
    v24 = (&v9)[1].field_0;
    v0 = *((&(&v9)[1].field_0 as &char + 1) as &i128);
    v2 = *((&(&v9)[3].field_0 as &char + 1) as &i128);
    v4 = *((&(&v9)[5].field_0 as &char + 1) as &i128);
    v6 = v16;
    memcpy(&v18, &v9 as u8, 304);
    v17 = struct57 {
        field_0: v21
        field_8: v24
        field_9: v0
        field_25: v2
        field_41: v4
    };
    v19 = a5;
    v20 = a6;
    v11 = vmm::builder::build_and_boot_microvm(a4, &v17, a2, a1);
    v25 = v10.field_0;
    if let Ok(_) = v25 {
        v27 = *(&(&v10.field_0)[1] as &i32);
        v28 = *(&v10.field_4 as &i64);
        return struct80 {
            field_0: 0x8000000000000000
            field_8: v25
            field_9: v12
            field_12: v28
            field_16: *(&v10.field_8 as &i128)
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
    }
}
