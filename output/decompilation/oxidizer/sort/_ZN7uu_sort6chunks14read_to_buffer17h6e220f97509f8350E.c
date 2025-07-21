fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> : struct8 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0xa8]
    let v1: i64;  // [bp-0xa0]
    let v3: struct16;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: struct24;  // [bp-0x88], Other Possible Types: struct8
    let v6: u64;  // [bp-0x88]
    let v7: u128;  // [bp-0x88]
    let v8: u64;  // [bp-0x80]
    let v9: u64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x78]
    let v12: u32;  // [bp-0x70]
    let v13: u32;  // [bp-0x70]
    let v14: u64;  // [bp-0x58]
    let v15: struct24;  // [bp-0x48]
    let v16: struct24;  // rbx
    let v17: &mut [u8];  // rbp
    let v18: struct16;  // rdx
    let v19: struct16;  // r15
    let v20: u64;  // rbp
    let v21: u64;  // rsi
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: u64;  // rbp
    let v26: core::fmt::Arguments;  // rbp
    let v27: u64;  // rdi

    v16 = *((a1 + 16) as &i64) - a4;
    v17 = a4 + *((a1 + 8) as &i64);
    v14 = a3 >> 1;
    v0 = v16;
    loop {
        v19 = v18;
        if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(a0 as &i64), *((a0 + 8) as &i64), v17, v16) as u64 {
            if std::io::error::Error::kind(v19) != 35 {
                v3 = v19;
                v15 = <T as alloc::string::ToString>::to_string(&v3);
                v12 = 2;
                v7 = v15.field_0;
                v10 = v15.field_16;
                *((v1 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                *((v1 + 16) as &&u8) = &g_601a40;
                *(v1 as &i64) = 1;
                return;
            }
            continue;
        }
        if a2 == 1 {
            break;
        }
        if !(!v18) {
            continue;
        }
        if !(!v16) {
            goto LABEL_55d890;
        }
LABEL_55d803:
        v22 = *((a1 + 8) as &i64);
        v5 = struct24 {
            field_0: v22
            field_8: v22
            field_16: v20 + v22
        };
        v12 = a5;
        v12 = v13 & -0x100 | v12;
        v23 = memchr::arch::generic::memchr::Iter::next_back(&v5, &v12);
        if memchr::arch::generic::memchr::Iter::next_back(&v5, &v12) != 1 {
            v24 = *((a1 + 16) as &i64);
            alloc::vec::Vec<T,A>::resize(a1, v24 + 0x2800, 0);
            v17 = v24 + *((a1 + 8) as &i64);
            v6 = v4;
            v9 = v8;
            v11 = v10;
        } else if v23 {
            *((v1 + 8) as &struct16) = v18 + 1;
            *((v1 + 16) as &i8) = 1;
            *(v1 as &i64) = 0;
            return;
        } else {
            core::option::unwrap_failed(); /* do not return */
        }
    }
    loop {
        if !(!v18) {
            continue;
        }
        if v16 {
LABEL_55d890:
            v16 = v0;
            if v0 != v16 {
                v26 = *((a1 + 16) as &i64) - v16;
                v27 = v26 - 1;
                if *((*((a1 + 8) as &i64) + v27) as &i8) != a5 as i8 {
                    *((*((a1 + 8) as &i64) + v26) as &i8) = a5;
                    v16 -= 1;
                    v26 = *((a1 + 16) as &i64) - v16;
                }
                v16 = v16;
            }
            v5 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
            break;
        }
        v20 = *((a1 + 16) as &i64);
        if !(v20 < a3) {
            goto LABEL_55d803;
        }
        v21 = v20 * 2;
        alloc::vec::Vec<T,A>::resize(a1, a3, 0);
        v16 = *((a1 + 16) as &i64) - v20;
        v17 = v20 + *((a1 + 8) as &i64);
    }
}
