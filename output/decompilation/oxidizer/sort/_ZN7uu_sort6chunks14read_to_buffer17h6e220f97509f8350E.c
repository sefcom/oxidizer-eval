fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> : struct8 {
    let a0: i64;  // rsi
    let v0: struct8;  // [bp-0xa8]
    let v1: i64;  // [bp-0xa0]
    let v3: struct24;  // [bp-0x90]
    let v4: struct24;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u192;  // [bp-0x88], Other Possible Types: struct8
    let v7: u64;  // [bp-0x88]
    let v8: u64;  // [bp-0x80]
    let v9: u64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x78]
    let v12: u8;  // [bp-0x70], Other Possible Types: struct8
    let v13: struct24;  // [bp-0x70]
    let v14: u64;  // [bp-0x58]
    let v15: u8;  // [bp-0x48]
    let v16: i8;  // [bp-0x38]
    let v17: struct8;  // rbx
    let v18: &mut [u8];  // rbp
    let v19: struct24;  // rdx
    let v20: struct24;  // r15
    let v21: u64;  // rbp
    let v22: u64;  // rsi
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u64;  // rbp
    let v27: i64;  // rbp
    let v28: u64;  // rdi

    v17 = *((a1 + 16) as &i64) - a4;
    v18 = a4 + *((a1 + 8) as &i64);
    v14 = a3 >> 1;
    v0 = v17;
    loop {
        v20 = v19;
        if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(a0 as &i64), *((a0 + 8) as &i64), v18, v17) as u64 {
            if std::io::error::Error::kind(v20) != 35 {
                v3 = v20;
                v4 = <T as alloc::string::ToString>::to_string(a1);
                v12 = 2;
                memcpy(&v7, &v15, 16);
                v10 = *(&v16 as &i64);
                *((v1 + 8) as &double) = alloc::boxed::Box<T>::new(&v7);
                *((v1 + 16) as &&u8) = &g_601a40;
                *(v1 as &i64) = 1;
                return;
            }
            continue;
        }
        if a2 == 1 {
            break;
        }
        if !(!v19) {
            continue;
        }
        if !(!v17) {
            goto LABEL_55d890;
        }
LABEL_55d803:
        v23 = *((a1 + 8) as &i64);
        v6 = struct24 {
            field_0: v23
            field_8: v23
            field_16: v21 + v23
        };
        v12 = a5;
        v12 = v13 & -0x100 | v12;
        v24 = memchr::arch::generic::memchr::Iter::next_back(&v6, &v12);
        if memchr::arch::generic::memchr::Iter::next_back(&v6, &v12) != 1 {
            v25 = *((a1 + 16) as &i64);
            alloc::vec::Vec<T,A>::resize(a1, v25 + 0x2800, 0);
            v18 = v25 + *((a1 + 8) as &i64);
            v7 = v5;
            v9 = v8;
            v11 = v10;
        } else if v24 {
            *((v1 + 8) as &struct24) = v19 + 1;
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
LABEL_55d890:
            v17 = v0;
            if v0 != v17 {
                v27 = *((a1 + 16) as &i64) - v17;
                v28 = v27 - 1;
                if *((*((a1 + 8) as &i64) + v28) as &i8) != a5 as i8 {
                    *((*((a1 + 8) as &i64) + v27) as &i8) = a5;
                    v17 -= 1;
                    v27 = *((a1 + 16) as &i64) - v17;
                }
                v17 = v17;
            }
            v6 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
            break;
        }
        v21 = *((a1 + 16) as &i64);
        if !(v21 < a3) {
            goto LABEL_55d803;
        }
        v22 = v21 * 2;
        alloc::vec::Vec<T,A>::resize(a1, a3, 0);
        v17 = *((a1 + 16) as &i64) - v21;
        v18 = v21 + *((a1 + 8) as &i64);
    }
}
