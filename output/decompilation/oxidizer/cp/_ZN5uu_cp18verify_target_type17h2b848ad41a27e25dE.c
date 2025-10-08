fn uu_cp::verify_target_type(a1: &std::path::Path, a2: i64) -> : struct8 {
    let a0: u64;  // rdi
    let v0: core::fmt::rt::Argument;  // [bp-0x88]
    let v7: core::fmt::Arguments;  // [bp-0x58]
    let v9: u64;  // r13
    let v10: u8;  // al
    let v13: struct16;  // rax

    v9 = 9223372036854775811;
    v10 = std::path::Path::is_dir(a1);
    if *(a2 as &i8) == 1 {
        if v10 {
            goto LABEL_4a55ee;
        }
    } else {
        if !v10 {
LABEL_4a55ee:
            v7 = core::fmt::Arguments {
                pieces: &[&str] {
                    ptr: v13
                    len: 2
                }
                args: [v0]
                fmt: 0
            };
            core::option::Option<T>::map_or_else(a0 + 8, &v7);
        }
    }
    return struct8 {
        field_0: v9
    };
}
