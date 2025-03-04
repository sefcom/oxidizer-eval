fn uu_pr::mpr() -> u64 {
    let v0: i64;  // [sp-0x298], Other Possible Types: struct16
    let v1: i64;  // [sp-0x290]
    let v2: i64;  // [sp-0x288]
    let v3: i8;  // [bp-0x278]
    let v4: i64;  // [sp-0x270]
    let v5: iNone;  // [sp-0x268]
    let v6: iNone;  // [sp-0x258]
    let v7: iNone;  // [sp-0x248]
    let v8: iNone;  // [sp-0x238]
    let v9: iNone;  // [sp-0x228], Other Possible Types: struct64
    let v10: iNone;  // [sp-0x218]
    let v11: iNone;  // [sp-0x208]
    let v12: iNone;  // [sp-0x1f8]
    let v13: i64;  // [sp-0x1e0]
    let v14: iNone;  // [bp-0x1d8], Other Possible Types: unsigned long
    let v15: struct24;  // [sp-0x1d8]
    let v16: iNone;  // [sp-0x1c8]
    let v17: iNone;  // [sp-0x1b8]
    let v18: iNone;  // [sp-0x1a8]
    let v19: iNone;  // [sp-0x198]
    let v20: i64;  // [sp-0x180], Other Possible Types: struct88, struct24
    let v21: i64;  // [sp-0x178]
    let v22: i64;  // [sp-0x160]
    let v23: iNone;  // [sp-0x128], Other Possible Types: struct8
    let v24: iNone;  // [sp-0x118]
    let v25: iNone;  // [sp-0x108]
    let v26: iNone;  // [sp-0xf8]
    let v27: Result<struct32, struct16>;  // [sp-0xe8], Other Possible Types: struct89
    let v29: i64;  // rdx
    let v31: i64;  // rsi
    let v32: struct8;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rdi
    let v35: i64;  // rsi
    let v36: i64;  // rcx
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i64;  // r14
    let v40: iNone;  // ymm3
    let v42: iNone;  // ymm2
    let v44: iNone;  // ymm1
    let v46: iNone;  // ymm0
    let v48: iNone;  // ymm0
    let v49: iNone;  // ymm1
    let v50: iNone;  // ymm2
    let v51: iNone;  // ymm3
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm0
    let v54: iNone;  // ymm0
    let v55: iNone;  // xmm1
    let v56: iNone;  // ymm1
    let v57: iNone;  // xmm2
    let v58: iNone;  // ymm2
    let v59: iNone;  // xmm3
    let v60: iNone;  // ymm3
    let v61: iNone;  // xmm0
    let v62: iNone;  // ymm0
    let v63: iNone;  // xmm1
    let v64: iNone;  // ymm1
    let v65: iNone;  // xmm2
    let v66: iNone;  // ymm2
    let v67: iNone;  // xmm3
    let v68: iNone;  // ymm3
    let v69: iNone;  // xmm0
    let v70: iNone;  // xmm1
    let v71: iNone;  // xmm2
    let v72: iNone;  // xmm3
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm1
    let v75: iNone;  // xmm2
    let v76: iNone;  // xmm3
    let v77: i64;  // rbx
    let v82: i64;  // rdi
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: iNone;  // xmm0
    let v86: i64;  // rax

    v20 = v31;
    v21 = v29 * 16 + v31;
    v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v32 {
        do {
            v27 = uu_pr::open(*(v32 as &i64), *((v32 + 8) as &i64));
            v33 = v27 as i64;
            v34 = *((&v27 as &char + 8) as &i64);
            v35 = *((&v27 as &char + 16) as &i64);
            if v33 != 9223372036854775813 {
                v36 = *((&v27 as &char + 24) as &i64);
                v37 = v82;
                *(v37 as &unsigned long) = v33;
                *((v37 + 8) as &unsigned long) = v34;
                *((v37 + 16) as &unsigned long) = v35;
                *((v37 + 24) as &unsigned long) = v36;
                return v82;
            }
        } while ((v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v32));
    }
    v20 = struct24 {
        field_0: v31
        field_8: v30 * 16 + v31
        field_16: 0
    };
    v22 = &v3;
    v15 = itertools::kmerge_impl::kmerge_by(&v20);
    v27 = itertools::groupbylazy::new(&v15);
    v39 = *((v38 + 304) as &i64);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v4 = &v27;
    v13 = 9223372036854775810;
    loop {
        v23 = v23;
        v24 = v24;
        v25 = v25;
        v26 = v26;
        v20 = <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(&v4);
        if v21 == v13 {
            break;
        }
        v52 = *((&v20.field_64 as &char + 8) as &i128);
        v19 = v52;
        v53 = *((&v20.field_0 as &char + 8) as &i128);
        v54 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256;
        v55 = *((&v20.field_16 as &char + 8) as &i128);
        v56 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256;
        v57 = *((&v20.field_32 as &char + 8) as &i128);
        v58 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256;
        v59 = *((&v20.field_48 as &char + 8) as &i128);
        v60 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 as u256;
        v18 = v59;
        v17 = v57;
        v16 = v55;
        v14 = v53;
        loop {
            v61 = v14 as i128;
            v62 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 as u256;
            v63 = v16;
            v64 = v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256;
            v65 = v17;
            v66 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 as u256;
            v67 = v18;
            v68 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u256;
            v9 = v61;
            v12 = v67;
            v11 = v65;
            v10 = v63;
            *(&v14 as &i64) = 9223372036854775809;
            if v9 as i64 != 9223372036854775809 {
                v69 = v9;
                v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u256;
                v70 = v10;
                v64 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u256;
                v71 = v11;
                v66 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 as u256;
                v72 = v12;
                v68 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 as u256;
                v26 = v72;
                v25 = v71;
                v24 = v70;
                v23 = v69;
                if v23 as i64 == 9223372036854775809 {
                    goto LABEL_5c753d;
                }
LABEL_5c742e:
                v73 = v23;
                v74 = v24;
                v75 = v25;
                v76 = v26;
                v5 = v73;
                v8 = v76;
                v7 = v75;
                v6 = v74;
                if v5 as i64 == 0x8000000000000000 {
                    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v9, (&v5)[8] as i64);
                    v83 = v82;
                    *((v83 + 16) as void*) = v10;
                    *(v83 as void*) = v9;
                    return v82;
                }
                v77 = (&v7)[8] as i64;
                if v39 == v77 {
                    v77 = v39;
                } else if !uu_pr::print_page(v1, v2, v38, v39) {
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                } else {
                    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v9, v29);
                    v84 = v82;
                    *((v84 + 16) as void*) = v10;
                    *(v84 as void*) = v9;
                    if v5 as i64 == 0x8000000000000000 {
                        return v82;
                    }
                    return v82;
                }
                v54 = (v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256;
                v56 = (v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 as u256;
                v58 = (v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u256;
                v60 = (v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as u256;
                v9 = struct64 {
                    field_0: v78
                    field_16: v79
                    field_32: v80
                    field_48: v81
                };
                v0 = alloc::vec::Vec<T,A>::push(&v9);
                v39 = v77;
            } else {
                v23 = itertools::groupbylazy::ChunkBy<K,I,F>::step(v19 as i64, (&v19)[8] as i64);
                if !(v23.field_0 == 9223372036854775809) {
                    goto LABEL_5c742e;
                }
LABEL_5c753d:
                v26 = v26;
                v25 = v25;
                v24 = v24;
                v23 = v23;
                v48 = v46;
                v49 = v44;
                v50 = v42;
                v51 = v40;
                break;
            }
        }
    }
    if !uu_pr::print_page(v1, v2, v38, v39) {
        return v82;
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v20, v29);
    v85 = v20.field_0;
    v86 = v82;
    *((v86 + 16) as &u128) = v20.field_16;
    *(v86 as void*) = v85;
    return v82;
}
