fn uu_tr::operation::translate_input(a0: i64, a1: i64, a2: &struct48) -> u64 {
    let v0: void*;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: void*;  // [sp-0x68]
    let v3: void*;  // [sp-0x60], Other Possible Types: struct8
    let v4: u64;  // [bp-0x58]
    let v5: void*;  // [bp-0x50]
    let v6: struct24;  // [bp-0x48]
    let v10: void*;  // rax
    let v11: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    loop {
        v11 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a0, 10, &v0);
        if (v11 as i64 & 1) || !*((&v11 as &char + 8) as &i64) {
            break;
        }
        v6 = struct24 {
            field_0: v1
            field_8: 0 + v1
            field_16: a2
        };
        v3 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v6);
        v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, 1, 0));
        if v10 {
            break;
        }
    }
    return v10;
}
