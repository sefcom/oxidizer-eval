fn uu_pr::mpr(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: void*;  // [bp-0x280]
    let v1: struct24;  // [bp-0x278], Other Possible Types: struct64
    let v2: struct64;  // [bp-0x278]
    let v6: void*;  // [bp-0x258]
    let v8: u128;  // [bp-0x248]
    let v9: u64;  // [bp-0x240]
    let v10: iNone;  // [bp-0x238]
    let v11: iNone;  // [bp-0x228]
    let v12: alloc::string::String;  // [bp-0x220]
    let v13: iNone;  // [bp-0x218], Other Possible Types: struct40
    let v15: struct32;  // [bp-0x1f8], Other Possible Types: struct24
    let v17: struct56;  // [bp-0x1e8]
    let v18: Result<struct324, struct40>;  // [bp-0x1d8]
    let v19: struct40;  // [bp-0x1c8]
    let v20: u128;  // [bp-0x1b8]
    let v21: u64;  // [bp-0x1b0]
    let v22: struct32;  // [bp-0x1a8]
    let v23: u128;  // [bp-0x198]
    let v24: u128;  // [bp-0x188]
    let v25: iNone;  // [bp-0x178]
    let v26: iNone;  // [bp-0x168]
    let v27: iNone;  // [bp-0x158]
    let v28: struct40;  // [bp-0x140], Other Possible Types: struct88
    let v29: struct32;  // [bp-0x140]
    let v30: u64;  // [bp-0x138]
    let v32: u128;  // [bp-0xf8]
    let v33: struct89;  // [bp-0xe8]
    let v34: struct32;  // [bp-0xe8]
    let v37: i64;  // r13
    let v39: u64;  // rcx
    let v40: iNone;  // xmm0
    let v42: void*;  // rcx
    let v43: i64;  // r12
    let v44: alloc::string::String;  // r13
    let v45: struct32;  // rsi
    let v46: u64;  // rbp
    let v47: u64;  // rdx
    let v48: u64;  // rdx
    let v49: iNone;  // xmm0
    let v51: u64;  // [bp-0x130]

    v6 = a2;
    if a2 {
        do {
            v37 += 16;
            v34 = uu_pr::open(*(v37 as &i64), *((v37 + 8) as &i64));
            if v34.field_0 as i64 != 9223372036854775813 {
                v39 = *((&v34.field_16 as &char + 8) as &i64);
                v40 = *((&v34.field_0 as &char + 8) as &i128);
                *(v0 as &i64) = v34.field_0;
                v0[8] = v40;
                *(&v0[24] as &u64) = v39;
                return a0;
            }
        } while (a1 != a2 * 16 + a1);
    }
    v28 = struct40 {
        field_0: a1
        field_8: 0 + a1
        field_16: 0
        field_24: v42
        field_32: &v6
    };
    v15 = itertools::kmerge_impl::kmerge_by(&v28);
    v33 = itertools::groupbylazy::new(&v15);
    loop {
        v28 = <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(v45);
        if v30 == 9223372036854775810 {
            break;
        }
        v20 = v32;
        v19 = *((v43 + 56) as &i128);
        v18 = *((&v28.field_32 as &char + 8) as &i128);
        v17 = *((&v28.field_16 as &char + 8) as &i128);
        v15 = *((&v28.field_0 as &char + 8) as &i128);
        v46 = v20;
        loop {
            *(&v8 as &struct24) = v15;
            v13 = v19;
            *(&v11 as &Result<struct324, struct40>) = v18;
            v10 = v17;
            v15 = 9223372036854775809;
            if v8 as i64 == 9223372036854775809 {
                itertools::groupbylazy::ChunkBy<K,I,F>::step(&v24, v46, v21);
                if v24 as i64 == 9223372036854775809 {
                    break;
                }
            } else {
                v27 = v13;
                v26 = v11 as i128;
                v25 = v10;
                v24 = v8;
                if v24 as i64 == 9223372036854775809 {
                    break;
                }
            }
            v8 = v24;
            v13 = v27;
            v11 = v26;
            v10 = v25;
            if v8 as i64 == 0x8000000000000000 {
                v22 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v9);
                *(&v0[16] as &u128) = v23;
                *(v0 as &u128) = v22.field_0;
                return a0;
            }
            if v44 == v12 {
                v12 = v44;
            } else if !(uu_pr::print_page(8, 0, v42, v44) & 1) {
                v1 = struct24 {
                    field_0: 0
                    field_8: ""
                };
                v1 = v2;
            } else {
                v22 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v47);
                *(&v0[16] as &u128) = v23;
                *(v0 as &u128) = v22.field_0;
                return a0;
            }
            alloc::vec::Vec<T,A>::push(&v1, &v24, "src/uu/pr/src/pr.rs");
            v44 = v12;
        }
    }
    if !(uu_pr::print_page(8, 0, v42, v44) & 1) {
        *(&v0[8] as &i32) = 0;
        *(v0 as &i64) = 9223372036854775813;
        return a0;
    }
    v29 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v48);
    v49 = v29.field_0;
    *(&v0[16] as &i128) = *(&v51 as &i128);
    *(v0) = v49;
    return a0;
}
