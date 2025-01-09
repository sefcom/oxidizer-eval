fn uu_sort::get_leading_gen(a0: u64, a1: u64) -> u64 {
    let v0: struct16;  // [sp-0x88], Other Possible Types: i64
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x68], Other Possible Types: struct24
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x58]
    let v7: i64;  // [sp-0x50]
    let v8: struct24;  // [bp-0x48]
    let v10: i64;  // r12
    let v12: i64;  // rax
    let v13: i64;  // r13
    let v14: struct8;  // rax
    let v16: i64;  // r13
    let v17: i32;  // eax
    let v18: i64;  // rax
    let v19: struct8;  // rax
    let v20: i32;  // eax
    let v21: struct8;  // rax
    let v22: i64;  // rdx

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
            v13 = 0;
            if !v22 {
                core::str::slice_error_fail(0, v22, 0, v13, "src/uu/sort/src/sort.rs"); /* do not return */
            } else if v22 == v22 {
                core::str::slice_error_fail(0, v22, 0, v13, "src/uu/sort/src/sort.rs"); /* do not return */
            }
        }
    } else {
        loop {
            v12 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v12 {
                break;
            }
            if v22 {
                if v22 >= v22 {
                    if !(v22 == v22) {
                        continue;
                    }
                } else {
                    if *((v10 + v22) as &i8) <= 191 {
                        continue;
                    }
                }
            }
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v22, v12, v22) as i8 {
                goto LABEL_5243d8;
            }
        }
    }
    v8 = struct24 {
        field_0: v10
        field_8: v10 + v22
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::fuse(&v8);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v14 = itertools::peek_nth::PeekNth<I>::peek_nth(None);
    if v14 && (*((v14 + 8) as &i32) == 45 || *((v14 + 8) as &i32) == 43) {
        v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
    }
    v16 = 0;
    loop {
        v17 = v16;
        do {
            v16 = v17;
            do {
                v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
                if v22 == 0x110000 {
LABEL_5243d8:
                    return a1 - v22;
                }
            } while (!(v22 == v22));
            v17 = v18 | -0x100 | 1;
        } while ((1 & !(v16 & 255 & 255) & v22 == 46));
        if !((1 & (v22 & -33) == 69)) || !((v19 = itertools::peek_nth::PeekNth<I>::peek_nth(None), v19)) {
LABEL_5243c8:
            goto LABEL_5243d8;
        } else {
            v20 = *((v19 + 8) as &i32);
            if v20 != 45 && v20 != 43 {
                if v20 - 48 < 10 {
                    continue;
                }
                goto LABEL_5243c8;
            } else {
                v21 = itertools::peek_nth::PeekNth<I>::peek_nth(0x2);
                if !(v22 == v22) {
                    goto LABEL_5243c8;
                }
                v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
            }
        }
    }
}
