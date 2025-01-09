fn uu_pr::mpr() -> u64 {
    let v0: i64;  // [sp-0x298], Other Possible Types: struct16
    let v1: i64;  // [sp-0x290]
    let v2: i64;  // [sp-0x288]
    let v3: i8;  // [bp-0x278]
    let v4: i64;  // [sp-0x270]
    let v5: i128;  // [sp-0x268]
    let v6: i128;  // [sp-0x258]
    let v7: i128;  // [sp-0x248]
    let v8: i128;  // [sp-0x238]
    let v9: i128;  // [sp-0x228], Other Possible Types: struct32, struct64
    let v10: i128;  // [sp-0x218]
    let v11: i128;  // [sp-0x208]
    let v12: i128;  // [sp-0x1f8]
    let v13: i64;  // [sp-0x1e0]
    let v14: i64;  // [sp-0x1d8], Other Possible Types: struct24
    let v15: i128;  // [sp-0x1c8]
    let v16: i128;  // [sp-0x1b8]
    let v17: i128;  // [sp-0x1a8]
    let v18: i128;  // [sp-0x198]
    let v19: i256;  // [sp-0x180], Other Possible Types: struct32, struct88, struct24
    let v20: i64;  // [sp-0x178]
    let v21: i64;  // [sp-0x160]
    let v22: i128;  // [sp-0x128], Other Possible Types: struct8
    let v23: i128;  // [sp-0x118]
    let v24: i128;  // [sp-0x108]
    let v25: i128;  // [sp-0xf8]
    let v26: i264;  // [sp-0xe8], Other Possible Types: struct89, Result<struct32, struct16>
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: struct8;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rdi
    let v33: i64;  // rsi
    let v34: i64;  // rcx
    let v35: i64;  // rdx
    let v37: i64;  // rcx
    let v38: i64;  // r14
    let v40: i256;  // ymm0
    let v42: i256;  // ymm1
    let v44: i256;  // ymm2
    let v46: i256;  // ymm3
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i256;  // ymm0
    let v50: i128;  // xmm1
    let v51: i256;  // ymm1
    let v52: i128;  // xmm2
    let v53: i256;  // ymm2
    let v54: i128;  // xmm3
    let v55: i256;  // ymm3
    let v56: i128;  // xmm0
    let v57: i256;  // ymm0
    let v58: i128;  // xmm1
    let v59: i256;  // ymm1
    let v60: i128;  // xmm2
    let v61: i256;  // ymm2
    let v62: i128;  // xmm3
    let v63: i256;  // ymm3
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1
    let v70: i128;  // xmm2
    let v71: i128;  // xmm3
    let v72: i64;  // rbx
    let v73: i64;  // rdi
    let v74: i64;  // rax
    let v75: i64;  // rax
    let v76: i64;  // rax
    let v77: i128;  // xmm0
    let v78: i64;  // rax

    v19 = v28;
    v20 = v29 * 16 + v28;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v30 {
        do {
            v26 = uu_pr::open(*(v30 as &i64), *((v30 + 8) as &i64));
            v31 = v26;
            v32 = *((&v26 as &char + 8) as &i64);
            v33 = *((&v26 as &char + 16) as &i64);
            if v31 != 9223372036854775813 {
                v34 = *((&v26 as &char + 24) as &i64);
                v35 = v73;
                *(v35 as &i64) = v31;
                *((v35 + 8) as &i64) = v32;
                *((v35 + 16) as &i64) = v33;
                *((v35 + 24) as &i64) = v34;
                return v73;
            }
        } while ((v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v30));
    }
    v19 = struct24 {
        field_0: v28
        field_8: v36 * 16 + v28
        field_16: 0
    };
    v21 = &v3;
    v14 = itertools::kmerge_impl::kmerge_by(&v19);
    v26 = itertools::groupbylazy::new(&v14);
    v38 = *((v37 + 304) as &i64);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v4 = &v26;
    v13 = 9223372036854775810;
    loop {
        v19 = <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(&v4);
        if v20 != v13 {
            v47 = *((&v19 as &char + 72) as &i128);
            v18 = v47;
            v48 = *((&v19 as &char + 8) as &i128);
            v49 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
            v50 = *((&v19 as &char + 24) as &i128);
            v51 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
            v52 = *((&v19 as &char + 40) as &i128);
            v53 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
            v54 = *((&v19 as &char + 56) as &i128);
            v55 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
            v17 = v54;
            v16 = v52;
            v15 = v50;
            v14 = v48;
            v56 = v14;
            v57 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
            v58 = v15;
            v59 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v60 = v16;
            v61 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v62 = v17;
            v63 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v9 = v56;
            v12 = v62;
            v11 = v60;
            v10 = v58;
            v14 = 9223372036854775809;
            if v9 == 9223372036854775809 {
                v22 = itertools::groupbylazy::ChunkBy<K,I,F>::step(v18, *((&v18 as &char + 8) as &i64));
                if v22 == 9223372036854775809 {
                    goto LABEL_5c7530;
                }
                goto LABEL_5c742e;
            }
            v64 = v9;
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v65 = v10;
            v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
            v66 = v11;
            v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v67 = v12;
            v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
            v25 = v67;
            v24 = v66;
            v23 = v65;
            v22 = v64;
            if v22 == 9223372036854775809 {
LABEL_5c7530:
            } else {
LABEL_5c742e:
                v68 = v22;
                v69 = v23;
                v70 = v24;
                v71 = v25;
                v5 = v68;
                v8 = v71;
                v7 = v70;
                v6 = v69;
                if v5 == 0x8000000000000000 {
                    v9 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(*((&v5 as &char + 8) as &i64));
                    v74 = v73;
                    *((v74 + 16) as &i128) = v10;
                    *(v74 as &i128) = v9;
                    goto LABEL_5c75ef;
                }
                v72 = *((&v7 as &char + 8) as &i64);
                if v38 == v72 {
                    goto LABEL_5c74df;
                }
                if uu_pr::print_page(v1, v2, v37, v38) {
                    v9 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v29);
                    v75 = v73;
                    *((v75 + 16) as &i128) = v10;
                    *(v75 as &i128) = v9;
                    if !(v5 == 0x8000000000000000) {
                        goto LABEL_0x5c75e5;
                    }
LABEL_5c75ef:
                } else {
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
LABEL_5c74df:
                    v49 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5;
                    v51 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
                    v53 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
                    v55 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8;
                    v9 = struct64 {
                        field_0: v39 as u128
                        field_16: v41 as u128
                        field_32: v43 as u128
                        field_48: v45 as u128
                    };
                    v0 = alloc::vec::Vec<T,A>::push(&v9);
                    continue;
                }
LABEL_5c75fc:
                break;
            }
        } else if uu_pr::print_page(v1, v2, v37, v38) {
            v19 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v29);
            v77 = v19;
            v78 = v73;
            *((v78 + 16) as &i128) = *((&v19 as &char + 16) as &i128);
            *(v78 as &i128) = v77;
            goto LABEL_5c75fc;
        } else {
            v76 = v73;
            *((v76 + 8) as &i32) = 0;
            *(v76 as &i64) = 9223372036854775813;
            break;
        }
    }
    return v73;
}
