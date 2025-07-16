fn uu_fold::fold_file_bytewise(a0: i64, a1: i32, a2: i64) -> long long {
    let v0: void*;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: void*;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98], Other Possible Types: struct56
    let v4: u64;  // [bp-0x98], Other Possible Types: struct56, struct16
    let v5: u64;  // [bp-0x98]
    let v6: u64;  // [bp-0x90]
    let v7: u64;  // [bp-0x90]
    let v8: u64;  // [bp-0x90]
    let v9: u8;  // [bp-0x88]
    let v10: std::io::stdio::Stdin;  // [bp-0x80], Other Possible Types: u64
    let v11: std::io::stdio::Stdin;  // [bp-0x80], Other Possible Types: u64
    let v12: u32;  // [bp-0x64]
    let v13: u64;  // [bp-0x60]
    let v14: struct8;  // [bp-0x58]
    let v15: u64;  // [bp-0x48]
    let v17: u64;  // r15
    let v18: struct8;  // r14
    let v19: u64;  // rax
    let v20: u64;  // rcx
    let v22: u64;  // rbx
    let v23: u64;  // rbx
    let v25: core::option::Option<&str>;  // rax
    let v26: void*;  // r15
    let v27: struct8;  // rdx
    let v28: u64;  // rdx
    let v29: struct8;  // r12
    let v31: u64;  // rbx
    let v36: &str;  // rax:rdx

    v12 = a1;
    v17 = a0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v18 = &v0;
    loop {
        v19 = std::io::append_to_string(v18, a0);
        v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v19, a2);
        if v4.field_0 || !v8 {
            break;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2 as u32, "\n") as i8 {
            v4 = core::fmt::Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            std::io::stdio::_print(&v4);
            v4 = v3;
            v7 = v6;
        } else {
            v20 = v2;
            v4 = v5;
            v7 = v8;
            if v20 {
                if v20 < a2 {
                    v22 = v20;
                } else {
                    v22 = a2;
                }
                v23 = v22;
                v15 = v20;
                v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(None, v23, v1, v20) as u64;
                v26 = 0;
                v4 = v5;
                v7 = v8;
                v28 = v27;
                loop {
                    v29 = v27;
                    if v23 < v15 && v12 as i8 && core::str::<impl str>::rfind(v25, v29) {
                        v4 = 0;
                        v7 = v27;
                        v9 = 0;
                        v36 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v4, v25, v29);
                    }
                    v13 = v25;
                    v14 = v29;
                    v4 = v4;
                    v7 = v7;
                    v10 = v10;
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, v29 as u32, "\n") as i8 {
                        break;
                    }
                    v26 += v14;
                    v31 = v15 - v26;
                    if v15 > v26 {
                        println!("{}", &v13);
                        if a2 <= v31 {
                            v31 = a2;
                        }
                        v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v26, v31 + v26, v1, v2) as u64;
                        v4 = v3;
                        v7 = v6;
                        v10 = v11;
                    } else {
                        print!("{}", &v13);
                        v4 = v3;
                        v7 = v6;
                        v10 = v11;
                        break;
                    }
                }
                v18 = &v0;
            }
        }
        v8 = v7;
        v5 = v4;
        alloc::string::String::truncate(v18);
    }
    return v4.field_0;
}
