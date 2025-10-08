fn firecracker::main() -> long long {
    let v0: Result<struct184, struct16>;  // [bp-0x119]
    let v1: &str;  // [bp-0x118], Other Possible Types: struct24, struct72, u64
    let v2: struct24;  // [bp-0x110], Other Possible Types: u64
    let v3: struct24;  // [bp-0x108], Other Possible Types: u64
    let v4: struct16;  // [bp-0x100], Other Possible Types: u128
    let v5: struct24;  // [bp-0xf8]
    let v6: struct8;  // [bp-0xd0]
    let v7: struct8;  // [bp-0xc8]
    let v8: struct40;  // [bp-0xc0]
    let v9: struct32;  // [bp-0x98], Other Possible Types: struct40
    let v10: struct32;  // [bp-0x88]
    let v11: iNone;  // [bp-0x78]
    let v12: iNone;  // [bp-0x68]
    let v13: struct24;  // [bp-0x58]
    let v14: struct72;  // [bp-0x50]
    let v15: struct32;  // [bp-0x40]
    let v16: iNone;  // [bp-0x30]
    let v17: iNone;  // [bp-0x20]
    let v19: struct32;  // xmm0

    v14 = firecracker::main_exec();
    if v14.field_0 != 11 {
        v13 = *((&v14.field_52 as &char + 8) as &i64);
        v12 = v17;
        v11 = v16;
        v10 = v15;
        *(&v9.field_0 as &i128) = *(&v14.field_0 as &i128);
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 {
            v8 = struct40 {
                field_0: "firecracker"
                field_16: "firecracker"
                field_32: log::__private_api::loc("src/firecracker/src/main.rs")
            };
            log::__private_api::log_impl(&v1 as u64, 1, &v8);
        }
        eprintln!("Error: {}", &v9 as u8);
        v19 = *(&v9.field_0 as &i128);
        v1 = struct72 {
            field_0: v19
            field_16: *(&v10.field_0 as &i128)
            field_32: v11
            field_48: v12
            field_64: v13
        };
        v0 = firecracker::<impl core::convert::From<firecracker::MainError> for vmm::FcExitCode>::from(&v1);
        if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 {
            return v0 as u64;
        }
        v6 = &v0;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v1 = "Firecracker exiting with error. exit_code=";
        v2 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        v8 = struct40 {
            field_0: "firecracker"
            field_16: "firecracker"
            field_32: log::__private_api::loc("src/firecracker/src/main.rs")
        };
        log::__private_api::log_impl(&v1, 1, &v8);
        return v0 as u64;
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 > 2 {
        v1 = "Firecracker exiting successfully. exit_code=0";
        v2 = 1;
        v3 = 8;
        v4 = 0;
        v9 = struct40 {
            field_0: "firecracker"
            field_16: "firecracker"
            field_32: log::__private_api::loc("src/firecracker/src/main.rs")
        };
        log::__private_api::log_impl(&v1, 3, &v9);
        return 0;
    } else {
        return 0;
    }
}
