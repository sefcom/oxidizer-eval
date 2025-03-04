fn uu_fold::fold_file_bytewise(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0xb0]
    let v1: u64;  // [sp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: Arguments;  // [sp-0x98], Other Possible Types: struct16, void*
    let v4: u64;  // [sp-0x90]
    let v5: u8;  // [bp-0x88]
    let v6: u32;  // [sp-0x64]
    let v7: u64;  // [sp-0x60]
    let v8: u64;  // [sp-0x58]
    let v9: u64;  // [sp-0x48]
    let v11: u64;  // r15
    let v12: &u64;  // r14
    let v13: u256;  // ymm0
    let v14: u64;  // rcx
    let v15: &u8;  // rbx
    let v16: u64;  // rax
    let v17: u64;  // rbp
    let v18: u64;  // rdx
    let v19: u64;  // r12
    let v20: void*;  // r15
    let v21: u64;  // r14
    let v22: u64;  // rbx
    let v23: u64;  // rbx
    let v25: u64;  // rbx
    let v26: u64;  // rbx

    v6 = a1;
    v11 = a0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v12 = &v0;
    loop {
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(v12, v11), a2);
        if v3 {
            return v3;
        }
        if !v4 {
            return v3;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "
") as i8 {
            *(&v3.pieces as &Arguments) = Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            v13 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            std::io::stdio::_print(&v3);
        } else {
            v14 = v2;
            if v14 {
                v15 = a2;
                if v14 < v15 {
                    v15 = v14;
                }
                v9 = v14;
                v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v15, v1, v14);
                if v16 {
                    v17 = v16;
                    v19 = v18;
                    v20 = 0;
                    loop {
                        v21 = v9;
                        if v15 < v21 && v6 as i8 && core::str::<impl str>::rfind(v17, v19) {
                            v3 = 0;
                            v4 = v18;
                            v5 = 0;
                            v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v3, v17, v19);
                            v19 = v18;
                        }
                        v7 = v17;
                        v8 = v19;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "
") as i8 {
                            break;
                        }
                        v20 += v8;
                        v22 = v21;
                        v23 = v22 - v20;
                        if v22 > v20 {
                            println!("{}", &v7);
                            if v25 > v23 {
                                v26 = v23;
                            } else {
                                v25 = a2;
                                v26 = v25;
                            }
                            v15 = v26 + v20;
                            v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v20, v15, v1, v2);
                            v19 = v18;
                        } else {
                            print!("{}", &v7);
                            break;
                        }
                    }
                    v11 = a0;
                    v12 = &v0;
                }
            }
        }
        alloc::string::String::truncate(v12);
    }
}
