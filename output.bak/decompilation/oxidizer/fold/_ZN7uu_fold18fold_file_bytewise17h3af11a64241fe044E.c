fn uu_fold::fold_file_bytewise(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0xb0]
    let v1: u64;  // [sp-0xa8]
    let v2: void*;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98], Other Possible Types: Arguments, struct16, struct17
    let v4: u64;  // [sp-0x90]
    let v5: u32;  // [sp-0x64]
    let v6: u64;  // [sp-0x60]
    let v7: u64;  // [sp-0x58]
    let v8: u64;  // [sp-0x48]
    let v10: &u64;  // r14
    let v11: u64;  // 4096
    let v12: u64;  // r15
    let v13: u256;  // ymm0
    let v14: u32;  // rdx
    let v16: u64;  // rcx
    let v18: u64;  // rcx
    let v19: u64;  // rbx
    let v20: u64;  // r14
    let v21: u64;  // rax
    let v22: void*;  // r15
    let v23: u64;  // rdx
    let v24: u64;  // r12
    let v25: u64;  // r14
    let v26: u64;  // r12
    let v27: u64;  // rbx
    let v28: u64;  // rbx
    let v30: u64;  // rax
    let v31: u64;  // r13
    let v32: u64;  // r13

    v5 = a1;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v10 = &v0;
    loop {
        v12 = v11;
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::append_to_string(v10, v12), v14);
        if v3 {
            return v3;
        }
        if !v4 {
            return v3;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, &g_41d16c, 1) as i8 {
            *(&v3.pieces as &Arguments) = Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            v13 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            std::io::stdio::_print(&v3);
            v3 = v3;
            v4 = v4;
        } else {
            v16 = v2;
            v3 = v3;
            v4 = v4;
            if v16 {
                v19 = v18;
                v20 = v1;
                v8 = v16;
                v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(0, v19, v20, v16);
                if v21 {
                    v22 = 0;
                    v3 = v3;
                    v4 = v4;
                    do {
                        v24 = v23;
                        v4 = v4;
                        v3 = v3;
                        v25 = v8;
                        v3 = v3;
                        v4 = v4;
                        if v19 < v25 {
                            v3 = v3;
                            v4 = v4;
                            if v5 as i8 {
                                v3 = v3;
                                v4 = v4;
                                if core::str::<impl str>::rfind(v21, v24) {
                                    v3 = struct17 {
                                        field_0: 0
                                        field_8: v14
                                        field_16: 0
                                    };
                                    v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v3, v21, v24);
                                    v3 = v3;
                                    v4 = v4;
                                }
                            }
                        }
                        v4 = v4;
                        v3 = v3;
                        v6 = v21;
                        v7 = v26;
                        v3 = v3;
                        v4 = v4;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, &g_41d16c, 1) as i8 {
LABEL_4b1c87:
                            v4 = v4;
                            v3 = v3;
                            v10 = &v0;
                            v3 = v3;
                            v4 = v4;
                            goto LABEL_4b1a81;
                        } else {
                            v22 += v7;
                            v27 = v25;
                            v28 = v27 - v22;
                            if v27 <= v22 {
                                print!("{:?}", &v6);
                                v3 = v3;
                                v4 = v4;
                                goto LABEL_4b1c87;
                            }
                        }
                        println!("{:?}", &v6);
                        v19 = v30 + v22;
                        v20 = v1;
                        v31 = v2;
                        v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v22, v19, v20, v31);
                        v3 = v3;
                        v4 = v4;
                    } while (v21);
                } else {
                    v22 = 0;
                    v32 = v8;
                    break;
                }
            }
        }
LABEL_4b1a81:
        v4 = v4;
        v3 = v3;
        alloc::string::String::truncate(v10);
    }
    core::str::slice_error_fail(v20, v32, v22, v19, "src/uu/fold/src/fold.rs"); /* do not return */
}
