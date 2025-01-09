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
    let v9: i128;  // [sp-0x228], Other Possible Types: struct64
    let v10: i128;  // [sp-0x218]
    let v11: i128;  // [sp-0x208]
    let v12: i128;  // [sp-0x1f8]
    let v13: i64;  // [sp-0x1e0]
    let v14: i192;  // [sp-0x1d8], Other Possible Types: struct24
    let v15: i128;  // [sp-0x1c8]
    let v16: i128;  // [sp-0x1b8]
    let v17: i128;  // [sp-0x1a8]
    let v18: i128;  // [sp-0x198]
    let v19: i64;  // [sp-0x180], Other Possible Types: struct24, struct88
    let v20: i64;  // [sp-0x178]
    let v21: i64;  // [sp-0x160]
    let v22: i64;  // [sp-0x128], Other Possible Types: struct8
    let v23: i128;  // [sp-0x118]
    let v24: i128;  // [sp-0x108]
    let v25: i128;  // [sp-0xf8]
    let v26: i720;  // [sp-0xe8], Other Possible Types: Result<struct32, struct16>, struct89
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
    let v39: i256;  // ymm3
    let v41: i256;  // ymm2
    let v43: i256;  // ymm1
    let v45: i256;  // ymm0
    let v47: i256;  // ymm0
    let v48: i256;  // ymm1
    let v49: i256;  // ymm2
    let v50: i256;  // ymm3
    let v51: i128;  // xmm0
    let v52: i128;  // xmm0
    let v53: i256;  // ymm0
    let v54: i128;  // xmm1
    let v55: i256;  // ymm1
    let v56: i128;  // xmm2
    let v57: i256;  // ymm2
    let v58: i128;  // xmm3
    let v59: i256;  // ymm3
    let v60: i128;  // xmm0
    let v61: i256;  // ymm0
    let v62: i128;  // xmm1
    let v63: i256;  // ymm1
    let v64: i128;  // xmm2
    let v65: i256;  // ymm2
    let v66: i128;  // xmm3
    let v67: i256;  // ymm3
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1
    let v70: i128;  // xmm2
    let v71: i128;  // xmm3
    let v72: i128;  // xmm0
    let v73: i128;  // xmm1
    let v74: i128;  // xmm2
    let v75: i128;  // xmm3
    let v76: i64;  // rbx
    let v77: i64;  // r14
    let v82: i64;  // rdi
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: i128;  // xmm0
    let v86: i64;  // rax

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
                v35 = v82;
                *(v35 as &i64) = v31;
                *((v35 + 8) as &i64) = v32;
                *((v35 + 16) as &i64) = v33;
                *((v35 + 24) as &i64) = v34;
                return v82;
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
        v22 = v22;
        v23 = v23;
        v24 = v24;
        v25 = v25;
        v19 = <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(&v4);
        if v20 == v13 {
            break;
        }
        v51 = *((&v19 as &char + 72) as &i128);
        v18 = v51;
        v52 = *((&v19 as &char + 8) as &i128);
        v53 = (v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
        v54 = *((&v19 as &char + 24) as &i128);
        v55 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
        v56 = *((&v19 as &char + 40) as &i128);
        v57 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
        v58 = *((&v19 as &char + 56) as &i128);
        v59 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
        v17 = v58;
        v16 = v56;
        v15 = v54;
        v14 = v52;
        loop {
            v60 = v14;
            v61 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v62 = v15;
            v63 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v64 = v16;
            v65 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v66 = v17;
            v67 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v9 = v60;
            v12 = v66;
            v11 = v64;
            v10 = v62;
            v14 = 9223372036854775809;
            if v9 != 9223372036854775809 {
                v68 = v9;
                v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
                v69 = v10;
                v63 = v63 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v70 = v11;
                v65 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
                v71 = v12;
                v67 = v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
                v25 = v71;
                v24 = v70;
                v23 = v69;
                v22 = v68;
                if v22 == 9223372036854775809 {
                    break;
                }
            } else {
                v22 = itertools::groupbylazy::ChunkBy<K,I,F>::step(v18, *((&v18 as &char + 8) as &i64));
                if v22 == 9223372036854775809 {
                    break;
                }
            }
            v72 = v22;
            v73 = v23;
            v74 = v24;
            v75 = v25;
            v5 = v72;
            v8 = v75;
            v7 = v74;
            v6 = v73;
            if v5 == 0x8000000000000000 {
                <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v9, *((&v5 as &char + 8) as &i64));
                v83 = v82;
                *((v83 + 16) as &i128) = v10;
                *(v83 as &i128) = v9;
                return v82;
            }
            v76 = *((&v7 as &char + 8) as &i64);
            if v38 == v76 {
                v77 = v38;
            } else if !uu_pr::print_page(v1, v2, v37, v38) {
                v0 = 0;
                v1 = 8;
                v2 = 0;
                v77 = v76;
            } else {
                <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v9, v29);
                v84 = v82;
                *((v84 + 16) as &i128) = v10;
                *(v84 as &i128) = v9;
                if !(v5 == 0x8000000000000000) {
                    goto LABEL_0x5c75e5;
                }
                return v82;
            }
            v53 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5;
            v55 = (v63 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
            v57 = (v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
            v59 = (v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8;
            v9 = struct64 {
                field_0: v78
                field_16: v79
                field_32: v80
                field_48: v81
            };
            v0 = alloc::vec::Vec<T,A>::push(&v9);
        }
        v25 = v25;
        v24 = v24;
        v23 = v23;
        v22 = v22;
        v47 = v45;
        v48 = v43;
        v49 = v41;
        v50 = v39;
    }
    if !uu_pr::print_page(v1, v2, v37, v38) {
        return v82;
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v19, v29);
    v85 = v19;
    v86 = v82;
    *((v86 + 16) as &i128) = *((&v19 as &char + 16) as &i128);
    *(v86 as &i128) = v85;
    return v82;
}
