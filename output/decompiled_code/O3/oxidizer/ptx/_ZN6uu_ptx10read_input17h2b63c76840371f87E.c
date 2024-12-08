fn uu_ptx::read_input(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x1d8], Other Possible Types: Result<struct4, struct8>, struct24, Option<struct16>
    let v1: i64;  // [sp-0x1d0]
    let v2: i64;  // [sp-0x1c8]
    let v3: i128;  // [sp-0x1c0]
    let v4: i64;  // [sp-0x1b0]
    let v5: i64;  // [sp-0x1a8]
    let v6: i128;  // [sp-0x198], Other Possible Types: struct16
    let v7: i64;  // [sp-0x190]
    let v8: i64;  // [sp-0x188]
    let v9: i64;  // [sp-0x180]
    let v10: i64;  // [sp-0x178]
    let v11: i64;  // [sp-0x170]
    let v12: i128;  // [sp-0x168]
    let v13: i128;  // [sp-0x158]
    let v14: i64;  // [sp-0x148]
    let v15: i64;  // [sp-0x140]
    let v16: i192;  // [sp-0x130], Other Possible Types: struct24
    let v17: struct32;  // [sp-0x118]
    let v18: i128;  // [sp-0xf8]
    let v19: i64;  // [sp-0xe8]
    let v20: struct56;  // [bp-0xd8]
    let v21: struct56;  // [sp-0xa0], Other Possible Types: i448
    let v22: Option<struct56>;  // [sp-0x68]
    let v24: i256;  // ymm0
    let v25: i256;  // ymm0
    let v26: i64;  // rdx
    let v27: i64;  // rdx
    let v28: i64;  // rsi
    let v29: struct8;  // rax
    let v31: i64;  // 4096
    let v32: i64;  // r15
    let v33: struct8;  // rax
    let v34: i64;  // r13
    let v36: i64;  // r14
    let v37: i64;  // r14
    let v39: i256;  // ymm1
    let v41: i256;  // ymm2
    let v42: i64;  // rax
    let v43: i64;  // rcx
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0

    v0 = std::thread::local::LocalKey<T>::try_with(a1, a2);
    v12 = g_6ee1c0;
    v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ee1c0 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ee1d0;
    v13 = g_6ee1d0;
    v14 = core::result::Result<T,E>::expect(&v0);
    v15 = v26;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    if !a2 {
        v27 = 1;
        v28 = &g_45ed6a;
        goto LABEL_5b62a5;
    } else if *((a3 + 88) as &i8) {
        v0 = a1;
        v1 = a1 + a2 * 24;
        loop {
            v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v29 {
                break;
            }
            v6 = alloc::vec::Vec<T,A>::push(*((v29 + 8) as &i64), *((v29 + 16) as &i64));
        }
    } else {
        v28 = *((a1 + 8) as &i64);
        v27 = *((a1 + 16) as &i64);
LABEL_5b62a5:
        v6 = alloc::vec::Vec<T,A>::push(v28, v27);
    }
    v32 = v31;
    v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v33 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v33 {
        v34 = 0;
        do {
            v36 = v37;
            v2 = v2;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v36, "-") as i8 {
                v42 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
                v43 = &g_6ee5f8;
            } else {
                v0 = std::fs::File::open(v33, v36);
                match v0 {
                    Err(_) => {
                        *((v32 + 8) as &i64) = v1;
                        *(v32 as &i64) = 0;
                        return v32;
                    },
                    Ok(_) => {
                        v42 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32) as u32 as u64);
                        v43 = &g_6ee5a0;
                    },
                }
            }
            v21 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v42, v43);
            v44 = v21;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 16) as &i128);
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 32) as &i128);
            *(&v20.field_0 as &struct56) = struct56 {
                field_0: v44
                field_16: v38 as u128
                field_32: v40 as u128
                field_48: *((&v21 as &char + 48) as &i64)
            };
            v0 = core::iter::adapters::try_process(&v20);
            if v9 == 0x8000000000000000 {
                *((v32 + 8) as &i64) = v10;
                *(v32 as &i64) = 0;
                return v32;
            }
            v9 = v0;
            v10 = v1;
            v11 = v2;
            v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v10, v10 + v11 * 24);
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v33, v36);
            v19 = v0.field_16;
            v45 = v0;
            v18 = v45;
            v0.field_16 = vvar_405{stack -368};
            v46 = v9;
            v0 = v46;
            v4 = *((&v16 as &char + 16) as &i64);
            v47 = v16;
            v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
            v3 = v47;
            v5 = v34;
            v22 = hashbrown::map::HashMap<K,V,S,A>::insert(&v12, &v18, &v0);
            v34 += v11;
            v33 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            v32 = a0;
            v2 = v2;
        } while (v33);
    }
    *((v32 + 32) as &i64) = v14;
    *((v32 + 16) as &i128) = v13;
    *(v32 as &i128) = v12;
    return v32;
}
