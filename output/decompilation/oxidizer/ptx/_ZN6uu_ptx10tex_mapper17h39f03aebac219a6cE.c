fn uu_ptx::tex_mapper(a0: &struct24, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x4c]
    let v1: i64;  // [bp-0x48], Other Possible Types: unsigned int
    let v2: i64;  // [sp-0x40]
    let v3: i64;  // [sp-0x38], Other Possible Types: int, Arguments
    let v4: struct24;  // [sp-0x38]
    let v8: i64;  // rdx

    v0 = a1 as u32;
    if (a1 - 35) as u32 < 4 {
        goto LABEL_5b7d6a;
    }
    match (a1 as u32) {
        92 => {
            return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "\backslash{}");
        }
        95 => {
LABEL_5b7d6a:
            *(&v1 as &&unsigned int) = &v0;
            v2 = <char as core::fmt::Display>::fmt;
            v3 = "\\";
            v3 = 1;
            break;
        }
        123 | 125 => {
            *(&v1 as &&unsigned int) = &v0;
            v2 = <char as core::fmt::Display>::fmt;
            v3 = Arguments {
                pieces: ["$\\", "$"]
                args: [&v1]
                fmt: 0
            };
            break;
        }
        _ => {
            *(&v1 as &i32) = 0;
            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::char::methods::encode_utf8_raw(a1 & 4294967295, &v1), v8);
            return struct24 {
                field_0: *(&v4.field_0 as &i128)
                field_16: v7
            };
        }
    }
    core::option::Option<T>::map_or_else(a0, &v3);
}
