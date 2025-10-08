fn uu_sort::chunks::read_to_buffer(a0: i64, a1: void*, a2: i64, a3: u64, a4: u8) -> int {
    let v0: void*;  // [bp-0x90]
    let v1: u128;  // [bp-0x88]
    let v2: u64;  // [bp-0x88]
    let v3: struct8;  // [bp-0x88]
    let v4: i64;  // [bp-0x80]
    let v5: u64;  // [bp-0x78]
    let v6: u32;  // [bp-0x70]
    let v7: i64;  // [bp-0x68]
    let v9: u64;  // [bp-0x58]
    let v10: struct24;  // [bp-0x48]
    let v12: u64;  // r14
    let v13: u64;  // rbx
    let v14: i64;  // r14
    let v15: u64;  // rax
    let v16: u64;  // rbp
    let v17: u64;  // rax
    let v18: u8;  // al
    let v19: u64;  // rbx
    let v20: u64;  // rbp
    let v21: i64;  // rdx
    let v22: u64;  // rsi
    let v23: i64;  // rbx
    let v24: core::fmt::Arguments;  // rdi

    v12 = *((a2 + 16) as &i64) - a3;
    loop {
        v14 = v12;
        loop {
            loop {
                loop {
                    v9 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(a1 as &i64), a1[8] as i64, v13, v14) as u64;
                    if !(v9 & 1) {
                        break;
                    }
                    if std::io::error::Error::kind(v21) as u8 != 35 {
                        v7 = v21;
                        v10 = <T as alloc::string::SpecToString>::spec_to_string(&v7);
                        v6 = 2;
                        v1 = v10.field_0;
                        v5 = v10.field_16;
                        *(&v0[8] as &u64) = alloc::boxed::Box<T>::new(&v1) as u64;
                        *(&v0[16] as &&u64) = &g_58c680;
                        *(v0 as &i64) = 1;
                        return;
                    }
                    v2 = v21;
                }
                if !v21 {
                    break;
                }
                v15 = v14;
                v13 += v21;
                v16 = v15 - v21;
                v14 = v16;
            }
            if v14 {
                break;
            }
            v17 = *((a2 + 8) as &i64);
            v2 = v17;
            v4 = v17;
            v5 = *((a2 + 16) as &i64) + v17;
            v6 = a4;
            v18 = memchr::arch::generic::memchr::Iter::next_back(&v2, &v6);
            if memchr::arch::generic::memchr::Iter::next_back(&v2, &v6) != 1 {
                v19 = *((a2 + 16) as &i64);
                alloc::vec::Vec<T,A>::resize(a2, v19 + 0x2800);
                v20 = *((a2 + 16) as &i64) - v19;
                v13 = v19 + *((a2 + 8) as &i64);
                v14 = v20;
            } else if (v18 & 1) {
                *(&v0[8] as &unsigned long) = v21 + 1;
                *(&v0[16] as &i8) = 1;
                *(v0 as &i64) = 0;
                return;
            } else {
                core::option::unwrap_failed(); /* do not return */
            }
        }
        if v12 != v14 {
            v23 = *((a2 + 16) as &i64) - v14;
            v24 = v23 - 1;
            if *((*((a2 + 8) as &i64) + v24) as &i8) != a4 {
                *((*((a2 + 8) as &i64) + v23) as &u8) = a4;
                v14 -= 1;
                v22 = *((a2 + 16) as &i64);
                v23 = v22 - v14;
            }
            v12 = v14;
        }
        v3 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        if v3 == 2 {
            *(&v0[8] as &u64) = *((a2 + 16) as &i64) - v12;
            *(&v0[16] as &i8) = 0;
            *(v0 as &i64) = 0;
            return;
        } else if !(v3 as u8 & 1) {
            *(a1 as &unsigned long) = v4;
            *(&a1[8] as &u64) = v5;
        } else {
            *(&v0[8] as &unsigned long) = v4;
            *(&v0[16] as &u64) = v5;
            *(v0 as &i64) = 1;
            return;
        }
    }
}
