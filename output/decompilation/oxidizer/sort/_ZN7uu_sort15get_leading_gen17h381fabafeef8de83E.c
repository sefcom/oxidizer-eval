fn uu_sort::get_leading_gen(a0: i64, a1: i64) -> long long {
    let v0: core::option::Option<&str>;  // [bp-0x88], Other Possible Types: struct32, struct16
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: struct24;  // [bp-0x68], Other Possible Types: u64
    let v5: u64;  // [bp-0x60]
    let v6: void*;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: struct24;  // [bp-0x48]
    let v10: i64;  // r12
    let v11: u64;  // rax
    let v12: i64;  // rax
    let v13: void*;  // r13
    let v16: i64;  // rax
    let v17: u32;  // eax
    let v18: struct25;  // rax
    let v19: i64;  // rdx

    v10 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = &g_42f9e3;
    v1 = 3;
    v2 = &g_42435c;
    v3 = 4;
    v4 = &g_42f9e6;
    v5 = 3;
    v6 = 0;
    v7 = 3;
    if v10 {
        loop {
            v11 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v11 {
                break;
            }
            if v19 {
                if v19 < v19 {
                    if *((v10 + v19) as &i8) <= 191 {
                        continue;
                    }
                } else {
                    if !(v19 == v19) {
                        continue;
                    }
                }
            }
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v19, v11, v19) as i8 {
                return a1 - v19;
            }
        }
    } else {
        do { } while (<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0));
    }
    v8 = struct24 {
        field_0: v10
        field_8: v10 + v19
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::fuse(&v8);
    v0 = struct32 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v12 = itertools::peek_nth::PeekNth<I>::peek_nth(&v0, 0);
    if v12 && (*((v12 + 8) as &i32) == 45 || *((v12 + 8) as &i32) == 43) {
        v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
    }
    loop {
        v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
        if v19 as u32 == 0x110000 {
            break;
        }
        if !(v19 as u32 - 48 >= 10 && !(1 & !(v13 & 255) & v19 as u32 == 46)) {
            continue;
        }
        if !(1 & (v19 as u32 & -33) == 69) || !((v16 = itertools::peek_nth::PeekNth<I>::peek_nth(&v0, 0), v16)) {
            break;
        }
        v17 = *((v16 + 8) as &i32);
        if v17 == 45 || v17 == 43 {
            v18 = itertools::peek_nth::PeekNth<I>::peek_nth(&v0, 2);
            if !v18 || *((v18 + 8) as &i32) - 48 > 9 {
                break;
            }
            v0 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
        } else if v17 - 48 >= 10 {
            break;
        }
    }
    return a1 - v19;
}
