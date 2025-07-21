fn uu_env::EnvAppData::run_program(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: u64;  // [bp-0x2d0]
    let v1: u128;  // [bp-0x2c8]
    let v2: u8;  // [bp-0x2b8]
    let v3: struct24;  // [bp-0x2b0], Other Possible Types: u64
    let v4: u64;  // [bp-0x2a8]
    let v5: u64;  // [bp-0x2a0]
    let v6: u64;  // [bp-0x298]
    let v7: u64;  // [bp-0x290]
    let v8: struct24;  // [bp-0x288]
    let v9: u64;  // [bp-0x278]
    let v10: std::process::Command;  // [bp-0x270], Other Possible Types: u64
    let v11: u32;  // [bp-0x26c]
    let v12: u64;  // [bp-0x268]
    let v13: u64;  // [bp-0x268]
    let v14: void*;  // [bp-0x260]
    let v15: u64;  // [bp-0x258]
    let v16: u64;  // [bp-0x248]
    let v17: u64;  // [bp-0x240]
    let v18: struct8;  // [bp-0x238]
    let v19: struct140;  // [bp-0x198], Other Possible Types: u64
    let v20: i64;  // [bp-0x190], Other Possible Types: u64
    let v21: u128;  // [bp-0x190]
    let v22: u64;  // [bp-0x188]
    let v23: u8;  // [bp-0x180]
    let v24: struct149;  // [bp-0x100], Other Possible Types: struct16
    let v26: i64;  // r14
    let v27: u64;  // r12
    let v28: u64;  // r15
    let v29: u64;  // rax
    let v30: i64;  // rdx
    let v31: i64;  // rdx
    let v32: struct4;  // rax
    let v33: u32;  // edi
    let v34: u64;  // rbx
    let v36: core::result::Result<std::process::ExitStatus, std::io::error::Error>;  // rax:rdx

    v15 = *((a1 + 88) as &i64);
    v26 = *((a1 + 80) as &i64);
    v8 = struct24 {
        field_0: 0x8000000000000000
        field_8: *(v26 as &i128)
    };
    v3 = <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v8);
    v24 = std::process::Command::new(v8.field_8 as i64, v9);
    v16 = v26 + 16;
    v24 = std::process::Command::args(v26 + 16, v15 - 1);
    v27 = *((a1 + 136) as &i64);
    if v27 {
        v28 = *((a1 + 144) as &i64);
        <std::process::Command as std::os::unix::process::CommandExt>::arg0(&v24, v27, v28);
        v3 = 0x8000000000000000;
        v4 = v27;
        v5 = v28;
        if a2 {
            v19 = 1;
            v20 = v27;
            v22 = v28;
            v23 = 1;
            eprintln!("argv0:     {}", &v19);
LABEL_4ce04f:
            v19 = 1;
            v21 = v8.field_8;
            v23 = 0;
            eprintln!("executing: {}", &v19);
            v6 = &g_42496d;
            v7 = 6;
            v19 = 1;
            v20 = v3.field_8;
            v23 = 1;
            eprintln!("{}[0]= {}", &v6, &v19);
            v10 = v16;
            v12 = v26 + v15 * 16;
            v14 = 0;
            v29 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
            if v30 {
                do {
                    v17 = v29 + 1;
                    v0 = 1;
                    v1 = *(v31 as &i128);
                    v2 = 1;
                    eprintln!("{}[{}]= {}", &v6, &v17, &v0);
                } while ((v29 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10 as u8), v30 = v30, v31));
            }
        }
    } else if !(!a2) {
        goto LABEL_4ce04f;
    }
    vvar_604{stack -624} = std::process::Command OrderedDict({0: std::sys::pal::unix::process::process_common::Command OrderedDict({0: alloc::vec::Vec<alloc::ffi::c_str::CString, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::RawVec<alloc::ffi::c_str::CString, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::Cap OrderedDict(), 8: core::ptr::unique::Unique<alloc::ffi::c_str::CString> OrderedDict({0: core::ptr::non_null::NonNull<alloc::ffi::c_str::CString> OrderedDict({0: 𝜙@64b [((5038150, None), None), ((5037985, None), None), ((5038506, None), vvar_507{stack -616}), ((5038739, None), vvar_507{stack -616})]}), 8: core::marker::PhantomData<alloc::ffi::c_str::CString> OrderedDict()}), 16: alloc::alloc::Global OrderedDict()})}), 24: std::sys::pal::unix::process::process_common::Argv OrderedDict({0: alloc::vec::Vec<*const i8, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::RawVec<*const i8, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::Cap OrderedDict(), 8: core::ptr::unique::Unique<*const i8> OrderedDict({0: core::ptr::non_null::NonNull<*const i8> OrderedDict(), 8: core::marker::PhantomData<*const i8> OrderedDict()}), 16: alloc::alloc::Global OrderedDict()})})}), 48: alloc::vec::Vec<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::RawVec<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::Cap OrderedDict(), 8: core::ptr::unique::Unique<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>> OrderedDict({0: core::ptr::non_null::NonNull<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>> OrderedDict({0: 𝜙@64b [((5038150, None), None), ((5037985, None), None), ((5038506, None), vvar_500{stack -568}), ((5038739, None), vvar_515{stack -568})]}), 8: core::marker::PhantomData<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>> OrderedDict()}), 16: alloc::alloc::Global OrderedDict()})}), 128: std::sys_common::process::CommandEnv OrderedDict({0: alloc::collections::btree::map::BTreeMap<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>, alloc::alloc::Global> OrderedDict({24: core::marker::PhantomData<alloc::boxed::Box<(std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>), alloc::alloc::Global>> OrderedDict()})}), 176: alloc::ffi::c_str::CString OrderedDict({0: alloc::boxed::Box<[u8], alloc::alloc::Global> OrderedDict()})})})
    v36 = std::process::Command::status(&v10);
    if !v10.inner.args.buf.cap.__0 as i32 {
        v32 = v11;
        if !v32 as u32 {
            return 0;
        }
        v33 = v32 as u32;
        if !(v33 & 127) {
            v34 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32 >> 8 & 4294967295);
        } else {
            if (v33 & 127) + 1 >= 2 {
                core::result::Result<T,E>::unwrap(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(v33 & 127) as i32, v30 as u32);
                nix::sys::signal::SigSet::all(&v10 as u128);
                v19 = nix::sys::signal::SigAction::new(&v10 as u128);
                v18 = nix::sys::signal::sigaction(v30 as u32, &v19);
                nix::sys::signal::raise(v30 as u32);
            }
            core::option::unwrap_failed(); /* do not return */
        }
    } else if !std::io::error::Error::kind(v13) || std::io::error::Error::kind(v13) == 20 {
        v34 = uu_env::EnvAppData::make_error_no_such_file_or_dir(*((a0 + 1) as &i8), v8.field_8 as i64, v9);
    } else {
        v19 = uucore::util_name();
        v20 = v30;
        eprint!("{}: ", &v19);
        eprintln!("unknown error: {}", &v6);
        v34 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126);
    }
    return v34;
}
