fn uu_sort::month_parse(a0: u64, a1: u64) -> u64 {
    let v0: struct16;  // [bp-0x30]
    let v2: &u8;  // rbx
    let v3: &struct_0;  // rax
    let v4: &struct_0;  // r15
    let v5: u64;  // rdx
    let v6: void*;  // rcx
    let v7: &u8;  // rdi
    let v8: void*;  // rsi
    let v9: u64;  // rdx
    let v10: void*;  // rax

    v2 = core::str::<impl str>::trim_matches(a0, a1);
    v0 = struct16 {
        field_0: "JAN"
        field_8: &g_5fff40
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v3 {
        return 0;
    }
    v4 = v3;
    do {
        v5 = v4->field_0;
        v6 = v4->field_8;
        if !v6 {
            v7 = v2;
            v8 = 0;
            v6 = 0;
        } else {
            if v6 < v9 {
                if *((v2 + v6) as &i8) <= 191 {
                    continue;
                }
            } else {
                if !(v6 == v9) {
                    continue;
                }
            }
            v7 = v2;
            v8 = v6;
        }
        if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v7, v8, v5, v6) as i8 {
            v10 = v4->field_10;
            return v10;
        }
    } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v4));
}
