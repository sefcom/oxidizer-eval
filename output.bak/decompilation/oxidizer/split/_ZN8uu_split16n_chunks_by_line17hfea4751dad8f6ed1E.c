fn uu_split::n_chunks_by_line(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x111]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8]
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [bp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: i64;  // [sp-0xc0], Other Possible Types: struct16
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: i64;  // [sp-0x90]
    let v16: i128;  // [sp-0x88], Other Possible Types: struct16, struct9
    let v17: i64;  // [sp-0x78], Other Possible Types: struct24
    let v18: i64;  // [sp-0x70]
    let v19: i64;  // [sp-0x68]
    let v20: i8;  // [sp-0x60]
    let v21: i8;  // [sp-0x58]
    let v22: i64;  // [sp-0x50]
    let v23: Option<Result<struct24, struct8>>;  // [sp-0x48], Other Possible Types: i200
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rax
    let v29: i64;  // rbx
    let v30: i32;  // eax
    let v31: i64;  // r13
    let v32: i64;  // rbp
    let v33: i64;  // r12
    let v34: i64;  // r13
    let v35: i64;  // rax
    let v36: i64;  // r15
    let v37: i64;  // r15
    let v38: i64;  // rax
    let v40: i64;  // rax
    let v41: i32;  // ecx
    let v42: i64;  // rbp
    let v43: i64;  // r12

    v13 = 0;
    v14 = 1;
    v15 = 0;
    if uu_split::get_input_size(a0 + 112, a1, &v13, *(a0 as &i64), *((a0 + 8) as &i64)) {
        v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
    } else {
        v8 = v14;
        v6 = v15;
        if v27 || (v26 = 0, a3 != 1 && !*((a0 + 161) as &i8)) {
            v17 = std::io::stdio::stdout();
            v1 = std::io::stdio::Stderr::lock(&v17);
            v2 = 0;
            v3 = 8;
            v4 = 0;
            if !a2 {
                core::panicking::panic_const::panic_const_div_by_zero("src/uu/split/src/split.rs"); /* do not return */
            }
            v5 = a1;
            if !(v27 | a2) >> 32 {
                v30 = v27;
                v7 = ((0 CONCAT v30) % (a2 & 4294967295) CONCAT (0 CONCAT v30) / (a2 & 4294967295)) >> 32 & 4294967295;
                v29 = ((0 CONCAT v30) % (a2 & 4294967295) CONCAT (0 CONCAT v30) / (a2 & 4294967295)) & 4294967295 & 4294967295;
                if !(a3 == 1) {
                    goto LABEL_4cd85d;
                }
LABEL_4cd831:
                v12 = v27;
                v0 = *((a0 + 161) as &i8);
LABEL_4cd8cf:
                v32 = v29 - -1 - (v7 < 1);
                v17 = v8;
                v18 = v6;
                v19 = v5;
                v20 = 0;
                v21 = *((a0 + 162) as &i8);
                v5 = a0;
                v22 = *((a0 + 136) as &i64);
                v33 = 1;
                v34 = 0;
                v8 = 9223372036854775809;
                v6 = v21;
                loop {
                    v23 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v17);
                    v35 = v23;
                    if v35 == v8 {
                        return 0;
                    }
                    v36 = *((&v23 as &char + 8) as &i64);
                    if v35 == 0x8000000000000000 {
                        v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
                        break;
                    }
                    v9 = v35;
                    v10 = v36;
                    v11 = *((&v23 as &char + 16) as &i64);
                    if v11 + v34 < v12 {
                        v9 = alloc::vec::Vec<T,A>::push(v6);
                        v37 = v10;
                    }
                    if a3 {
                        if !(a3 == 1) {
                            goto LABEL_4cda7f;
                        }
                        v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
                        goto LABEL_4cdb49;
                    }
                    v16 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v2, v33 - 1);
                    v26 = v16;
                    if v26 {
                        goto LABEL_4cdb4f;
                    }
                    v16 = uu_split::custom_write_all(v37, v11, *((&v16 as &char + 8) as &i64), v22);
                    if v16 {
                        v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v16 as &char + 8) as &i64));
LABEL_4cdb49:
LABEL_4cdb4f:
                        break;
                    }
LABEL_4cda7f:
                    v34 += v11;
                    if v32 > v34 {
LABEL_4cda87:
                        if !(a3 == 1) {
                            goto LABEL_4cd960;
                        }
                        goto LABEL_4cdadd;
                    } else {
                        v40 = 4294967295;
                        v41 = -2;
                        do {
                            v32 = v42 + v29 + (v43 < v7);
                            v33 = v43 + 1;
                            v40 += 1;
                            v41 += 1;
                        } while (v32 <= v34);
                        if !(a3 == 1) {
                            goto LABEL_4cda87;
                        }
                        if a3 != 1 {
                            v33 -= v40 & 4294967295;
                        } else {
LABEL_4cdadd:
                            if v33 > a4 {
                                return 0;
                            }
                        }
LABEL_4cd960:
                    }
                }
            } else {
                v28 = v27;
                v7 = ((0 CONCAT v28) % a2 CONCAT (0 CONCAT v28) / a2) >> 64;
                v29 = (0 CONCAT v28) % a2 CONCAT (0 CONCAT v28) / a2;
                if a3 == 1 {
                    goto LABEL_4cd831;
                }
LABEL_4cd85d:
                v0 = *((a0 + 161) as &i8);
                v17 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, v0);
                v31 = v17;
                v26 = v18;
                if v31 == 0x8000000000000000 {
                    goto LABEL_4cdb59;
                }
                v12 = v27;
                v2 = v31;
                v3 = v26;
                v4 = v19;
                goto LABEL_4cd8cf;
            }
LABEL_4cdb59:
        }
    }
    return v26;
}
