fn uu_mktemp::Params::from(a1: &struct80) -> Result<struct80, struct40> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x1a8], Other Possible Types: u128
    let v1: void*;  // [bp-0x1a8], Other Possible Types: struct24
    let v2: u64;  // [bp-0x1a0]
    let v3: void*;  // [bp-0x198], Other Possible Types: u64
    let v4: u64;  // [bp-0x188]
    let v5: u64;  // [bp-0x180]
    let v6: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x178], Other Possible Types: struct16, struct24, u128
    let v7: struct24;  // [bp-0x178]
    let v8: u32;  // [bp-0x178]
    let v9: u32;  // [bp-0x178]
    let v10: struct24;  // [bp-0x178]
    let v11: void*;  // [bp-0x170], Other Possible Types: u64
    let v12: void*;  // [bp-0x170]
    let v13: void*;  // [bp-0x168], Other Possible Types: u64
    let v14: u128;  // [bp-0x160]
    let v15: void*;  // [bp-0x150]
    let v16: iNone;  // [bp-0x148]
    let v17: u64;  // [bp-0x138]
    let v18: u64;  // [bp-0x128]
    let v19: u64;  // [bp-0x120]
    let v20: u64;  // [bp-0x118]
    let v21: u64;  // [bp-0x110]
    let v22: void*;  // [bp-0x108]
    let v23: u64;  // [bp-0x100]
    let v24: u128;  // [bp-0xf8]
    let v25: u64;  // [bp-0xf0]
    let v26: u64;  // [bp-0xe8]
    let v27: iNone;  // [bp-0xd8]
    let v28: u64;  // [bp-0xd0]
    let v29: u64;  // [bp-0xc8]
    let v30: u128;  // [bp-0xb8]
    let v31: void*;  // [bp-0xa8]
    let v32: struct24;  // [bp-0xa0]
    let v33: u64;  // [bp-0x98]
    let v34: void*;  // [bp-0x90]
    let v35: void*;  // [bp-0x88]
    let v36: u128;  // [bp-0x80]
    let v38: u64;  // [bp-0x70]
    let v39: u64;  // [bp-0x68]
    let v40: void*;  // [bp-0x60]
    let v41: alloc::string::String;  // [bp-0x58], Other Possible Types: struct24
    let v42: u64;  // [bp-0x50]
    let v43: u64;  // [bp-0x48]
    let v44: u64;  // [bp-0x40]
    let v45: u64;  // [bp-0x38]
    let v47: u64;  // rbp
    let v48: u64;  // rdx
    let v49: u64;  // rdx
    let v50: u64;  // r14
    let v52: u64;  // rcx
    let v53: u64;  // rdi
    let v54: u64;  // r13
    let v55: core::option::Option<&str>;  // rax
    let v56: &u8;  // r12
    let v57: u64;  // rdx
    let v58: u64;  // rax
    let v59: u64;  // r14
    let v60: void*;  // r12
    let v62: u64;  // rax
    let v63: u64;  // rcx
    let v64: void*;  // rdx
    let v65: u64;  // rax
    let v66: u64;  // rax
    let v67: void*;  // rax
    let v69: u64;  // rax
    let v70: &mut [u8];  // rax:rdx
    let v71: &mut [u8];  // rax:rdx
    let v72: u64;  // [bp-0x178]

    v5 = a1 + 48;
    v19 = *((a1 + 48) as &i64);
    v47 = *((a1 + 8) as &i64);
    v48 = *((a1 + 16) as &i64);
    v49 = v48;
    if !((((0 ^ *((a1 + 48) as &i64)) & (0 ^ -(*((a1 + 48) as &i64)))) >> 63) as char) {
        v8 = 0;
        v50 = v48;
        v71 = core::char::methods::encode_utf8_raw(88, &v8, v48);
        v49 = v50;
        if !core::slice::<impl [T]>::ends_with(v47, v49, v71.data_ptr, v52) {
            return struct40 {
                field_0: 0x8000000000000000
                field_8: 9223372036854775809
                field_16: *(a1 as &i128)
                field_32: *((a1 + 16) as &i64)
            };
        }
    }
    v4 = v49;
    v41 = uu_mktemp::find_last_contiguous_block_of_xs(v47, v49);
    if v41.field_0 as i32 == 1 {
        v53 = v42;
        v18 = v43;
        v26 = *((a1 + 40) as &i64);
        v24 = *((a1 + 24) as &i128);
        v54 = v24;
        if v54 != 0x8000000000000000 {
            v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v25, v26);
            v0 = *(&v6.field_8 as &i128);
            if v6.field_0 != 0x8000000000000000 {
                v21 = v0;
                v20 = v6.field_0;
            }
        }
        v23 = v53;
        v55 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v53, v47, v4) as u64;
        v56 = v55;
        v7 = std::path::Path::join(v21, v22, v55, v57);
        v0 = *(&v7.field_8 as &i128);
        v32 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
        if (!*((a1 + 75) as &i8) || !<char as core::str::pattern::Pattern>::is_contained_in(v56 as u8, v57, v57)) && (v54 == 0x8000000000000000 || !std::path::Path::is_absolute(v56, v57)) {
            v59 = v33;
            v60 = v34;
            v9 = 0;
            v70 = core::char::methods::encode_utf8_raw(47, &v9, v57);
            if core::slice::<impl [T]>::ends_with(v59, v60, v70.data_ptr, v52) {
                v31 = v34;
                v30 = *(&v32.field_0 as &i128);
                v62 = 1;
                v63 = 0;
                v64 = 0;
            } else {
                v65 = std::path::Path::parent(v59, v60);
                if v65 {
                    v6 = struct16 {
                        field_0: v65
                        field_8: v57
                    };
                    v0 = <T as alloc::string::SpecToString>::spec_to_string(&v6);
                    v11 = v12;
                } else {
                    v1 = 0;
                    v2 = 1;
                    v3 = 0;
                }
                v66 = std::path::Path::file_name(v59, v60);
                if v66 {
                    v6 = core::str::converts::from_utf8(v66, v57);
                    match v6 {
                        Err(_) => {
                            core::option::unwrap_failed(); /* do not return */
                        },
                        Ok(_) => {
                            v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, v13);
                            v63 = v10.field_0;
                            v62 = v11;
                            v64 = v13;
                        },
                    }
                }
                v31 = v3;
                v30 = *(&v0.field_0 as &i128);
            }
            v38 = v63;
            v39 = v62;
            v40 = v64;
            if v19 != 0x8000000000000000 {
                v67 = v19;
                v36 = *((a1 + 56) as &i128);
            }
            v35 = v67;
            v44 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v18, v47, v4) as u64;
            v45 = v57;
            v41 = format!("{}{}", &v44, &v35);
            *(&v27 as &i128) = *(&v41.vec.buf.inner.cap as &i128);
            v29 = v43;
            if !<char as core::str::pattern::Pattern>::is_contained_in(v28, v43, v57) {
                v13 = v31;
                v6 = v30;
                v15 = v40;
                v14 = *(&v38 as &i128);
                v17 = v29;
                v16 = v27 as i128;
                return Ok(struct80 {
                    field_0: v30
                    field_16: *(&v13 as &i128)
                    field_32: 0
                    field_40: v15
                    field_48: v16
                    field_64: v29
                    field_72: v18 - v23
                });
            }
            return struct40 {
                field_0: 0x8000000000000000
                field_8: 9223372036854775812
                field_16: v27 as i128
                field_32: v29
            };
        }
        return struct40 {
            field_0: 0x8000000000000000
            field_8: v58
            field_16: *(a1 as &i128)
            field_32: *((a1 + 16) as &i64)
        };
    } else {
        if v19 == 0x8000000000000000 {
            v3 = *((a1 + 16) as &i64);
            v0 = *(a1 as &i128);
        } else {
            v69 = v4;
            v11 = v47 + v69;
            v13 = v69;
            v1 = core::iter::traits::iterator::Iterator::collect(&v72);
        }
        return struct40 {
            field_0: 0x8000000000000000
            field_8: 9223372036854775810
            field_16: *(&v1.field_0 as &i128)
            field_32: v3
        };
    }
}
