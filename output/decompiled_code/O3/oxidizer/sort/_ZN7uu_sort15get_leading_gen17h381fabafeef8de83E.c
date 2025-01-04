fn uu_sort::get_leading_gen(a0: u64, a1: u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x88], Other Possible Types: struct16
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x68], Other Possible Types: struct24
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x58]
    let v7: i64;  // [sp-0x50]
    let v8: struct24;  // [bp-0x48]
    let v10: i64;  // r12
    let v11: i64;  // rax
    let v12: struct8;  // rax
    let v14: i64;  // rsi
    let v15: i64;  // r13
    let v16: i64;  // rsi
    let v18: i32;  // eax
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: struct8;  // rax
    let v24: i32;  // eax
    let v25: struct8;  // rax
    let v26: i64;  // rdx

    v10 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = &g_42f9e3;
    v1 = 3;
    v2 = &g_42435c;
    v3 = 4;
    v4 = &g_42f9e6;
    v5 = 3;
    v6 = 0;
    v7 = 3;
    if !v10 {
        while (<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0)) {
            if !v26 {
                core::str::slice_error_fail(); /* do not return */
            } else if v26 == v26 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    } else {
        loop {
            v11 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v11 {
                break;
            }
            if v26 {
                if v26 < v26 {
                    if *((v10 + v26) as &i8) <= 191 {
                        continue;
                    }
                } else {
                    if !(v26 == v26) {
                        continue;
                    }
                }
            }
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v26, v11, v26) as i8 {
                goto LABEL_5243d8;
            }
        }
    }
    v8 = struct24 {
        field_0: v10
        field_8: v10 + v26
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::fuse(&v8);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v12 = itertools::peek_nth::PeekNth<I>::peek_nth(None);
    if v12 && (*((v12 + 8) as &i32) == 45 || *((v12 + 8) as &i32) == 43) {
        v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v14, v26);
    }
    v15 = 0;
    loop {
        v18 = v15;
        do {
            v15 = v18;
            do {
                v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v16, v21);
                if v26 == 0x110000 {
LABEL_5243d8:
                    return a1 - v26;
                }
            } while (!(v26 == v26));
            v18 = v22 | -0x100 | 1;
        } while ((1 & !(v15 & 255 & 255) & v26 == 46));
        if !((1 & (v26 & -33) == 69)) || !((v23 = itertools::peek_nth::PeekNth<I>::peek_nth(None), v23)) {
LABEL_5243c8:
            goto LABEL_5243d8;
        } else {
            v24 = *((v23 + 8) as &i32);
            if v24 != 45 && v24 != 43 {
                if v24 - 48 < 10 {
                    continue;
                }
                goto LABEL_5243c8;
            } else {
                v25 = itertools::peek_nth::PeekNth<I>::peek_nth(0x2);
                if !(v26 == v26) {
                    goto LABEL_5243c8;
                }
                v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v14, v26);
            }
        }
    }
}
