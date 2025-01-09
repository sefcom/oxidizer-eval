fn uu_pr::write_columns(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x1e9]
    let v1: i64;  // [sp-0x1e8]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1c0]
    let v4: i64;  // [sp-0x1b8]
    let v5: i8;  // [bp-0x1a8]
    let v6: i8;  // [bp-0x1a0]
    let v7: i8;  // [bp-0x198]
    let v8: i32;  // [sp-0x18c]
    let v9: i128;  // [sp-0x188]
    let v10: i64;  // [sp-0x178]
    let v11: i192;  // [sp-0x170], Other Possible Types: Option<struct24>
    let v12: i64;  // [sp-0x158]
    let v13: i64;  // [sp-0x150]
    let v14: struct16;  // [sp-0x148], Other Possible Types: i64
    let v15: i64;  // [sp-0x140]
    let v16: i64;  // [sp-0x138]
    let v17: i64;  // [sp-0x130]
    let v18: i64;  // [sp-0x128]
    let v19: i64;  // [sp-0x120]
    let v20: i64;  // [sp-0x118]
    let v21: i64;  // [sp-0x110]
    let v22: i64;  // [sp-0x108]
    let v23: i64;  // [sp-0x100]
    let v24: i64;  // [sp-0xf8]
    let v25: i128;  // [sp-0xf0]
    let v26: i128;  // [sp-0xe0]
    let v27: i64;  // [sp-0xd0]
    let v28: i256;  // [sp-0xc8], Other Possible Types: struct32
    let v29: struct65;  // [bp-0xa8]
    let v30: i64;  // [sp-0x60]
    let v31: i64;  // [sp-0x58]
    let v32: struct24;  // [sp-0x48], Other Possible Types: i192
    let v34: i64;  // rdi
    let v35: i64;  // rbx
    let v36: i64;  // rax
    let v37: i32;  // ecx
    let v38: i64;  // r13
    let v40: i64;  // r15
    let v41: i64;  // r12
    let v42: struct8;  // rax
    let v43: i64;  // r13
    let v44: i256;  // ymm0
    let v45: i256;  // ymm0
    let v46: i64;  // r14
    let v47: i64;  // r14
    let v48: i128;  // xmm0
    let v49: struct8;  // rax
    let v50: i64;  // rdx
    let v52: i128;  // xmm0
    let v53: struct8;  // rax
    let v54: i64;  // rdx
    let v55: i64;  // rdx

    v34 = *((a2 + 16) as &i64);
    v35 = *((a2 + 312) as &i64) >> (*((a2 + 320) as &i8) & 63);
    if v34 {
        v1 = *((a2 + 24) as &i64);
        v36 = *((a2 + 0x100) as &i64);
    } else {
        v36 = *((a2 + 0x100) as &i64);
        v1 = 1;
        if v36 != 0x8000000000000000 {
            v1 = *((a2 + 288) as &i64);
        }
    }
    v37 = 0;
    if v36 != 0x8000000000000000 {
        v37 = *((a2 + 296) as &i32);
    }
    v8 = v37;
    v13 = *((a2 + 104) as &i64);
    v12 = *((a2 + 112) as &i64);
    v4 = *((a2 + 32) as &i64);
    v3 = *((a2 + 40) as &i64);
    v0 = *((a2 + 322) as &i8);
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v20 = v34;
    if v34 && v1 {
        v21 = a1 * 64 + a0;
        v38 = 0;
        do {
            v40 = 0;
            v41 = <usize as core::iter::range::Step>::forward_unchecked(v40);
            v2 = v38;
            v22 = v38 * 64 + a0;
            v23 = v21;
            v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v43 = 0;
            if v42 {
                while (*((v42 + 24) as &i64) == v40) {
                    v14 = alloc::vec::Vec<T,A>::push(v42);
                    v43 += 1;
                    v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v42 {
                        break;
                    }
                }
            }
            for (v38 = v2 + v43; v43 < v35; v14 = alloc::vec::Vec<T,A>::push(None)) {
                v43 = <usize as core::iter::range::Step>::forward_unchecked(v43);
            }
        } while (v41 < v1);
    }
    v29 = struct65 {
        field_0: v14
        field_8: v15
        field_16: v16
        field_24: a0
        field_32: a1
        field_40: a2
        field_48: v1
        field_56: v35
        field_64: v8 as i8
    };
    v30 = 0;
    v31 = v35;
    v32 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29);
    v22 = 0;
    v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v25 = 0;
    v26 = 0;
    v23 = 1;
    v24 = 0;
    v27 = 0;
    v28 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v32);
    v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28);
    if v11 == 0x8000000000000000 {
        goto LABEL_5c8171;
    } else if !v20 {
        v47 = 0;
        v2 = 0;
    } else {
        v46 = 0;
        loop {
            v48 = v11;
            v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
            v9 = v48;
            v10 = *((&v11 as &char + 16) as &i64);
            v17 = *((&v9 as &char + 8) as &i64);
            v18 = v17 + v10 * 8;
            v19 = 0;
            loop {
                v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if !v50 {
                    break;
                }
                if *(v50 as &i64) {
                    uu_pr::get_line_for_printing(&v5, a2, *(v50 as &i64), v1, v49, v4, v3, v10);
                    if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v6, v7)) {
                        goto LABEL_5c811d;
                    }
                    v46 += 1;
                } else {
                    uu_pr::get_line_for_printing(&v5, a2, &v22, v1, v49, v4, v3, v10);
                    if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v6, v7)) {
                        goto LABEL_5c811d;
                    }
                }
            }
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v13, v12) {
                break;
            }
            v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28);
            if v11 == 0x8000000000000000 {
                goto LABEL_5c8171;
            }
        }
    }
    loop {
        v52 = v11;
        v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
        v9 = v52;
        v10 = *((&v11 as &char + 16) as &i64);
        v17 = *((&v9 as &char + 8) as &i64);
        v18 = v17 + v10 * 8;
        v19 = 0;
        loop {
            v53 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v54 {
                if v0 && (v2 & 1) {
                    goto LABEL_5c8171;
                }
                goto LABEL_5c80b7;
            }
            v55 = *(v54 as &i64);
            if !v55 {
                break;
            }
            uu_pr::get_line_for_printing(&v5, a2, v55, v1, v53, v4, v3, v10);
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v6, v7) {
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
        if v0 && (v2 & 1) {
            goto LABEL_5c811d;
        }
        v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28);
        if v11 == 0x8000000000000000 {
            goto LABEL_5c8171;
        }
    }
}
