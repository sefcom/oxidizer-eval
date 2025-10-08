fn uu_dd::Input::new_stdin(a1: &struct168) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xe8]
    let v1: struct24;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd0]
    let v3: struct16;  // [bp-0xc8], Other Possible Types: struct28
    let v4: u64;  // [bp-0xc0]
    let v5: i8;  // [bp-0x90]
    let v10: u64;  // rdx

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    if *((a1 + 66) as &i8) {
        v3 = std::fs::File::metadata(&v0);
        if v3.field_0 as i32 == 2 {
            return Err(struct16 {
                field_0: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4)
                field_8: v10
            });
        } else if (0xf000 & *(&v5 as &i32)) != 0x4000 {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("setting flags for 'standard input': Not a directory");
            v3 = struct28 {
                field_0: *(&v1.field_0 as &i128)
                field_16: v2
                field_24: 1
            };
            return Err(struct16 {
                field_0: alloc::boxed::Box<T>::new(&v3) as u64
                field_8: &g_53dcd8
            });
        }
    }
    if !*((a1 + 128) as &i64) {
        return Ok(struct16 {
            field_0: v0
            field_8: a1
        });
    } else if (uu_dd::Source::skip(&v0, *((a1 + 128) as &i64)) & 1) {
        return Err(struct16 {
            field_0: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10)
            field_8: v10
        });
    } else {
        return Ok(struct16 {
            field_0: v0
            field_8: a1
        });
    }
}
