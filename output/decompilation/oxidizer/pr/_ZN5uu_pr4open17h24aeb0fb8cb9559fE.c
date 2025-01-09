fn uu_pr::open(a0: &Result<struct32, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct32, struct16>;  // [sp-0xe8], Other Possible Types: u256
    let v1: struct16;  // [sp-0xc8], Other Possible Types: u128
    let v2: u8;  // [bp-0x90]
    let v4: u128;  // xmm0

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        *(&a0->field_8 as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        a0->field_24 = &g_709430;
        a0->field_0 = 9223372036854775813;
    }
    v1 = std::fs::metadata(a1, a2);
    if v1 as i32 != 2 {
        v0 = uu_pr::open::{{closure}}(a1, a2, *(&v2 as &i32));
        v4 = v0;
        return Ok(struct32 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i128)
        });
    }
    uu_pr::open::{{closure}}(a0, a1, a2, *((&v1 as &char + 8) as &i64));
}
