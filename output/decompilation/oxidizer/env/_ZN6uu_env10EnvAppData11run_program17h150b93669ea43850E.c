fn uu_env::EnvAppData::run_program(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: u64;  // [bp-0x2d0]
    let v1: u128;  // [bp-0x2c8]
    let v2: u8;  // [bp-0x2b8]
    let v3: u64;  // [bp-0x2b0], Other Possible Types: struct24
    let v4: u64;  // [bp-0x2a8]
    let v5: u64;  // [bp-0x2a0]
    let v6: u64;  // [bp-0x298]
    let v7: u64;  // [bp-0x290]
    let v8: u192;  // [bp-0x288]
    let v9: u64;  // [bp-0x278]
    let v10: u1664;  // [bp-0x270]
    let v11: u32;  // [bp-0x26c]
    let v12: u64;  // [bp-0x268]
    let v13: u64;  // [bp-0x268]
    let v14: void*;  // [bp-0x260]
    let v15: u64;  // [bp-0x258]
    let v16: u64;  // [bp-0x248]
    let v17: u64;  // [bp-0x240]
    let v18: struct8;  // [bp-0x238]
    let v19: u64;  // [bp-0x198], Other Possible Types: struct140
    let v20: u64;  // [bp-0x198]
    let v21: u64;  // [bp-0x190], Other Possible Types: struct_0 *
    let v22: u128;  // [bp-0x190]
    let v23: u64;  // [bp-0x188]
    let v24: u8;  // [bp-0x180]
    let v25: struct149;  // [bp-0x100], Other Possible Types: struct16
    let v27: i64;  // r14
    let v28: u64;  // r12
    let v29: u64;  // r15
    let v30: u64;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // rdx
    let v33: u64;  // rax
    let v34: u32;  // edi
    let v35: u64;  // rbx
    let v37: core::result::Result<std::process::ExitStatus, std::io::error::Error>;  // rax:rdx

    v15 = *((a1 + 88) as &i64);
    v27 = *((a1 + 80) as &i64);
    v8 = struct24 {
        field_0: 0x8000000000000000
        field_8: *(v27 as &i128)
    };
    v3 = <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v8);
    v25 = std::process::Command::new(*((&v8 as &char + 8) as &i64), v9);
    v16 = v27 + 16;
    v25 = std::process::Command::args(v27 + 16, v15 - 1);
    v28 = *((a1 + 136) as &i64);
    if v28 {
        v29 = *((a1 + 144) as &i64);
        <std::process::Command as std::os::unix::process::CommandExt>::arg0(&v25, v28, v29);
        v3 = 0x8000000000000000;
        v4 = v28;
        v5 = v29;
        if a2 {
            v19 = 1;
            v21 = v28;
            v23 = v29;
            v24 = 1;
            eprintln!("argv0:     {}", &v19);
LABEL_4ce04f:
            v19 = 1;
            v22 = *((&v8 as &char + 8) as &i128);
            v24 = 0;
            eprintln!("executing: {}", &v19);
            v6 = &g_42496d;
            v7 = 6;
            v19 = 1;
            v21 = *(&v3.field_8 as &i128);
            v24 = 1;
            eprintln!("{}[0]= {}", &v6, &v19);
            v10 = v16;
            v12 = v27 + v15 * 16;
            v14 = 0;
            v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
            v19 = v19;
            if v31 {
                do {
                    v17 = v30 + 1;
                    v0 = 1;
                    v1 = *(v32 as &i128);
                    v2 = 1;
                    eprintln!("{}[{}]= {}", &v6, &v17, &v0);
                } while ((v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10 as u8), v32 = v31, v19 = v20, v32));
            }
        }
    } else if !(!a2) {
        goto LABEL_4ce04f;
    }
    vvar_604{stack -624} = std::process::Command OrderedDict({0: std::sys::pal::unix::process::process_common::Command OrderedDict({0: alloc::ffi::c_str::CString OrderedDict({0: alloc::boxed::Box<[u8], alloc::alloc::Global> OrderedDict({8: 𝜙@64b [((5038150, None), None), ((5037985, None), None), ((5038506, None), vvar_507{stack -616}), ((5038739, None), vvar_507{stack -616})]})}), 16: alloc::vec::Vec<alloc::ffi::c_str::CString, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::RawVec<alloc::ffi::c_str::CString, alloc::alloc::Global> OrderedDict({0: core::ptr::unique::Unique<alloc::ffi::c_str::CString> OrderedDict({0: core::ptr::non_null::NonNull<alloc::ffi::c_str::CString> OrderedDict(), 8: core::marker::PhantomData<alloc::ffi::c_str::CString> OrderedDict()}), 8: alloc::raw_vec::Cap OrderedDict(), 16: alloc::alloc::Global OrderedDict()})}), 40: std::sys::pal::unix::process::process_common::Argv OrderedDict({0: alloc::vec::Vec<*const i8, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::RawVec<*const i8, alloc::alloc::Global> OrderedDict({0: core::ptr::unique::Unique<*const i8> OrderedDict({0: core::ptr::non_null::NonNull<*const i8> OrderedDict(), 8: core::marker::PhantomData<*const i8> OrderedDict()}), 8: alloc::raw_vec::Cap OrderedDict(), 16: alloc::alloc::Global OrderedDict()}), 16: 𝜙@64b [((5038150, None), None), ((5037985, None), None), ((5038506, None), vvar_500{stack -568}), ((5038739, None), vvar_515{stack -568})]})}), 64: std::sys_common::process::CommandEnv OrderedDict({0: alloc::collections::btree::map::BTreeMap<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>, alloc::alloc::Global> OrderedDict({24: core::marker::PhantomData<alloc::boxed::Box<(std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>), alloc::alloc::Global>> OrderedDict()})}), 128: alloc::vec::Vec<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>, alloc::alloc::Global> OrderedDict({0: alloc::raw_vec::RawVec<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>, alloc::alloc::Global> OrderedDict({0: core::ptr::unique::Unique<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>> OrderedDict({0: core::ptr::non_null::NonNull<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>> OrderedDict(), 8: core::marker::PhantomData<alloc::boxed::Box<(dyn core::ops::function::FnMut<(), Output=core::result::Result<(), std::io::error::Error>> + core::marker::Send + core::marker::Sync), alloc::alloc::Global>> OrderedDict()}), 8: alloc::raw_vec::Cap OrderedDict(), 16: alloc::alloc::Global OrderedDict()})})})})
    v37 = std::process::Command::status(&v10);
    if !v10 as i32 {
        v33 = v11;
        if !v33 {
            return 0;
        }
        v34 = v33;
        if !(v34 & 127) {
            v35 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33 >> 8 & 4294967295);
        } else {
            if (v34 & 127) + 1 >= 2 {
                core::result::Result<T,E>::unwrap(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(v34 & 127) as i32, v31 as u32);
                nix::sys::signal::SigSet::all(&v10);
                v19 = nix::sys::signal::SigAction::new(&v10);
                v18 = nix::sys::signal::sigaction(v31 as u32, &v19);
                nix::sys::signal::raise(v31 as u32);
            }
            core::option::unwrap_failed(); /* do not return */
        }
    } else if !std::io::error::Error::kind(v13) || std::io::error::Error::kind(v13) == 20 {
        v35 = uu_env::EnvAppData::make_error_no_such_file_or_dir(*((a0 + 1) as &i8), *((&v8 as &char + 8) as &i64), v9);
    } else {
        v19 = uucore::util_name();
        v21 = v31;
        eprint!("{}: ", &v19);
        eprintln!("unknown error: {}", &v6);
        v35 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126);
    }
    return v35;
}
