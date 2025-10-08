fn uu_env::EnvAppData::run_program(a0: i64, a1: i64, a2: i8) -> u64 {
    let v0: u64;  // [bp-0x2e8]
    let v1: core::option::Option<&str>;  // [bp-0x2e0]
    let v2: u64;  // [bp-0x2d8]
    let v3: u64;  // [bp-0x2d0]
    let v4: u8;  // [bp-0x2c8]
    let v5: Result<struct4, struct8>;  // [bp-0x2c0], Other Possible Types: u64
    let v6: u32;  // [bp-0x2bc]
    let v7: u64;  // [bp-0x2b8]
    let v8: void*;  // [bp-0x2b0]
    let v9: struct24;  // [bp-0x2a8], Other Possible Types: u64
    let v10: struct24;  // [bp-0x2a0]
    let v11: core::fmt::Arguments;  // [bp-0x298]
    let v12: u64;  // [bp-0x290]
    let v13: u64;  // [bp-0x288]
    let v14: &str;  // [bp-0x280], Other Possible Types: struct712
    let v15: struct8;  // [bp-0x270]
    let v16: u64;  // [bp-0x1c8]
    let v17: struct140;  // [bp-0x1c0], Other Possible Types: struct712, struct640, u64
    let v18: u64;  // [bp-0x1c0]
    let v19: u64;  // [bp-0x1c0]
    let v20: struct24;  // [bp-0x1b8], Other Possible Types: struct712, struct640, u128
    let v21: core::fmt::Arguments;  // [bp-0x1b0], Other Possible Types: struct640, u64
    let v22: struct640;  // [bp-0x1a8], Other Possible Types: u8
    let v23: struct24;  // [bp-0x128]
    let v24: u64;  // [bp-0x120]
    let v25: u64;  // [bp-0x118]
    let v26: struct157;  // [bp-0x110], Other Possible Types: struct16
    let v28: i64;  // r13
    let v29: Option<struct48>;  // r15
    let v30: struct24;  // r12
    let v31: core::fmt::Arguments;  // rbx
    let v32: Option<struct17>;  // rax
    let v33: i64;  // rdx
    let v34: i64;  // rdx
    let v36: u64;  // r15
    let v37: u32;  // eax
    let v38: struct40;  // rax
    let v39: u64;  // rax
    let v40: u32;  // edi
    let v41: struct40;  // r15
    let v43: u64;  // [bp-0x270]

    v13 = *((a1 + 88) as &i64);
    v28 = *((a1 + 80) as &i64);
    v23 = struct24 {
        field_0: 0x8000000000000000
        field_8: *(v28 as &i64)
        field_16: *((v28 + 8) as &i64)
    };
    v0 = v24;
    v9 = <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v23);
    v12 = v25;
    v26 = std::process::Command::new(v24, v25);
    v29 = v28 + 16;
    v26 = std::process::Command::args(v29, v13 - 1);
    v30 = *((a1 + 136) as &i64);
    if v30 {
        v31 = *((a1 + 144) as &i64);
        <std::process::Command as std::os::unix::process::CommandExt>::arg0(&v26, v30, v31);
        v9 = 0x8000000000000000;
        v10 = v30;
        v11 = v31;
        if a2 {
            v17 = 1;
            v20 = v30;
            v21 = v31;
            v22 = 1;
            eprintln!("argv0:     {}", &v17);
LABEL_4746aa:
            v17 = 1;
            v20 = v0;
            v21 = v12;
            v22 = 0;
            eprintln!("executing: {}", &v17);
            v14 = "   arg";
            v17 = 1;
            v20 = *(&v9.field_8 as &i128);
            v22 = 1;
            eprintln!("{}[0]= {}", &v14 as u64, &v17);
            *(&v5 as &Option<struct48>) = v29;
            v7 = v28 + v13 * 16;
            v8 = 0;
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
            v18 = 1;
            if v33 {
                do {
                    v16 = v32 + 1;
                    v1 = 1;
                    v2 = *(v34 as &i64);
                    v3 = *((v34 + 8) as &i64);
                    v4 = 1;
                    eprintln!("{}[{}]= {}", &v14 as u64, &v16, &v1);
                    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
                    v18 = v19;
                } while (v34);
            }
        }
    } else if !(!a2) {
        goto LABEL_4746aa;
    }
    v5 = std::process::Command::status(&v26);
    match v5 {
        Err(_) => {
            v14 = &v7;
            v36 = v12;
            if !(std::io::error::Error::kind(v7) as u64 & 255) {
                goto LABEL_474944;
            }
            match (v37) {
                1 => {
                    v17 = uucore::util_name();
                    v20 = v33;
                    eprint!("{}: ", &v17);
                    v17 = 1;
                    v20 = v0;
                    v21 = v36;
                    v22 = 1;
                    eprintln!("{}: Permission denied", &v17);
                }
                20 => {
LABEL_474944:
                    uu_env::EnvAppData::make_error_no_such_file_or_dir(*((a0 + 1) as &i8), v0, v36);
                    break;
                }
                _ => {
                    v17 = uucore::util_name();
                    v20 = v33;
                    eprint!("{}: ", &v17);
                    eprintln!("unknown error: {}", &v14);
                }
            }
            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126);
        },
        Ok(_) => {
            v39 = v6 as u64;
            if !v39 as u32 {
                return v41;
            }
            v40 = v39 as u32;
            if !(v40 as u8 & 127) {
                uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v39 >> 8 & 4294967295);
            } else {
                if (v40 as u8 & 127) + 1 > 1 {
                    core::result::Result<T,E>::unwrap(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(v40 & 127) as u32 as u8, v33 as u32 as u64);
                    nix::sys::signal::SigSet::all(&v43);
                    v17 = nix::sys::signal::SigAction::new(&v43);
                    v15 = nix::sys::signal::sigaction(v33 as u32 as u64, &v17);
                    nix::sys::signal::raise(v33 as u32);
                }
                core::option::unwrap_failed(); /* do not return */
            }
        },
    }
    v41 = v38;
    return v41;
}
