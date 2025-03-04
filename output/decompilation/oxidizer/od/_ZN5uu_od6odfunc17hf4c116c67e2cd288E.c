fn uu_od::odfunc(a0: &Option<struct16>, a1: &u64, a2: void*) -> u64 {
    let v0: i8;  // [sp-0xe1]
    let v1: i64;  // [sp-0xe0]
    let v2: i8;  // [bp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8]
    let v5: iNone;  // [bp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: iNone;  // [sp-0x98]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: struct25;  // [sp-0x50]
    let v14: i64;  // r14
    let v15: i64;  // rbp
    let v16: iNone;  // ymm1
    let v17: iNone;  // xmm0
    let v18: iNone;  // xmm1
    let v19: i64;  // r13
    let v20: i64;  // rdx
    let v21: i64;  // rdx
    let v22: i64;  // rbx
    let v23: i64;  // rbx
    let v24: iNone;  // ymm0

    v8 = 0;
    v9 = 1;
    v10 = 0;
    v14 = *((a2 + 24) as &i64);
    v11 = *((a2 + 40) as &i64);
    v0 = *((a2 + 48) as &i8);
    v15 = 0;
    loop {
        v12 = uu_od::inputdecoder::InputDecoder<I>::peek_read(a1);
        if v12.field_24 == 3 {
            v1 = v12.field_0;
            v6 = v21;
            show_error!("{}", &v1);
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            return v23;
        }
        v17 = *(&v12.field_0 as &i128);
        v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u256;
        v18 = *(&v12.field_16 as &i128);
        v16 = v16 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u256;
        v5 = v17;
        v7 = v18;
        v19 = v6;
        if !v19 {
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            v22 = (!<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*((a1 + 24) as &i64)) as i8 ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v23;
        }
        if v19 != v14 {
            v20 = v11 + v19;
            if v14 <= v20 {
                v20 = v14;
            }
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(&v5, v19, v20);
        } else if v0 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(uu_od::inputdecoder::MemoryDecoder::get_buffer(&v5, 0), v21, v9, v10) as i8 {
            uu_od::inputdecoder::MemoryDecoder::clone_buffer(&v5, &v8);
        } else if !(v15 as u8 & 1) {
            v24 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            println!("*");
            v15 = v15 & -0x100 | 1;
            goto LABEL_476ec2;
        }
        uu_od::inputoffset::InputOffset::format_byte_offset(&v2, a0);
        uu_od::print_bytes(v3, v4, &v5, a2);
        v15 = 0;
LABEL_476ec2:
        *((a0 + 16) as &unsigned long) = *((a0 + 16) as &i64) + v19;
        if *(a0 as &i64) {
            *(a0 as &i64) = 1;
            *((a0 + 8) as &unsigned long) = *((a0 + 8) as &i64) + v19;
        }
    }
}
