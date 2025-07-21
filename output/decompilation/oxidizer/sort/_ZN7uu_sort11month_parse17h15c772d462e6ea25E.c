fn uu_sort::month_parse(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x30]
    let v2: i64;  // rax
    let v3: void*;  // rcx
    let v5: i64;  // rax
    let v7: struct24;  // rcx
    let v8: i64;  // rdi
    let v10: &str;  // rax:rdx

    v10 = core::str::<impl str>::trim_matches();
    v0 = struct16 {
        field_0: "JAN"
        field_8: &g_5fff40
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v2 {
        do {
            v3 = *((v2 + 8) as &i64);
            if v3 {
                if v3 < v10.length {
                    if *((v10.data_ptr + v3) as &i8) <= 191 {
                        continue;
                    }
                } else {
                    if !(v3 == v10.length) {
                        continue;
                    }
                }
                v5 = v10.data_ptr;
            }
            v7 = v3;
            v8 = v5;
            if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, v3, *(v2 as &i64), v7) as i8 {
                return *((v2 + 16) as &i8);
            }
        } while ((v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v2));
    }
    return 0;
}
