fn uu_od::odfunc(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0xe1]
    let v2: u64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: u64;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xc8]
    let v8: u64;  // [bp-0xa8]
    let v9: &u8;  // [bp-0xa0], Other Possible Types: u64
    let v10: u128;  // [bp-0x98]
    let v11: struct24;  // [bp-0x80]
    let v12: u64;  // [bp-0x68]
    let v13: u128;  // [bp-0x50]
    let v14: u64;  // [bp-0x40]
    let v15: u8;  // [bp-0x38]
    let v17: u64;  // r14
    let v18: i64;  // 4096
    let v19: u8;  // bpl
    let v20: u128;  // xmm1
    let v21: u64;  // rdx
    let v22: u32;  // rdx
    let v23: i64;  // rdx
    let v24: u64;  // rbx

    v11 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v17 = *((a2 + 24) as &i64);
    v12 = *((a2 + 40) as &i64);
    v0 = *((a2 + 48) as &i8);
    v18 = a2;
    loop {
        uu_od::inputdecoder::InputDecoder<I>::peek_read(a1, v18);
        if v15 == 3 {
            v8 = uucore::util_name();
            v9 = v22;
            eprint!("{}: ", &v8);
            eprintln!("{}", &v1);
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            v24 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        }
        v20 = *(&v14 as &i128);
        v8 = v13;
        v10 = v20;
        if !v9 {
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            v24 = (!<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*((a1 + 24) as &i64)) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            break;
        }
        if v9 != v17 {
            v21 = &v9[v12];
            if v17 <= v21 {
                v21 = v17;
            }
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(&v8, v9, v21);
        } else if !v0 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(uu_od::inputdecoder::MemoryDecoder::get_buffer(&v8, 0), v22, 1, 0) as i8 {
            v2 = v2;
            v4 = v4;
            v6 = v6;
            if !(v19 & 1) {
                println!("*");
                v19 = 1;
                v2 = v3;
                v4 = v5;
                v6 = v7;
                goto LABEL_476ec2;
            }
        } else {
            uu_od::inputdecoder::MemoryDecoder::clone_buffer(&v8, &v11);
        }
        uu_od::inputoffset::InputOffset::format_byte_offset(&v2, a0);
        uu_od::print_bytes(v4, v6, &v8, a2);
        v2 = v2;
        v4 = v4;
        v6 = v6;
LABEL_476ec2:
        *((a0 + 16) as &&u8) = &v9[*((a0 + 16) as &i64)];
        v18 = v23;
        if *(a0 as &i64) {
            *(a0 as &i64) = 1;
            *((a0 + 8) as &&u8) = &v9[*((a0 + 8) as &i64)];
            v18 = v23;
        }
    }
    return v24;
}
