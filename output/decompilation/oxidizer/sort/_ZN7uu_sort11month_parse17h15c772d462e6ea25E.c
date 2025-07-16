fn uu_sort::month_parse(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v3: i64;  // rax
    let v4: void*;  // rcx
    let v6: i64;  // rax
    let v8: u64;  // rcx
    let v9: i64;  // rdi
    let v11: &str;  // rax:rdx

    v11 = core::str::<impl str>::trim_matches();
    v0 = "JAN";
    v1 = &g_5fff40;
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v3 {
        do {
            v4 = *((v3 + 8) as &i64);
            if v4 {
                if v4 < v11.length {
                    if *((v11.data_ptr + v4) as &i8) <= 191 {
                        continue;
                    }
                } else {
                    if !(v4 == v11.length) {
                        continue;
                    }
                }
                v6 = v11.data_ptr;
            }
            v8 = v4;
            v9 = v6;
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v9, v4, *(v3 as &i64), v8) as i8 {
                return *((v3 + 16) as &i8);
            }
        } while ((v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v3));
    }
    return 0;
}
