fn uu_od::parse_formats::parse_format_flags(a0: i320, a1: void*, a2: u64) -> int {
    let v0: u64;  // [bp-0x2c8]
    let v1: i64;  // [bp-0x1a0]
    let v2: iNone;  // [bp-0x198]
    let v3: struct24;  // [bp-0x198]
    let v4: Option<struct32>;  // [bp-0x198]
    let v5: void*;  // [bp-0x188]
    let v6: void*;  // [bp-0x178], Other Possible Types: struct8, u64
    let v7: struct8;  // [bp-0x178]
    let v8: struct16;  // [bp-0x178]
    let v9: struct8;  // [bp-0x178]
    let v10: struct16;  // [bp-0x178]
    let v11: u64;  // [bp-0x170]
    let v12: void*;  // [bp-0x168]
    let v13: u64;  // [bp-0x160]
    let v14: struct24;  // [bp-0x160]
    let v15: u64;  // [bp-0x158]
    let v17: u64;  // [bp-0x150]
    let v18: struct24;  // [bp-0x148], Other Possible Types: struct25, struct33, unsigned long, u64
    let v19: struct33;  // [bp-0x148], Other Possible Types: u64
    let v20: u64;  // [bp-0x148]
    let v21: u32;  // [bp-0x148]
    let v23: void*;  // [bp-0x138]
    let v24: void*;  // [bp-0x138]
    let v25: void*;  // [bp-0x118]
    let v26: u64;  // [bp-0x110]
    let v27: u64;  // [bp-0x108]
    let v28: u64;  // [bp-0x108]
    let v29: void*;  // [bp-0x100]
    let v30: u64;  // [bp-0xf8]
    let v31: void*;  // [bp-0xf0]
    let v32: struct24;  // [bp-0xe8]
    let v33: struct24;  // [bp-0xc8]
    let v34: struct24;  // [bp-0xa8]
    let v36: struct32;  // [bp-0x70]
    let v37: struct32;  // [bp-0x50]
    let v39: i64;  // r15
    let v40: u64;  // rsi
    let v41: core::fmt::Arguments;  // r14
    let v42: i64;  // rbx
    let v43: void*;  // rbp
    let v47: u64;  // rsi
    let v48: u32;  // edx
    let v49: u32;  // eax
    let v50: u64;  // rcx
    let v52: struct40;  // rcx
    let v53: iNone;  // xmm0
    let v54: core::option::Option<u32>;  // rax:rax
    let v55: &mut [u8];  // rax:rdx

    v6 = 0;
    v11 = 8;
    v12 = 0;
    v25 = a1;
    v26 = a1 + a2 * 24;
    v28 = 1;
    loop {
        v28 = v27;
        if !v40 {
            v43 = v25;
            if v43 == v26 {
                break;
            }
        } else {
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v25, v40);
            if !v43 {
                break;
            }
        }
        v28 = v27;
        if (v41 as u8 & 1) {
            uu_od::parse_formats::parse_type_string(&v19, v43[8] as i64, v43[16] as i64);
            v2 = *(v39 as &i128);
            v5 = *((v39 + 16) as &i64);
            if v18 == 1 {
                v52 = a0;
                *((v1 + 24) as &void*) = v5;
                *((v52 + 8) as void*) = v2;
                *(v52 as &i64) = 1;
                return;
            }
            v32 = v3;
            <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v42, &v32);
            v7 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(v42);
            v40 = v28;
        } else if core::slice::<impl [T]>::starts_with(v43[8] as i64, v43[16] as i64, "--") {
            if v43[16] as i64 == 2 {
                break;
            }
            v19 = v19;
            v18 = v18;
            v23 = v23;
            if core::slice::<impl [T]>::starts_with(v43[8] as i64, v43[16] as i64, "--format=") {
                v18 = struct25 {
                    field_0: 1
                    field_8: v43[8] as i64
                    field_16: v43[16] as i64 + v43[8] as i64
                    field_24: 0
                };
                v14 = core::iter::traits::iterator::Iterator::collect(&v18);
                uu_od::parse_formats::parse_type_string(&v18, v15, v47);
                v2 = *(v39 as &i128);
                v5 = *((v39 + 16) as &i64);
                if v18.field_0 as i32 == 1 {
                    *((v1 + 24) as &void*) = v5;
                    *((v1 + 8) as void*) = v2;
                    *(v1 as &i64) = 1;
                    return;
                }
                v33 = v3;
                v36 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v33);
                v6 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v36);
                v19 = v20;
                v18 = v20;
                v23 = v24;
            }
            v23 = v23;
            v18 = v18;
            v19 = v19;
            v41 = (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v43[8] as i64, v43[16] as i64, "--format") ? 1 : v41 & 4294967295);
            v40 = v28;
        } else {
            v21 = 0;
            v55 = core::char::methods::encode_utf8_raw(45, &v21, a2);
            v18 = v20;
            if core::slice::<impl [T]>::starts_with(v43[8] as i64, v43[16] as i64, v55.data_ptr, 1) {
                v29 = 0;
                v30 = 1;
                v31 = 0;
                v13 = v43[8] as i64;
                v15 = v43[16] as i64 + v43[8] as i64;
                v47 = 1;
                v18 = v20;
                loop {
                    v47 = v17;
                    if v47 && <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v13, v47) {
                        break;
                    }
                    v47 = v17;
                    v54 = core::str::validations::next_code_point(&v13) as u128;
                    if !(v54 as u8 & 1) || v48 == 0x110000 {
                        break;
                    }
                    if (v41 as u8 & 1) {
                        v49 = alloc::string::String::push(&v29, v48) & -0x100 | v41 as u32 & 255;
                        goto LABEL_469bad;
                    }
                    v50 = v48 - 65;
                    if v50 <= 54 {
                        if v50 == 51 {
                            goto LABEL_469bad;
                        }
                        v0 = 18016597533007873;
                        if (*((&v0 + ((v50 & 63) >> 3)) as &i8) >> (v50 & 63 & 7) & 1) {
                            break;
                        }
                    }
                    v4 = uu_od::parse_formats::od_argument_traditional_format(v48);
                    if let Some(_) = v4 {
                        v19 = struct33 {
                            field_0: v4 as i128
                            field_16: *((&v4 as &char + 16) as &i128)
                            field_32: 0
                        };
                        v8 = alloc::vec::Vec<T,A>::push(&v19, "src/uu/od/src/parse_formats.rs");
                    }
LABEL_469bad:
                }
                if v31 {
                    uu_od::parse_formats::parse_type_string(&v18, 1, v31);
                    v2 = *(v39 as &i128);
                    v5 = *((v39 + 16) as &i64);
                    if v20 == 1 {
                        *((v1 + 24) as &void*) = v5;
                        *((v1 + 8) as void*) = v2;
                        *(v1 as &i64) = 1;
                        return;
                    }
                    v34 = v3;
                    v37 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v34);
                    v9 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v37);
                }
                v18 = v18;
            }
            v19 = v18;
            v40 = v28;
        }
    }
    if (v41 as u8 & 1) {
        v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing format specification after '--format' / '-t'");
        v52 = a0;
        *((v1 + 24) as &void*) = v23;
        *((v52 + 8) as void*) = v53;
        *(v52 as &i64) = 1;
        return;
    }
    if !v12 {
        v18 = struct33 {
            field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E.field_0
            field_16: g_503b88.field_0
            field_32: 0
        };
        v10 = alloc::vec::Vec<T,A>::push(&v18, "src/uu/od/src/parse_formats.rs");
    }
    *((v1 + 24) as &void*) = v12;
    *((v1 + 8) as &i128) = *(&v6 as &i128);
    *(v1 as &i64) = 0;
    return;
}
