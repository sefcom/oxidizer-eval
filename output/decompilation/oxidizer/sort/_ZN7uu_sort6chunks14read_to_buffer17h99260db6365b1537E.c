fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i8) -> : struct8 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0xa8]
    let v1: i64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x90]
    let v4: struct24;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: struct24;  // [bp-0x88], Other Possible Types: u128
    let v7: u64;  // [bp-0x88]
    let v8: u64;  // [bp-0x80]
    let v9: u64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x78]
    let v12: u32;  // [bp-0x70]
    let v13: u32;  // [bp-0x70]
    let v14: u64;  // [bp-0x68]
    let v15: u64;  // [bp-0x58]
    let v16: u128;  // [bp-0x48]
    let v17: i8;  // [bp-0x38]
    let v18: u64;  // rbx
    let v19: struct24;  // rbp
    let v20: u64;  // rdx
    let v21: core::result::Result<(), std::io::error::Error>;  // r15
    let v22: u64;  // rbp
    let v23: u64;  // rsi
    let v24: u64;  // rax
    let v25: u64;  // rax
    let v26: u64;  // rbp
    let v28: struct40;  // rbp
    let v29: u64;  // rdi

    v14 = a1;
    v18 = *((a2 + 16) as &i64) - a5;
    v19 = a5 + *((a2 + 8) as &i64);
    v15 = a4 >> 1;
    v0 = v18;
    loop {
        v21 = v20;
        if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(a0 as &i64), *((a0 + 8) as &i64), v19, v18) as u64 {
            if std::io::error::Error::kind(v21) != 35 {
                v3 = v21;
                v4 = <T as alloc::string::ToString>::to_string(a1);
                v12 = 2;
                v6 = v16;
                v10 = *(&v17 as &i64);
                *((v1 + 8) as &double) = alloc::boxed::Box<T>::new(&v7);
                *((v1 + 16) as &&u8) = &g_601a40;
                *(v1 as &i64) = 1;
                return;
            }
            continue;
        }
        if a3 == 1 {
            break;
        }
        if !(!v20) {
            continue;
        }
        if !(!v18) {
            goto LABEL_55dc80;
        }
LABEL_55dbf3:
        v24 = *((a2 + 8) as &i64);
        v6 = struct24 {
            field_0: v24
            field_8: v24
            field_16: v22 + v24
        };
        v12 = a6;
        v12 = v13 & -0x100 | v12;
        v25 = memchr::arch::generic::memchr::Iter::next_back(&v6, &v12);
        if memchr::arch::generic::memchr::Iter::next_back(&v6, &v12) != 1 {
            v26 = *((a2 + 16) as &i64);
            alloc::vec::Vec<T,A>::resize(a2, v26 + 0x2800, 0);
            v19 = v26 + *((a2 + 8) as &i64);
            v7 = v5;
            v9 = v8;
            v11 = v10;
        } else if v25 {
            *((v1 + 8) as &u64) = v20 + 1;
            *((v1 + 16) as &i8) = 1;
            *(v1 as &i64) = 0;
            return;
        } else {
            core::option::unwrap_failed(); /* do not return */
        }
    }
    loop {
        if !(!v20) {
            continue;
        }
        if v18 {
LABEL_55dc80:
            v18 = v0;
            if v0 != v18 {
                v28 = *((a2 + 16) as &i64) - v18;
                v29 = v28 - 1;
                if *((*((a2 + 8) as &i64) + v29) as &i8) != a6 as i8 {
                    *((*((a2 + 8) as &i64) + v28) as &i8) = a6;
                    v18 -= 1;
                    v28 = *((a2 + 16) as &i64) - v18;
                }
                v18 = v18;
            }
            <&mut I as core::iter::traits::iterator::Iterator>::next(&v7);
            break;
        }
        v22 = *((a2 + 16) as &i64);
        if !(v22 < a4) {
            goto LABEL_55dbf3;
        }
        v23 = v22 * 2;
        alloc::vec::Vec<T,A>::resize(a2, a4, 0);
        v18 = *((a2 + 16) as &i64) - v22;
        v19 = v22 + *((a2 + 8) as &i64);
    }
}
