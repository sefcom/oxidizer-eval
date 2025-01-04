fn uu_dd::Input::new_stdin(a0: &struct24, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0xe8]
    let v1: u64;  // [sp-0xd0]
    let v2: u64;  // [sp-0xc8]
    let v3: struct16;  // [sp-0xc0], Other Possible Types: u128
    let v4: u64;  // [sp-0xb8]
    let v5: i8;  // [bp-0x88]
    let v7: u64;  // rsi
    let v8: u64;  // rdx
    let v9: u256;  // ymm0
    let v10: u256;  // ymm0
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v13: u256;  // ymm0

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    v3 = std::fs::File::metadata(&v0);
    if v3 as i32 == 2 {
        goto LABEL_4d6ac9;
    } else {
        if !((0xf000 & v5) != 0x8000) && !(!a1->field_42) {
            v1 = uucore::util_name();
            v2 = v8;
            eprint!("{:?}: ", &v1);
            eprintln!("standard input: not a directory");
            v12 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        } else {
            v7 = a1->field_80;
            if !a1->field_80 {
                v10 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1;
                return struct24 {
                    field_0: 0
                    field_8: v10 as u64
                    field_16: a1
                };
            } else if !uu_dd::Source::skip(&v0, v7, v11) {
                v10 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0;
                return struct24 {
                    field_0: 0
                    field_8: v10 as u64
                    field_16: a1
                };
            }
LABEL_4d6ac9:
            v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        }
        return struct24 {
            field_0: 0
            field_8: v10 as u64
            field_16: a1
        };
    }
}
