fn just::subcommand::Subcommand::compile(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct864, struct112> {
    let a0: void*;  // rdi
    let v0: struct81;  // [bp-0x768], Other Possible Types: u128
    let v1: u64;  // [bp-0x760]
    let v2: struct16;  // [bp-0x758], Other Possible Types: struct32
    let v3: struct16;  // [bp-0x748], Other Possible Types: struct18
    let v4: struct24;  // [bp-0x738]
    let v5: struct24;  // [bp-0x728]
    let v6: struct40;  // [bp-0x718]
    let v7: struct48;  // [bp-0x708]
    let v8: struct104;  // [bp-0x6f0], Other Possible Types: struct18, u64
    let v9: i8;  // [bp-0x6e8]
    let v10: struct16;  // [bp-0x6e0]
    let v11: struct16;  // [bp-0x6e0]
    let v12: i8;  // [bp-0x6d8]
    let v13: i8;  // [bp-0x6c8]
    let v14: i8;  // [bp-0x6b8]
    let v15: i8;  // [bp-0x6a8]
    let v16: i8;  // [bp-0x698]
    let v17: core::fmt::rt::Argument;  // [bp-0x690]
    let v18: u64;  // [bp-0x688]
    let v19: u8;  // [bp-0x680]
    let v20: struct25;  // [bp-0x390]
    let v21: iNone;  // [bp-0x388]
    let v22: struct82;  // [bp-0x378]
    let v23: struct82;  // [bp-0x368]
    let v24: struct16;  // [bp-0x358]
    let v25: struct16;  // [bp-0x348]
    let v26: Option<struct256>;  // [bp-0x338]
    let v27: struct81;  // [bp-0x328]
    let v28: u8;  // [bp-0x320]
    let v31: &mut [u8];  // r12
    let v32: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // r12
    let v33: struct24;  // r12
    let v34: struct16;  // xmm0
    let v35: core::fmt::rt::Argument;  // xmm1
    let v36: struct24;  // xmm2

    just::compiler::Compiler::compile(&v8, a2, a3, a4);
    v0 = *(&v9 as &i128);
    v2 = *(&v12 as &i128);
    v3 = *(&v13 as &i128);
    v4 = *(&v14 as &i128);
    v5 = *(&v15 as &i128);
    v6 = *(&v16 as &i128);
    v7 = v18;
    if (((0 ^ v8) & (0 ^ -(v8))) >> 63) as char {
        return struct112 {
            field_0: 0x8000000000000000
            field_8: v0
            field_24: v2
            field_40: v3
            field_56: v4
            field_72: v5
            field_88: v6
            field_104: v7
        };
    }
    memcpy(&v28, &v19, 752);
    v21 = v0;
    v22 = v2;
    v23 = v3;
    v24 = v4;
    v25 = v5;
    v26 = v6;
    v27 = v7;
    v20 = v8;
    v8 = just::justfile::Justfile::check_unstable(&v20, *((a1 + 420) as &i32));
    if &v8 != "8" {
        v34 = v8.field_0;
        v35 = v8.field_16;
        v36 = v8.field_32;
        return struct112 {
            field_0: 0x8000000000000000
            field_8: v34
            field_24: v35
            field_40: v36
            field_56: v8.field_48
            field_72: v8.field_64
            field_88: v8.field_80
            field_104: v17
        };
    }
    if *((a1 + 423) as &i8) {
        v31 = *(&v28 as &i64);
        if *(&v28 as &i64) {
            do {
                v32 = v31;
                v8 = just::color::Color::stderr(a1 + 388);
                v0 = v27;
                v1 = &g_831110;
                v3 = *((&v8.field_1 as &char + 8) as &i16);
                v2 = *(&v8.field_0 as &i128);
                eprintln!("{}", &v0);
                v33 = v32 - 1;
                v10 = v11;
                v31 = v33;
            } while (v32 != 1);
        }
    }
    memcpy(a0, &v20, 864);
    return;
}
