fn uu_ptx::read_input(a0: &struct48, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x1d8], Other Possible Types: Result<struct4, struct8>, struct56, Option<struct16>, struct24
    let v1: i64;  // [sp-0x1d0]
    let v2: i64;  // [sp-0x1c8]
    let v3: struct16;  // [sp-0x198], Other Possible Types: i128
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: i64;  // [sp-0x180]
    let v7: i64;  // [sp-0x178]
    let v8: i64;  // [sp-0x170]
    let v9: i128;  // [sp-0x168]
    let v10: i128;  // [sp-0x158]
    let v11: i64;  // [sp-0x148]
    let v12: i64;  // [sp-0x140]
    let v13: i192;  // [sp-0x130], Other Possible Types: struct24
    let v14: struct32;  // [sp-0x118]
    let v15: struct24;  // [bp-0xf8]
    let v16: struct56;  // [bp-0xd8]
    let v17: struct56;  // [sp-0xa0], Other Possible Types: i448
    let v18: Option<struct56>;  // [sp-0x68]
    let v20: i256;  // ymm0
    let v21: i256;  // ymm0
    let v22: i64;  // rdx
    let v23: i64;  // rdx
    let v24: i64;  // rsi
    let v25: struct8;  // rax
    let v29: struct8;  // rax
    let v30: i64;  // r13
    let v32: i64;  // r14
    let v33: i64;  // r14
    let v35: i256;  // ymm1
    let v37: i256;  // ymm2
    let v38: i64;  // rax
    let v39: i64;  // rcx
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0

    v0 = std::thread::local::LocalKey<T>::try_with();
    v9 = g_6ed8f8;
    v21 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ed8f8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ed908;
    v10 = g_6ed908;
    v11 = core::result::Result<T,E>::expect(&v0);
    v12 = v22;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    if !a2 {
        v23 = 1;
        v24 = &g_45ec5a;
        goto LABEL_5b67b5;
    } else if *((a3 + 88) as &i8) {
        v0 = a1;
        v1 = a1 + a2 * 24;
        loop {
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v25 {
                break;
            }
            v3 = alloc::vec::Vec<T,A>::push(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        }
    } else {
        v24 = *((a1 + 8) as &i64);
        v23 = *((a1 + 16) as &i64);
LABEL_5b67b5:
        v3 = alloc::vec::Vec<T,A>::push(v24, v23);
    }
    v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
    v29 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if !v29 {
        return struct48 {
            field_0: v9
            field_16: v10
            field_32: v11
        };
    }
    v30 = 0;
    do {
        v32 = v33;
        v2 = v2;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v32, "-") as i8 {
            v38 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v39 = &g_6edd30;
        } else {
            v0 = std::fs::File::open(v29, v32) as u64;
            return struct16 {
                field_0: 0
                field_8: v1
            };
            v38 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
            v39 = &g_6edcd8;
        }
        v17 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v38, v39);
        v40 = v17;
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v17 as &char + 16) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v17 as &char + 32) as &i128);
        *(&v16.field_0 as &struct56) = struct56 {
            field_0: v40
            field_16: v34 as u128
            field_32: v36 as u128
            field_48: *((&v17 as &char + 48) as &i64)
        };
        v0 = core::iter::adapters::try_process(&v16);
        return struct16 {
            field_0: 0
            field_8: v7
        };
        v6 = v0;
        v7 = v1;
        v8 = v2;
        v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v7, v7 + v8 * 24);
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v29, v32);
        v41 = v0;
        v15 = struct24 {
            field_0: v41
            field_16: v2
        };
        v42 = v6;
        *(&v0.field_0 as &struct56) = struct56 {
            field_0: v42
            field_16: v8
            field_24: v20 as u128
            field_40: *((&v13 as &char + 16) as &i64)
            field_48: v30
        };
        v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
        v18 = hashbrown::map::HashMap<K,V,S,A>::insert(&v9, &v15, &v0);
        v30 += v8;
        v29 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        v2 = v2;
    } while (v29);
}
