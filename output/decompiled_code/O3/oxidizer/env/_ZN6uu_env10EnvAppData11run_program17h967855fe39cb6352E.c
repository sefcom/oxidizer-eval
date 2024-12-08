fn uu_env::EnvAppData::run_program(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x2d0]
    let v1: i128;  // [bp-0x2c8]
    let v2: i8;  // [bp-0x2b8]
    let v3: i64;  // [sp-0x2b0], Other Possible Types: struct24
    let v4: i64;  // [sp-0x298]
    let v5: i64;  // [sp-0x290]
    let v6: struct24;  // [bp-0x288]
    let v7: i128;  // [sp-0x280]
    let v8: i64;  // [sp-0x270], Other Possible Types: Result<struct4, struct8>
    let v9: i64;  // [sp-0x268]
    let v10: i64;  // [sp-0x260]
    let v11: i64;  // [sp-0x258]
    let v12: i64;  // [sp-0x248]
    let v13: i64;  // [sp-0x240]
    let v14: i8;  // [bp-0x238], Other Possible Types: Option<struct4>
    let v15: i64;  // [sp-0x198], Other Possible Types: struct140
    let v16: i128;  // [sp-0x190]
    let v17: i64;  // [sp-0x188]
    let v18: i8;  // [bp-0x180]
    let v19: i128;  // [sp-0x100], Other Possible Types: struct149, struct16
    let v21: i8;  // bpl
    let v22: i64;  // r14
    let v23: i128;  // xmm0
    let v24: i64;  // r12
    let v25: i64;  // r15
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: struct8;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // rdx
    let v33: i128;  // xmm0
    let v34: i64;  // r14
    let v35: i64;  // rax
    let v36: i32;  // edi
    let v37: i64;  // rax
    let v38: i64;  // rsi

    v11 = *((a1 + 88) as &i64);
    v21 = a2;
    v22 = *((a1 + 80) as &i64);
    v23 = *(v22 as &i128);
    v6 = struct24 {
        field_0: 0x8000000000000000
        field_8: v23
    };
    v3 = <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v6, a2);
    v19 = std::process::Command::new(v6.field_8 as i64, *((&v6.field_8 as &char + 8) as &i64));
    v12 = v22 + 16;
    v19 = std::process::Command::args(v22 + 16, v11 - 1);
    v24 = *((a1 + 136) as &i64);
    if v24 {
        v25 = *((a1 + 144) as &i64);
        <std::process::Command as std::os::unix::process::CommandExt>::arg0(&v19, v24, v25);
        v3 = 0x8000000000000000;
        v3.field_8 = vvar_125{reg 112};
        v3.field_16 = vvar_129{reg 136};
        if !v21 {
            goto LABEL_4ce3cc;
        }
        v15 = 1;
        v16 = v24;
        v17 = v25;
        v18 = 1;
        eprintln!("argv0:     {:?}", &v15);
    } else if !v21 {
        goto LABEL_4ce3cc;
    }
    v26 = v7;
    v15 = 1;
    v16 = v26;
    v18 = 0;
    eprintln!("executing: {:?}", &v15);
    v4 = &g_424a55;
    v5 = 6;
    v27 = *((&v3 as &char + 8) as &i128);
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
    v15 = 1;
    v16 = v27;
    v18 = 1;
    eprintln!("{:?}[0]= {:?}", &v4, &v15);
    v8 = v12;
    v9 = v22 + v11 * 16;
    v10 = 0;
    v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if v31 {
        do {
            v13 = v30 + 1;
            v33 = *(v32 as &i128);
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
            v0 = 1;
            v1 = v33;
            v2 = 1;
            eprintln!("{:?}[{:?}]= {:?}", &v4, &v13, &v0);
            v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        } while (v31);
    }
LABEL_4ce3cc:
    v8 = std::process::Command::status(&v19);
    match v8 {
        Err(_) => {
            v34 = v9;
            if !std::io::error::Error::kind(v34) as i8 || std::io::error::Error::kind(v34) as i8 == 20 {
                v37 = uu_env::EnvAppData::make_error_no_such_file_or_dir(*((a0 + 1) as &i8) as u8 as u64, v6.field_8 as i64, *((&v6.field_8 as &char + 8) as &i64));
            } else {
                v4 = v34;
                v15 = uucore::util_name();
                v16 = v31;
                eprint!("{:?}: ", &v15);
                eprintln!("unknown error: {:?}", &v4);
                v37 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126);
            }
        },
        Ok(_) => {
            v35 = *((&v8 as &char + 4) as &i32) as u32 as u64;
            if !v35 as i32 {
                return 0;
            }
            v36 = v35 as i32;
            if !(v36 as i8 & 127) {
                v37 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35 >> 8 & 4294967295);
            } else {
                if ((v36 & 127) + 1) as i8 < 2 {
                    core::option::unwrap_failed(); /* do not return */
                }
                core::result::Result<T,E>::unwrap(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from((v36 & 127) as u32 as u64) as i32 as u32 as u64, v31 as u32 as u64);
                nix::sys::signal::SigSet::all(&v14);
                v15 = nix::sys::signal::SigAction::new(&v14);
                v14 = nix::sys::signal::sigaction(v31 as u32 as u64, &v15);
                nix::sys::signal::raise(v31 as u32 as u64, v38, v31);
            }
        },
    }
    return v37;
}
