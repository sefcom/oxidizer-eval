fn uu_base32::base_common::fast_encode::fast_encode(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [sp-0xe8]
    let v4: i64;  // [sp-0xe0]
    let v5: i64;  // [sp-0xd0]
    let v6: i64;  // [sp-0xc8]
    let v7: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v8: struct8;  // [sp-0xa8], Other Possible Types: i64
    let v9: i64;  // [sp-0xa0]
    let v10: i128;  // [sp-0x98]
    let v11: i64;  // [sp-0x88]
    let v12: i64;  // [sp-0x80]
    let v13: i128;  // [sp-0x78]
    let v14: struct28;  // [bp-0x68]
    let v15: i8;  // [bp-0x48]
    let v18: i64;  // rcx
    let v19: i64;  // r15
    let v20: i64;  // r15
    let v21: i64;  // cc_ndep
    let v22: i64;  // rcx
    let v23: i64;  // r13
    let v24: i64;  // rbp
    let v25: i64;  // rdx
    let v26: i64;  // rdi
    let v27: i64;  // rsi
    let v28: i64;  // rdx
    let v29: i64;  // rax
    let v31: i64;  // rax
    let v32: struct8;  // rax
    let v33: struct8;  // rax

    v18 = a3;
    v6 = a1;
    v5 = a3;
    v19 = *((a3 + 48) as &i64)();
    v20 = v19 * 0x400;
    if amd64g_calculate_condition(4, 32, v19 << 10, v19 << 9, v21) as char {
        core::panicking::panic(); /* do not return */
    }
    if !a4 {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = 76;
    } else if !a5 {
        v0 = 0x8000000000000000;
    } else {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = a5;
    }
    v7 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem();
    v22 = *((&v7 as &char + 16) as &i64);
    if !v22 {
        core::panicking::panic(); /* do not return */
    }
    v8 = 0;
    v10 = 0;
    v9 = 1;
    v11 = 0;
    v13 = 0;
    v12 = 1;
    v23 = *(a0 as &i64);
    v24 = *((a0 + 8) as &i64);
    v4 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/base32/src/base_common.rs";
    loop {
        v25 = *((&v7 as &char + 8) as &i64);
        v26 = v23;
        v27 = v24;
        if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v23, v24, *((&v7 as &char + 8) as &i64), v22) {
            uu_base32::base_common::format_read_error(&v15, std::io::error::Error::kind(v28) as i32);
            v14 = struct28 {
                field_0: v15
                field_16: v16
                field_24: 1
            };
            v31 = alloc::boxed::Box<T>::new(&v14);
            break;
        }
        if !v28 {
            v8 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous();
            v31 = *((v5 + 40) as &i64)();
            if !(!v31) {
                goto LABEL_47441a;
            }
            v33 = uu_base32::base_common::fast_encode::write_to_output(&v11, &v6, &g_547530, 1);
            if !v33 {
                return 0;
            }
            v31 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
            goto LABEL_474417;
        }
        v29 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v28, *((&v7 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64));
        if v20 - *((&v10 as &char + 8) as &i64) > v28 {
            v8 = <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v29, v29 + v28);
            if *((&v10 as &char + 8) as &i64) >= v20 {
                v4 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/base32/src/base_common.rs";
                core::panicking::panic(); /* do not return */
            }
            goto LABEL_474270;
        }
        v31 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(a2, v5, v20, v20 - *((&v10 as &char + 8) as &i64), v29, v28, &v11, &v8);
        if v31 {
LABEL_47441a:
            break;
        } else {
            if *((&v10 as &char + 8) as &i64) >= v20 {
                core::panicking::panic(); /* do not return */
            }
            v32 = uu_base32::base_common::fast_encode::write_to_output(&v11, &v6, &g_547530, 0);
            if !v32 {
LABEL_474270:
                v22 = *((&v7 as &char + 16) as &i64);
            } else {
                v31 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
LABEL_474417:
                goto LABEL_47441a;
            }
        }
    }
    return v31;
}
