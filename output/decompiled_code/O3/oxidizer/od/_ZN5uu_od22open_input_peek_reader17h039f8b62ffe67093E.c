fn uu_od::open_input_peek_reader(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x40], Other Possible Types: struct24

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a1 + a2 * 24);
    uu_od::multifilereader::MultifileReader::new(a0 + 16, &v0);
    return struct48 {
        field_0: a4
        field_8: a5
        field_64: <UNKNOWN>
        field_72: <UNKNOWN>
        field_80: <UNKNOWN>
        field_88: <UNKNOWN>
    };
}
