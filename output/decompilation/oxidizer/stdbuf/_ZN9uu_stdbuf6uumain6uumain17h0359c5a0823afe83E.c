fn uu_stdbuf::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct64;  // [bp-0x518], Other Possible Types: struct28, u128
    let v1: struct16;  // [bp-0x518]
    let v2: Result<struct48, struct24>;  // [bp-0x518], Other Possible Types: struct56, struct64, u64
    let v3: Result<struct4, struct8>;  // [bp-0x518]
    let v4: u128;  // [bp-0x518]
    let v5: u64;  // [bp-0x510]
    let v6: u64;  // [bp-0x508]
    let v7: struct24;  // [bp-0x500], Other Possible Types: u32
    let v8: u64;  // [bp-0x4d8]
    let v9: struct16;  // [bp-0x4d0]
    let v10: u64;  // [bp-0x4c8]
    let v11: u8;  // [bp-0x4b0]
    let v12: struct16;  // [bp-0x498]
    let v13: struct24;  // [bp-0x470]
    let v14: struct56;  // [bp-0x458]
    let v15: u64;  // [bp-0x450]
    let v16: struct32;  // [bp-0x420], Other Possible Types: u32
    let v17: struct16;  // [bp-0x41c]
    let v18: u64;  // [bp-0x418]
    let v19: struct24;  // [bp-0x400]
    let v20: u64;  // [bp-0x3e8]
    let v21: u128;  // [bp-0x3e0]
    let v22: u128;  // [bp-0x3d0]
    let v23: u64;  // [bp-0x3c0]
    let v24: struct24;  // [bp-0x3b8]
    let v25: alloc::string::String;  // [bp-0x398]
    let v26: u64;  // [bp-0x388]
    let v27: alloc::string::String;  // [bp-0x380]
    let v28: u64;  // [bp-0x370]
    let v29: alloc::string::String;  // [bp-0x368]
    let v30: u64;  // [bp-0x358]
    let v31: alloc::string::String;  // [bp-0x350]
    let v32: u64;  // [bp-0x340]
    let v33: struct64;  // [bp-0x338]
    let v34: struct157;  // [bp-0x2f0], Other Possible Types: struct16, struct56, struct712
    let v35: Result<struct48, struct32>;  // [bp-0x2f0]
    let v36: u128;  // [bp-0x2e8]
    let v37: u128;  // [bp-0x2d8]
    let v39: u64;  // r14
    let v40: u64;  // rax
    let v41: u64;  // rax
    let v43: u32;  // eax
    let v44: u32;  // eax

    v34 = uu_stdbuf::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v34, a0, a1);
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return alloc::boxed::Box<T>::new(v15, 125);
    }
    v14 = v2;
    v35 = <uu_stdbuf::ProgramOptions as core::convert::TryFrom<&clap_builder::parser::matches::arg_matches::ArgMatches>>::try_from(&v14);
    match v35 {
        Err(_) => {
            v6 = *((&v35 as &char + 24) as &i64) as u64;
            v0 = v36;
            v7 = 125;
            alloc::boxed::Box<T>::new(&v0);
        },
        Ok(_) => {
            v23 = *((&v35 as &char + 40) as &i64);
            v22 = v37;
            v20 = v35 as i64;
            v21 = v36;
            v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14);
            v0 = clap_builder::parser::error::MatchesError::unwrap(&v34);
            if !v0.field_0 as i64 {
                core::option::unwrap_failed(); /* do not return */
            }
            v33 = v2;
            v40 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v33);
            if !v40 {
                core::option::unwrap_failed(); /* do not return */
            }
            v34 = std::process::Command::new(v40);
            core::iter::traits::iterator::Iterator::collect(&v11, &v33);
            tempfile::dir::tempdir(&v0);
            v13 = core::result::Result<T,E>::unwrap(&v0);
            v2 = uu_stdbuf::get_preload_env(&v13);
            if let Ok(_) = v2 {
                v24 = v7;
                v19 = struct24 {
                    field_0: v2 as i64
                    field_8: v39
                    field_16: *((&v2 as &char + 16) as &i64)
                };
                std::process::Command::env(&v34, &v19, &v24);
                uu_stdbuf::set_command_env(&v34, "_STDBUF_I", &v20);
                uu_stdbuf::set_command_env(&v34, "_STDBUF_O", &v21 as u8);
                uu_stdbuf::set_command_env(&v34, "_STDBUF_E", &v22 as u8);
                v34 = std::process::Command::args(&v11);
                v16 = std::process::Command::spawn(&v34);
                if v16.field_0 == 1 {
                    v8 = v18;
                    v41 = std::io::error::Error::kind(v18) as u64;
                    if !v41 as u8 {
                        v27 = format!("{} No such file or directory", "failed to execute process:");
                        v0 = struct28 {
                            field_0: *(&v27.vec.buf.inner.cap as &i128)
                            field_16: v28
                            field_24: 127
                        };
                        alloc::boxed::Box<T>::new(&v0);
                    } else if v41 as u32 == 1 {
                        v25 = format!("{} Permission denied", "failed to execute process:");
                        v0 = struct28 {
                            field_0: *(&v25.vec.buf.inner.cap as &i128)
                            field_16: v26
                            field_24: 126
                        };
                        alloc::boxed::Box<T>::new(&v0);
                    } else {
                        v29 = format!("{} {}", "failed to execute process:", &v8);
                        v0 = struct28 {
                            field_0: *(&v29.vec.buf.inner.cap as &i128)
                            field_16: v30
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v0);
                    }
                } else {
                    v12 = v17;
                    v3 = std::process::Child::wait(&v12);
                    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3);
                    if !v9.field_0 {
                        v43 = v10 as u32;
                        v44 = v43 & 127;
                        if !(v43 as u8 & 127) {
                            v39 = (!(v10 >> 8) as u32 ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((v10 >> 8) as u32));
                        } else if v44 as u8 + 1 >= 2 {
                            v16 = v44;
                            v31 = format!("process killed by signal {}", &v16);
                            v7 = 1;
                            v4 = *(&v31.vec.buf.inner.cap as &i128) as u128;
                            v6 = v32;
                            alloc::boxed::Box<T>::new(&v4 as u384);
                        } else {
                            core::option::unwrap_failed(); /* do not return */
                        }
                    }
                }
            }
        },
    }
    return v5;
}
