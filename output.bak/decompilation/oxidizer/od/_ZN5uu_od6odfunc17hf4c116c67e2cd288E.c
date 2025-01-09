fn uu_od::odfunc(a0: i64, a1: i64, a2: i64) -> u32 {
    let v0: i8;  // [sp-0xe1]
    let v1: i64;  // [sp-0xe0]
    let v2: i8;  // [bp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8]
    let v5: i64;  // [bp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i128;  // [sp-0x98]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: struct25;  // [sp-0x50], Other Possible Types: i200
    let v14: i64;  // r14
    let v15: i64;  // rbp
    let v16: i256;  // ymm0
    let v17: i256;  // ymm1
    let v18: i128;  // xmm0
    let v19: i256;  // ymm0
    let v20: i128;  // xmm1
    let v21: i64;  // r13
    let v22: i64;  // rdx
    let v23: i64;  // r14
    let v24: i64;  // rdx
    let v25: i64;  // rbx

    v8 = 0;
    v9 = 1;
    v10 = 0;
    v14 = *((a2 + 24) as &i64);
    v11 = *((a2 + 40) as &i64);
    v0 = *((a2 + 48) as &i8);
    v15 = 0;
    loop {
        v12 = uu_od::inputdecoder::InputDecoder<I>::peek_read(a1);
        if *((&v12 as &char + 24) as &i8) == 3 {
            v1 = v12;
            v5 = uucore::util_name();
            v6 = v24;
            eprint!("{:?}: ", &v5);
            eprintln!("{:?}", &v1);
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            v25 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
            return v25;
        }
        v18 = v12;
        v19 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
        v20 = *((&v12 as &char + 16) as &i128);
        v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
        v5 = v18;
        v7 = v20;
        v21 = v6;
        if !v21 {
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            v25 = (!<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*((a1 + 24) as &i64)) as i8 ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from());
            return v25;
        }
        if v21 != v14 {
            v22 = v11 + v21;
            if v14 <= v22 {
                v23 = v14;
            } else {
                v23 = v22;
            }
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(&v5, v21, v23);
        } else if v0 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(uu_od::inputdecoder::MemoryDecoder::get_buffer(&v5, 0), v24, v9, v10) as i8 {
            uu_od::inputdecoder::MemoryDecoder::clone_buffer(&v5, &v8);
        } else {
            v3 = v3;
            v4 = v4;
            if !(v15 & 1) {
                v19 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                println!("*");
                v15 = v15 | -0x100 | 1;
                v3 = v3;
                v4 = v4;
                goto LABEL_476ec2;
            }
        }
        uu_od::inputoffset::InputOffset::format_byte_offset(&v2, a0);
        uu_od::print_bytes(v3, v4, &v5, a2);
        v15 = 0;
        v3 = v3;
        v4 = v4;
LABEL_476ec2:
        v4 = v4;
        v3 = v3;
        *((a0 + 16) as &i64) = *((a0 + 16) as &i64) + v21;
        if *(a0 as &i64) {
            *(a0 as &i64) = 1;
            *((a0 + 8) as &i64) = *((a0 + 8) as &i64) + v21;
        }
    }
}
