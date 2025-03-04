fn uu_pr::write_columns(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x1e9]
    let v1: i64;  // [sp-0x1e8]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1c0]
    let v4: i64;  // [sp-0x1b8]
    let v5: i8;  // [bp-0x1a8]
    let v6: i8;  // [bp-0x1a0]
    let v7: i8;  // [bp-0x198]
    let v9: i32;  // [sp-0x18c]
    let v10: iNone;  // [sp-0x188]
    let v11: i64;  // [sp-0x178]
    let v12: Option<struct24>;  // [sp-0x170], Other Possible Types: int
    let v13: i64;  // [sp-0x158]
    let v14: i64;  // [sp-0x150]
    let v15: struct16;  // [sp-0x148], Other Possible Types: unsigned long
    let v16: i64;  // [sp-0x140]
    let v17: i64;  // [sp-0x138]
    let v18: i64;  // [sp-0x130]
    let v19: i64;  // [sp-0x128]
    let v20: i64;  // [sp-0x120]
    let v21: i64;  // [sp-0x118]
    let v22: i64;  // [sp-0x110]
    let v23: i64;  // [sp-0x108]
    let v24: i64;  // [sp-0x100]
    let v25: i64;  // [sp-0xf8]
    let v26: iNone;  // [sp-0xf0]
    let v27: iNone;  // [sp-0xe0]
    let v28: i64;  // [sp-0xd0]
    let v29: struct32;  // [sp-0xc8]
    let v30: struct65;  // [bp-0xa8]
    let v31: i64;  // [sp-0x60]
    let v32: i64;  // [sp-0x58]
    let v33: struct24;  // [sp-0x48]
    let v35: i64;  // rdi
    let v36: i64;  // rbx
    let v37: i64;  // rax
    let v38: i32;  // ecx
    let v39: i64;  // r13
    let v40: i64;  // r15
    let v41: i64;  // r12
    let v42: struct8;  // rax
    let v43: i64;  // r13
    let v44: iNone;  // ymm0
    let v45: iNone;  // ymm0
    let v46: i64;  // r14
    let v47: i64;  // r14
    let v48: iNone;  // xmm0
    let v49: struct8;  // rax
    let v50: i64;  // rdx
    let v52: iNone;  // xmm0
    let v53: struct8;  // rax
    let v54: i64;  // rdx
    let v55: i64;  // rdx

    v35 = *((a2 + 16) as &i64);
    v36 = *((a2 + 312) as &i64) >> (*((a2 + 320) as &i8) & 63);
    if v35 {
        v1 = *((a2 + 24) as &i64);
        v37 = *((a2 + 0x100) as &i64);
    } else {
        v37 = *((a2 + 0x100) as &i64);
        v1 = 1;
        if v37 != 0x8000000000000000 {
            v1 = *((a2 + 288) as &i64);
        }
    }
    v38 = 0;
    if v37 != 0x8000000000000000 {
        v38 = *((a2 + 296) as &i32);
    }
    v9 = v38;
    v14 = *((a2 + 104) as &i64);
    v13 = *((a2 + 112) as &i64);
    v4 = *((a2 + 32) as &i64);
    v3 = *((a2 + 40) as &i64);
    v0 = *((a2 + 322) as &i8);
    v15 = 0;
    v16 = 8;
    v17 = 0;
    v21 = v35;
    if v35 && v1 {
        v22 = a1 * 64 + a0;
        v39 = 0;
        v40 = 0;
        do {
            v41 = <usize as core::iter::range::Step>::forward_unchecked(v40);
            v2 = v39;
            v23 = v39 * 64 + a0;
            v24 = v22;
            v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v43 = 0;
            if v42 {
                while (*((v42 + 24) as &i64) == v40) {
                    v15 = alloc::vec::Vec<T,A>::push(v42);
                    v43 += 1;
                    v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v42 {
                        break;
                    }
                }
            }
            for (v2 += v43; v43 < v36; v15 = alloc::vec::Vec<T,A>::push(None)) {
                v43 = <usize as core::iter::range::Step>::forward_unchecked(v43);
            }
            v40 = v41;
            v39 = v2;
        } while (v41 < v1);
    }
    v30 = struct65 {
        field_0: v15
        field_8: v16
        field_16: v17
        field_24: a0
        field_32: a1
        field_40: a2
        field_48: v1
        field_56: v36
        field_64: v9 as u8
    };
    v31 = 0;
    v32 = v36;
    v33 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v30);
    v23 = 0;
    v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v26 = 0;
    v27 = 0;
    v24 = 1;
    v25 = 0;
    v28 = 0;
    v29 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v33);
    v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29);
    if v12 as i64 == 0x8000000000000000 {
        goto LABEL_5c8171;
    } else if !v21 {
        v47 = 0;
        v2 = 0;
    } else {
        v46 = 0;
        loop {
            v48 = v12 as i128;
            v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256;
            v10 = v48;
            v11 = (&v12)[16] as i64;
            v18 = (&v10)[8] as i64;
            v19 = v18 + v11 * 8;
            v20 = 0;
            loop {
                v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if !v50 {
                    break;
                }
                if *(v50 as &i64) {
                    uu_pr::get_line_for_printing(&v5, a2, *(v50 as &i64), v1, v49, v4, v3, v11);
                    if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, *(&v6 as &i64), *(&v7 as &i64))) {
                        goto LABEL_5c811d;
                    }
                    v46 += 1;
                } else {
                    uu_pr::get_line_for_printing(&v5, a2, &v23, v1, v49, v4, v3, v11);
                    if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, *(&v6 as &i64), *(&v7 as &i64))) {
                        goto LABEL_5c811d;
                    }
                }
            }
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v14, v13) {
                break;
            }
            v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29);
            if v12 as i64 == 0x8000000000000000 {
                goto LABEL_5c8171;
            }
        }
    }
    loop {
        v52 = v12 as i128;
        v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256;
        v10 = v52;
        v11 = (&v12)[16] as i64;
        v18 = (&v10)[8] as i64;
        v19 = v18 + v11 * 8;
        v20 = 0;
        loop {
            v53 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v54 {
                if v0 && (v2 as u8 & 1) {
                    goto LABEL_5c8171;
                }
                goto LABEL_5c80b7;
            }
            v55 = *(v54 as &i64);
            if !v55 {
                break;
            }
            uu_pr::get_line_for_printing(&v5, a2, v55, v1, v53, v4, v3, v11);
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, *(&v6 as &i64), *(&v7 as &i64)) {
LABEL_5c811d:
                return 1;
            }
            v47 += 1;
        }
        v2 = v53 & -0x100 | 1;
        if v0 {
LABEL_5c8171:
            return 0;
        }
LABEL_5c80b7:
        if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v14, v13)) {
            goto LABEL_5c811d;
        }
        v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29);
        if v12 as i64 == 0x8000000000000000 {
            goto LABEL_5c8171;
        }
    }
}
