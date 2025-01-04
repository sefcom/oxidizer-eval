fn uu_env::load_config_file(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0x2a8]
    let v1: i64;  // [sp-0x2a0]
    let v2: i64;  // [sp-0x298]
    let v3: i64;  // [sp-0x290]
    let v4: i64;  // [sp-0x288]
    let v5: i64;  // [sp-0x280]
    let v6: i128;  // [sp-0x278]
    let v7: i64;  // [sp-0x268]
    let v8: Option<struct32>;  // [sp-0x260], Other Possible Types: i256
    let v9: i8;  // [bp-0x240]
    let v10: i8;  // [bp-0x230]
    let v11: i64;  // [sp-0x228]
    let v12: i8;  // [bp-0x220]
    let v13: i64;  // [sp-0x218]
    let v14: i8;  // [bp-0x210]
    let v15: i8;  // [bp-0x1e8]
    let v16: i8;  // [bp-0x1c8]
    let v17: i8;  // [bp-0x1b8]
    let v18: i64;  // [sp-0x178]
    let v19: i64;  // [sp-0x170]
    let v20: i64;  // [sp-0x168]
    let v21: i128;  // [bp-0x160]
    let v22: i64;  // [sp-0x158]
    let v23: i128;  // [sp-0x150]
    let v24: i128;  // [sp-0x140]
    let v25: i128;  // [sp-0x130]
    let v26: i128;  // [sp-0x120]
    let v27: i128;  // [sp-0x110]
    let v28: i128;  // [sp-0x100]
    let v29: i128;  // [sp-0xf0]
    let v30: struct176;  // [sp-0xe0], Other Possible Types: Result<struct176, struct48>, i1408
    let v32: struct8;  // rax
    let v33: i256;  // ymm0
    let v34: i256;  // ymm1
    let v35: i256;  // ymm2
    let v36: i256;  // ymm3
    let v37: i64;  // r14
    let v38: i64;  // rbp
    let v39: i8;  // dl
    let v40: i64;  // r14
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i128;  // xmm3
    let v50: i128;  // xmm0
    let v51: i256;  // ymm0
    let v52: i64;  // rax
    let v53: i64;  // rdx
    let v54: i128;  // xmm0

    v2 = *((a0 + 8) as &i64);
    v3 = *((a0 + 16) as &i64) * 16 + v2;
    v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v32 {
        return 0;
    }
    do {
        v37 = *(v32 as &i64);
        v38 = *((v32 + 8) as &i64);
        v1 = v37;
        v0 = v38;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v0, "-") as i8 {
            v18 = std::io::stdio::stdin();
            v11 = std::io::stdio::Stdin::lock(&v18);
            v12 = v39 & 1;
            v30 = ini::Ini::read_from_opt(&v11, 0x1, 1);
        } else {
            v30 = ini::Ini::load_from_file_opt(v1, v0, 1, 1);
        }
        v40 = v30;
        match v30 {
            Err(_) => {
                v4 = v0;
                return uu_env::load_config_file::{{closure}}(v1, v0, &v4);
            },
            Ok(_) => {
                v20 = *((&v30 as &char + 40) as &i64);
                v41 = *((&v30 as &char + 24) as &i128);
                v18 = v41;
                v42 = *((&v30 as &char + 160) as &i128);
                v29 = v42;
                v43 = *((&v30 as &char + 144) as &i128);
                v28 = v43;
                v44 = *((&v30 as &char + 128) as &i128);
                v27 = v44;
                v45 = *((&v30 as &char + 112) as &i128);
                v26 = v45;
                v46 = *((&v30 as &char + 48) as &i128);
                v47 = *((&v30 as &char + 64) as &i128);
                v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u128 as u256;
                v48 = *((&v30 as &char + 80) as &i128);
                v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u128 as u256;
                v49 = *((&v30 as &char + 96) as &i128);
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u128 as u256;
                v25 = v49;
                v24 = v48;
                v23 = v47;
                v21 = v46;
                v1 = v5;
                v0 = v4;
                memcpy(&v14, &v18, 152);
                v11 = v40;
                v12 = v0;
                v13 = v1;
                v4 = &v11;
                v5 = &v15;
                v50 = v16;
                v51 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u128 as u256;
                v6 = v50;
                v7 = v17;
            },
        }
        loop {
            <ini::SectionIter as core::iter::traits::iterator::Iterator>::next(&v9, &v4);
            v52 = v10;
            if !v52 {
                break;
            }
            v53 = *((v52 + 112) as &i64);
            v18 = v52;
            v19 = v52 + 64;
            v54 = *((v52 + 96) as &i128);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
            v20 = v54;
            v22 = v53;
            loop {
                v8 = <ini::PropertyIter as core::iter::traits::iterator::Iterator>::next(&v18, v22);
                if !v8 {
                    break;
                }
                std::env::set_var(v8, *((&v8 as &char + 8) as &i64), *((&v8 as &char + 16) as &i64), *((&v8 as &char + 24) as &i64));
            }
        }
        v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v32);
}
