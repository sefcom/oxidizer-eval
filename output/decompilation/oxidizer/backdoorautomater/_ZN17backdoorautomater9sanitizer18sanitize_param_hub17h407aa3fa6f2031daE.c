fn backdoorautomater::sanitizer::sanitize_param_hub(a0: i64, a1: u32, a2: u32, a3: u32) -> int {
    let v0: u32;  // [bp-0x6c]
    let v1: struct24;  // [bp-0x68]
    let v2: struct24;  // [bp-0x50]
    let v3: u64;  // [bp-0x40]
    let v4: u32;  // [bp-0x38]
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax

    v1 = struct24 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i64)
    };
    v2 = backdoorautomater::sanitizer::sanitize_ip(&v1, a2, a3);
    v4 = a1;
    *((a0 + 16) as &u64) = v3;
    *(a0 as &u128) = v2.field_0;
    v1 = struct24 {
        field_0: *((a0 + 24) as &i128)
        field_16: *((a0 + 40) as &i64)
    };
    v0 = 0;
    v2 = backdoorautomater::sanitizer::sanitize_service(&v1);
    v6 = a0 + 24;
    *((v6 + 16) as &u64) = v3;
    *(v6 as &u128) = v2.field_0;
    v1 = struct24 {
        field_0: *((a0 + 48) as &i128)
        field_16: *((a0 + 64) as &i64)
    };
    v0 = *((a0 + 64) as &i64) & -0x100 | 1;
    v2 = backdoorautomater::sanitizer::sanitize_port(&v1);
    v7 = a0 + 48;
    *((v7 + 16) as &u64) = v3;
    *(v7 as &u128) = v2.field_0;
    v1 = struct24 {
        field_0: *((a0 + 72) as &i128)
        field_16: *((a0 + 88) as &i64)
    };
    v0 = *((a0 + 88) as &i64) & -0x100 | 1;
    v2 = backdoorautomater::sanitizer::sanitize_time(&v1);
    v8 = a0 + 72;
    *((v8 + 16) as &u64) = v3;
    *(v8 as &u128) = v2.field_0;
    v1 = struct24 {
        field_0: *((a0 + 96) as &i128)
        field_16: *((a0 + 112) as &i64)
    };
    v0 = *((a0 + 112) as &i64) & -0x100 | 1;
    v2 = backdoorautomater::sanitizer::sanitize_path(&v1);
    v9 = a0 + 96;
    *((v9 + 16) as &u64) = v3;
    *(v9 as &u128) = v2.field_0;
    v0 = v9 & -0x100 | 1;
    backdoorautomater::sanitizer::sanitize_choice(*((a0 + 144) as &i8), v4);
    *((a0 + 144) as &i8) = *((a0 + 144) as &i8);
    v1 = struct24 {
        field_0: *((a0 + 120) as &i128)
        field_16: *((a0 + 136) as &i64)
    };
    v2 = backdoorautomater::sanitizer::sanitize_script(&v1);
    v10 = a0 + 120;
    *((v10 + 16) as &u64) = v3;
    *(v10 as &u128) = v2.field_0;
    return;
}
