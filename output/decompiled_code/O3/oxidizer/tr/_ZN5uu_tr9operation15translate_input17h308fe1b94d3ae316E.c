fn uu_tr::operation::translate_input(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x90]
    let v1: i64;  // [sp-0x88]
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78], Other Possible Types: Enum
    let v4: i64;  // [sp-0x70]
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x58]
    let v8: i64;  // [sp-0x50]
    let v9: i192;  // [bp-0x48]
    let v11: i64;  // rdx
    let v12: i64;  // rsi
    let v13: i64;  // rbx
    let v14: i64;  // r15
    let v15: i64;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    loop {
        v7 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a0);
        v8 = v11;
        if !(!v7) || !(v11) {
            break;
        }
        v9 = v1;
        v3 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v9, v11);
        v12 = v4;
        v13 = v5;
        v14 = *((a1 + 16) as &i64);
        if *(a1 as &i64) - v14 > v13 {
            memcpy(*((a1 + 8) as &i64) + v14, v12, v13);
            *((a1 + 16) as &i64) = v14 + v13;
        } else {
            v15 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v12, v13);
            if v15 {
                v6 = v15;
                core::result::unwrap_failed(); /* do not return */
            }
        }
        v2 = 0;
        v5 = 0;
    }
}
