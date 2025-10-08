fn uu_timeout::timeout(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i64, a7: i8, a8: i8, a9: i8) -> u64 {
    let v0: struct8;  // [bp-0x1a8]
    let v1: u32;  // [bp-0x1a0]
    let v2: struct12;  // [bp-0x198]
    let v3: u32;  // [bp-0x194]
    let v4: struct32;  // [bp-0x184]
    let v5: struct32;  // [bp-0x168]
    let v6: struct32;  // [bp-0x164]
    let v7: u64;  // [bp-0x160]
    let v8: Result<struct4, struct8>;  // [bp-0x140]
    let v9: u32;  // [bp-0x13c]
    let v10: struct8;  // [bp-0x138]
    let v11: alloc::string::String;  // [bp-0x130]
    let v12: u64;  // [bp-0x120]
    let v13: Result<struct4, struct8>;  // [bp-0x118], Other Possible Types: struct157, struct16, struct8
    let v14: u128;  // [bp-0x118]
    let v15: struct8;  // [bp-0x118]
    let v16: u32;  // [bp-0x114]
    let v17: u64;  // [bp-0x110]
    let v18: u64;  // [bp-0x108]
    let v19: u32;  // [bp-0x100]
    let v22: core::fmt::rt::Argument;  // eax
    let v24: u64;  // rax
    let v25: u64;  // rax
    let v27: u64;  // r15
    let v28: u64;  // r14
    let v29: u64;  // rax
    let v30: u8;  // dil

    v1 = vvar_6;
    if !a7 {
        setpgid(0, 0);
    }
    v22 = uucore::features::signals::enable_pipe_errors(a0, a1, a2, a3);
    if v22 != 134 {
        return uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22 as u64);
    }
    v13 = std::process::Command::new(a0);
    v13 = std::process::Command::args(a0 + 24, a1 - 1);
    v13 = std::process::Command::stdin(a1, a2);
    v13 = std::process::Command::stdout(a1, a2);
    v15 = std::process::Command::stderr(a1, a2);
    v5 = std::process::Command::spawn(&v15);
    if v5.field_0 == 1 {
        return uu_timeout::timeout::{{closure}}(v7);
    }
    v4 = v6;
    uu_timeout::unblock_sigchld(a0, a1, a2, a3);
    v2 = <std::process::Child as uucore::features::process::ChildExt>::wait_or_timeout(&v4, a2, a3);
    if v2.field_0 == 1 {
        uu_timeout::send_signal(&v4, a4, a7);
        uu_timeout::status::<impl core::convert::From<uu_timeout::status::ExitStatus> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
    } else if v3 == 1 {
        v25 = v2.field_8;
        uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((!(v25 & 127) ? v25 >> 8 & 4294967295 : uu_timeout::timeout::{{closure}}(v25 & 4294967295)));
    } else {
        uu_timeout::report_if_verbose(a4, *((a0 + 8) as &i64), *((a0 + 16) as &i64), a9);
        v27 = a7;
        uu_timeout::send_signal(&v4, a4, v27);
        if v1 == 0x3b9aca00 {
            v13 = std::process::Child::wait(&v4);
            if v13 as i32 == 1 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
                return v28;
            } else if a8 {
                v29 = v16;
                if (v29 & 127) {
                    goto LABEL_46df2a;
                }
                uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29 >> 8 & 4294967295);
            } else {
LABEL_46df2a:
                uu_timeout::status::<impl core::convert::From<uu_timeout::status::ExitStatus> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
            }
        } else {
            v8 = uu_timeout::wait_or_kill_process(&v4, *((a0 + 8) as &i64), *((a0 + 16) as &i64), a5, v1, a8, v27, a9);
            match v8 {
                Err(v0) => {
                    v11 = format!("{}", &v0);
                    v19 = 125;
                    v14 = *(&v11.vec.buf.inner.cap as &i128) as u128;
                    v18 = v12;
                    alloc::boxed::Box<T>::new(&v14 as u384);
                    return v28;
                },
                Ok(_) => {
                    uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9 as u64);
                },
            }
        }
    }
    v28 = v24;
    return v28;
}
