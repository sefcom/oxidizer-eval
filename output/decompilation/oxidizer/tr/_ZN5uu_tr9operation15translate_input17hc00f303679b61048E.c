fn uu_tr::operation::translate_input(a0: i64, a1: i64, a2: i64) -> void {
    let v0: void*;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: void*;  // [bp-0x78]
    let v3: struct8;  // [sp-0x70], Other Possible Types: void*
    let v4: u64;  // [bp-0x68]
    let v5: void*;  // [bp-0x60]
    let v6: u64;  // [bp-0x50]
    let v7: u192;  // [bp-0x48]
    let v12: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    loop {
        v12 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a0, 10, &v0);
        v6 = *((&v12 as &char + 8) as &i64);
        if v12 as i64 || !*((&v12 as &char + 8) as &i64) {
            break;
        }
        v7 = struct24 {
            field_0: v1
            field_8: 0 + v1
            field_16: a2
        };
        v3 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v7);
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, 1, 0));
    }
    return;
}
