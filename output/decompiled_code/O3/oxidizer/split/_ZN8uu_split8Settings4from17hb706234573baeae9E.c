fn uu_split::Settings::from(a0: void*, a1: void*, a2: u32) -> u64 {
    let v2: i64;  // [sp-0x260]
    let v3: i64;  // [sp-0x258]
    let v4: i64;  // [sp-0x250]
    let v7: i64;  // [sp-0x238]
    let v8: i64;  // [sp-0x230]
    let v9: i64;  // [sp-0x228]
    let v10: i64;  // [sp-0x220]
    let v13: i64;  // [bp-0x208]
    let v15: i64;  // [sp-0x1f8]
    let v19: i128;  // [bp-0x1d8]
    let v21: i64;  // [sp-0x1c8]
    let v23: i64;  // [sp-0x1b8]
    let v24: i64;  // [sp-0x1a8]
    let v27: i64;  // [sp-0x188]
    let v28: i64;  // [sp-0x180]
    let v29: i64;  // [sp-0x178]
    let v30: i64;  // [sp-0x170]
    let v31: i64;  // [bp-0x168], Other Possible Types: Enum
    let v32: i8;  // [bp-0x160]
    let v33: i64;  // [sp-0x158]
    let v34: i64;  // [sp-0x150]
    let v35: i64;  // [sp-0x148]
    let v37: i8;  // [bp-0x138]
    let v38: i64;  // [sp-0x130]
    let v53: i128;  // [sp-0x98]
    let v54: i64;  // [sp-0x88]
    let v55: i192;  // [bp-0x78]
    let v56: i128;  // [sp-0x58]
    let v57: i128;  // [sp-0x48]
    let v59: i64;  // rax
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm0
    let v64: i64;  // rax
    let v65: i64;  // r15
    let v67: i64;  // rax
    let v68: i64;  // r12
    let v69: i64;  // rdi
    let v70: i64;  // rdx
    let v71: i64;  // rbx
    let v72: i64;  // r14

    uu_split::strategy::Strategy::from(&v31, a1, a2);
    v59 = v31;
    v13 = v32;
    v15 = v34;
    if v59 != 4 {
        v60 = v13;
        v19 = v60;
        v21 = v15;
        *((a0 + 32) as &i64) = v21;
        *((a0 + 16) as &i128) = v60;
        *((a0 + 8) as &i64) = v59;
        *((a0 + 40) as &i64) = v35;
        *(a0 as &i64) = 2;
    }
    v53 = v13;
    v54 = v15;
    v55 = v53;
    v31 = uu_split::filenames::Suffix::from(a1, &v55);
    if v2 == 0x8000000000000000 {
        v61 = *((&v31 as &char + 8) as &i128);
        v62 = *((&v31 as &char + 24) as &i128);
        v19 = v61;
        v21 = v62;
        a0 = a0;
        *((a0 + 32) as &i128) = v62;
        *((a0 + 16) as &i128) = v61;
        *((a0 + 8) as &i64) = 4;
        *(a0 as &i64) = 2;
        return a0;
    }
    v2 = v31;
    v24 = v32;
    v56 = *((&v31 as &char + 16) as &i128);
    v57 = v35;
    v27 = &v31;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v31, a1, &g_41cf21, 9);
    v3 = &g_41cf21;
    v4 = 9;
    if v31 {
        v23 = (&v35)[1];
        v63 = *((&v31 as &char + 8) as &i128);
        v21 = *((&v31 as &char + 24) as &i128);
        v19 = v63;
        v7 = &v3;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &v19;
        v10 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v13 = "Mismatch between definition and access of `";
        v64 = &v7;
    }
    v29 = v32;
    v65 = v33;
    v67 = v35;
    v68 = (&v35)[1];
    v69 = v37;
    v28 = v38;
    if !(v67) || !(v67 != v68) {
        do {
            v65 = v65;
            if (!(v65) || !(v65 != v34)) && v69 && v69 != v28 {
                v69 += 32;
                v71 = 0;
                goto LABEL_499ab7;
            }
        } while ((v65 += 24, v67 = *((v65 + 8) as &i64), v70 = *((v65 + 16) as &i64), v68 = v70 * 32 + v67, !v70));
    } else {
        v71 = v67 + 32;
    }
LABEL_499ab7:
    v30 = v29();
    v72 = 6;
}
