fn uu_pr::write_columns(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x1f1]
    let v1: i64;  // [sp-0x1f0]
    let v2: i64;  // [sp-0x1e0]
    let v3: i64;  // [sp-0x1d8]
    let v4: i64;  // [sp-0x1d0]
    let v5: i8;  // [bp-0x1b8]
    let v6: i8;  // [bp-0x1b0]
    let v7: i8;  // [bp-0x1a8]
    let v8: i32;  // [sp-0x19c]
    let v9: i128;  // [sp-0x198]
    let v10: i64;  // [sp-0x188]
    let v11: struct16;  // [sp-0x178], Other Possible Types: i64
    let v12: i64;  // [sp-0x170]
    let v13: i64;  // [sp-0x168]
    let v14: i192;  // [sp-0x160], Other Possible Types: Option<struct24>
    let v15: i64;  // [sp-0x148]
    let v16: i64;  // [sp-0x140]
    let v17: i64;  // [sp-0x138]
    let v18: i64;  // [sp-0x130]
    let v19: i64;  // [sp-0x128]
    let v21: i64;  // [sp-0x110]
    let v22: i64;  // [sp-0x108]
    let v23: i64;  // [sp-0x100]
    let v24: i64;  // [sp-0xf8]
    let v25: i128;  // [sp-0xf0]
    let v26: i128;  // [sp-0xe0]
    let v27: i64;  // [sp-0xd0]
    let v28: struct32;  // [sp-0xc8], Other Possible Types: i256
    let v29: i64;  // [sp-0xa8]
    let v30: i64;  // [sp-0xa0]
    let v31: i64;  // [sp-0x98]
    let v32: i64;  // [sp-0x90]
    let v33: i64;  // [sp-0x88]
    let v34: i64;  // [sp-0x80]
    let v35: i64;  // [sp-0x78]
    let v36: i64;  // [sp-0x70]
    let v37: i8;  // [sp-0x68]
    let v38: i64;  // [sp-0x60]
    let v39: i64;  // [sp-0x58]
    let v40: struct24;  // [sp-0x48], Other Possible Types: i192
    let v42: i64;  // r12
    let v43: i64;  // rbx
    let v44: i64;  // rcx
    let v45: i64;  // r12
    let v47: i64;  // r13
    let v49: i64;  // r15
    let v50: struct8;  // rax
    let v51: i64;  // r12
    let v52: i256;  // ymm0
    let v53: i256;  // ymm0
    let v54: i64;  // r14
    let v55: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: struct8;  // rax
    let v61: i64;  // rdx
    let v62: i64;  // rdx

    v42 = *((a2 + 16) as &i64);
    v16 = *((a2 + 104) as &i64);
    v15 = *((a2 + 112) as &i64);
    v43 = *((a2 + 312) as &i64) >> (*((a2 + 320) as &i8) & 63);
    if !v42 {
        if *((a2 + 0x100) as &i64) == 0x8000000000000000 {
            v44 = 0;
            v1 = 1;
        } else {
            v1 = *((a2 + 288) as &i64);
            v44 = *((a2 + 296) as &i32);
        }
        v4 = *((a2 + 32) as &i64);
        v3 = *((a2 + 40) as &i64);
        v0 = *((a2 + 322) as &i8);
        v11 = 0;
        v12 = 8;
        v13 = 0;
    } else {
        v1 = *((a2 + 24) as &i64);
        v44 = 0;
        if *((a2 + 0x100) as &i64) != 0x8000000000000000 {
            v44 = *((a2 + 296) as &i32);
        }
        v4 = *((a2 + 32) as &i64);
        v3 = *((a2 + 40) as &i64);
        v0 = *((a2 + 322) as &i8);
        v11 = 0;
        v12 = 8;
        v13 = 0;
        if !v1 {
            v1 = 0;
        } else {
            v8 = v44;
            v42 = v42;
            v21 = a1 * 64 + a0;
            v45 = 0;
            do {
                v47 = 0;
                if v45 > a1 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
                v49 = <usize as core::iter::range::Step>::forward_unchecked(v47);
                v2 = v45;
                v22 = v45 * 64 + a0;
                v23 = v21;
                v50 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                v51 = 0;
                if v50 {
                    while (*((v50 + 24) as &i64) == v47) {
                        v11 = alloc::vec::Vec<T,A>::push(v50);
                        v51 += 1;
                        v50 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v50 {
                            break;
                        }
                    }
                }
                for (v45 = v2 + v51; v51 < v43; v11 = alloc::vec::Vec<T,A>::push(0)) {
                    v51 = <usize as core::iter::range::Step>::forward_unchecked(v51);
                }
            } while (v49 < v1);
            v44 = v8;
        }
    }
    v31 = v13;
    v29 = v11;
    v30 = v12;
    v38 = 0;
    v39 = v43;
    v32 = a0;
    v33 = a1;
    v34 = a2;
    v35 = v1;
    v36 = v43;
    v37 = v44;
    v40 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29);
    v22 = 0;
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v25 = 0;
    v26 = 0;
    v23 = 1;
    v24 = 0;
    v27 = 0;
    v28 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v40);
    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28);
    match v14 {
        None => {
            goto LABEL_5c761a;
        },
        Some(_) => {
            v54 = 0;
            if !v42 {
                v2 = 0;
            } else {
                v55 = v14;
                v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u128 as u256;
                v9 = v55;
                v10 = *((&v14 as &char + 16) as &i64);
                v17 = *((&v9 as &char + 8) as &i64);
                v18 = v17 + v10 * 8;
                v19 = 0;
                continue;
            }
        },
    }
    loop {
        v59 = v14;
        v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
        v9 = v59;
        v10 = *((&v14 as &char + 16) as &i64);
        v17 = *((&v9 as &char + 8) as &i64);
        v18 = v17 + v10 * 8;
        v19 = 0;
        loop {
            v60 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v61 {
                if v0 && (v2 & 1) {
                    goto LABEL_5c761a;
                }
                goto LABEL_5c7567;
            }
            v62 = *(v61 as &i64);
            if !v62 {
                break;
            }
            uu_pr::get_line_for_printing(&v5, v34, v62, v1, v60, v4, v3, v10);
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v6, v7) {
LABEL_5c75dc:
                return 1;
            }
            v54 += 1;
        }
        v2 = v60 | -0x100 | 1;
        if v0 {
LABEL_5c761a:
            return 0;
        }
LABEL_5c7567:
        if v0 && (v2 & 1) {
            goto LABEL_5c75dc;
        }
        v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28);
        if v14 == 0x8000000000000000 {
            goto LABEL_5c761a;
        }
    }
}
