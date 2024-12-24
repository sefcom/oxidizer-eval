fn uu_sort::get_leading_gen(a0: u32, a1: u32, a2: u32) -> u64 {
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
    let v11: i64;  // rax
    let v12: struct8;  // rax
    let v14: i64;  // rsi
    let v15: i64;  // rdx
    let v16: struct8;  // rax
    let v17: i32;  // eax
    let v18: struct8;  // rax
    let v19: i64;  // rsi
    let v20: i64;  // rdx
    let v21: i64;  // rdx

    v10 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = &g_42f892;
    v1 = 3;
    v2 = &g_42425c;
    v3 = 4;
    v4 = &g_42f895;
    v5 = 3;
    v6 = 0;
    v7 = 3;
    if !v10 {
        while (<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0)) {
            if !v21 {
                core::str::slice_error_fail(); /* do not return */
            } else if v21 == v21 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    } else {
        loop {
            v11 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v11 {
                break;
            }
            if v21 {
                if v21 >= v21 {
                    if !(v21 == v21) {
                        continue;
                    }
                } else {
                    if *((v10 + v21) as &i8) <= 191 {
                        continue;
                    }
                }
            }
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v21, v11, v21) as i8 {
                return a1 - v21;
            }
        }
    }
    v8 = struct24 {
        field_0: v10
        field_8: v10 + v21
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::fuse(&v8);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v12 = itertools::peek_nth::PeekNth<I>::peek_nth(0);
    if v12 && (*((v12 + 8) as &i32) == 45 || *((v12 + 8) as &i32) == 43) {
        v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v14, v21);
    }
    v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v14, v15);
    if v21 - 48 < 10 {
        continue;
    }
    switch (v21) {
    case 46:
        if false {
            return a1 - v21;
        }
        break;
    case 69: case 101:
        v16 = itertools::peek_nth::PeekNth<I>::peek_nth(0);
        if !v16 {
            return a1 - v21;
        }
        v17 = *((v16 + 8) as &i32);
        if v17 != 45 && v17 != 43 {
            if v17 - 48 >= 10 {
                return a1 - v21;
            }
LABEL_523426:
            loop {
                v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v19, v20);
                if v21 as u32 == 0x110000 {
                    break;
                }
                v20 = v21 as u32 - 48;
                if v20 >= 10 {
                    return a1 - v21;
                }
            }
        } else {
            v18 = itertools::peek_nth::PeekNth<I>::peek_nth(2);
            if !v18 {
                return a1 - v21;
            }
            if *((v18 + 8) as &i32) - 48 <= 9 {
                v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v14, v21);
                goto LABEL_523426;
            }
        }
    default:
        return a1 - v21;
    }
    return a1 - v21;
}
