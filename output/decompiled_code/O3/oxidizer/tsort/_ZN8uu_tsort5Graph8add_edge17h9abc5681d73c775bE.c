fn uu_tsort::Graph::add_edge(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u128;  // [bp-0xb8]
    let v1: &u128;  // [sp-0xa0]
    let v2: u64;  // [bp-0x98], Other Possible Types: void*
    let v3: &u128;  // [bp-0x88], Other Possible Types: u128
    let v4: u8;  // [bp-0x78]
    let v5: i8;  // [bp-0x70]
    let v6: i8;  // [bp-0x68]
    let v7: i8;  // [bp-0x60]
    let v8: i8;  // [bp-0x58]
    let v9: u64;  // [sp-0x50]
    let v10: u128;  // [sp-0x48]
    let v12: &struct_0;  // rax
    let v13: u64;  // rdx
    let v14: &u8;  // rcx
    let v15: &u8;  // rsi
    let v16: &u8;  // r9
    let v17: u128;  // xmm0
    let v18: u256;  // ymm0
    let v19: u256;  // ymm0
    let v20: u64;  // r10
    let v21: u64;  // rdi
    let v22: u128;  // xmm0
    let v23: u64;  // rdi
    let v24: u64;  // r8
    let v25: u64;  // r10
    let v26: &u8;  // r10
    let v27: u8;  // r9b
    let v29: u8;  // dl
    let v30: &u8;  // rdx
    let v31: u256;  // ymm0
    let v32: u64;  // rcx
    let v33: u64;  // rcx
    let v34: &u128;  // rax
    let v35: &struct_0;  // rax
    let v36: u64;  // rdx
    let v37: &u8;  // rcx
    let v38: &u8;  // rsi
    let v39: &u8;  // r9
    let v40: u128;  // xmm0
    let v41: u256;  // ymm0
    let v42: u64;  // r10
    let v43: u64;  // rdi
    let v44: u128;  // xmm0
    let v45: u64;  // rdi
    let v46: u64;  // r8
    let v47: u64;  // r10
    let v48: &u8;  // r10
    let v49: u8;  // r9b
    let v51: u8;  // dl
    let v52: &u8;  // rdx
    let v53: &struct_4;  // rbx
    let v54: u64;  // rax
    let v55: &u128;  // rcx
    let v56: &u128;  // r15
    let v57: &u128;  // r14
    let v58: u128;  // xmm0
    let v59: u128;  // xmm0
    let v60: u128;  // xmm0
    let v61: u128;  // xmm0
    let v62: u256;  // ymm0
    let v63: void*;  // r13
    let v64: &u128;  // rcx
    let v65: u128;  // xmm0
    let v67: u256;  // ymm0
    let v68: u64;  // rbp
    let v69: u64;  // rbp
    let v71: void*;  // rbx
    let v72: u64;  // rax
    let v74: u128;  // xmm0
    let v76: u64;  // rax
    let v77: &u128;  // rax
    let v78: &struct_2;  // r14
    let v79: &u64;  // r15
    let v80: &u64;  // rax
    let v81: &u64;  // rcx
    let v82: u64;  // rdx
    let v83: &struct_4;  // rbx
    let v84: u64;  // rax
    let v85: &u128;  // rcx
    let v86: &u128;  // r14
    let v87: &u128;  // r12
    let v88: u128;  // xmm0
    let v89: u128;  // xmm0
    let v90: u128;  // xmm0
    let v91: u128;  // xmm0
    let v92: u256;  // ymm0
    let v93: void*;  // r13
    let v95: u64;  // 4096
    let v96: u64;  // r15
    let v97: u64;  // rdx
    let v98: u128;  // xmm0
    let v99: u128;  // xmm0
    let v100: u64;  // rbp
    let v101: u64;  // rbp
    let v103: void*;  // rbx
    let v104: u64;  // rdx
    let v105: u64;  // rax
    let v107: u128;  // xmm0

    v0 = a1;
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v4, a0, a1, a2);
    if *(&v4 as &i64) {
        v12 = v7;
        v13 = v8;
        v14 = v12->field_0;
        v15 = v12->field_8;
        v16 = v15 & v13;
        v17 = *((v14 + v16) as &i128);
        vvar_34{reg 224} = ((vvar_316{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_315{reg 224}))
        v20 = UnaryOp GetMSBs;
        if !v20 {
            v21 = 16;
            do {
                v16 = &v16[v21] & v15;
                v22 = *((v14 + v16) as &i128);
                vvar_34{reg 224} = ((vvar_43{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_325{reg 224}))
                v20 = UnaryOp GetMSBs;
                v21 += 16;
            } while (!v20);
        }
        v23 = v5;
        v24 = v6;
        v25 = (!(v20 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v26 = &v16[v25] & v15;
        v27 = *((v14 + v26) as &i8);
        if v27 >= 0 {
            vvar_34{reg 224} = ((vvar_34{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=vvar_311{reg 24}, size=16, endness=Iend_LE)))
            v26 = (!UnaryOp GetMSBs ? 32 : UnaryOp Ctz & 4294967295);
            v27 = *((v14 + v26) as &i8);
        }
        v29 = v13 >> 57;
        *((v14 + v26) as &u8) = v29;
        v14[16 + (v26 + 16 & v15)] = v29;
        v30 = -(v26) * 48;
        v12->field_10 = v12->field_10 - (v27 & 1);
        *((v14 + v30 - 48) as &u64) = v23;
        *((v14 + v30 - 40) as &u64) = v24;
        *((v14 + v30 - 32) as &i64) = 0;
        *((v14 + v30 - 24) as &i64) = 8;
        v31 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((v14 + v30 - 16) as &i128) = 0;
        v12->field_18 = v12->field_18 + 1;
    }
    v32 = a4;
    if a2 == v32 {
        v34 = bcmp(v0, a3, a2) as i64;
        if !v34 as u32 {
            return v34;
        }
    }
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v4, a0, a3, v33);
    if *(&v4 as &i64) {
        v35 = v7;
        v36 = v8;
        v37 = v35->field_0;
        v38 = v35->field_8;
        v39 = v38 & v36;
        v40 = *((v37 + v39) as &i128);
        vvar_81{reg 224} = ((vvar_16{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_414{reg 224}))
        v42 = UnaryOp GetMSBs;
        if !v42 {
            v43 = 16;
            do {
                v39 = &v39[v43] & v38;
                v44 = *((v37 + v39) as &i128);
                vvar_81{reg 224} = ((vvar_90{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_423{reg 224}))
                v42 = UnaryOp GetMSBs;
                v43 += 16;
            } while (!v42);
        }
        v45 = v5;
        v46 = v6;
        v47 = (!(v42 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v48 = &v39[v47] & v38;
        v49 = *((v37 + v48) as &i8);
        if v49 >= 0 {
            vvar_81{reg 224} = ((vvar_81{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=vvar_410{reg 24}, size=16, endness=Iend_LE)))
            v48 = (!UnaryOp GetMSBs ? 32 : UnaryOp Ctz & 4294967295);
            v49 = *((v37 + v48) as &i8);
        }
        v51 = v36 >> 57;
        *((v37 + v48) as &u8) = v51;
        v37[16 + (v48 + 16 & v38)] = v51;
        v52 = -(v48) * 48;
        v35->field_10 = v35->field_10 - (v49 & 1);
        *((v37 + v52 - 48) as &u64) = v45;
        *((v37 + v52 - 40) as &u64) = v46;
        *((v37 + v52 - 32) as &i64) = 0;
        *((v37 + v52 - 24) as &i64) = 8;
        v31 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((v37 + v52 - 16) as &i128) = 0;
        v35->field_18 = v35->field_18 + 1;
    }
    if !a0->field_18 {
        core::option::unwrap_failed(); /* do not return */
    }
    v53 = a0;
    v9 = v53 + 1;
    v54 = core::hash::BuildHasher::hash_one(v53 + 1, v0, a2);
    v55 = v53->field_0;
    v56 = v53->field_8;
    v57 = v56 & v54;
    vvar_502{reg 224} = Conv(64->128, (vvar_493{reg 16} >> 0x39<8>))
    v59 = BinaryOp InterleaveLOV;
    v60 = v59 >> 64 CONCAT v59 CONCAT v59 CONCAT v59 CONCAT v59;
    v61 = v60 CONCAT v60 CONCAT v60 CONCAT v60;
    vvar_104{reg 224} = ((((((((vvar_55{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_502{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_504{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_506{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_508{reg 224}))
    v10 = v61;
    v63 = v55 + 3;
    v2 = 0;
    v1 = v55;
    loop {
        v65 = *((v64 + v57) as &i128);
        v3 = v65;
        vvar_518{reg 224} = ((((vvar_104{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_515{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_515{reg 224} CmpEQV vvar_751{stack -72})))
        v68 = UnaryOp GetMSBs;
        if v68 {
            do {
                v69 = v68;
                v71 = -((!(v69 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v57 & v56) * 48;
                if *((v63 + v71 + 8) as &i64) == a2 && !bcmp(v0, *((v71 + v63) as &i64), a2) {
                    v77 = v1;
                    v78 = v77 + v71;
                    v79 = *((v77 + v71 - 16) as &i64);
                    if v79 == *((v77 + v71 - 32) as &i64) {
                        alloc::raw_vec::RawVec<T,A>::grow_one(v77 + v71 - 32);
                    }
                    v80 = v78[1].field_-10;
                    v81 = v79 * 16;
                    *((v80 + v81) as &u64) = a3;
                    v82 = a4;
                    *((v80 + v81 + 8) as &u64) = v82;
                    v78[1].field_-18 = v79 as &char + 1;
                    v83 = a0;
                    if !v83->field_18 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v84 = core::hash::BuildHasher::hash_one(v9, a3, v82);
                    v85 = v83->field_0;
                    v86 = v83->field_8;
                    v87 = v86 & v84;
                    vvar_620{reg 224} = Conv(64->128, (vvar_610{reg 16} >> 0x39<8>))
                    v89 = BinaryOp InterleaveLOV;
                    v90 = v89 >> 64 CONCAT v89 CONCAT v89 CONCAT v89 CONCAT v89;
                    v91 = v90 CONCAT v90 CONCAT v90 CONCAT v90;
                    vvar_163{reg 224} = ((((((((vvar_518{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_620{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_622{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_624{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_626{reg 224}))
                    v2 = v91;
                    v3 = v85;
                    v93 = v85 + 3;
                    loop {
                        v96 = 0;
                        v97 = v95;
                        v98 = *((v3 + v87) as &i128);
                        v0 = v98;
                        v99 = BinaryOp CmpEQV;
                        v100 = UnaryOp GetMSBs;
                        if v100 {
                            do {
                                v101 = v100;
                                v103 = -((!(v101 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v87 & v86) * 48;
                                if *((v93 + v103 + 8) as &i64) == v97 && !bcmp(a3, *((v103 + v93) as &i64), v97) {
                                    v34 = v3;
                                    *((v34 + v103 - 8) as &i64) = *((v34 + v103 - 8) as &i64) + 1;
                                    return v34;
                                }
                                v97 = v104;
                                v105 = v101 - 1 & 4294967295;
                            } while ((v105 & v101));
                        }
                        v107 = v0;
                        vvar_163{reg 224} = ((((((((vvar_163{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_634{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_636{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_682{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_682{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                        if UnaryOp GetMSBs {
                            break;
                        }
                        v87 = 16 + v87 + v96 & v86;
                    }
                }
                v72 = v69 - 1 & 4294967295;
            } while ((v72 & v69));
        }
        v74 = v3;
        vvar_104{reg 224} = ((((vvar_518{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_563{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_563{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
        if UnaryOp GetMSBs {
            break;
        }
        v76 = v2;
        v2 = v76 + 16;
        v57 = 16 + v57 + v76 & v56;
        v64 = v1;
    }
}
