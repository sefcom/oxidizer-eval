fn uu_csplit::SplitWriter::do_to_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: Option<struct24>;  // [sp-0xc8], Other Possible Types: i192
    let v4: i64;  // [sp-0xb0]
    let v5: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v6: i8;  // [bp-0x90]
    let v7: i64;  // [bp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i128;  // [sp-0x70]
    let v11: struct32;  // [sp-0x50], Other Possible Types: i256
    let v13: i64;  // rdx
    let v14: i64;  // rcx
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i64;  // rcx
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i8;  // bpl
    let v22: i64;  // rsi
    let v23: i64;  // rdx
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i128;  // xmm0

    *((a5 + 88) as &i8) = 1;
    *((a5 + 80) as &i64) = 1;
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a2, a3);
    v4 = 1;
    loop {
        v11 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a5, v13);
        v14 = *((&v11 as &char + 8) as &i64);
        if v14 == 9223372036854775809 {
            break;
        }
        v15 = *((&v11 as &char + 16) as &i64);
        if v14 == 0x8000000000000000 {
            v19 = a0;
            *(v19 as &i64) = 0;
            *((v19 + 8) as &i64) = v1;
            return v24;
        }
        v16 = v11;
        v0 = v14;
        v1 = v15;
        v2 = *((&v11 as &char + 24) as &i64);
        v17 = (!(v16 + 1 <= a4) ? 255 : (-0x100 | v16 + 1 != a4) & 4294967295 & 4294967295);
        if v17 == 1 {
            v18 = uu_csplit::SplitWriter::writeln(a1, v1, v2);
            if v18 {
                v20 = a0;
                *(v20 as &i64) = 0;
                *((v20 + 8) as &i64) = v18;
                return v24;
            }
        } else if v17 {
            v7 = v0;
            v3 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v16, &v7);
            if v3 != 0x8000000000000000 {
                v7 = "the buffer is big enough to contain 1 line";
                vvar_343{stack -128} = 1;
                vvar_344{stack -120} = 8;
                vvar_345{stack -112} = 0;
                core::panicking::panic_fmt(&v7); /* do not return */
            }
            v4 = 12;
            break;
        } else {
            v21 = *((*((a1 + 32) as &i64) + 99) as &i8);
            if !v21 {
                v7 = v0;
                v3 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v16, &v7);
                if v3 != 0x8000000000000000 {
                    v7 = "the buffer is big enough to contain 1 line";
                    v8 = 1;
                    v9 = 8;
                    v10 = 0;
                    core::panicking::panic_fmt(&v7); /* do not return */
                }
            }
            v4 = 12;
            if v21 {
                break;
            }
        }
    }
    uu_csplit::SplitWriter::finish_split(a1, v22, v23);
    v24 = v6;
    v25 = a0;
    *((v25 + 32) as &i64) = v24;
    v26 = v4;
    *((v25 + 16) as &i128) = *((&v5 as &char + 8) as &i128);
    *(v25 as &i128) = v26;
    return v24;
}
