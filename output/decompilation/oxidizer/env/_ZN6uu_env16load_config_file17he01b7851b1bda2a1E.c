fn uu_env::load_config_file(a0: i64) -> u64 {
    let v0: u64;  // [bp-0x2a8]
    let v1: u64;  // [bp-0x2a8]
    let v2: u64;  // [bp-0x2a0]
    let v3: u64;  // [bp-0x2a0]
    let v4: i64;  // [bp-0x298]
    let v5: u64;  // [bp-0x290]
    let v6: struct40;  // [bp-0x288], Other Possible Types: u64
    let v7: i64;  // [bp-0x288]
    let v8: u64;  // [bp-0x280]
    let v9: i64;  // [bp-0x280]
    let v10: iNone;  // [bp-0x278]
    let v11: u64;  // [bp-0x268]
    let v12: u64;  // [bp-0x260]
    let v13: i64;  // [bp-0x260]
    let v14: u64;  // [bp-0x260]
    let v15: struct32;  // [bp-0x260]
    let v16: u64;  // [bp-0x258]
    let v17: u64;  // [bp-0x258]
    let v18: u64;  // [bp-0x258]
    let v19: u64;  // [bp-0x250]
    let v20: u64;  // [bp-0x250]
    let v21: u64;  // [bp-0x250]
    let v22: u64;  // [bp-0x248]
    let v23: u64;  // [bp-0x248]
    let v24: u64;  // [bp-0x248]
    let v25: struct9;  // [bp-0x240], Other Possible Types: u64
    let v26: u64;  // [bp-0x238]
    let v27: u64;  // [bp-0x230]
    let v28: iNone;  // [bp-0x228]
    let v29: iNone;  // [bp-0x200]
    let v30: iNone;  // [bp-0x1e0]
    let v31: iNone;  // [bp-0x1d0]
    let v32: iNone;  // [bp-0x190]
    let v33: iNone;  // [bp-0x190]
    let v34: struct32;  // [bp-0x190]
    let v35: i64;  // [bp-0x180]
    let v36: i64;  // [bp-0x180]
    let v37: std::io::stdio::Stdin;  // [bp-0x178], Other Possible Types: struct_1 *, u64
    let v38: u128;  // [bp-0x178]
    let v39: u64;  // [bp-0x178]
    let v40: u64;  // [bp-0x170]
    let v41: u64;  // [bp-0x168]
    let v42: u128;  // [bp-0x168]
    let v43: u128;  // [bp-0x160]
    let v44: u64;  // [bp-0x158]
    let v45: iNone;  // [bp-0x150]
    let v46: iNone;  // [bp-0x140]
    let v47: iNone;  // [bp-0x130]
    let v48: iNone;  // [bp-0x120]
    let v49: iNone;  // [bp-0x110]
    let v50: iNone;  // [bp-0x100]
    let v51: iNone;  // [bp-0xf0]
    let v53: u64;  // [bp-0xe0]
    let v54: u128;  // [bp-0xc8]
    let v55: u64;  // [bp-0xb8]
    let v56: u128;  // [bp-0xb0]
    let v57: iNone;  // [bp-0xa0]
    let v58: iNone;  // [bp-0x90]
    let v59: iNone;  // [bp-0x80]
    let v60: iNone;  // [bp-0x70]
    let v61: iNone;  // [bp-0x60]
    let v62: iNone;  // [bp-0x50]
    let v63: i8;  // [bp-0x40]
    let v65: i64;  // rcx
    let v66: u8;  // dl
    let v67: i64;  // rax
    let v68: u64;  // rdx

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    v65 = *((a0 + 8) as &i64);
    v5 = *((a0 + 16) as &i64) * 16 + v65;
    do {
        v4 = v65;
        v2 = *(v65 as &i64);
        v0 = *((v65 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v65 as &i64), *((v65 + 8) as &i64), "-") {
            v37 = std::io::stdio::stdin();
            v25 = struct9 {
                field_0: std::io::stdio::Stdin::lock(&v37) as u64
                field_8: v66 & 1
            };
            v62 as u1408 = ini::Ini::read_from_opt(&v25);
        } else {
            v62 as u1408 = ini::Ini::load_from_file_opt(v2, v0);
        }
        if (((0 ^ v53) & (0 ^ -(v53))) >> 63) as char {
            v6 = struct40 {
                field_0: v1
                field_8: v3
                field_16: v54
                field_32: v55
            };
            return uu_env::load_config_file::{{closure}}(v2, v0, &v6);
        }
        v65 = v4 + 16;
        v41 = v55;
        v38 = v54;
        v51 = *(&v63 as &i128);
        v50 = v62;
        v49 = v61;
        v48 = v60;
        v47 = v59;
        v46 = v58;
        v45 = v57;
        v43 = v56;
        v3 = v8;
        v1 = v6;
        memcpy(&v28, &v37, 152);
        v25 = v53;
        v26 = v1;
        v27 = v3;
        v7 = &v25;
        v9 = &v29;
        v10 = v30;
        v11 = v31 as i64;
        v13 = v12;
        v17 = v16;
        v20 = v19;
        v23 = v22;
        loop {
            v22 = v23;
            v19 = v20;
            v16 = v17;
            v12 = v13;
            vvar_488{stack -400} = struct32 OrderedDict([(0, 𝜙@128b [((4663705, None), vvar_417{stack -400}), ((4663540, None), vvar_406{stack -400})]), (16, 𝜙@64b [((4663705, None), vvar_418{stack -384}), ((4663540, None), vvar_407{stack -384})]), (24, 𝜙@64b [((4663705, None), vvar_471{stack -376}), ((4663540, None), vvar_429{stack -376})])])
            <ini::SectionIter as core::iter::traits::iterator::Iterator>::next(&v34, &v7);
            v67 = v36;
            if !v67 {
                break;
            }
            v68 = *((v67 + 112) as &i64);
            v37 = v67;
            v40 = v67 + 64;
            v42 = *((v67 + 96) as &i128);
            v44 = v68;
            loop {
                vvar_489{stack -608} = struct32 OrderedDict([(0, 𝜙@64b [((4663735, None), vvar_424{stack -608}), ((4663647, None), vvar_419{stack -608})]), (8, 𝜙@64b [((4663735, None), vvar_425{stack -600}), ((4663647, None), vvar_420{stack -600})]), (16, 𝜙@64b [((4663735, None), vvar_426{stack -592}), ((4663647, None), vvar_421{stack -592})])])
                <ini::PropertyIter as core::iter::traits::iterator::Iterator>::next(&v15, &v37);
                v13 = v14;
                v17 = v18;
                v20 = v21;
                v23 = v24;
                if !v13 {
                    break;
                }
                std::env::set_var(v13, v18, v21, v24);
            }
        }
        v37 = v39;
        v32 = v33;
        v35 = v36;
    } while (v65 != v5);
    return 0;
}
