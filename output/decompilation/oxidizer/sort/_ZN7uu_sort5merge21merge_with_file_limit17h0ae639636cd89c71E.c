fn uu_sort::merge::merge_with_file_limit(a0: &struct48, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [bp-0x338]
    let v1: void*;  // [bp-0x328], Other Possible Types: struct96, struct48, u64
    let v2: struct56;  // [bp-0x328]
    let v3: struct56;  // [bp-0x328]
    let v5: u64;  // [bp-0x320]
    let v6: i8;  // [bp-0x318]
    let v7: u64;  // [bp-0x310]
    let v8: u64;  // [bp-0x300]
    let v9: struct144;  // [bp-0x2f8]
    let v10: struct144;  // [bp-0x2f8]
    let v11: struct120;  // [bp-0x2f0]
    let v12: struct16;  // [bp-0x2e0]
    let v13: u64;  // [bp-0x2d0]
    let v14: void*;  // [bp-0x2c8], Other Possible Types: struct16
    let v15: u64;  // [bp-0x2c0]
    let v16: void*;  // [sp-0x2b8]
    let v17: u64;  // [bp-0x2a0]
    let v18: struct32;  // [bp-0x2a0]
    let v20: struct36;  // [bp-0x298]
    let v21: struct144;  // [bp-0x290]
    let v22: u128;  // [bp-0x288]
    let v24: u128;  // [bp-0x278]
    let v25: u64;  // [bp-0x270]
    let v26: u128;  // [bp-0x268]
    let v30: u128;  // [bp-0x258]
    let v31: u128;  // [bp-0x248]
    let v32: void*;  // [bp-0x230]
    let v33: struct16;  // [bp-0x230]
    let v35: u64;  // [bp-0x228]
    let v36: void*;  // [bp-0x220]
    let v37: Result<struct16, struct9>;  // [sp-0x218]
    let v38: struct32;  // [bp-0x218]
    let v39: struct36;  // [sp-0x210]
    let v40: Result<struct16, struct9>;  // [sp-0x208]
    let v41: u128;  // [bp-0x200]
    let v43: u128;  // [bp-0x1f0]
    let v45: u128;  // [bp-0x1e0]
    let v47: u128;  // [bp-0x1d0]
    let v49: u64;  // [sp-0x1c0]
    let v50: struct24;  // [bp-0x1b8]
    let v51: u64;  // [bp-0x1b0]
    let v52: struct32;  // [bp-0x1a8]
    let v53: u64;  // [bp-0x198]
    let v54: u64;  // [bp-0x190]
    let v55: void*;  // [bp-0x188]
    let v56: struct24;  // [bp-0x180]
    let v58: struct32;  // [bp-0x150]
    let v60: u8;  // [bp-0x110]
    let v61: u64;  // [bp-0x108]
    let v62: u64;  // [bp-0x100]
    let v63: u128;  // [bp-0xf8]
    let v64: u128;  // [bp-0xe8]
    let v65: u128;  // [bp-0xd8]
    let v66: u128;  // [bp-0xc8]
    let v67: u64;  // [bp-0xb8]
    let v68: struct96;  // [bp-0xb0]
    let v69: struct8;  // [bp-0x50]
    let v71: i64;  // rbp
    let v72: u64;  // rax
    let v73: u64;  // r12
    let v74: i64;  // rax
    let v75: u256;  // ymm0
    let v76: u256;  // ymm0
    let v77: u64;  // rbp
    let v78: iNone;  // xmm0
    let v79: iNone;  // xmm1
    let v80: iNone;  // xmm2
    let v81: iNone;  // xmm0
    let v82: struct144;  // rbp
    let v83: u128;  // xmm0
    let v84: u256;  // ymm0
    let v85: iNone;  // xmm0
    let v86: iNone;  // xmm0
    let v87: iNone;  // xmm1
    let v88: iNone;  // xmm2
    let v89: iNone;  // xmm0
    let v90: iNone;  // xmm1
    let v102: u64;  // rax
    let v103: iNone;  // xmm0
    let v105: i64;  // rax
    let v106: u128;  // xmm0
    let v107: iNone;  // xmm1
    let v108: struct36;  // r13, Other Possible Types: u64
    let v115: struct36;  // [bp-0x1b8]

    v71 = a1;
    v72 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(*((a0 + 8) as &i64), *((a0 + 24) as &i64));
    v0 = a1;
    if v72 > *((a1 + 112) as &i64) {
        v53 = a1 + 112;
        v32 = 0;
        v35 = 8;
        v36 = 0;
        v14 = 0;
        v15 = 8;
        v16 = 0;
        v74 = a0;
        v76 = v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v74 as &i128);
        v31 = *((v74 + 32) as &i128);
        v30 = *((v74 + 16) as &i128);
        v26 = *(v74 as &i128);
        v54 = 9223372036854775809;
        loop {
            do {
                v69 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v26);
                if v69.field_0 == 9223372036854775809 {
                    vvar_1087{stack -536} = struct32 OrderedDict([(0, 𝜙@64b [((5004271, None), vvar_821{stack -536}), ((5004848, None), vvar_1004{stack -536})]), (16, 𝜙@64b [((5004271, None), vvar_823{stack -520}), ((5004848, None), vvar_1006{stack -520})])])
                    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v38, &v33);
                    v102 = alloc::boxed::Box<T>::new();
                    v103 = *(&v38.field_0 as &i128);
                    v1 = struct48 {
                        field_0: v103
                        field_16: v38.field_16
                        field_32: v102
                        field_40: &g_58c790
                    };
                    return uu_sort::merge::merge_with_file_limit(&v1, v71, a2, a3);
                }
                v14 = alloc::vec::Vec<T,A>::push(&v69);
            } while (0 < v73);
            v55 = 0;
            if v55 != v73 {
                v1 = 0;
                core::panicking::assert_failed(0, &v55, v53, &v1, "src/uu/sort/src/merge.rs"); /* do not return */
            }
            v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
            uu_sort::merge::merge_without_limit(&v1, &v18, v0);
            v108 = v5;
            v77 = *(&v6 as &i64);
            if v1 == 3 {
                break;
            }
            v49 = v13;
            v78 = *(&v7 as &i128);
            v79 = *(&v8 as &i128);
            v80 = v11.field_0;
            v47 = *(&v12.field_0 as &i128);
            *(&v45 as void*) = v80;
            *(&v43 as void*) = v79;
            *(&v41 as void*) = v78;
            v37 = v1;
            v39 = v108;
            v40 = v77;
            v14 = 0;
            v15 = 8;
            v16 = 0;
            v115 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
            if v51 == 0x8000000000000000 {
                break;
            }
            v81 = v52;
            v58 = struct32 {
                field_0: *(&v115.field_0 as &i64)
                field_8: v51
                field_16: v81
            };
            v2 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v58);
            v108 = v5;
            v82 = v2.field_16;
            if v2.field_0 as i64 == 0x8000000000000000 {
                break;
            }
            v83 = *(&v2.field_24 as &i128);
            v24 = *(&v8 as &i128);
            v22 = v83;
            v17 = v2.field_0;
            v20 = v108;
            v21 = v82;
            v84 = (((v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v47 as &char + 8) as &i128);
            v85 = *((&v45 as &char + 8) as &i128);
            v86 = v37 as i128;
            v87 = v40 as i128;
            v88 = *((&v41 as &char + 8) as &i128);
            v1 = struct96 {
                field_0: v86
                field_16: v87
                field_32: v88
                field_48: *((&v43 as &char + 8) as &i128)
                field_64: v85
                field_80: *((&v47 as &char + 8) as &i128)
            };
            v108 = uu_sort::merge::FileMerger::write_all_to(&v1, v0, <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v17));
            if v108 {
                break;
            }
            v89 = *(&v17 as &i128);
            v76 = ((v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 as u256;
            v90 = v21.field_0;
            v3 = struct56 {
                field_0: v89
                field_16: v90
                field_32: *((&v22 as &char + 8) as &i128)
                field_48: v25
            };
            v50 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v3);
            v108 = v51;
            if v50.field_0 == 0x8000000000000000 {
                break;
            }
            v56 = struct24 {
                field_0: v50.field_0
                field_8: v108
                field_16: v50.field_16
            };
            v33 = alloc::vec::Vec<T,A>::push(&v56, "src/uu/sort/src/merge.rs");
            v9 = v10;
        }
    } else {
        v105 = a0;
        v106 = *(v105 as &i128);
        v107 = *((v105 + 16) as &i128);
        v1 = struct48 {
            field_0: v106
            field_16: v107
            field_32: *((v105 + 32) as &i128)
        };
        uu_sort::merge::merge_without_limit(&v60, &v1, a1);
        v108 = v61;
        if v60 != 3 {
            v68 = struct96 {
                field_0: v60
                field_8: v108
                field_16: v62
                field_24: v63
                field_40: v64
                field_56: v65
                field_72: v66
                field_88: v67
            };
            v68 = struct96 {
                field_0: v60
                field_8: v108
                field_16: v62
                field_24: v63
                field_40: v64
                field_56: v65
                field_72: v66
                field_88: v67
            };
            return uu_sort::merge::FileMerger::write_all(&v68, v0, a2);
        }
    }
    return v108;
}
