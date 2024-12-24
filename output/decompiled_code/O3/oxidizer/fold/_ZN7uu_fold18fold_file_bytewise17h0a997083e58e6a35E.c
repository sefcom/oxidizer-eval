fn uu_fold::fold_file_bytewise(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0xb0]
    let v1: u64;  // [sp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98], Other Possible Types: struct17, Arguments, struct16
    let v4: u64;  // [bp-0x88]
    let v5: u128;  // [bp-0x80]
    let v6: u32;  // [sp-0x64]
    let v7: u64;  // [sp-0x60]
    let v8: u64;  // [sp-0x58]
    let v9: u64;  // [sp-0x48]
    let v11: u64;  // r14
    let v12: u64;  // 4096
    let v13: u64;  // r15
    let v14: u256;  // ymm0
    let v15: u64;  // rdx
    let v17: u64;  // rcx
    let v19: u64;  // rcx
    let v20: u64;  // rbx
    let v21: u64;  // rax
    let v22: void*;  // r15
    let v23: u64;  // rdx
    let v24: u64;  // r12
    let v25: u64;  // r14
    let v26: u64;  // r12
    let v27: u64;  // rbx
    let v28: u64;  // rbx
    let v30: u64;  // rax

    v6 = a1;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v11 = &v0;
    loop {
        v13 = v12;
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(v11, v13), v15);
        if v3 {
            return v3;
        }
        if !v3.field_8 {
            return v3;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, &g_41d264, 1) as i8 {
            v3 = "\n";
            v3.field_8 = 1;
            v4 = 8;
            v14 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v5 = 0;
            std::io::stdio::_print(&v3);
        } else {
            v17 = v2;
            if v17 {
                v20 = v19;
                v9 = v17;
                v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v20, v1, v17);
                if v21 {
                    v22 = 0;
                    v3 = v3;
                    do {
                        v24 = v23;
                        v3 = v3;
                        v25 = v9;
                        v3 = v3;
                        if v20 < v25 {
                            v3 = v3;
                            if v6 as i8 {
                                v3 = v3;
                                if core::str::<impl str>::rfind(v21, v24) {
                                    *(&v3.field_0 as &struct17) = struct17 {
                                        field_0: 0
                                        field_8: v15
                                        field_16: 0
                                    };
                                    v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v3, v21, v24);
                                    v3 = v3;
                                }
                            }
                        }
                        v3 = v3;
                        v7 = v21;
                        v8 = v26;
                        v3 = v3;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, &g_41d264, 1) as i8 {
LABEL_4b2117:
                            v3 = v3;
                            v11 = &v0;
                            goto LABEL_4b1f11;
                        } else {
                            v22 += v8;
                            v27 = v25;
                            v28 = v27 - v22;
                            if v27 <= v22 {
                                print!("{:?}", &v7);
                                v3 = v3;
                                goto LABEL_4b2117;
                            }
                        }
                        println!("{:?}", &v7);
                        v20 = v30 + v22;
                        v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v22, v20, v1, v2);
                        v3 = v3;
                    } while (v21);
                } else {
                    break;
                }
            }
        }
LABEL_4b1f11:
        alloc::string::String::truncate(v11);
    }
    core::str::slice_error_fail(); /* do not return */
}
