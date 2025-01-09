fn uu_split::custom_write_all(a0: &struct9, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v1: u64;  // rax
    let v3: u64;  // rax

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, a1, a2);
    if !v1 {
        *(&a0->field_0 as &i16) = 0x100;
        v3 = v1;
        return v3;
    }
    return struct2 {
        field_0: 0
    };
    a0->field_8 = v1;
    a0->field_0 = 1;
    v3 = uu_split::ignorable_io_error(v1, a4);
    return v3;
}
