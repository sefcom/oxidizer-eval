fn uu_pr::open(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i256;  // [sp-0xe8], Other Possible Types: Result<struct32, struct32>
    let v1: Result<struct176, struct16>;  // [sp-0xc8], Other Possible Types: i1408
    let v3: i128;  // xmm0

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        return struct24 {
            field_0: 9223372036854775813
            field_8:             alloc::boxed::Box<T>::new(std::io::stdio::stdin())
            field_16: &g_709430
        };
    }
    v1 = std::fs::metadata(a1, a2);
    match v1 {
        Err(_) => {
            uu_pr::open::{{closure}}(a0, a1, a2, *((&v1 as &char + 8) as &i64));
            return struct24 {
                field_0: 9223372036854775813
                field_8:                 alloc::boxed::Box<T>::new(std::io::stdio::stdin())
                field_16: &g_709430
            };
        },
        Ok(_) => {
            v0 = uu_pr::open::{{closure}}(a1, a2, *((&v1 as &char + 56) as &i32) as u32 as u64);
            v3 = v0;
            *((a0 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
            *(a0 as &i128) = v3;
            return struct24 {
                field_0: 9223372036854775813
                field_8:                 alloc::boxed::Box<T>::new(std::io::stdio::stdin())
                field_16: &g_709430
            };
        },
    }
}
