fn uu_dd::Input::new_stdin(a1: &struct104) -> Result<struct16, struct16> {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0xe8]
    let v1: u64;  // [bp-0xd0]
    let v2: u64;  // [bp-0xc8]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v4: u64;  // [bp-0xb8]
    let v6: u64;  // rdi
    let v7: u64;  // rdx
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v10: u64;  // xmm0lq
    let v11: i64;  // rdi
    let v13: u64;  // rdx
    let v14: i64;  // rdi

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    v3 = std::fs::File::metadata(&v0);
    match v3 {
        Err(v6) => {
            goto LABEL_4d6ac9;
        },
        Ok(_) => {
            if (0xf000 & *((&v3 as &char + 56) as &i32)) == 0x8000 && *((a0 + 66) as &i8) {
                v1 = uucore::util_name();
                v2 = v7;
                eprint!("{}: ", &v1);
                eprintln!("standard input: not a directory");
                v8 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            } else {
                if !(*((a0 + 128) as &i64) && uu_dd::Source::skip(&v0 as u8, *((a0 + 128) as &i64))) {
                    *((v11 + 8) as &u64) = v10;
                    *((v11 + 16) as &struct_1 *) = a0;
                    *(v11 as &i64) = 0;
                    return;
                }
                v6 = v9;
LABEL_4d6ac9:
                v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            }
            *((v14 + 8) as &u64) = v8;
            *((v14 + 16) as &u64) = v13;
            *(v14 as &i64) = 1;
            return;
        },
    }
}
