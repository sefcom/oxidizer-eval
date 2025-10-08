fn just::analyzer::Analyzer::justfile(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64, a9: i64, a10: i64, a11: i64) {
    let v0: u32;  // [bp-0xb64]
    let v1: u8;  // [bp-0xb64]
    let v2: void*;  // [bp-0xb60]
    let v3: &u64;  // [bp-0xb58], Other Possible Types: struct_7 *, u64
    let v4: u64;  // [sp-0xb50]
    let v5: void*;  // [bp-0xb48]
    let v6: u64;  // [bp-0xb40]
    let v7: iNone;  // [bp-0xb38], Other Possible Types: struct80, u128
    let v8: iNone;  // [bp-0xb38]
    let v9: iNone;  // [bp-0xb28], Other Possible Types: u128
    let v10: iNone;  // [bp-0xb28]
    let v11: iNone;  // [bp-0xb18], Other Possible Types: u128
    let v12: iNone;  // [bp-0xb18]
    let v13: iNone;  // [bp-0xb08]
    let v14: iNone;  // [bp-0xb08]
    let v15: iNone;  // [bp-0xaf8], Other Possible Types: u64
    let v16: iNone;  // [bp-0xaf8], Other Possible Types: u64
    let v17: iNone;  // [sp-0xae8]
    let v18: iNone;  // [bp-0xad8]
    let v19: iNone;  // [bp-0xac8]
    let v20: u64;  // [bp-0xab0]
    let v21: struct24;  // [bp-0xaa8], Other Possible Types: struct32, u64
    let v22: iNone;  // [bp-0xaa8], Other Possible Types: u128
    let v23: void*;  // [bp-0xaa0]
    let v24: void*;  // [bp-0xa98], Other Possible Types: u64
    let v25: u128;  // [bp-0xa98]
    let v26: u64;  // [bp-0xa90]
    let v27: u64;  // [bp-0xa88]
    let v28: u128;  // [bp-0xa88]
    let v29: void*;  // [bp-0xa80]
    let v30: u64;  // [bp-0xa78]
    let v31: u128;  // [bp-0xa78]
    let v32: u64;  // [bp-0xa70]
    let v33: u64;  // [bp-0xa68]
    let v34: void*;  // [bp-0xa58], Other Possible Types: struct16
    let v35: u64;  // [bp-0xa50]
    let v36: void*;  // [bp-0xa48]
    let v37: u64;  // [bp-0xa40]
    let v38: u64;  // [bp-0xa38]
    let v39: void*;  // [bp-0xa30]
    let v40: u64;  // [bp-0xa28]
    let v41: void*;  // [bp-0xa20]
    let v42: u128;  // [bp-0xa18]
    let v43: u64;  // [bp-0xa10]
    let v44: u64;  // [bp-0xa08]
    let v45: i64;  // [bp-0x9f8]
    let v46: struct32;  // [bp-0x9e8], Other Possible Types: u128
    let v47: u64;  // [bp-0x9d8]
    let v48: u64;  // [bp-0x9c8]
    let v49: void*;  // [bp-0x9c0]
    let v50: void*;  // [bp-0x9b0]
    let v51: void*;  // [bp-0x9a8]
    let v52: u64;  // [bp-0x9a0]
    let v53: void*;  // [bp-0x998]
    let v54: u64;  // [bp-0x990]
    let v55: u128;  // [bp-0x988]
    let v56: u128;  // [bp-0x978]
    let v57: u64;  // [bp-0x968]
    let v58: i64;  // [bp-0x960]
    let v59: void*;  // [bp-0x950]
    let v60: void*;  // [bp-0x940]
    let v61: std::path::PathBuf;  // [bp-0x938]
    let v62: u64;  // [bp-0x928]
    let v63: u64;  // [bp-0x910]
    let v64: struct207;  // [bp-0x908], Other Possible Types: struct24, u64
    let v65: u128;  // [bp-0x908]
    let v66: struct80;  // [bp-0x908]
    let v67: struct80;  // [bp-0x908]
    let v68: struct255;  // [bp-0x908]
    let v69: struct104;  // [bp-0x908]
    let v70: void*;  // [bp-0x900]
    let v71: i8;  // [bp-0x8f8], Other Possible Types: u64
    let v72: iNone;  // [bp-0x8f0]
    let v73: u64;  // [bp-0x8f0]
    let v74: i8;  // [bp-0x8e8], Other Possible Types: u64
    let v75: void*;  // [bp-0x8e0], Other Possible Types: u64
    let v76: iNone;  // [bp-0x8d8], Other Possible Types: u64
    let v77: u64;  // [bp-0x8d8]
    let v78: u64;  // [bp-0x8d0]
    let v79: u64;  // [bp-0x8c8]
    let v80: u128;  // [bp-0x8c0]
    let v81: u32;  // [bp-0x8bc]
    let v82: u64;  // [bp-0x8b0]
    let v83: u128;  // [bp-0x618]
    let v84: iNone;  // [bp-0x608]
    let v85: iNone;  // [bp-0x5f8]
    let v86: iNone;  // [bp-0x5e8]
    let v87: void*;  // [bp-0x5d8]
    let v88: iNone;  // [bp-0x5c8]
    let v89: void*;  // [bp-0x5b8]
    let v90: Option<struct24>;  // [bp-0x5a8]
    let v91: u64;  // [bp-0x598]
    let v92: iNone;  // [bp-0x590], Other Possible Types: u8
    let v93: u64;  // [bp-0x580]
    let v94: iNone;  // [bp-0x578], Other Possible Types: u8
    let v95: u64;  // [bp-0x568]
    let v96: alloc::string::String;  // [bp-0x560]
    let v97: u64;  // [bp-0x550]
    let v98: struct101;  // [bp-0x548]
    let v99: struct328;  // [bp-0x4d8]
    let v100: u8;  // [bp-0x3a0]
    let v101: struct920;  // [bp-0x390]
    let v102: u64;  // rax
    let v103: i64;  // rdx
    let v104: u32;  // eax
    let v106: u64;  // rax
    let v107: i64;  // rax
    let v108: void*;  // rax
    let v114: i64;  // rax
    let v115: i64;  // rbp
    let v116: struct16;  // r15
    let v117: void*;  // rax
    let v118: u32;  // r14d
    let v119: u8;  // r12b
    let v120: u8;  // r13b
    let v121: iNone;  // xmm0
    let v122: u128;  // xmm1
    let v123: u128;  // xmm2
    let v125: u8;  // al
    let v126: i64;  // rax
    let v127: u8;  // al
    let v128: void*;  // rax
    let v129: iNone;  // xmm0
    let v130: iNone;  // xmm1
    let v131: iNone;  // xmm2
    let v135: u8;  // al
    let v142: u64;  // rbx
    let v143: u64;  // r15
    let v144: u64;  // rbx
    let v146: u64;  // r13
    let v147: u64;  // r12
    let v148: u64;  // rax
    let v149: u64;  // rax
    let v150: u64;  // rcx
    let v151: u64;  // rax
    let v152: i64;  // rax
    let v153: u64;  // r12
    let v154: u64;  // r15
    let v155: u64;  // rbx
    let v156: iNone;  // xmm0
    let v157: iNone;  // xmm0
    let v158: iNone;  // xmm1
    let v159: iNone;  // xmm2
    let v160: u128;  // xmm1
    let v161: iNone;  // xmm2
    let v162: iNone;  // xmm3
    let v163: void*;  // r14
    let v165: iNone;  // xmm0
    let v166: iNone;  // xmm1
    let v167: iNone;  // xmm2
    let v168: iNone;  // [bp-0x8bf]

    v3 = a2;
    v102 = std::thread::local::LocalKey<T>::with();
    v56 = g_82bd20.field_0;
    v55 = g_82bd10.field_0;
    v57 = v102;
    v58 = v103;
    v104 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v64) as u32;
    v85 = *(&v74 as &i128);
    v84 = *(&v71 as &i128);
    v83 = *(&v64 as &i128);
    v49 = 0;
    v50 = 0;
    v34 = 0;
    v35 = 8;
    v36 = 0;
    v0 = v104 & -0x100 | 1;
    v106 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v3, a10, a11);
    v45 = (v106 ? v106 + 24 : 0);
    if !v106 {
        core::option::unwrap_failed(); /* do not return */
    }
    v34 = alloc::vec::Vec<T,A>::push(v106 + 24, "src/analyzer.rs");
    v107 = a1;
    v20 = v107 + 72;
    v37 = v107 + 168;
    v48 = v107 + 24;
    v6 = v107 + 144;
    v38 = v107 + 120;
    v4 = v107 + 48;
    loop {
        v108 = v36;
        if !v108 {
            break;
        }
        v36 = v108 - 1;
        <alloc::collections::btree::set::BTreeSet<T,A> as core::iter::traits::collect::Extend<&T>>::extend(&v49, *((8 + v108 * 8 - 8) as &i64) + 96);
        alloc::vec::Vec<T,A>::extend_trusted(v4, *((*((8 + v108 * 8 - 8) as &i64) + 64) as &i64));
    }
    v64 = struct24 {
        field_0: *(v37 as &i128)
        field_16: *((v37 + 16) as &i64)
    };
    v0 = 0;
    v99 = just::settings::Settings::from_table(&v64);
    v39 = 0;
    v41 = 0;
    v46 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    do {
        v114 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v46);
        if !v114 {
            v67 = just::assignment_resolver::AssignmentResolver::resolve_assignments(&v39);
            v125 = v66.field_72;
            if v125 != 37 {
                *(&v2[72] as &u64) = v79;
                v165 = *(&v66.field_0 as &i128);
                v166 = *((&v66.field_8 as &char + 8) as &i128);
                v167 = *((&v66.field_24 as &char + 8) as &i128);
                *(&v2[56] as &i128) = *(&v76 as &i128);
                v2[40] = v167;
                v2[24] = v166;
                v2[8] = v165;
                *(&v2[81] as &i32) = v168 as i32;
                *(&v2[84] as &u32) = v81;
                *(&v2[80] as &u8) = v125;
                *(v2 as &i64) = 0x8000000000000000;
                return;
            }
            v51 = 0;
            v53 = 0;
            v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v48);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
            v15 = v15;
            if v126 {
                do {
                    v15 = *((v126 + 208) as &i64);
                    v14 = *((v126 + 192) as &i128);
                    v12 = *((v126 + 176) as &i128);
                    v10 = *((v126 + 160) as &i128);
                    v8 = *((v126 + 144) as &i128);
                    v67 = just::analyzer::Analyzer::define(&v55, &v8, "recipe", v100);
                    v127 = v67.field_72;
                    if v127 != 37 {
                        *(&v2[72] as &u64) = v79;
                        v129 = *(&v67.field_0 as &i128);
                        v130 = *((&v67.field_8 as &char + 8) as &i128);
                        v131 = *((&v67.field_24 as &char + 8) as &i128);
                        *(&v2[56] as &i128) = *(&v76 as &i128);
                        v2[40] = v131;
                        v2[24] = v130;
                        v2[8] = v129;
                        *(&v2[81] as &i32) = v168 as i32;
                        *(&v2[84] as &u32) = v81;
                        *(&v2[80] as &u8) = v127;
                        *(v2 as &i64) = 0x8000000000000000;
                    }
                    v128 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v51, v52, just::token::Token::lexeme(v126 + 144), v103);
                    if core::option::Option<T>::map_or(v128, *((v126 + 248) as &i32)) {
                        v68 = <just::recipe::Recipe<D> as core::clone::Clone>::clone(v126);
                        just::table::Table<V>::insert(&v51, &v68);
                    }
                    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
                    v15 = v16;
                } while (v126);
            }
            v21 = struct24 {
                field_0: *(&v51 as &i128)
                field_16: 0
            };
            just::recipe_resolver::RecipeResolver::resolve_recipes(&v67, &v39, *((v45 + 32) as &i64), *((v45 + 40) as &i64), v6, (&v100)[7], &v21);
            v135 = v68.field_72;
            if v135 != 37 {
                v15 = v79;
                v13 = v68.field_48;
                v11 = *((&v68.field_24 as &char + 8) as &i128);
                v9 = *(&v68.field_16 as &i128);
                v7 = v68.field_0;
                *(&v2[84] as &u32) = v81;
                *(&v2[81] as &i32) = v168 as i32;
                *(&v2[72] as &u64) = v16;
                v2[56] = v13;
                v2[40] = v11;
                v2[24] = v9;
                v2[8] = v7;
                *(&v2[80] as &u8) = v135;
                *(v2 as &i64) = 0x8000000000000000;
                return;
            }
            v3 = v45 + 24;
            v42 = v68.field_0;
            v44 = v71;
            v59 = 0;
            v60 = 0;
            loop {
                just::table::Table<V>::pop(&v101, v38);
                if v101.field_0 != 0x8000000000000000 {
                    v69 = just::analyzer::Analyzer::resolve_alias(v6, &v42, &v101);
                    if v69.field_96 as i8 != 37 {
                        v17 = v69.field_80;
                        v15 = v69.field_64;
                        v14 = v69.field_48;
                        v12 = v69.field_32;
                        v10 = *(&v69.field_16 as &i128);
                        v8 = v69.field_0;
                        v98 = struct101 {
                            field_0: v8
                            field_16: v10
                            field_32: v12
                            field_48: v14
                            field_64: v15
                            field_80: v17
                            field_96: v69.field_96 as i8
                            field_97: *((&v69.field_96 as &char + 1) as &i32)
                        };
                        just::table::Table<V>::insert(&v59, &v98);
                    } else {
                        v15 = v69.field_64;
                        v13 = v69.field_48;
                        v11 = v69.field_32;
                        v9 = *(&v69.field_16 as &i128);
                        v7 = v69.field_0;
                        *(&v2[72] as &i128) = *(&v79 as &i128);
                        v2[56] = v13;
                        v2[40] = v11;
                        v2[24] = v9;
                        v2[8] = v7;
                        *(v2 as &i64) = 0x8000000000000000;
                        break;
                    }
                } else {
                    v142 = v42;
                    v143 = v43;
                    v144 = v142;
                    if v144 {
                        v144 = v44;
                    }
                    v146 = v144;
                    v147 = v142;
                    v64 = v147;
                    v70 = 0;
                    v71 = v142;
                    v73 = v143;
                    v74 = v147;
                    v75 = 0;
                    v77 = v142;
                    v78 = v143;
                    v79 = v146;
                    do {
                        if <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v64) as u64 && v103 {
                            goto LABEL_654d15;
                        } else {
                            goto LABEL_654d2b;
                        }
LABEL_654d15:
                    } while (!just::attribute_set::AttributeSet::contains(*(v103 as &i64) + 232, 16));
                    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v49, 2);
LABEL_654d2b:
                    if (&v99)[6].field_0 != 0x8000000000000000 {
                        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v49, 3);
                    }
                    v61 = std::sys::pal::unix::os::split_paths::bytes_to_path(a10, a11);
                    v148 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a9, a10, a11);
                    core::option::unwrap(v148);
                    v63 = v148 + 24;
                    v5 = 0;
                    v21 = v147;
                    v23 = 0;
                    v24 = v142;
                    v26 = v143;
                    v27 = v147;
                    v29 = 0;
                    v30 = v142;
                    v32 = v143;
                    v33 = v146;
                    loop {
                        do {
                            if !<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v21) as u64 || !v103 {
                                v149 = core::option::Option<T>::or_else(v5, &v42, &v63);
                                v87 = 0;
                                v86 = *(&v59 as &i128);
                                v89 = 0;
                                v88 = *(&v39 as &i128);
                                v54 = v149;
                                v90 = core::option::Option<T>::filter(a3);
                                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v92, a4, a5);
                                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v94, a6, a7);
                                v96 = <alloc::string::String as core::clone::Clone>::clone(v3);
                                v150 = v6;
                                v47 = *((v150 + 16) as &i64);
                                v46 = *(v150 as &i128);
                                v151 = v20;
                                v11 = *((v151 + 32) as &i128);
                                v9 = *((v151 + 16) as &i128);
                                v7 = *(v151 as &i128);
                                v24 = 0;
                                v22 = *(&v49 as &i128);
                                v152 = a1;
                                v153 = *((v152 + 48) as &i64);
                                v154 = *((v152 + 56) as &i64);
                                v155 = *((v152 + 64) as &i64);
                                v64 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(*((v45 + 80) as &i64), *((v45 + 88) as &i64));
                                *(&v2[136] as &u64) = v71;
                                *(&v2[120] as &u128) = v64.field_0;
                                *(&v2[632] as &i64) = 0;
                                v2[616] = v86;
                                v2[640] = v88;
                                *(&v2[656] as &i64) = 0;
                                *(&v2[144] as &i128) = v90 as i128;
                                *(&v2[160] as &u64) = v91;
                                *(&v65 as void*) = v92;
                                v71 = v93;
                                v75 = v95;
                                v72 = v94;
                                *(&v76 as &i128) = *(&v96.vec.buf.inner.cap as &i128);
                                v79 = v97;
                                *(&v2[688] as &u64) = v47;
                                *(&v2[672] as &u128) = v46;
                                *(&v2[712] as &u64) = v44;
                                *(&v2[696] as &u128) = v42;
                                memcpy(v2 + 168, &v99, 328);
                                v82 = v62;
                                v80 = *(&v61.inner.inner.inner.buf.inner.cap as &i128);
                                *(&v2[600] as &u128) = v11;
                                *(&v2[584] as &u128) = v9;
                                *(&v2[568] as &u128) = v7;
                                *(&v2[736] as &i64) = 0;
                                *(&v2[720] as &u128) = v22;
                                v156 = v65;
                                *(&v2[64] as &i128) = *(&v79 as &i128);
                                *(v2) = v156;
                                v157 = *(&v71 as &i128);
                                v158 = (&v72)[8] as i128;
                                v159 = v76 as i128;
                                *(&v2[80] as &i128) = *((&v80 as &char + 8) as &i128);
                                v2[48] = v159;
                                v2[32] = v158;
                                v2[16] = v157;
                                *(&v2[96] as &u64) = v153;
                                *(&v2[104] as &u64) = v154;
                                *(&v2[112] as &u64) = v155;
                                v160 = *((a8 + 16) as &i128);
                                v161 = *((a8 + 32) as &i128);
                                v162 = *((a8 + 48) as &i128);
                                *(&v2[496] as &i128) = *(a8 as &i128);
                                *(&v2[0x200] as &u128) = v160;
                                v2[528] = v161;
                                v2[544] = v162;
                                *(&v2[560] as &i64) = *((a8 + 64) as &i64);
                                *(&v2[664] as &u64) = v54;
                                return;
                            }
                        } while (!just::attribute_set::AttributeSet::contains(*(v103 as &i64) + 232, 1));
                        if v5 {
                            break;
                        }
                        if _ccall(14, 24, atomic_fetch_add(*(v103 as &i64)) as u64 + 1, 0, (v5 < 0) as u8 as u64) as char {
                            [D] Unsupported jumpkind Ijk_NoDecode at address 6640567()
                        }
                    }
                    v163 = 160 + *(v103 as &i64);
                    v64 = struct24 {
                        field_0: 9223372036854775835
                        field_8: just::token::Token::lexeme(v163)
                        field_16: v103
                    };
                    v7 = just::token::Token::error(v163, &v64);
                    v2[72] = v15;
                    v2[56] = v14;
                    v2[40] = v12;
                    v2[24] = v10;
                    *(&v2[8] as &i128) = *(&v7.field_0 as &i128);
                    *(v2 as &i64) = 0x8000000000000000;
                }
            }
            goto LABEL_0x654645;
        }
        v115 = v114;
        v116 = v114 + 128;
        v4 = just::token::Token::lexeme(v116);
        v3 = v103;
        if !(v1 & 1) && alloc::collections::btree::map::BTreeMap<K,V,A>::get(v39, v40, v4, v3) {
            v64 = struct24 {
                field_0: 9223372036854775839
                field_8: v4
                field_16: v3
            };
            v7 = just::token::Token::error(v116, &v64);
        }
        v117 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v39, v40, v4, v3);
        v118 = *((v115 + 200) as &i32);
        if core::option::Option<T>::map_or(v117, v118) {
            v119 = *((v115 + 204) as &i8);
            v120 = *((v115 + 205) as &i8);
            v33 = *((v116 + 64) as &i64);
            v121 = *(v116 as &i128);
            v122 = *((v116 + 16) as &i128);
            v123 = *((v116 + 32) as &i128);
            v31 = *((v116 + 48) as &i128);
            v28 = v123;
            v25 = v122;
            v22 = v121;
            <just::expression::Expression as core::clone::Clone>::clone(&v8, v115);
            v64 = struct207 {
                field_0: v8
                field_16: v10
                field_32: v12
                field_48: v14
                field_64: v15
                field_80: v17
                field_96: v18
                field_112: v19 as i128
                field_128: v22 as i128
                field_144: v25
                field_160: v28
                field_176: v31
                field_192: v33
                field_200: v118
                field_204: v119
                field_205: v120
                field_206: *((v115 + 206) as &i8)
            };
            just::table::Table<V>::insert(&v39, &v64);
        }
    } while (!hashbrown::map::HashMap<K,V,S,A>::get_inner(v20, v4, v3));
    v64 = struct24 {
        field_0: 9223372036854775842
        field_8: v4
        field_16: v3
    };
    v7 = just::token::Token::error(v116, &v64);
    v2[72] = v15;
    v2[56] = v14;
    v2[40] = v12;
    v2[24] = v10;
    v2[8] = v8;
    *(v2 as &i64) = 0x8000000000000000;
    return;
}
