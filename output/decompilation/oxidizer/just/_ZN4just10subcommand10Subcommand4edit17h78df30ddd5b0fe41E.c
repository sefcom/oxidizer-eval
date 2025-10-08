fn just::subcommand::Subcommand::edit(a1: &struct48) -> : struct33 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x128]
    let v1: core::fmt::rt::Argument;  // [bp-0x128]
    let v2: alloc::string::String;  // [bp-0x118]
    let v3: Result<struct4, struct8>;  // [bp-0x110], Other Possible Types: struct24
    let v4: core::fmt::Arguments;  // [bp-0x10c]
    let v5: struct24;  // [bp-0x108]
    let v6: u64;  // [bp-0x100]
    let v7: struct157;  // [bp-0xf8], Other Possible Types: struct16, struct17, u8

    std::env::var_os(&v7, "VISUAL");
    v3 = core::option::Option<T>::or_else(&v7);
    if (((0 ^ v3.field_0 as i64) & (0 ^ -(v3.field_0 as i64))) >> 63) as char {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("vim");
    } else {
        v2 = v6;
        v1 = v3.field_0;
    }
    v7 = std::process::Command::new(&v1 as u8);
    v7 = std::process::Command::current_dir(a1 + 24);
    v7 = std::process::Command::arg(a1);
    v3 = std::process::Command::status(&v7);
    if v3 as i32 == 1 {
        return struct40 {
            field_0: 19
            padding_1: <UNKNOWN>
            field_8: v5
            field_16: v1
            field_32: v2
        };
    } else if v4 {
        return struct32 {
            field_0: 20
            padding_1: <UNKNOWN>
            field_4: v4
            field_8: v1
            field_24: v2
        };
    } else {
        return struct1 {
            field_0: 56
        };
    }
}
