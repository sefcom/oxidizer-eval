fn forc_tx::Command::try_parse_from_args(a1: i64) -> Option<struct256> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x438]
    let v1: core::iter::adapters::peekable::Peekable<core::str::iter::Bytes>;  // [bp-0x430], Other Possible Types: struct24, u64
    let v2: struct24;  // [bp-0x430], Other Possible Types: u64
    let v3: u64;  // [bp-0x428]
    let v4: u64;  // [bp-0x420]
    let v5: u64;  // [bp-0x418]
    let v6: u128;  // [bp-0x410]
    let v7: u64;  // [bp-0x400]
    let v8: alloc::string::String;  // [bp-0x3f8]
    let v9: void*;  // [bp-0x3f0]
    let v10: u32;  // [bp-0x3e8]
    let v11: iNone;  // [bp-0x3d8], Other Possible Types: alloc::string::String
    let v12: u64;  // [bp-0x3c8]
    let v13: iNone;  // [bp-0x3b8], Other Possible Types: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, u128
    let v14: iNone;  // [bp-0x3b8]
    let v15: u64;  // [bp-0x3a8]
    let v16: u64;  // [bp-0x3a8]
    let v17: u64;  // [bp-0x398]
    let v18: u64;  // [bp-0x390]
    let v19: core::option::Option<alloc::string::String>;  // [bp-0x390]
    let v20: u128;  // [bp-0x388]
    let v21: u64;  // [bp-0x380]
    let v22: iNone;  // [bp-0x378]
    let v23: struct24;  // [bp-0x368], Other Possible Types: struct32, u128
    let v24: Result<struct256, struct16>;  // [bp-0x368]
    let v25: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>;  // [bp-0x368], Other Possible Types: struct56
    let v26: struct56;  // [bp-0x368]
    let v27: iNone;  // [bp-0x367]
    let v28: u32;  // [bp-0x364]
    let v29: u64;  // [bp-0x360]
    let v30: u64;  // [bp-0x358]
    let v31: u128;  // [bp-0x350]
    let v32: u64;  // [bp-0x340]
    let v33: u128;  // [bp-0x330]
    let v34: iNone;  // [bp-0x320]
    let v35: u8;  // [bp-0x260]
    let v36: u64;  // [bp-0x240]
    let v37: iNone;  // [bp-0x238]
    let v38: iNone;  // [bp-0x228]
    let v39: iNone;  // [bp-0x218]
    let v40: u8;  // [bp-0x208]
    let v41: struct80;  // [bp-0x140]
    let v42: u32;  // [bp-0x13f]
    let v43: u32;  // [bp-0x13c]
    let v44: struct24;  // [bp-0xf0]
    let v45: iNone;  // [bp-0xd8]
    let v46: iNone;  // [bp-0xc8]
    let v47: u8;  // [bp-0xb8]
    let v49: u64;  // rdx
    let v50: iNone;  // xmm0
    let v51: u256;  // ymm0
    let v52: u256;  // ymm0
    let v53: i64;  // r13
    let v54: i64;  // r15
    let v55: iNone;  // xmm0
    let v56: i64;  // r12
    let v57: u256;  // ymm0
    let v58: iNone;  // xmm0
    let v59: u64;  // rax
    let v60: u8;  // al
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm1
    let v63: iNone;  // xmm0
    let v64: iNone;  // xmm1
    let v65: i64;  // rdx
    let v66: iNone;  // xmm0

    v23 = core::iter::traits::iterator::Iterator::map(a1);
    v1 = core::iter::traits::iterator::Iterator::peekable(&v23, v49);
    v24 = clap_builder::derive::Parser::try_parse_from(&v1);
    match v24 {
        Err(_) => {
            *(&v0[8] as &i64) = 0x8000000000000000;
            *(&v0[16] as &u64) = v29;
            *(v0 as &i64) = 2;
        },
        Ok(_) => {
            v22 = *((&v24 as &char + 8) as &i128);
            v38 = *((&v24 as &char + 24) as &i128);
            v39 = *((&v24 as &char + 40) as &i128);
            memcpy(&v40, &v24 as u8, 200);
            v36 = v24 as i64;
            v50 = v22;
            v52 = ((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v24 as &char + 8) as &i128) as u128 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v24 as &char + 24) as &i128) as u128 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u256;
            v37 = v50;
            v53 = &v24;
            v54 = &v35;
            v17 = 9223372036854775810;
            loop {
                v2 = 9223372036854775809;
                if v1 == 9223372036854775809 {
                    v19 = <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v5);
                    if let None = v19 {
                        goto LABEL_52914e;
                    }
                } else {
                    v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v3 as &i128) as u128 as u256;
                    v20 = *(&v3 as &i128) as u128;
                    v18 = v1;
                    if v1 == 0x8000000000000000 {
LABEL_52914e:
                        v1 = core::option::Option<T>::get_or_insert_with(&v5);
                        if v1.field_0 == 0x8000000000000000 {
                            memcpy(a0, &v36, 0x100);
                        } else {
                            v2 = core::option::Option<T>::get_or_insert_with(&v5);
                            core::option::unwrap(v2);
                            v11 = <alloc::string::String as core::clone::Clone>::clone(&v2);
                            v61 = *(&v2.field_0 as &i128);
                            v62 = *((&v2.field_8 as &char + 8) as &i128);
                            v25 = struct56 {
                                field_0: v61
                                field_16: v62
                                field_32: v6
                                field_48: v7
                            };
                            core::iter::traits::iterator::Iterator::collect(&v13, &v25);
                            v23 = *(&v11.vec.buf.inner.cap as &i128) as u128;
                            v30 = v12;
                            v31 = v13;
                            v32 = v15;
                            *(&v0[40] as &i64) = *((&v31 as &char + 8) as &i64);
                            *(&v0[48] as &u64) = v32;
                            *(&v0[24] as &u64) = v30;
                            *(&v0[32] as &i64) = v31 as i64;
                            *(&v0[8] as &i128) = *(&v11.vec.buf.inner.cap as &i128);
                            *(v0 as &i64) = 2;
                            break;
                        }
                    }
                }
                v55 = v19 as i128;
                v8 = alloc::string::String {
                    vec: alloc::vec::Vec<u8, alloc::alloc::Global> {
                        buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                            inner: alloc::raw_vec::RawVecInner<alloc::alloc::Global> {
                                cap: core::num::niche_types::UsizeNoHighBit {
                                    __0: v55
                                }
                                ptr: core::ptr::unique::Unique<u8> {
                                    pointer: core::ptr::non_null::NonNull<u8> {
                                        pointer: <UNKNOWN>
                                    }
                                    _marker: core::marker::PhantomData<u8> { }
                                }
                                alloc: alloc::alloc::Global { }
                            }
                            _marker: core::marker::PhantomData<u8> { }
                        }
                        len: v21
                    }
                };
                v56 = v53;
                <alloc::string::String as core::clone::Clone>::clone(v53, &v8);
                v57 = (v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as i128 as u128 as u256;
                v13 = v25;
                core::iter::traits::iterator::Iterator::chain(v54, &v13, &v2);
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "input") as u8 {
                    v53 = v56;
                    clap_builder::derive::Parser::try_parse_from(v56, v54);
                    if v24 as i64 != v17 {
                        v22 = *(&v29 as &i128);
                        v45 = *((&v24 as &char + 24) as &i128);
                        v46 = *((&v24 as &char + 40) as &i128);
                        memcpy(&v47, &v24 as u8, 136);
                        v58 = v22;
                        v52 = ((v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v29 as &i128) as u128 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v24 as &char + 24) as &i128) as u128 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u256;
                        v44 = struct24 {
                            field_0: v24 as i64
                            field_8: v58
                        };
                        forc_tx::Command::try_parse_from_args::push_input(v53, &v36, &v44);
                        v54 = &v35;
                        v59 = v24 as i64;
                        if v59 == 9223372036854775813 {
                            goto LABEL_528ee0;
                        }
                        v65 = a0;
                        *(&v0[48] as &u64) = v32;
                        v66 = *(&v29 as &i128);
                        *(&v0[32] as &i128) = *((&v24 as &char + 24) as &i128);
                        v0[16] = v66;
                        *(&v0[8] as &u64) = v59;
                        goto LABEL_5293e9;
                    } else {
                        v65 = a0;
                        *(&v0[8] as &i64) = 9223372036854775809;
                        *(&v0[16] as &u64) = v29;
                        goto LABEL_5293e9;
                    }
                } else {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "output") as u8 {
                        v23 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, v10);
                        v12 = v30;
                        v11 = *(&v23.field_0 as &i128);
                        v63 = *(&v2 as &i128);
                        v64 = *(&v4 as &i128);
                        v26 = struct56 {
                            field_0: v63
                            field_16: v64
                            field_32: v6
                            field_48: v7
                        };
                        core::iter::traits::iterator::Iterator::collect(&v13, &v26);
                        *(&v23 as void*) = v11;
                        v30 = v12;
                        *(&v31 as &core::option::Option<core::char::EscapeDebug>) = v13.inner.frontiter;
                        v32 = v16;
                        *(&v0[40] as &i64) = *((&v31 as &char + 8) as &i64);
                        *(&v0[48] as &u64) = v32;
                        *(&v0[24] as &u64) = v30;
                        *(&v0[32] as &i64) = v31 as i64;
                        v0[8] = v11;
                        *(v0 as &i64) = 2;
                        return;
                    }
                    v53 = v56;
                    v54 = &v35;
                    clap_builder::derive::Parser::try_parse_from(v56, &v35);
                    v60 = v24 as i8;
                    if v60 != 5 {
                        v43 = v28;
                        v42 = v27 as i32 as u32;
                        v52 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v29 as &i128) as u128 as u256;
                        v41 = struct80 {
                            field_0: v60
                            padding_1: <UNKNOWN>
                            field_8: *(&v29 as &i128)
                            field_24: *((&v24 as &char + 24) as &i128)
                            field_40: *((&v24 as &char + 40) as &i128)
                            field_56: v33
                            field_72: v34 as i64
                        };
                        forc_tx::Command::try_parse_from_args::push_output(&v36, &v41);
LABEL_528ee0:
                        v1 = v2;
                        v15 = v16;
                        v13 = v14;
                    } else {
                        v65 = a0;
                        *(&v0[8] as &u64) = v17;
                        *(&v0[16] as &u64) = v29;
LABEL_5293e9:
                        *(v65 as &i64) = 2;
                    }
                }
            }
        },
    }
    return;
}
