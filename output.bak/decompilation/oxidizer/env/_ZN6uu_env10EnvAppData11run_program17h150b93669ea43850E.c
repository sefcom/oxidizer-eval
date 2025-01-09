fn uu_env::EnvAppData::run_program(a0: void*, a1: void*, a2: u8) -> u64 {
    let v0: i64;  // [sp-0x2d0]
    let v1: i128;  // [bp-0x2c8]
    let v2: i8;  // [bp-0x2b8]
    let v3: i64;  // [sp-0x2b0], Other Possible Types: struct24
    let v4: i64;  // [sp-0x2a8]
    let v5: i64;  // [sp-0x2a0]
    let v6: i64;  // [sp-0x298]
    let v7: i64;  // [sp-0x290]
    let v8: struct24;  // [bp-0x288]
    let v9: i128;  // [sp-0x280]
    let v10: i64;  // [sp-0x270], Other Possible Types: Result<struct4, struct8>
    let v11: i64;  // [sp-0x268]
    let v12: i64;  // [sp-0x260]
    let v13: i64;  // [sp-0x258]
    let v14: i64;  // [sp-0x248]
    let v15: i64;  // [sp-0x240]
    let v16: i8;  // [bp-0x238], Other Possible Types: Option<struct4>
    let v17: i64;  // [sp-0x198], Other Possible Types: struct140
    let v18: i64;  // [sp-0x190]
    let v19: i64;  // [sp-0x188]
    let v20: i8;  // [bp-0x180]
    let v21: struct149;  // [sp-0x100], Other Possible Types: struct16, i128
    let v23: i64;  // r14
    let v24: i128;  // xmm0
    let v25: i64;  // r12
    let v26: i64;  // r15
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: struct8;  // rax
    let v32: i64;  // rdx
    let v33: i64;  // rdx
    let v34: i128;  // xmm0
    let v35: i64;  // r14
    let v37: i32;  // edi
    let v38: i32;  // edi
    let v39: i64;  // rax
    let v40: i64;  // rdi

    v13 = *((a1 + 88) as &i64);
    v23 = *((a1 + 80) as &i64);
    v24 = *(v23 as &i128);
    v8 = struct24 {
        field_0: 0x8000000000000000
        field_8: v24
    };
    v3 = <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v8);
    v21 = std::process::Command::new(v8.field_8 as i64, *((&v8.field_8 as &char + 8) as &i64));
    v14 = v23 + 16;
    v21 = std::process::Command::args(v23 + 16, v13 - 1);
    v25 = *((a1 + 136) as &i64);
    if v25 {
        v26 = *((a1 + 144) as &i64);
        <std::process::Command as std::os::unix::process::CommandExt>::arg0(&v21, v25, v26);
        v3 = 0x8000000000000000;
        v4 = v25;
        v5 = v26;
        if !a2 {
            goto LABEL_4ce29c;
        }
        v17 = 1;
        v18 = v25;
        v19 = v26;
        v20 = 1;
        eprintln!("argv0:     {:?}", &v17);
    } else if !a2 {
        goto LABEL_4ce29c;
    }
    v27 = v9;
    v17 = 1;
    v18 = v27;
    v20 = 0;
    eprintln!("executing: {:?}", &v17);
    v6 = &g_42496d;
    v7 = 6;
    v28 = *((&v3 as &char + 8) as &i128);
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    v17 = 1;
    v18 = v28;
    v20 = 1;
    eprintln!("{:?}[0]= {:?}", &v6, &v17);
    v10 = v14;
    v11 = v23 + v13 * 16;
    v12 = 0;
    v31 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if v32 {
        do {
            v15 = v31 + 1;
            v34 = *(v33 as &i128);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
            v0 = 1;
            v1 = v34;
            v2 = 1;
            eprintln!("{:?}[{:?}]= {:?}", &v6, &v15, &v0);
            v31 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        } while (v32);
    }
LABEL_4ce29c:
    v10 = std::process::Command::status(&v21) as u64;
    if v10 {
        v35 = v11;
        if !std::io::error::Error::kind(v35) as i8 || std::io::error::Error::kind(v35) as i8 == 20 {
            v39 = uu_env::EnvAppData::make_error_no_such_file_or_dir(*((a0 + 1) as &i8), v8.field_8 as i64, *((&v8.field_8 as &char + 8) as &i64));
        } else {
            v6 = v35;
            v17 = uucore::util_name();
            v18 = v32;
            eprint!("{:?}: ", &v17);
            eprintln!("unknown error: {:?}", &v6);
            v39 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
        }
    } else {
        if !v37 {
            return 0;
        }
        v38 = *((&v10 as &char + 4) as &i32);
        if !(v38 & 127) {
            v39 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
        } else {
            if (v38 & 127) + 1 < 2 {
                v40 = "src/uu/env/src/env.rs";
            } else {
                core::result::Result<T,E>::unwrap(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(v38 & 127) as i32, v32 as u32);
                nix::sys::signal::SigSet::all(&v16);
                v17 = nix::sys::signal::SigAction::new(&v16);
                v16 = nix::sys::signal::sigaction(v32 as u32, &v17) as u32;
                nix::sys::signal::raise(v32 as u32);
                v40 = "src/uu/env/src/env.rs";
            }
            core::option::unwrap_failed(v40); /* do not return */
        }
    }
    return v39;
}
