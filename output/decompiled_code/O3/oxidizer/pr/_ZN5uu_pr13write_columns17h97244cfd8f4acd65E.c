fn uu_pr::write_columns(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x1f1]
    let v1: i64;  // [sp-0x1f0]
    let v2: i64;  // [sp-0x1e0]
    let v3: i64;  // [sp-0x1d8]
    let v4: i64;  // [sp-0x1d0]
    let v5: i192;  // [sp-0x1b8], Other Possible Types: struct24
    let v6: i32;  // [sp-0x19c]
    let v7: i128;  // [sp-0x198]
    let v8: i64;  // [sp-0x188]
    let v9: struct16;  // [sp-0x178], Other Possible Types: i64
    let v10: i64;  // [sp-0x170]
    let v11: i64;  // [sp-0x168]
    let v12: i192;  // [sp-0x160], Other Possible Types: Option<struct24>
    let v13: i64;  // [sp-0x148]
    let v14: i64;  // [sp-0x140]
    let v15: i64;  // [sp-0x138]
    let v16: i64;  // [sp-0x130]
    let v17: i64;  // [sp-0x128]
    let v19: i64;  // [sp-0x110]
    let v20: i64;  // [sp-0x108]
    let v21: i64;  // [sp-0x100]
    let v22: i64;  // [sp-0xf8]
    let v23: i128;  // [sp-0xf0]
    let v24: i128;  // [sp-0xe0]
    let v25: i64;  // [sp-0xd0]
    let v26: i256;  // [sp-0xc8], Other Possible Types: struct32
    let v27: i64;  // [sp-0xa8]
    let v28: i64;  // [sp-0xa0]
    let v29: i64;  // [sp-0x98]
    let v30: i64;  // [sp-0x90]
    let v31: i64;  // [sp-0x88]
    let v32: i64;  // [sp-0x80]
    let v33: i64;  // [sp-0x78]
    let v34: i64;  // [sp-0x70]
    let v35: i8;  // [sp-0x68]
    let v36: i64;  // [sp-0x60]
    let v37: i64;  // [sp-0x58]
    let v38: i192;  // [sp-0x48], Other Possible Types: struct24
    let v40: i64;  // r12
    let v41: i64;  // rbx
    let v42: i64;  // rcx
    let v43: i64;  // r12
    let v45: i64;  // r13
    let v47: i64;  // r15
    let v48: struct8;  // rax
    let v49: i64;  // r12
    let v50: i256;  // ymm0
    let v51: i256;  // ymm0
    let v52: i64;  // r14
    let v53: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: struct8;  // rax
    let v59: i64;  // rdx
    let v60: i64;  // rdx

    v40 = *((a2 + 16) as &i64);
    v14 = *((a2 + 104) as &i64);
    v13 = *((a2 + 112) as &i64);
    v41 = *((a2 + 312) as &i64) >> (*((a2 + 320) as &i8) & 63);
    if !v40 {
        if *((a2 + 0x100) as &i64) == 0x8000000000000000 {
            v42 = 0;
            v1 = 1;
        } else {
            v1 = *((a2 + 288) as &i64);
            v42 = *((a2 + 296) as &i32);
        }
        v4 = *((a2 + 32) as &i64);
        v3 = *((a2 + 40) as &i64);
        v0 = *((a2 + 322) as &i8);
        v9 = 0;
        v10 = 8;
        v11 = 0;
    } else {
        v1 = *((a2 + 24) as &i64);
        v42 = 0;
        if *((a2 + 0x100) as &i64) != 0x8000000000000000 {
            v42 = *((a2 + 296) as &i32);
        }
        v4 = *((a2 + 32) as &i64);
        v3 = *((a2 + 40) as &i64);
        v0 = *((a2 + 322) as &i8);
        v9 = 0;
        v10 = 8;
        v11 = 0;
        if !v1 {
            v1 = 0;
        } else {
            v6 = v42;
            v40 = v40;
            v19 = a1 * 64 + a0;
            v43 = 0;
            do {
                v45 = 0;
                if v43 > a1 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
                v47 = <usize as core::iter::range::Step>::forward_unchecked(v45);
                v2 = v43;
                v20 = v43 * 64 + a0;
                v21 = v19;
                v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                v49 = 0;
                if v48 {
                    while (*((v48 + 24) as &i64) == v45) {
                        v9 = alloc::vec::Vec<T,A>::push(v48);
                        v49 += 1;
                        v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v48 {
                            break;
                        }
                    }
                }
                for (v43 = v2 + v49; v49 < v41; v9 = alloc::vec::Vec<T,A>::push(0)) {
                    v49 = <usize as core::iter::range::Step>::forward_unchecked(v49);
                }
            } while (v47 < v1);
            v42 = v6;
        }
    }
    v29 = v11;
    v27 = v9;
    v28 = v10;
    v36 = 0;
    v37 = v41;
    v30 = a0;
    v31 = a1;
    v32 = a2;
    v33 = v1;
    v34 = v41;
    v35 = v42;
    v38 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
    v20 = 0;
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v23 = 0;
    v24 = 0;
    v21 = 1;
    v22 = 0;
    v25 = 0;
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v38);
    v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
    match v12 {
        None => {
            goto LABEL_5c761a;
        },
        Some(_) => {
            v52 = 0;
            if !v40 {
                v2 = 0;
            } else {
                v53 = v12;
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u128 as u256;
                v7 = v53;
                v8 = *((&v12 as &char + 16) as &i64);
                v15 = *((&v7 as &char + 8) as &i64);
                v16 = v15 + v8 * 8;
                v17 = 0;
                continue;
            }
        },
    }
    loop {
        v57 = v12;
        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
        v7 = v57;
        v8 = *((&v12 as &char + 16) as &i64);
        v15 = *((&v7 as &char + 8) as &i64);
        v16 = v15 + v8 * 8;
        v17 = 0;
        loop {
            v58 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v59 {
                if v0 && (v2 & 1) {
                    goto LABEL_5c761a;
                }
                goto LABEL_5c7567;
            }
            v60 = *(v59 as &i64);
            if !v60 {
                break;
            }
            v5 = uu_pr::get_line_for_printing(v32, v60, v1, v58, v4, v3, v8);
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, *((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64)) {
LABEL_5c75dc:
                return 1;
            }
            v52 += 1;
        }
        v2 = v58 | -0x100 | 1;
        if v0 {
LABEL_5c761a:
            return 0;
        }
LABEL_5c7567:
        if v0 && (v2 & 1) {
            goto LABEL_5c75dc;
        }
        v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
        if v12 == 0x8000000000000000 {
            goto LABEL_5c761a;
        }
    }
}
