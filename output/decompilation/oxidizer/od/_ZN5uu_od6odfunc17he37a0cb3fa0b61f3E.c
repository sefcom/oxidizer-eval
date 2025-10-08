fn uu_od::odfunc(a0: void*, a1: i64, a2: void*) -> long long {
    let v0: u8;  // [bp-0xe9]
    let v1: struct24;  // [bp-0xe8]
    let v3: u64;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc8]
    let v5: u64;  // [bp-0xc0]
    let v6: u64;  // [bp-0xc0]
    let v7: u64;  // [bp-0xb8]
    let v8: u64;  // [bp-0xb8]
    let v9: u128;  // [bp-0x98]
    let v10: &u8;  // [bp-0x90], Other Possible Types: u64
    let v11: iNone;  // [bp-0x88]
    let v12: u64;  // [bp-0x70]
    let v13: void*;  // [bp-0x68]
    let v14: struct25;  // [bp-0x50]
    let v17: u64;  // r14
    let v18: u8;  // r13b
    let v19: iNone;  // xmm1
    let v20: u64;  // rdx
    let v21: u64;  // rdx
    let v22: u64;  // rbx

    v1 = struct24 {
        field_0: 0
        field_8: ""
    };
    v17 = a2[24] as i64;
    v12 = a2[40] as i64;
    v13 = a2;
    v0 = a2[48] as i8;
    loop {
        vvar_372{stack -80} = struct25 OrderedDict([(0, 𝜙@128b [((4589560, None), vvar_280{stack -80}), ((4589676, None), vvar_280{stack -80}), ((4589660, None), vvar_280{stack -80}), ((4589248, None), None)]), (16, 𝜙@64b [((4589560, None), vvar_282{stack -64}), ((4589676, None), vvar_282{stack -64}), ((4589660, None), vvar_282{stack -64}), ((4589248, None), None)])])
        uu_od::inputdecoder::InputDecoder<I>::peek_read(&v14, a1);
        if v14.field_24 != 3 {
            v19 = *(&v14.field_16 as &i128);
            v9 = *(&v14.field_0 as &i128);
            v11 = v19;
            if !v10 {
                uu_od::inputoffset::InputOffset::print_final_offset(a0);
                v22 = (!<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*((*((a1 + 24) as &i64) + 96) as &i32)) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
LABEL_46099f:
                return v22;
            }
            if v10 != v17 {
                v20 = &v10[v12];
                if v17 <= v20 {
                    v20 = v17;
                }
                uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(&v9, v10, v20);
            }
            if v10 == v17 && !(v0 & 1) && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(uu_od::inputdecoder::MemoryDecoder::get_buffer(&v9, 0), v21, 1, 0) {
                v3 = v3;
                v5 = v5;
                v7 = v7;
                if !(v18 & 1) {
                    println!("*");
                    v3 = v4;
                    v5 = v6;
                    v7 = v8;
                }
                v18 = 1;
                *(&a0[16] as &&u8) = &v10[a0[16]];
                if !(*(a0 as &i8) & 1) {
                    continue;
                }
            } else {
                if v10 == v17 {
                    uu_od::inputdecoder::MemoryDecoder::clone_buffer(&v9, &v1);
                }
                uu_od::inputoffset::InputOffset::format_byte_offset(&v3, a0);
                uu_od::print_bytes(v5, v7, &v9);
                *(&a0[16] as &&u8) = &v10[a0[16]];
                if !(*(a0 as &i8) & 1) {
                    continue;
                }
            }
            *(a0 as &i64) = 1;
            *(&a0[8] as &&u8) = &v10[a0[8]];
        } else {
            v9 = uucore::util_name();
            v10 = v21;
            eprint!("{}: ", &v9);
            eprintln!("{}", &v2);
            uu_od::inputoffset::InputOffset::print_final_offset(a0);
            v22 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            goto LABEL_46099f;
        }
    }
}
