fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i8) -> : struct8 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0xa8]
    let v1: i64;  // [bp-0xa0]
    let v3: &str;  // [bp-0x90]
    let v4: struct24;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u192;  // [bp-0x88]
    let v7: struct24;  // [bp-0x80]
    let v8: u64;  // [bp-0x80]
    let v9: alloc::raw_vec::Cap;  // [bp-0x78], Other Possible Types: u64
    let v10: u64;  // [bp-0x78]
    let v11: u32;  // [bp-0x70]
    let v12: u32;  // [bp-0x70]
    let v13: u64;  // [bp-0x68]
    let v14: u64;  // [bp-0x58]
    let v15: u8;  // [bp-0x48]
    let v16: i8;  // [bp-0x38]
    let v17: u64;  // rbx
    let v18: alloc::vec::Vec<u8, alloc::alloc::Global>;  // rbp
    let v19: &str;  // rdx
    let v20: &str;  // r15
    let v21: u64;  // rbp
    let v22: u64;  // rsi
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u64;  // rbp
    let v27: struct32;  // rbp
    let v28: u64;  // rdi

    v13 = a1;
    v17 = *((a2 + 16) as &i64) - a5;
    v18 = a5 + *((a2 + 8) as &i64);
    v14 = a4 >> 1;
    v0 = v17;
    loop {
        v20 = v19;
        if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(a0 as &i64), *((a0 + 8) as &i64), v18, v17) as u64 {
            if std::io::error::Error::kind(v20) != 35 {
                v3 = v20;
                v4 = <T as alloc::string::ToString>::to_string(a1);
                v11 = 2;
                memcpy(&v6, &v15, 16);
                v9 = *(&v16 as &i64);
                *((v1 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                *((v1 + 16) as &&u8) = &g_601a40;
                *(v1 as &i64) = 1;
                return;
            }
            continue;
        }
        if a3 == 1 {
            break;
        }
        if !(!v19) {
            continue;
        }
        if !(!v17) {
            goto LABEL_55dc80;
        }
LABEL_55dbf3:
        v23 = *((a2 + 8) as &i64);
        v6 = struct24 {
            field_0: v23
            field_8: v23
            field_16: v21 + v23
        };
        v11 = a6;
        v11 = v12 & -0x100 | v11;
        v24 = memchr::arch::generic::memchr::Iter::next_back(&v6, &v11);
        if memchr::arch::generic::memchr::Iter::next_back(&v6, &v11) != 1 {
            v25 = *((a2 + 16) as &i64);
            alloc::vec::Vec<T,A>::resize(a2, v25 + 0x2800, 0);
            v18 = v25 + *((a2 + 8) as &i64);
            v6 = v5;
            v8 = v7;
            v10 = v9;
        } else if v24 {
            *((v1 + 8) as &&str) = v19 + 1;
            *((v1 + 16) as &i8) = 1;
            *(v1 as &i64) = 0;
            return;
        } else {
            core::option::unwrap_failed(); /* do not return */
        }
    }
    loop {
        if !(!v19) {
            continue;
        }
        if v17 {
LABEL_55dc80:
            v17 = v0;
            if v0 != v17 {
                v27 = *((a2 + 16) as &i64) - v17;
                v28 = v27 - 1;
                if *((*((a2 + 8) as &i64) + v28) as &i8) != a6 as i8 {
                    *((*((a2 + 8) as &i64) + v27) as &i8) = a6;
                    v17 -= 1;
                    v27 = *((a2 + 16) as &i64) - v17;
                }
                v17 = v17;
            }
            <&mut I as core::iter::traits::iterator::Iterator>::next(&v6);
            break;
        }
        v21 = *((a2 + 16) as &i64);
        if !(v21 < a4) {
            goto LABEL_55dbf3;
        }
        v22 = v21 * 2;
        alloc::vec::Vec<T,A>::resize(a2, a4, 0);
        v17 = *((a2 + 16) as &i64) - v21;
        v18 = v21 + *((a2 + 8) as &i64);
    }
}
