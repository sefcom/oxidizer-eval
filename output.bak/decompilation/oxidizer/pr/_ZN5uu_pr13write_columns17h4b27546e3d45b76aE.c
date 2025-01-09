fn uu_pr::write_columns(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x1e9]
    let v1: i64;  // [sp-0x1e8]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1c0]
    let v4: i64;  // [sp-0x1b8]
    let v5: struct24;  // [sp-0x1a8], Other Possible Types: i192
    let v6: i32;  // [sp-0x18c]
    let v7: i128;  // [sp-0x188]
    let v8: i64;  // [sp-0x178]
    let v9: i192;  // [sp-0x170], Other Possible Types: Option<struct24>
    let v10: i64;  // [sp-0x158]
    let v11: i64;  // [sp-0x150]
    let v12: struct16;  // [sp-0x148], Other Possible Types: i64
    let v13: i64;  // [sp-0x140]
    let v14: i64;  // [sp-0x138]
    let v15: i64;  // [sp-0x130]
    let v16: i64;  // [sp-0x128]
    let v17: i64;  // [sp-0x120]
    let v18: i64;  // [sp-0x118]
    let v19: i64;  // [sp-0x110]
    let v20: i64;  // [sp-0x108]
    let v21: i64;  // [sp-0x100]
    let v22: i64;  // [sp-0xf8]
    let v23: i128;  // [sp-0xf0]
    let v24: i128;  // [sp-0xe0]
    let v25: i64;  // [sp-0xd0]
    let v26: i256;  // [sp-0xc8], Other Possible Types: struct32
    let v27: struct65;  // [bp-0xa8]
    let v28: i64;  // [sp-0x60]
    let v29: i64;  // [sp-0x58]
    let v30: struct24;  // [sp-0x48], Other Possible Types: i192
    let v32: i64;  // rdi
    let v33: i64;  // rbx
    let v34: i64;  // rax
    let v35: i32;  // ecx
    let v36: i64;  // r13
    let v37: i64;  // r15
    let v38: i64;  // r15
    let v40: i64;  // r12
    let v41: struct8;  // rax
    let v42: i64;  // r13
    let v43: i256;  // ymm0
    let v44: i256;  // ymm0
    let v45: i64;  // r14
    let v46: i64;  // r14
    let v47: i128;  // xmm0
    let v51: i128;  // xmm0
    let v52: struct8;  // rax
    let v53: i64;  // rdx
    let v54: i64;  // rdx

    v32 = *((a2 + 16) as &i64);
    v33 = *((a2 + 312) as &i64) >> (*((a2 + 320) as &i8) & 63);
    if v32 {
        v1 = *((a2 + 24) as &i64);
        v34 = *((a2 + 0x100) as &i64);
    } else {
        v34 = *((a2 + 0x100) as &i64);
        v1 = 1;
        if v34 != 0x8000000000000000 {
            v1 = *((a2 + 288) as &i64);
        }
    }
    v35 = 0;
    if v34 != 0x8000000000000000 {
        v35 = *((a2 + 296) as &i32);
    }
    v6 = v35;
    v11 = *((a2 + 104) as &i64);
    v10 = *((a2 + 112) as &i64);
    v4 = *((a2 + 32) as &i64);
    v3 = *((a2 + 40) as &i64);
    v0 = *((a2 + 322) as &i8);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v18 = v32;
    if v32 && v1 {
        v19 = a1 * 64 + a0;
        v36 = 0;
        v37 = 0;
        do {
            v38 = v37;
            if v36 > a1 {
                core::slice::index::slice_start_index_len_fail(v36, a1, "src/uu/pr/src/pr.rs"); /* do not return */
            }
            v40 = <usize as core::iter::range::Step>::forward_unchecked(v38);
            v2 = v36;
            v20 = v36 * 64 + a0;
            v21 = v19;
            v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v42 = 0;
            if v41 {
                while (*((v41 + 24) as &i64) == v38) {
                    v12 = alloc::vec::Vec<T,A>::push(v41);
                    v42 += 1;
                    v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v41 {
                        break;
                    }
                }
            }
            for (v36 = v2 + v42; v42 < v33; v12 = alloc::vec::Vec<T,A>::push(None)) {
                v42 = <usize as core::iter::range::Step>::forward_unchecked(v42);
            }
            v37 = v40;
        } while (v40 < v1);
    }
    v27 = struct65 {
        field_0: v12
        field_8: v13
        field_16: v14
        field_24: a0
        field_32: a1
        field_40: a2
        field_48: v1
        field_56: v33
        field_64: v6 as i8
    };
    v28 = 0;
    v29 = v33;
    v30 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
    v20 = 0;
    v44 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v23 = 0;
    v24 = 0;
    v21 = 1;
    v22 = 0;
    v25 = 0;
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v30);
    v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
    if v9 == 0x8000000000000000 {
        goto LABEL_5c8167;
    } else if !v18 {
        v46 = 0;
        v2 = 0;
    } else {
        v45 = 0;
        v47 = v9;
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v7 = v47;
        v8 = *((&v9 as &char + 16) as &i64);
        v15 = *((&v7 as &char + 8) as &i64);
        v16 = v15 + v8 * 8;
        v17 = 0;
        continue;
    }
    loop {
        v51 = v9;
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
        v7 = v51;
        v8 = *((&v9 as &char + 16) as &i64);
        v15 = *((&v7 as &char + 8) as &i64);
        v16 = v15 + v8 * 8;
        v17 = 0;
        loop {
            v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v53 {
                if v0 && (v2 & 1) {
                    goto LABEL_5c8167;
                }
                goto LABEL_5c80b7;
            }
            v54 = *(v53 as &i64);
            if !v54 {
                break;
            }
            v5 = uu_pr::get_line_for_printing(a2, v54, v1, v52, v4, v3, v8);
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, *((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64)) {
LABEL_5c8129:
                return 1;
            }
            v46 += 1;
        }
        v2 = v52 | -0x100 | 1;
        if v0 {
LABEL_5c8167:
            return 0;
        }
LABEL_5c80b7:
        if v0 && (v2 & 1) {
            goto LABEL_5c8129;
        }
        v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
        if v9 == 0x8000000000000000 {
            goto LABEL_5c8167;
        }
    }
}
