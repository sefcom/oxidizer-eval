fn uu_pr::mpr(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: i64;  // [bp-0x2a0]
    let v1: void*;  // [bp-0x298]
    let v2: struct16;  // [bp-0x298]
    let v3: void*;  // [bp-0x298]
    let v6: u64;  // [bp-0x278]
    let v8: struct64;  // [bp-0x268], Other Possible Types: u128
    let v9: u64;  // [bp-0x260]
    let v10: u128;  // [bp-0x258]
    let v11: u128;  // [bp-0x248]
    let v12: struct24;  // [bp-0x240]
    let v13: u128;  // [bp-0x238]
    let v14: struct64;  // [bp-0x228], Other Possible Types: u128
    let v15: u128;  // [bp-0x218]
    let v16: u128;  // [bp-0x208]
    let v17: u128;  // [bp-0x1f8]
    let v19: struct24;  // [bp-0x1d8], Other Possible Types: u64
    let v20: u128;  // [bp-0x1d8]
    let v21: u128;  // [bp-0x1c8]
    let v22: u128;  // [bp-0x1b8]
    let v23: u128;  // [bp-0x1a8]
    let v24: u128;  // [bp-0x198]
    let v25: u128;  // [bp-0x190]
    let v26: struct40;  // [bp-0x180], Other Possible Types: struct88, u64
    let v27: u64;  // [bp-0x178]
    let v28: u64;  // [bp-0x178]
    let v30: u128;  // [bp-0x158]
    let v31: u128;  // [bp-0x148]
    let v32: u128;  // [bp-0x138]
    let v33: u128;  // [bp-0x128]
    let v34: u128;  // [bp-0x118]
    let v35: u128;  // [bp-0x108]
    let v36: u128;  // [bp-0xf8]
    let v37: struct89;  // [bp-0xe8], Other Possible Types: u64
    let v38: u64;  // [bp-0xe0]
    let v39: u64;  // [bp-0xd8]
    let v40: i8;  // [bp-0xd0]
    let v42: i64;  // rax
    let v44: void*;  // rcx
    let v45: Result<struct32, struct32>;  // rcx
    let v46: u64;  // 4096
    let v47: struct24;  // r14
    let v48: i64;  // rsi
    let v49: u64;  // rdx
    let v50: u64;  // rdx
    let v51: u64;  // rdx
    let v52: u128;  // xmm0
    let v54: u64;  // [bp-0x170]

    v46 = a2;
    v26 = a1;
    v28 = a2 * 16 + a1;
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v26);
    if v42 {
        do {
            uu_pr::open(*(v42 as &i64), *((v42 + 8) as &i64), v44);
            if v37 != 9223372036854775813 {
                v45 = *(&v40 as &i64);
                *(v0 as &u64) = v37;
                *((v0 + 8) as &u64) = v38;
                *((v0 + 16) as &u64) = v39;
                *((v0 + 24) as &Result<struct32, struct32>) = v45;
                return a0;
            }
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v26);
        } while (v42);
    }
    v26 = struct40 {
        field_0: a1
        field_8: v6 * 16 + a1
        field_16: 0
        field_24: v44
        field_32: &v46
    };
    v19 = itertools::kmerge_impl::kmerge_by(&v26);
    v37 = itertools::groupbylazy::new(&v19);
    loop {
        v26 = <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(v48);
        if v27 == 9223372036854775810 {
            break;
        }
        v24 = v32;
        v23 = v31;
        v22 = v30;
        v21 = *((&v26.field_16 as &char + 8) as &i128);
        v19 = *((&v26.field_0 as &char + 8) as &i128);
        loop {
            v14 = v19;
            v17 = v23;
            v16 = v22;
            v15 = v21;
            v19 = 9223372036854775809;
            v19 = v20 & 0xffffffffffffffff0000000000000000 | 9223372036854775809;
            if v14 as i64 == 9223372036854775809 {
                itertools::groupbylazy::ChunkBy<K,I,F>::step(&v33, v24 as i64, v25 as i64);
                if v33 as i64 == 9223372036854775809 {
                    break;
                }
            } else {
                v36 = v17;
                v35 = v16;
                v34 = v15;
                v33 = v14;
                if v33 as i64 == 9223372036854775809 {
                    break;
                }
            }
            v8 = v33;
            v13 = v36;
            v11 = v35;
            v10 = v34;
            if v8 as i64 == 0x8000000000000000 {
                <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v9, v49);
                *((v0 + 16) as &u128) = v15;
                *(v0 as &u128) = v14;
                return a0;
            }
            if v47 == v12 {
                v12 = v47;
            } else if uu_pr::print_page(8, 0, v44, v47) {
                <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v50, a2);
                *((v0 + 16) as &u128) = v15;
                *(v0 as &u128) = v14;
                return a0;
            }
            vvar_715{stack -664} = struct16 OrderedDict({0: 𝜙@64b [((6059140, None), vvar_576{stack -664}), ((6059204, None), vvar_690{stack -664})]})
            v14 = v8;
            alloc::vec::Vec<T,A>::push(&v2, &v14);
            v47 = v12;
            v1 = v3;
        }
    }
    if !uu_pr::print_page(8, 0, v44, v47) {
        *((v0 + 8) as &i32) = 0;
        *(v0 as &i64) = 9223372036854775813;
        return a0;
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v51, a2);
    v52 = v26.field_0;
    *((v0 + 16) as &i128) = *(&v54 as &i128);
    *(v0 as &u128) = v52;
    return a0;
}
