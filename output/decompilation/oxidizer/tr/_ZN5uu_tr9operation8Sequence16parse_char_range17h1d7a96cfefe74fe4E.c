fn uu_tr::operation::Sequence::parse_char_range(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u8;  // [bp-0x30]
    let v1: i8;  // [bp-0x28]
    let v2: i8;  // [bp-0x20]
    let v3: u8;  // [bp-0x18]
    let v4: u8;  // [bp-0x17]
    let v6: u64;  // r14
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rcx
    let v10: void*;  // r14
    let v11: struct32;  // xmm0
    let v12: u64;  // r14

    v6 = 1;
    v7 = <nom::internal::And<F,G> as nom::internal::Parser<I>>::process(&v0, "-", a1, a2);
    if *(&v0 as &i32) != 3 {
        v11 = *(&v0 as &i128);
        return struct40 {
            field_0: v12
            field_8: v11
            field_24: *(&v2 as &i128)
        };
    }
    v8 = v3;
    v9 = v4;
    *((a0 + 8) as &i128) = *(&v1 as &i128);
    *((a0 + 24) as &u32) = ((v8 & 255) <= (v9 & 255)) * 2 + 10;
    *((a0 + 28) as &u32) = v9;
    *((a0 + 32) as &i32) = (v8 > v9 ? v8 & 255 : (v8 & 255) * 0x100 + (v9 & 255) * 0x10000 + 1);
    v10 = 0;
}
