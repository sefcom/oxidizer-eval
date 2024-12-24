fn uu_fmt::linebreak::break_simple(a0: u32, a1: u32, a2: void*) -> u64 {
    let v0: struct16;  // [bp-0x28]
    let v1: i72;  // [sp-0x18], Other Possible Types: struct9
    let v4: i64;  // rdi
    let v5: i64;  // rax

    v0 = struct16 {
        field_0: a0
        field_8: a1
    };
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v0, *((a2 + 32) as &i64), a2);
    if *((&v1 as &char + 8) as &i8) == 2 {
        return v1;
    }
    v4 = *((a2 + 24) as &i64);
    v5 = *((v4 + 16) as &i64);
    if *(v4 as &i64) - v5 > 1 {
        *((*((v4 + 8) as &i64) + v5) as &i8) = 10;
        *((v4 + 16) as &i64) = v5 + 1;
        return 0;
    }
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v4, &g_41e28e, 1);
}
