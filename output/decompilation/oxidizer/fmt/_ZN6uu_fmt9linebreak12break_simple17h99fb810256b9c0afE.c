fn uu_fmt::linebreak::break_simple(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u128;  // [bp-0x28]
    let v1: struct9;  // [bp-0x18]
    let v3: i64;  // rdi
    let v4: u64;  // rax

    v0 = struct16 {
        field_0: a0
        field_8: a1
    };
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v0, *((a2 + 32) as &i64), a2);
    if v1.field_8 == 2 {
        return v1.field_0;
    }
    v3 = *((a2 + 24) as &i64);
    v4 = *((v3 + 16) as &i64);
    if *(v3 as &i64) - v4 <= 1 {
        return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v3, "\n");
    }
    *((*((v3 + 8) as &i64) + v4) as &i8) = 10;
    *((v3 + 16) as &u64) = v4 + 1;
    return 0;
}
