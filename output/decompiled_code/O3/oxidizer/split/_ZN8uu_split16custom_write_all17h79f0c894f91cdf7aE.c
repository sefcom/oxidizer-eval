fn uu_split::custom_write_all(a0: &struct_0, a1: u32, a2: u32, a3: u64, a4: u64) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rax

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, a1, a2);
    if !v1 {
        v3 = v1;
        return struct2 {
            field_0: 0x100
        };
    }
    v2 = uu_split::ignorable_io_error(v1, a4);
    if !v2 {
        v3 = v2;
        return struct9 {
            field_0: 1
            field_8: <UNKNOWN>
        };
    }
    *(&a0->field_0 as &i16) = 0;
    return;
}
