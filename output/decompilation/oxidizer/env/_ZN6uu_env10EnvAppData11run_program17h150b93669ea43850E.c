fn uu_env::EnvAppData::run_program(a0: u32, a1: void*, a2: u8) -> u64 {
    let v0: i64;  // [sp-0x2d0]
    let v1: iNone;  // [bp-0x2c8]
    let v2: i8;  // [bp-0x2b8]
    let v3: i64;  // [sp-0x2a8], Other Possible Types: int, struct24
    let v4: i64;  // [sp-0x298]
    let v5: i64;  // [sp-0x290]
    let v6: struct24;  // [bp-0x288]
    let v7: iNone;  // [sp-0x280]
    let v8: i64;  // [sp-0x270], Other Possible Types: Result<struct4, struct8>
    let v9: i64;  // [sp-0x268]
    let v10: i64;  // [sp-0x260]
    let v11: i64;  // [sp-0x258]
    let v12: i64;  // [sp-0x248]
    let v13: i64;  // [sp-0x240]
    let v14: Option<struct4>;  // [bp-0x238], Other Possible Types: char
    let v15: i64;  // [sp-0x198], Other Possible Types: struct140
    let v16: iNone;  // [sp-0x190], Other Possible Types: unsigned long
    let v17: i64;  // [sp-0x188]
    let v18: i8;  // [bp-0x180]
    let v19: struct149;  // [sp-0x100], Other Possible Types: struct16
    let v21: i64;  // r14
    let v22: iNone;  // xmm0
    let v23: i64;  // r12
    let v25: iNone;  // xmm0
    let v26: iNone;  // xmm0
    let v27: iNone;  // ymm0
    let v28: iNone;  // ymm0
    let v29: struct8;  // rax
    let v30: i64;  // rdx
    let v31: i64;  // rdx
    let v32: iNone;  // xmm0
    let v33: i64;  // r14
    let v34: i64;  // rax
    let v35: i32;  // edi
    let v36: i64;  // rbx
    let v37: i64;  // rdi

    v11 = *((a1 + 88) as &i64);
    v21 = *((a1 + 80) as &i64);
    v22 = *(v21 as &i128);
    v6 = struct24 {
        field_0: 0x8000000000000000
        field_8: v22
    };
    v3 = <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v6);
    v19 = std::process::Command::new(v6.field_8 as i64, *((&v6.field_8 as &char + 8) as &i64));
    v12 = v21 + 16;
    v19 = std::process::Command::args(v21 + 16, v11 - 1);
    v23 = *((a1 + 136) as &i64);
    if !v23 {
        if !a2 {
            goto LABEL_4ce29c;
        }
LABEL_4ce04f:
        v25 = v7;
        v15 = 1;
        v16 = v25;
        *(&v18 as &i8) = 0;
        eprintln!("executing: {}", &v15);
        v4 = &g_42496d;
        v5 = 6;
        v26 = (&v3)[8] as i128;
        v28 = ((v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256;
        v15 = 1;
        v16 = v26;
        *(&v18 as &i8) = 1;
        eprintln!("{}[0]= {}", &v4, &v15);
        v8 = v12;
        v9 = v21 + v11 * 16;
        v10 = 0;
        v29 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        if v30 {
            do {
                v13 = v29 + 1;
                v32 = *(v31 as &i128);
                v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256;
                v0 = 1;
                v1 = v32;
                *(&v2 as &i8) = 1;
                eprintln!("{}[{}]= {}", &v4, &v13, &v0);
                v29 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            } while (v30);
        }
    } else {
        <std::process::Command as std::os::unix::process::CommandExt>::arg0(&v19, v23, v3);
        v3 = 0x8000000000000000;
        v3 = v23;
        v3 = *((a1 + 144) as &i64);
        if !a2 {
            goto LABEL_4ce29c;
        }
        v15 = 1;
        v16 = v23;
        v17 = v3;
        *(&v18 as &i8) = 1;
        eprintln!("argv0:     {}", &v15);
        goto LABEL_4ce04f;
    }
LABEL_4ce29c:
    v8 = std::process::Command::status(&v19);
    match v8 {
        Err(v33) => {
            if !(std::io::error::Error::kind(v33) as i8 && std::io::error::Error::kind(v33) as i8 != 20) {
                return v36;
            }
            v4 = v33;
            v16 = v30;
            show_error!("unknown error: {:?}", &v4);
            return v36;
        },
        Ok(_) => {
            v34 = *((&v8 as &char + 4) as &i32) as u32 as u64;
            if !v34 as u32 {
                return 0;
            }
            v35 = v34 as u32;
            if !(v35 as u8 & 127) {
                v36 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34 >> 8 & 4294967295);
                return v36;
            }
            if ((v35 & 127) + 1) as u8 < 2 {
                v37 = "src/uu/env/src/env.rs";
            } else {
                core::result::Result<T,E>::unwrap(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from((v35 & 127) as u64) as i32 as u32 as u64, v30 as u32 as u64);
                nix::sys::signal::SigSet::all(&v14);
                v15 = nix::sys::signal::SigAction::new(&v14);
                v14 = nix::sys::signal::sigaction(v30 as u32 as u64, &v15);
                nix::sys::signal::raise(v30 as u32 as u64);
                v37 = "src/uu/env/src/env.rs";
            }
            core::option::unwrap_failed(v37); /* do not return */
        },
    }
}
