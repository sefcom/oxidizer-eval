fn uu_fold::fold_file_bytewise(a0: i64, a1: i32, a2: i64) -> u64 {
    let v0: void*;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: void*;  // [bp-0xa0]
    let v3: void*;  // [bp-0x98]
    let v4: core::fmt::Arguments;  // [bp-0x98], Other Possible Types: void*, u64
    let v5: void*;  // [bp-0x98]
    let v6: Result<struct16, struct16>;  // [bp-0x98]
    let v7: u64;  // [bp-0x90]
    let v8: i64;  // [bp-0x90], Other Possible Types: u64
    let v9: u64;  // [bp-0x90]
    let v10: u8;  // [bp-0x88]
    let v11: u64;  // [bp-0x80]
    let v12: u64;  // [bp-0x80]
    let v13: u32;  // [bp-0x64]
    let v14: u64;  // [bp-0x60]
    let v15: void*;  // [bp-0x58]
    let v16: struct64;  // [bp-0x58]
    let v17: struct16;  // [bp-0x40]
    let v19: struct640;  // r15
    let v20: struct437;  // r12
    let v21: u8;  // al
    let v22: void*;  // r14
    let v24: alloc::string::String;  // rbx
    let v25: alloc::string::String;  // rbx
    let v28: core::option::Option<&str>;  // rax
    let v29: void*;  // r15
    let v30: u64;  // rdx
    let v31: u64;  // rdx
    let v32: u64;  // r12
    let v34: struct64;  // r14
    let v35: struct64;  // rbx
    let v36: u64;  // rbx
    let v40: &str;  // rax:rdx

    v13 = a1;
    v19 = a0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v20 = &v0;
    loop {
        v21 = std::io::append_to_string(v20, a0);
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v21, a2);
        if v6 as i64 || !v9 {
            break;
        }
        v22 = v2;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v22, "\n") {
            v4 = core::fmt::Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            std::io::stdio::_print(&v4);
            v4 = v3;
            v8 = v7;
        } else {
            v4 = v5;
            v8 = v9;
            if v22 {
                v15 = v22;
                if v22 < v14 {
                    v24 = v22;
                } else {
                    v24 = a2;
                }
                v25 = v24;
                v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(None, v25, v1, v2) as u64;
                v29 = 0;
                v4 = v5;
                v8 = v9;
                v31 = v30;
                loop {
                    v32 = v30;
                    if *((&v6 as &char + 52) as &i8) {
                        v16 = v15;
                        if v25 < v16 {
                            v16 = v15;
                            if (core::str::<impl str>::rfind(v28, v32) & 1) {
                                v4 = 0;
                                v8 = v30;
                                v10 = 0;
                                v40 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v4, v28, v32);
                                v28 = v40.data_ptr;
                                v32 = v40.length;
                                v16 = v15;
                            }
                        }
                    } else {
                        v16 = v15;
                    }
                    v34 = v16;
                    v17 = struct16 {
                        field_0: v28
                        field_8: v32
                    };
                    v4 = v4;
                    v8 = v8;
                    v11 = v11;
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v32, "\n") {
                        break;
                    }
                    v29 += v32;
                    v35 = v34;
                    v36 = v35 - v29;
                    if v35 > v29 {
                        println!("{}", &v17);
                        if a2 <= v36 {
                            v36 = a2;
                        }
                        v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v29, v36 + v29, v1, v2) as u64;
                        v4 = v3;
                        v8 = v7;
                        v11 = v12;
                    } else {
                        print!("{}", &v17);
                        v4 = v3;
                        v8 = v7;
                        v11 = v12;
                        break;
                    }
                }
                v20 = &v0;
            }
        }
        v9 = v8;
        v5 = v4;
        alloc::string::String::truncate(v20);
    }
    return v6 as i64;
}
