fn uu_split::n_chunks_by_line(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x111]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8], Other Possible Types: int
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [bp-0xe0], Other Possible Types: unsigned int
    let v6: i64;  // [sp-0xd8]
    let v7: i64;  // [sp-0xd0]
    let v8: struct16;  // [sp-0xc0], Other Possible Types: unsigned long
    let v9: i64;  // [sp-0xb8]
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: i64;  // [sp-0xa0]
    let v13: i64;  // [sp-0x98]
    let v14: i64;  // [sp-0x90]
    let v15: struct16;  // [sp-0x88], Other Possible Types: struct9
    let v16: i64;  // [sp-0x78], Other Possible Types: struct24
    let v17: i64;  // [sp-0x70]
    let v18: i64;  // [sp-0x68]
    let v19: i8;  // [sp-0x60]
    let v20: i8;  // [sp-0x58]
    let v21: i64;  // [sp-0x50]
    let v22: Option<Result<struct24, struct8>>;  // [sp-0x48]
    let v24: i64;  // rdx
    let v25: i64;  // rdx
    let v26: i64;  // r15
    let v28: i64;  // rax
    let v29: i64;  // rbx
    let v30: i32;  // eax
    let v31: i64;  // r15
    let v32: i64;  // r13
    let v33: i64;  // rax
    let v34: i64;  // r15
    let v35: i64;  // r14
    let v36: i64;  // rax
    let v38: i64;  // rax
    let v39: i32;  // ecx
    let v40: i64;  // rbp
    let v41: i64;  // r12

    v12 = 0;
    v13 = 1;
    v14 = 0;
    if uu_split::get_input_size(a0 + 112, a1, &v12, *(a0 as &i64), *((a0 + 8) as &i64)) {
        v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
        return v26;
    }
    v7 = v13;
    v5 = v14;
    if !v24 {
        v26 = 0;
        if a3 == 1 {
            return v26;
        }
        v26 = 0;
        if *((a0 + 161) as &i8) {
            return v26;
        }
    }
    v16 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v16);
    v3 = 0;
    v3 = 8;
    v3 = 0;
    v4 = a1;
    if !(v24 | a2) >> 32 {
        v30 = v24 as u32;
        v6 = (((0 CONCAT v30) % (a2 & 4294967295)) as u32 CONCAT ((0 CONCAT v30) / (a2 & 4294967295)) as u32) >> 32 & 4294967295;
        v29 = (((0 CONCAT v30) % (a2 & 4294967295)) as u32 CONCAT ((0 CONCAT v30) / (a2 & 4294967295)) as u32) & 4294967295 & 4294967295;
        if !(a3 == 1) {
            goto LABEL_4cd85d;
        }
LABEL_4cd831:
        v11 = v24;
        v0 = *((a0 + 161) as &i8);
    } else {
        v28 = v24;
        v6 = ((0 CONCAT v28) % a2 as u128 CONCAT (0 CONCAT v28) / a2 as u128) >> 64;
        v29 = (0 CONCAT v28) % a2 as u128 CONCAT (0 CONCAT v28) / a2 as u128;
        if a3 == 1 {
            goto LABEL_4cd831;
        }
LABEL_4cd85d:
        v0 = *((a0 + 161) as &i8);
        v16 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, v0);
        v26 = v31;
        if v2 == 0x8000000000000000 {
            return v26;
        }
        v11 = v24;
    }
    v40 = v29 - -1 - (v6 < 1);
    v16 = v7;
    v17 = v5;
    v18 = v4;
    v19 = 0;
    v20 = *((a0 + 162) as &i8);
    v4 = a0;
    v21 = *((a0 + 136) as &i64);
    v41 = 1;
    v32 = 0;
    v7 = 9223372036854775809;
    *(&v5 as &u32) = v20;
    loop {
        v22 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v16);
        v33 = v22 as i64;
        if v33 == v7 {
            break;
        }
        v34 = *((&v22 as &char + 8) as &i64);
        if v33 == 0x8000000000000000 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
            return v26;
        }
        v35 = *((&v22 as &char + 16) as &i64);
        v8 = v33;
        v9 = v34;
        v10 = v35;
        if v10 + v32 < v11 {
            v8 = alloc::vec::Vec<T,A>::push(v5 as u64);
            v34 = v9;
            v35 = v10;
        }
        if !a3 {
            v15 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v3, v41 - 1);
            if v15.field_0 {
                return v26;
            }
            v15 = uu_split::custom_write_all(v34, v35, v15.field_8, v21);
            if v15.field_0 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15.field_8);
                return v26;
            }
        } else if v41 == a4 {
            v36 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v34, v35);
            if v36 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
                return v26;
            }
        }
        v32 += v35;
        if v40 > v32 {
LABEL_4cda87:
            if !(a3 == 1) {
                continue;
            }
            goto LABEL_4cdadd;
        } else {
            v38 = 4294967295;
            v39 = -2;
            do {
                v40 = v40 + v29 + (v41 < v6);
                v41 += 1;
                v38 = v38 as u32 + 1;
                v39 += 1;
            } while (v40 <= v32);
            if !(v0 && v39 < 2147483647) {
                goto LABEL_4cda87;
            }
            if a3 != 1 {
                v41 -= v38 & 4294967295;
                continue;
            }
LABEL_4cdadd:
            if v41 > a4 {
                break;
            }
        }
    }
    return 0;
}
