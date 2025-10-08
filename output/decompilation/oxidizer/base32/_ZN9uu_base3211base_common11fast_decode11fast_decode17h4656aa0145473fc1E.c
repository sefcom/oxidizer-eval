fn uu_base32::base_common::fast_decode::fast_decode(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> u64 {
    let v1: void*;  // [bp-0x1f0]
    let v2: u64;  // [bp-0x1e8]
    let v3: void*;  // [bp-0x1e0]
    let v4: void*;  // [bp-0x1d8]
    let v5: u64;  // [bp-0x1d0]
    let v6: void*;  // [bp-0x1c8]
    let v7: void*;  // [bp-0x1c0], Other Possible Types: struct16
    let v8: u64;  // [bp-0x1b8]
    let v9: void*;  // [bp-0x1b0], Other Possible Types: struct640
    let v10: u64;  // [bp-0x1a8]
    let v11: i64;  // [bp-0x198]
    let v12: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x188]
    let v13: u64;  // [bp-0x180]
    let v14: u64;  // [bp-0x178]
    let v15: u64;  // [bp-0x178]
    let v16: struct16;  // [bp-0x168], Other Possible Types: u64
    let v17: u64;  // [bp-0x168]
    let v18: u128;  // [bp-0x168]
    let v19: u64;  // [bp-0x160]
    let v20: u64;  // [bp-0x158]
    let v21: u32;  // [bp-0x150]
    let v22: u128;  // [bp-0x148]
    let v23: u64;  // [bp-0x138]
    let v24: u8;  // [bp-0x130]
    let v25: void*;  // rax
    let v26: u64;  // r13
    let v27: u64;  // r13
    let v28: u64;  // cc_ndep
    let v29: struct640;  // rdx
    let v30: u64;  // r15
    let v31: u8;  // al
    let v32: i64;  // rax
    let v33: i64;  // r15
    let v34: i64;  // r15
    let v35: struct640;  // rdx
    let v36: alloc::string::String;  // rax
    let v37: u64;  // rcx
    let v39: struct640;  // r12
    let v40: i64;  // r15
    let v41: alloc::string::String;  // rax
    let v42: u64;  // rax
    let v45: u64;  // rax

    v25 = *((a5 + 24) as &i64)(a4) as i64;
    v26 = *((a5 + 56) as &i64)(a4) as i64;
    v27 = v26 * 0x400;
    if _ccall(4, 32, v26 * 0x400, v26 * 0x200, v28) as char {
        core::panicking::panic("assertion failed: decode_in_chunks_of_size > 0"); /* do not return */
    }
    uu_base32::base_common::fast_decode::alphabet_to_table(&v24, v25, v29, a6);
    v12 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(0x98, a2);
    if !v15 {
        core::panicking::panic("assertion failed: !input_buffer.is_empty()"); /* do not return */
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v7 = 0;
    v8 = 1;
    v9 = 0;
    v11 = *((a5 + 32) as &i64);
    v10 = *((a3 + 56) as &i64);
    v14 = v15;
    loop {
        v30 = v14;
        if (*((a1 + 24) as &i64)(a0, v13, v30) as i8 & 1) {
            v31 = std::io::error::Error::kind(v29) as u64;
            if v31 == 35 {
                v16 = v16;
            } else {
                uu_base32::base_common::format_read_error(&v22, v31);
                v21 = 1;
                v18 = v22;
                v20 = v23;
                alloc::boxed::Box<T>::new(&v16);
            }
        } else if v29 {
            v32 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v29, v13, v30, "src/uu/base32/src/base_common.rs");
            v33 = v32;
            v16 = struct16 {
                field_0: v32
                field_8: v32 + v29
            };
            v34 = v33;
            v35 = v29;
            if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v16, &v24) {
                v9 = 0;
                if !!v33 && !!v29 {
                    do {
                        v37 = *(v36 as &i8);
                        if (&v24)[v37] {
                            v7 = alloc::vec::Vec<T,A>::push(v37, "src/uu/base32/src/base_common.rs");
                        }
                    } while (v33 && v33 != v19);
                }
                v34 = 1;
                v35 = v9;
            }
            v39 = v35;
            v40 = v34;
            if v27 - v3 > v39 {
                v1 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v40 as u32);
                v16 = v17;
                if v3 >= v27 {
                    core::panicking::panic("assertion failed: leftover_buffer.len() < decode_in_chunks_of_size"); /* do not return */
                }
            } else {
                uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(a4, v11, v27, (v27 - v3) as u32, v40, v39, &v4, &v1);
                if v41 {
                    break;
                }
                if v3 >= v27 {
                    core::panicking::panic("assertion failed: leftover_buffer.len() < decode_in_chunks_of_size"); /* do not return */
                }
                v42 = uu_base32::base_common::fast_decode::write_to_output(&v4, a2, v10) as u64;
                v16 = v17;
                if v42 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
                }
            }
        } else {
            v11(a4, 1, v3, &v4);
            if !v41 {
                v45 = uu_base32::base_common::fast_decode::write_to_output(&v4, a2, v10) as u64;
                if v45 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45);
                }
            }
        }
        v14 = v15;
    }
    return v41;
}
