fn uu_ptx::read_input(a0: &struct8, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x1d8], Other Possible Types: struct56, Option<struct16>, struct24
    let v1: i64;  // [sp-0x1d0]
    let v3: struct16;  // [sp-0x198], Other Possible Types: unsigned long, int
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180], Other Possible Types: Result<struct24, struct8>
    let v6: i64;  // [sp-0x178]
    let v7: i64;  // [sp-0x170]
    let v8: iNone;  // [sp-0x168]
    let v9: iNone;  // [sp-0x158]
    let v10: i64;  // [sp-0x148]
    let v11: i64;  // [sp-0x140]
    let v12: struct24;  // [sp-0x130]
    let v13: struct32;  // [sp-0x118]
    let v14: struct24;  // [bp-0xf8]
    let v15: struct56;  // [bp-0xd8]
    let v16: struct56;  // [sp-0xa0]
    let v17: struct8;  // [sp-0x68]
    let v19: iNone;  // ymm0
    let v20: iNone;  // ymm0
    let v21: i64;  // rdx
    let v22: i64;  // rdx
    let v23: i64;  // rsi
    let v24: i64;  // r15
    let v25: struct8;  // rax
    let v26: struct8;  // rax
    let v27: struct8;  // rbp
    let v28: i64;  // r14
    let v29: i64;  // r13
    let v30: iNone;  // ymm1
    let v31: iNone;  // ymm2
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: iNone;  // xmm0
    let v37: iNone;  // xmm0
    let v38: iNone;  // xmm0
    let v40: i64;  // r15
    let v42: i64;  // r15
    let v43: i64;  // [sp-0x1d8]

    v0 = std::thread::local::LocalKey<T>::try_with();
    v8 = g_6ed8f8;
    v20 = (v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ed8f8) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ed908;
    v9 = g_6ed908;
    v10 = core::result::Result<T,E>::expect(&v0);
    v11 = v21;
    v3 = 0;
    v3 = 8;
    v4 = 0;
    if !a2 {
        v22 = 1;
        v23 = &g_45ec5a;
        goto LABEL_5b67b5;
    } else if *((a3 + 88) as &i8) {
        v43 = a1;
        v1 = a1 + a2 * 24;
        v24 = a0;
        loop {
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v25 {
                break;
            }
            v3 = alloc::vec::Vec<T,A>::push(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        }
    } else {
        v23 = *((a1 + 8) as &i64);
        v22 = *((a1 + 16) as &i64);
LABEL_5b67b5:
        v24 = a0;
        v3 = alloc::vec::Vec<T,A>::push(v23, v22);
    }
    v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
    v26 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v26 {
        v27 = v26;
        v28 = v21;
        v29 = 0;
        do {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "-") as i8 {
                v32 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
                v33 = &g_6edd30;
            } else {
                v0 = std::fs::File::open(v27, v28);
                match v0 {
                    Err(_) => {
                        *((v24 + 8) as &unsigned long) = v1;
                        v40 = v24;
                        return v40;
                    },
                    Ok(_) => {
                        v32 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32) as u32 as u64);
                        v33 = &g_6edcd8;
                    },
                }
            }
            v16 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v32, v33);
            v34 = *(&v16.field_0 as &i128);
            v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16.field_16;
            v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v16.field_32 as &i128);
            *(&v15.field_0 as &struct56) = struct56 {
                field_0: v34
                field_16: v35
                field_32: v36
                field_48: v16.field_48
            };
            v0 = core::iter::adapters::try_process(&v15);
            if v5 == 0x8000000000000000 {
                *((v24 + 8) as &unsigned long) = v6;
                return v40;
            }
            v5 = v0;
            v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v6, v6 + v7 * 24);
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v27, v28);
            v37 = v0.field_0;
            v14 = struct24 {
                field_0: v37
                field_16: v2
            };
            v38 = v5 as i128;
            *(&v0.field_0 as &struct56) = struct56 {
                field_0: v38
                field_16: v7
                field_24: v19 as u128
                field_40: v12.field_16
                field_48: v29
            };
            v20 = (((v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12.field_0;
            v17 = hashbrown::map::HashMap<K,V,S,A>::insert(&v8, &v14, &v0);
            v29 += v7;
            v27 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13);
            v28 = v21;
            v24 = a0;
        } while (v27);
    }
    *((v42 + 32) as &i128) = *(&v10 as &i128);
    *((v42 + 16) as void*) = v9;
    *(v42 as void*) = v8;
    return v40;
}
