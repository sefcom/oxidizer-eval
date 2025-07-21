fn uu_ptx::read_input(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i64;  // [bp-0x1e0]
    let v1: struct24;  // [bp-0x1d8], Other Possible Types: Result<struct4, struct8>
    let v2: i64;  // [bp-0x1d8], Other Possible Types: u64
    let v3: u32;  // [bp-0x1d4]
    let v4: u64;  // [bp-0x1d0]
    let v5: u64;  // [bp-0x1c8]
    let v6: u128;  // [bp-0x1c0]
    let v7: u64;  // [bp-0x1b0]
    let v8: u64;  // [bp-0x1a8]
    let v9: struct16;  // [bp-0x198]
    let v10: struct16;  // [bp-0x198]
    let v11: void*;  // [bp-0x198]
    let v12: u64;  // [bp-0x190]
    let v13: void*;  // [bp-0x188]
    let v14: u64;  // [bp-0x180]
    let v15: u64;  // [bp-0x178]
    let v16: u64;  // [bp-0x170]
    let v17: u128;  // [bp-0x168]
    let v18: u128;  // [bp-0x158]
    let v19: u64;  // [bp-0x148]
    let v20: u64;  // [bp-0x140]
    let v21: u64;  // [bp-0x120]
    let v22: struct32;  // [bp-0x118]
    let v23: u128;  // [bp-0xf8]
    let v24: u64;  // [bp-0xe8]
    let v25: u128;  // [bp-0xd8]
    let v26: u128;  // [bp-0xc8]
    let v27: u128;  // [bp-0xb8]
    let v28: u64;  // [bp-0xa8]
    let v29: u128;  // [bp-0x90]
    let v30: u128;  // [bp-0x80]
    let v31: u64;  // [bp-0x70]
    let v32: u8;  // [bp-0x68]
    let v34: u64;  // rax
    let v35: alloc::string::String;  // rdx
    let v36: u64;  // rdx
    let v37: alloc::string::String;  // rsi
    let v38: i64;  // rax
    let v39: i64;  // 4096
    let v40: i64;  // r15
    let v41: u64;  // rax
    let v42: u64;  // rbp
    let v43: alloc::string::String;  // r14
    let v44: void*;  // r13
    let v45: u64;  // rax
    let v46: u64;  // rcx
    let v47: struct24;  // [bp-0x130]
    let v48: struct56;  // [bp-0xa0]

    v1 = std::thread::local::LocalKey<T>::try_with();
    v34 = core::result::Result<T,E>::expect(&v1);
    v17 = g_6ed8f8.field_0;
    v18 = g_6ed908.field_0;
    v19 = v34;
    v20 = v35;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if a2 && *((a3 + 88) as &i8) {
        *(&v2 as &struct_2 *) = a1;
        v4 = a1 + a2 * 24;
        loop {
            v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            v39 = a0;
            if !v38 {
                break;
            }
            v9 = alloc::vec::Vec<T,A>::push(*((v38 + 8) as &i64), *((v38 + 16) as &i64));
        }
    } else {
        v10 = alloc::vec::Vec<T,A>::push(v37, v36);
        v39 = v0;
    }
    v40 = v39;
    v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v41 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
    if v41 {
        v43 = v35;
        do {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v42, v43, "-") as i8 {
                alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            } else {
                v1 = std::fs::File::open(v42, v43);
                match v1 {
                    Err(_) => {
                        *((v40 + 8) as &u64) = v4;
                        *(v40 as &i64) = 0;
                        return v40;
                    },
                    Ok(_) => {
                        alloc::boxed::Box<T>::new(v3 as u64);
                    },
                }
            }
            v48 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v45, v46);
            v25 = *(&v48.field_0 as &i128);
            v26 = v29;
            v27 = v30;
            v28 = v31;
            v2 = core::iter::adapters::try_process(&v25);
            if let Err(_) = v2 as u192 {
                *((v40 + 8) as &u64) = v4;
                *(v40 as &i64) = 0;
                return v40;
            }
            v14 = v1 as i64;
            v15 = v4;
            v16 = v5;
            v47 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v4, v4 + v16 * 24);
            <T as alloc::slice::hack::ConvertVec>::to_vec(v42, v43, a3);
            v24 = v5;
            v23 = v1 as i128;
            v5 = v16;
            *(&v2 as &i128) = *(&v14 as &i128);
            v7 = v21;
            v6 = *(&v47.field_0 as &i128);
            v8 = v44;
            hashbrown::map::HashMap<K,V,S,A>::insert(&v32, &v17, &v23, &v2 as u32);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
            v43 = v35;
            v40 = a0;
        } while (v41);
    }
    *((v40 + 32) as &i128) = *(&v19 as &i128);
    *((v40 + 16) as &u128) = v18;
    *(v40 as &u128) = v17;
    return v40;
}
