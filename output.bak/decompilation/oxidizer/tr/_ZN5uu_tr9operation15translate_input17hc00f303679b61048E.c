fn uu_tr::operation::translate_input(a0: &u64, a1: u64, a2: &struct48) -> u64 {
    let v0: void*;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: void*;  // [sp-0x78]
    let v3: void*;  // [sp-0x70], Other Possible Types: struct8
    let v4: u64;  // [sp-0x68]
    let v5: void*;  // [sp-0x60]
    let v6: u64;  // [sp-0x58]
    let v7: u64;  // [sp-0x50]
    let v8: struct24;  // [sp-0x48]
    let v10: u64;  // rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    loop {
        v6 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a0, 10, &v0);
        v7 = v10;
        if !(!v6) || !(v10) {
            break;
        }
        v8 = struct24 {
            field_0: v1
            field_8: v2 + v8
            field_16: a2
        };
        v3 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v8);
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v4, v5));
        v2 = 0;
        v5 = 0;
    }
    return;
}
