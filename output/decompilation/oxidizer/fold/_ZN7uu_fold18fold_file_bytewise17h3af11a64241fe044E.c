fn uu_fold::fold_file_bytewise(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0xb0]
    let v1: u64;  // [sp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98], Other Possible Types: struct16, struct17, Arguments
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u128;  // [bp-0x80]
    let v7: u32;  // [sp-0x64]
    let v8: u64;  // [sp-0x60]
    let v9: u64;  // [sp-0x58]
    let v10: u64;  // [sp-0x48]
    let v12: &u64;  // r14
    let v13: u64;  // 4096
    let v14: u64;  // r15
    let v15: u256;  // ymm0
    let v16: u32;  // rdx
    let v17: u64;  // r15
    let v18: u64;  // rcx
    let v19: u64;  // rbx
    let v20: u64;  // rcx
    let v21: &u8;  // rbx
    let v22: u64;  // rax
    let v23: void*;  // r15
    let v24: u64;  // rdx
    let v25: u64;  // r12
    let v26: u64;  // r14
    let v27: u64;  // r12
    let v28: u64;  // rbx
    let v29: u64;  // rbx
    let v30: u64;  // rax
    let v31: u64;  // rax

    v7 = a1;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v12 = &v0;
    v13 = a0;
    loop {
        v14 = v13;
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(v12, v14), v16);
        if v3 {
            return v3;
        }
        if !v4 {
            return v3;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "\n") as i8 {
            v3 = "\n";
            v4 = 1;
            v5 = 8;
            v15 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v6 = 0;
            std::io::stdio::_print(&v3);
            v17 = v14;
        } else {
            v18 = v2;
            v17 = v14;
            if v18 {
                v19 = a2;
                if v18 < v19 {
                    v20 = v18;
                } else {
                    v20 = v19;
                }
                v21 = v20;
                v10 = v18;
                v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v21, v1, v18);
                if v22 {
                    v23 = 0;
                    v24 = v16;
                    loop {
                        v25 = v24;
                        v26 = v10;
                        v27 = v25;
                        if v21 < v26 {
                            v27 = v25;
                            if v7 as i8 {
                                v27 = v25;
                                if core::str::<impl str>::rfind(v22, v25) {
                                    v3 = struct17 {
                                        field_0: 0
                                        field_8: v16
                                        field_16: 0
                                    };
                                    v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v3, v22, v25);
                                    v27 = v16;
                                }
                            }
                        }
                        v8 = v22;
                        v9 = v27;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "\n") as i8 {
                            break;
                        }
                        v23 += v9;
                        v28 = v26;
                        v29 = v28 - v23;
                        if v28 > v23 {
                            println!("{}", &v8);
                            v30 = a2;
                            if v30 <= v29 {
                                v31 = v30;
                            } else {
                                v31 = v29;
                            }
                            v21 = v31 + v23;
                            v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v23, v21, v1, v2);
                            v24 = v16;
                        } else {
                            print!("{}", &v8);
                            break;
                        }
                    }
                    v12 = &v0;
                    v17 = a0;
                }
            }
        }
        alloc::string::String::truncate(v12);
        v13 = v17;
    }
}
