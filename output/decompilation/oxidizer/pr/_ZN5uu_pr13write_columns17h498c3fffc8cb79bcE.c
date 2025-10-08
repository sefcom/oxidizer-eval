fn uu_pr::write_columns(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [bp-0x199]
    let v1: std::io::stdio::Stdout;  // [bp-0x198], Other Possible Types: u64
    let v2: u64;  // [bp-0x190]
    let v3: u64;  // [bp-0x188]
    let v4: u64;  // [bp-0x168]
    let v5: u64;  // [bp-0x160]
    let v6: u32;  // [bp-0x154]
    let v7: u64;  // [bp-0x150]
    let v8: u64;  // [bp-0x148]
    let v9: u64;  // [bp-0x140]
    let v10: Option<struct24>;  // [bp-0x138]
    let v11: u64;  // [bp-0x130]
    let v12: u64;  // [bp-0x128]
    let v13: u64;  // [bp-0x120]
    let v14: u64;  // [bp-0x118]
    let v15: struct16;  // [bp-0x108]
    let v16: struct16;  // [bp-0x108]
    let v17: void*;  // [bp-0x108]
    let v18: u64;  // [bp-0x100]
    let v19: void*;  // [bp-0xf8]
    let v20: u64;  // [bp-0xf0]
    let v21: u64;  // [bp-0xe8]
    let v22: void*;  // [bp-0xe0]
    let v23: struct65;  // [bp-0xd8]
    let v24: void*;  // [bp-0xd8]
    let v25: u64;  // [bp-0xd0]
    let v26: void*;  // [bp-0xc8]
    let v27: u128;  // [bp-0xc0]
    let v28: u128;  // [bp-0xb0]
    let v29: void*;  // [bp-0xa0]
    let v30: void*;  // [bp-0x90]
    let v31: u64;  // [bp-0x88]
    let v32: core::fmt::rt::Argument;  // [bp-0x78]
    let v34: struct32;  // [bp-0x68]
    let v35: u64;  // [bp-0x48]
    let v38: u64;  // r12
    let v40: u32;  // ecx
    let v41: u64;  // rax
    let v42: std::io::stdio::Stdout;  // r15
    let v43: u64;  // rbx
    let v46: i64;  // r15
    let v48: u64;  // rbp
    let v50: i64;  // r13
    let v51: u64;  // rcx
    let v52: u64;  // rax
    let v53: i64;  // rdx
    let v54: u64;  // rcx
    let v56: u64;  // r15
    let v57: u64;  // rcx
    let v58: u64;  // rax
    let v59: i64;  // rdx
    let v60: i64;  // rdx
    let v61: i64;  // rdx
    let v62: u64;  // rcx

    v38 = *((a2 + 312) as &i64) >> (*((a2 + 320) as &i8) & 63);
    v6 = v40;
    v14 = *((a2 + 104) as &i64);
    v13 = *((a2 + 112) as &i64);
    v5 = *((a2 + 32) as &i64);
    v4 = *((a2 + 40) as &i64);
    v0 = *((a2 + 322) as &i8);
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v32 = *((a2 + 16) as &i64);
    if *((a2 + 16) as &i64) && v3 {
        do {
            v1 = v42;
            v2 = v41;
            if v42 != a1 {
                loop {
                    v48 -= 64;
                    if *((v46 + 24) as &i64) != v43 {
                        break;
                    }
                    v15 = alloc::vec::Vec<T,A>::push(v46, "src/uu/pr/src/pr.rs");
                    if v48 == 64 {
                        break;
                    }
                }
            }
            for (; v50 < v38; v16 = alloc::vec::Vec<T,A>::push(None, "src/uu/pr/src/pr.rs"));
            v43 = v2;
        } while (v43 < v3);
    }
    v30 = 0;
    v31 = v38;
    v23 = struct65 {
        field_0: v16.field_0
        field_8: ""
        field_24: a0
        field_32: a1
        field_40: a2
        field_48: v3
        field_56: v38
        field_64: v6 as u8
    };
    core::iter::traits::iterator::Iterator::collect(&v35, &v23);
    v24 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 1;
    v26 = 0;
    v29 = 0;
    v34 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v35);
    v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34);
    if let None = v10 {
        return 0;
    }
    v1 = v10 as i64;
    if v32 {
        do {
            v51 = v11;
            v2 = v51;
            v20 = v51;
            v21 = v51 + v12 * 8;
            v22 = 0;
            loop {
                v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
                if !v53 {
                    break;
                }
                if *(v53 as &i64) {
                    uu_pr::get_line_for_printing(&v7, a2, *(v53 as &i64), v3, v52, v5, v4, v12);
                    if <std::io::stdio::StdoutLock as std::io::Write>::write_all(v54, v8, v9) {
                        return 1;
                    }
                } else {
                    uu_pr::get_line_for_printing(&v7, a2, &v24, v3, v52, v5, v4, v12);
                    if <std::io::stdio::StdoutLock as std::io::Write>::write_all(v54, v8, v9) {
                        return 1;
                    }
                }
            }
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(v54, v14, v13) {
                return 1;
            }
            v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34);
            v1 = v10 as i64;
        } while (v10 as i64 != 0x8000000000000000);
    } else {
        do {
            v57 = v11;
            v2 = v57;
            v20 = v57;
            v21 = v57 + v12 * 8;
            v22 = 0;
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
            v60 = v59;
            if v60 {
                do {
                    v61 = v59;
                    if !*(v61 as &i64) {
                        if v0 {
                            return 0;
                        }
                        goto LABEL_53772c;
                    }
                    uu_pr::get_line_for_printing(&v7, a2, *(v61 as &i64), v3, v58, v5, v4, v12);
                    if <std::io::stdio::StdoutLock as std::io::Write>::write_all(v62, v8, v9) {
                        return 1;
                    }
                    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
                } while (v60);
            }
            if (v56 & v0 & 1) {
                break;
            }
            continue;
LABEL_53772c:
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(v62, v14, v13) {
                return 1;
            }
            v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34);
            v1 = v10 as i64;
        } while (v10 as i64 != 0x8000000000000000);
    }
    return 0;
}
