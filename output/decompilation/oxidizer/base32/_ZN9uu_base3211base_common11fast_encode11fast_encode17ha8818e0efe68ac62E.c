fn uu_base32::base_common::fast_encode::fast_encode(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a6: i64) -> u64 {
    let v0: u32;  // [bp-0x104]
    let v1: core::fmt::rt::Argument;  // [bp-0x100], Other Possible Types: u64
    let v3: u64;  // [bp-0xf8]
    let v4: i64;  // [bp-0xd0]
    let v5: struct8;  // [bp-0xc0]
    let v6: void*;  // [bp-0xc0]
    let v7: u64;  // [bp-0xb8]
    let v8: u128;  // [bp-0xb0]
    let v9: std::path::PathBuf;  // [bp-0xa8]
    let v10: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xa0]
    let v11: struct64;  // [bp-0x98]
    let v12: struct48;  // [bp-0x90]
    let v13: void*;  // [bp-0x88]
    let v14: u64;  // [bp-0x80]
    let v15: u128;  // [bp-0x78]
    let v16: struct32;  // [bp-0x68]
    let v17: u8;  // [bp-0x48]
    let v18: i8;  // [bp-0x38]
    let v20: u64;  // r13
    let v21: u64;  // r13
    let v22: u64;  // cc_ndep
    let v23: u8;  // r15b
    let v24: struct48;  // rbp
    let v25: u8;  // al
    let v26: u64;  // rax
    let v27: void*;  // rbp
    let v28: u64;  // rax
    let v29: u64;  // rdx
    let v30: void*;  // rax
    let v31: u64;  // rax

    v20 = *((a5 + 48) as &i64)(a4) as i64;
    v21 = v20 * 0x400;
    if _ccall(4, 32, v20 * 0x400, v20 * 0x200, v22) as char {
        core::panicking::panic("assertion failed: encode_in_chunks_of_size > 0"); /* do not return */
    }
    v1 = a3;
    v23 = vvar_6;
    v10 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(0x60, a2);
    v24 = v12;
    if !v12 {
        core::panicking::panic("assertion failed: !input_buffer.is_empty()"); /* do not return */
    }
    v6 = 0;
    v8 = 0;
    v7 = 1;
    v13 = 0;
    v15 = 0;
    v14 = 1;
    v4 = *((a5 + 40) as &i64);
    v1 = *((v1 + 56) as &i64);
    v0 = v23 & !a6;
    loop {
        if (*((a1 + 24) as &i64)(a0, v11, v24) as i8 & 1) {
            v25 = std::io::error::Error::kind(v29) as u64;
            if v25 != 35 {
                uu_base32::base_common::format_read_error(&v17, v25);
                v16 = struct32 {
                    field_0: v17
                    field_16: *(&v18 as &i64)
                    field_24: 1
                };
                v27 = alloc::boxed::Box<T>::new(&v16) as u64;
            }
        } else if v29 {
            v26 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v29, v11, v24, "src/uu/base32/src/base_common.rs");
            if v21 - v9 > v29 {
                v5 = <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v26, v26 + v29, "src/uu/base32/src/base_common.rs");
                if v9 >= v21 {
                    core::panicking::panic("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size"); /* do not return */
                }
            } else {
                v27 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(a4, v4, v21, (v21 - v9) as u32, v26, v29, &v13, &v6);
                if v27 {
                    break;
                }
                if v9 >= v21 {
                    core::panicking::panic("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size"); /* do not return */
                }
                v28 = uu_base32::base_common::fast_encode::write_to_output(&v3, &v13, a2, v1, 0, v0);
                if v28 {
                    v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
                    goto LABEL_46a476;
                }
            }
        } else {
            v27 = v4(a4, alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v6)) as i64;
            if v27 {
                break;
            }
            v31 = uu_base32::base_common::fast_encode::write_to_output(&v3, &v13, a2, v1, 1, v0);
            if !v31 {
                break;
            }
            v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
LABEL_46a476:
            v27 = v30;
            break;
        }
        v24 = v12;
    }
    return v27;
}
