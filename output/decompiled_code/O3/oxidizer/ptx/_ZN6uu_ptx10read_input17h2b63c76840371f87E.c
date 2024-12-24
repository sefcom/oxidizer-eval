fn uu_ptx::read_input(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x1d8], Other Possible Types: Result<struct4, struct8>, struct24, Option<struct16>
    let v1: i64;  // [sp-0x1d0]
    let v2: i128;  // [sp-0x1c0]
    let v3: i64;  // [sp-0x1b0]
    let v4: i64;  // [sp-0x1a8]
    let v5: struct16;  // [sp-0x198], Other Possible Types: i64
    let v6: i64;  // [sp-0x190]
    let v7: i64;  // [sp-0x188]
    let v8: i192;  // [sp-0x180]
    let v9: i64;  // [sp-0x178]
    let v10: i64;  // [sp-0x170]
    let v11: i128;  // [sp-0x168]
    let v12: i128;  // [sp-0x158]
    let v13: i64;  // [sp-0x148]
    let v14: i64;  // [sp-0x140]
    let v15: struct24;  // [sp-0x130], Other Possible Types: i192
    let v16: struct32;  // [sp-0x118]
    let v17: i128;  // [sp-0xf8]
    let v18: i64;  // [sp-0xe8]
    let v19: struct56;  // [bp-0xd8]
    let v20: i448;  // [sp-0xa0], Other Possible Types: struct56
    let v21: Option<struct56>;  // [sp-0x68]
    let v23: i256;  // ymm0
    let v24: i256;  // ymm0
    let v25: i64;  // rdx
    let v26: i64;  // rdx
    let v27: i64;  // rsi
    let v28: struct8;  // rax
    let v30: i64;  // 4096
    let v31: i64;  // r15
    let v32: struct8;  // rax
    let v33: i64;  // r13
    let v35: i64;  // r14
    let v36: i64;  // r14
    let v38: i256;  // ymm1
    let v40: i256;  // ymm2
    let v41: i64;  // rax
    let v42: i64;  // rcx
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0

    v0 = std::thread::local::LocalKey<T>::try_with(a1, a2);
    v11 = g_6ee1c0;
    v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ee1c0 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ee1d0;
    v12 = g_6ee1d0;
    v13 = core::result::Result<T,E>::expect(&v0);
    v14 = v25;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    if !a2 {
        v26 = 1;
        v27 = &g_45ed6a;
        goto LABEL_5b62a5;
    } else if *((a3 + 88) as &i8) {
        v0 = a1;
        v1 = a1 + a2 * 24;
        loop {
            v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v28 {
                break;
            }
            v5 = alloc::vec::Vec<T,A>::push(*((v28 + 8) as &i64), *((v28 + 16) as &i64));
        }
    } else {
        v27 = *((a1 + 8) as &i64);
        v26 = *((a1 + 16) as &i64);
LABEL_5b62a5:
        v5 = alloc::vec::Vec<T,A>::push(v27, v26);
    }
    v31 = v30;
    v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v32 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v32 {
        v33 = 0;
        do {
            v35 = v36;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v35, "-") as i8 {
                v41 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
                v42 = &g_6ee5f8;
            } else {
                v0 = std::fs::File::open(v32, v35);
                match v0 {
                    Err(_) => {
                        *((v31 + 8) as &i64) = v1;
                        *(v31 as &i64) = 0;
                        return v31;
                    },
                    Ok(_) => {
                        v41 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32) as u32 as u64);
                        v42 = &g_6ee5a0;
                    },
                }
            }
            v20 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v41, v42);
            v43 = v20;
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 16) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 32) as &i128);
            *(&v19.field_0 as &struct56) = struct56 {
                field_0: v43
                field_16: v37 as u128
                field_32: v39 as u128
                field_48: *((&v20 as &char + 48) as &i64)
            };
            v0 = core::iter::adapters::try_process(&v19);
            if v8 == 0x8000000000000000 {
                *((v31 + 8) as &i64) = v9;
                *(v31 as &i64) = 0;
                return v31;
            }
            v8 = v0;
            v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v9, v9 + v10 * 24);
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v32, v35);
            v18 = v0.field_16;
            v44 = v0;
            v17 = v44;
            v0.field_16 = vvar_405{stack -368};
            v45 = v8;
            v0 = v45;
            v3 = *((&v15 as &char + 16) as &i64);
            v46 = v15;
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
            v2 = v46;
            v4 = v33;
            v21 = hashbrown::map::HashMap<K,V,S,A>::insert(&v11, &v17, &v0);
            v33 += v10;
            v32 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            v31 = a0;
        } while (v32);
    }
    *((v31 + 32) as &i64) = v13;
    *((v31 + 16) as &i128) = v12;
    *(v31 as &i128) = v11;
    return v31;
}
