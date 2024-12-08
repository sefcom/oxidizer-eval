fn uu_od::odfunc(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [sp-0xe1]
    let v1: i64;  // [sp-0xe0]
    let v2: i64;  // [sp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8]
    let v5: i128;  // [bp-0xc0]
    let v6: i128;  // [bp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i128;  // [sp-0x98]
    let v9: i64;  // [sp-0x80]
    let v10: i64;  // [sp-0x78]
    let v11: i64;  // [sp-0x70]
    let v12: i64;  // [sp-0x68]
    let v13: struct25;  // [sp-0x50], Other Possible Types: i200
    let v15: i64;  // r14
    let v16: i64;  // rbp
    let v17: i64;  // 4096
    let v18: i256;  // ymm0
    let v19: i256;  // ymm1
    let v20: i128;  // xmm0
    let v21: i256;  // ymm0
    let v22: i128;  // xmm1
    let v23: i64;  // r13
    let v25: i64;  // r14
    let v26: i64;  // rdx
    let v28: i64;  // rsi
    let v29: i64;  // rbx
    let v30: i64;  // rsi

    v9 = 0;
    v10 = 1;
    v11 = 0;
    v15 = *((a2 + 24) as &i64);
    v12 = *((a2 + 40) as &i64);
    v0 = *((a2 + 48) as &i8);
    v16 = 0;
    loop {
        v13 = uu_od::inputdecoder::InputDecoder<I>::peek_read(a1, v17, a3, a4, a5);
        if *((&v13 as &char + 24) as &i8) == 3 {
            v1 = v13;
            v6 = uucore::util_name();
            v7 = v26;
            eprint!("{:?}: ", &v6);
            eprintln!("{:?}", &v1);
            uu_od::inputoffset::InputOffset::print_final_offset(a0, v30, v26);
            v29 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            return v29;
        }
        v20 = v13;
        v21 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
        v22 = *((&v13 as &char + 16) as &i128);
        v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
        v6 = v20;
        v8 = v22;
        v23 = v7;
        if !v23 {
            uu_od::inputoffset::InputOffset::print_final_offset(a0, v28, v26);
            v29 = (!<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*((a1 + 24) as &i64)) as i8 ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v29;
        }
        if v23 != v15 {
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(&v6, v23, v25);
        } else if v0 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(uu_od::inputdecoder::MemoryDecoder::get_buffer(&v6, 0), v26, v10, v11) as i8 {
            uu_od::inputdecoder::MemoryDecoder::clone_buffer(&v6, &v9);
        } else if !(v16 & 1) {
            v2 = "*\n";
            v3 = 1;
            v4 = 8;
            v21 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v5 = 0;
            std::io::stdio::_print(&v2);
            v16 = v16 | -0x100 | 1;
            goto LABEL_475d02;
        }
        uu_od::inputoffset::InputOffset::format_byte_offset(&v2, a0);
        uu_od::print_bytes(v3, v4, &v6, a2);
        v16 = 0;
LABEL_475d02:
        *((a0 + 16) as &i64) = *((a0 + 16) as &i64) + v23;
        if *(a0 as &i64) {
            *(a0 as &i64) = 1;
            *((a0 + 8) as &i64) = *((a0 + 8) as &i64) + v23;
        }
    }
}
