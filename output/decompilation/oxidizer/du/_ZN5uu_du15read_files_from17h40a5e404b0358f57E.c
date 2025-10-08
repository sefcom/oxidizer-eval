fn uu_du::read_files_from(a1: i64, a2: i64) -> Result<struct24, struct16> {
    let a0: void*;  // rdi
    let v0: struct44;  // [bp-0x148]
    let v1: struct48;  // [bp-0x148]
    let v2: struct24;  // [bp-0x148]
    let v3: void*;  // [bp-0x140]
    let v4: void*;  // [bp-0x140]
    let v5: void*;  // [bp-0x140]
    let v6: u64;  // [bp-0x138]
    let v7: u64;  // [bp-0x138]
    let v8: void*;  // [bp-0x110]
    let v9: u64;  // [bp-0x108]
    let v10: Result<struct4, struct8>;  // [bp-0x108]
    let v11: u32;  // [bp-0x104]
    let v12: struct24;  // [bp-0x100], Other Possible Types: u64
    let v13: u8;  // [bp-0xf8]
    let v14: void*;  // [bp-0xf0]
    let v15: struct24;  // [bp-0xe8], Other Possible Types: u64
    let v16: struct24;  // [bp-0xe8], Other Possible Types: u64
    let v17: u64;  // [bp-0xe8]
    let v18: u64;  // [bp-0xe0]
    let v19: u64;  // [bp-0xd8]
    let v20: i64;  // [bp-0xd8]
    let v21: u64;  // [bp-0xd8]
    let v22: u64;  // [bp-0xc8]
    let v23: u128;  // [bp-0xc8]
    let v24: u64;  // [bp-0xc8]
    let v25: struct24;  // [bp-0xc8], Other Possible Types: u64
    let v26: u64;  // [bp-0xb8]
    let v27: void*;  // [bp-0xb0]
    let v28: void*;  // [bp-0xa0]
    let v29: struct16;  // [bp-0xa0]
    let v30: u64;  // [bp-0x98]
    let v31: void*;  // [bp-0x90]
    let v32: struct32;  // [bp-0x88], Other Possible Types: u64
    let v33: u64;  // [bp-0x88]
    let v34: u64;  // [bp-0x80]
    let v35: u64;  // [bp-0x78]
    let v36: u64;  // [bp-0x70]
    let v38: alloc::string::String;  // [bp-0x60]
    let v39: alloc::string::String;  // [bp-0x48]
    let v42: u64;  // rax
    let v43: struct24;  // rcx
    let v44: u64;  // rdx

    v27 = a1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") {
        v8 = a0;
        v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(std::io::stdio::stdin());
        v42 = alloc::boxed::Box<T>::new(&v1) as u64;
    } else {
        v15 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        if std::path::Path::is_dir(v18, v19) {
            v38 = format!("{}: read error: Is a directory", &v27);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v38), &g_546000)
            };
        }
        v10 = std::fs::File::open(v27, a2);
        if v10 as i32 != 1 {
            v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v11);
            v42 = alloc::boxed::Box<T>::new(&v0) as u64;
            v8 = a0;
        } else if std::io::error::Error::kind(v12) as u8 {
            *(&a0[8] as &u64) = v12;
        } else {
            v22 = v12;
            v39 = format!("cannot open '{}' for reading: No such file or directory", &v27);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v39), &g_546000)
            };
        }
    }
    v28 = 0;
    v30 = 8;
    v31 = 0;
    v9 = v42;
    v12 = v43;
    v13 = 0;
    v14 = 0;
    loop {
        vvar_516{stack -136} = struct32 OrderedDict([(0, 𝜙@64b [((4817800, None), vvar_362{stack -136}), ((4817697, None), None)]), (8, 𝜙@64b [((4817800, None), vvar_324{stack -128}), ((4817697, None), None)]), (24, 𝜙@64b [((4817800, None), vvar_331{stack -112}), ((4817697, None), None)])])
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v32, &v10);
        if v34 == 9223372036854775809 {
            *(&v8[16] as &void*) = v31;
            *(v8 as &i128) = *(&v29.field_0 as &i128);
            return;
        } else if v34 != 0x8000000000000000 {
            if v36 {
                alloc::string::String::from_utf8_lossy(&v0 as u8, v35, v36);
                v16 = <alloc::borrow::Cow<str> as alloc::string::SpecToString>::spec_to_string(v3, v6);
                v26 = v19;
                v23 = *(&v16.field_0 as &i128);
                v16 = v15;
                v20 = v19;
                v32 = v33;
                v4 = v3;
                v24 = v22;
                if !<T as core::slice::cmp::SliceContains>::slice_contains(&v24, 8, v31) {
                    v2 = v25;
                    v29 = alloc::vec::Vec<T,A>::push(&v2);
                    v16 = v15;
                    v20 = v19;
                    v32 = v33;
                    v4 = v3;
                    v6 = v7;
                    v24 = v22;
                }
            } else {
                v15 = uucore::util_name();
                v18 = v44;
                eprint!("{}: ", &v15);
                eprintln!("{}:{}: invalid zero-length file name", &v27, &v37);
                uucore::mods::error::set_exit_code(1);
                v16 = v17;
                v20 = v21;
                v32 = v33;
                v4 = v5;
                v6 = v7;
                v24 = v25;
            }
            v22 = v24;
            v3 = v4;
            v19 = v20;
            v15 = v16;
        } else {
            *(&v8[8] as &u64) = v35;
            *(v8 as &i64) = 0x8000000000000000;
            return;
        }
    }
}
