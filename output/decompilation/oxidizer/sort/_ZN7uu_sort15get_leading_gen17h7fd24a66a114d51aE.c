fn uu_sort::get_leading_gen(a0: u64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: void*;  // [bp-0x88], Other Possible Types: struct32, struct16
    let v2: struct16;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: &str;  // [bp-0x78]
    let v5: &str;  // [bp-0x68]
    let v6: &str;  // [bp-0x58]
    let v7: struct24;  // [bp-0x48]
    let v9: i64;  // r15
    let v10: i64;  // rdx
    let v11: std::path::PathBuf;  // rax
    let v13: i64;  // r13
    let v14: core::option::Option<&str>;  // rax
    let v15: i64;  // rax
    let v16: u32;  // edx
    let v17: u8;  // bl
    let v18: u8;  // r13b
    let v19: u32;  // edx
    let v20: core::slice::iter::Iter<u8>;  // rax
    let v21: u32;  // eax
    let v22: i64;  // rax

    v9 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = a1 - v10;
    v1 = 0;
    v3 = 3;
    v4 = "inf";
    v5 = "-inf";
    v6 = "nan";
    v11 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v1);
    if v11 {
        do {
            v13 = v10;
            if v13 {
                if v13 < v10 {
                    if *((v9 + v13) as &i8) <= 191 {
                        continue;
                    }
                } else {
                    if v13 != v10 {
                        continue;
                    }
                }
            }
            v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v13, v9, v10) as u64;
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v14, v10, v11, v13) {
                return v0;
            }
            v11 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v1);
        } while (v11);
    }
    v7 = struct24 {
        field_0: v9
        field_8: v9 + v10
        field_16: 0
    };
    v1 = itertools::peek_nth::peek_nth(&v7);
    v15 = itertools::peek_nth::PeekNth<I>::peek_nth(&v1, 0);
    if v15 && (*((v15 + 8) as &i32) == 45 || *((v15 + 8) as &i32) == 43) {
        v1 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
    }
    v1 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
    if v10 as u32 == 0x110000 {
        return v0;
    }
    do {
        v19 = v10 as u32;
        if v19 - 48 < 10 {
            continue;
        }
        if v19 == 46 {
            if !(v17 & 1) {
                v17 = 1;
                if !(v18 & 1) {
                    continue;
                }
            }
            break;
        }
        if (v19 & -33) != 69 || (v18 & 1) {
            return v0;
        }
        v20 = itertools::peek_nth::PeekNth<I>::peek_nth(&v1, 0);
        if !v20 {
            break;
        }
        v21 = *((v20 + 8) as &i32);
        if v21 != 45 && v21 != 43 {
            v18 = 1;
            if v21 - 48 < 10 {
                continue;
            }
            break;
        }
        v22 = itertools::peek_nth::PeekNth<I>::peek_nth(&v1, 2);
        if !v22 || *((v22 + 8) as &i32) - 48 > 9 {
            break;
        }
        v2 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
        v2 = <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next();
    } while (v16 != 0x110000);
    return v0;
}
