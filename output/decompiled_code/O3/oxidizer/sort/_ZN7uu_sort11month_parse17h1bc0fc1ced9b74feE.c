fn uu_sort::month_parse(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v3: &u8;  // rbx
    let v4: struct8;  // rax
    let v5: u64;  // rdx
    let v6: void*;  // rcx
    let v8: &u8;  // rbx
    let v9: u64;  // rdx
    let v12: void*;  // rax

    v3 = core::str::<impl str>::trim_matches(a0, a1);
    v0 = "JAN";
    v1 = &g_5ff418;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v4 {
        do {
            v5 = *(v4 as &i64);
            v6 = *((v4 + 8) as &i64);
            if !v6 {
                v6 = 0;
            } else if v6 < v9 {
                if *((v3 + v6) as &i8) <= 191 {
                    continue;
                }
            } else {
                if (v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v4) {
                    continue;
                }
            }
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, 0, v5, v6) as i8 {
                v12 = *((v4 + 16) as &i8);
                return v12;
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v4));
    }
    return 0;
}
