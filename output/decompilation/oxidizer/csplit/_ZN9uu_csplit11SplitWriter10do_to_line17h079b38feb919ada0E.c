fn uu_csplit::SplitWriter::do_to_line(a0: &Result<struct40, struct8>, a1: void*, a2: u32, a3: u32, a4: u32, a5: void*) -> u64 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: Option<struct24>;  // [sp-0xc8]
    let v4: i64;  // [sp-0xb0]
    let v5: struct24;  // [sp-0xa8]
    let v7: iNone;  // [bp-0x88], Other Possible Types: unsigned long, Arguments
    let v8: iNone;  // [sp-0x88]
    let v9: struct32;  // [sp-0x50]
    let v11: i64;  // rcx
    let v13: i64;  // rdx
    let v14: i64;  // rcx
    let v16: i8;  // bpl

    *((a5 + 88) as &i8) = 1;
    *((a5 + 80) as &i64) = 1;
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a2, a3);
    v4 = 1;
    loop {
        v9 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a5);
        v11 = v9.field_8 as i64;
        if v11 == 9223372036854775809 {
            break;
        }
        if v11 == 0x8000000000000000 {
            return Err(struct8 {
                field_0: v1
            });
        }
        v13 = v9.field_0;
        v0 = v11;
        v1 = *((&v9.field_8 as &char + 8) as &i64);
        v2 = v9.field_24;
        v14 = (!(v13 + 1 <= a4) ? 255 : v13 + 1 != a4);
        if v14 as u8 != 1 {
            if v14 as u32 {
                v8 = *(&v0 as &i192);
                v3 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v13, &v8);
                match v3 {
                    Some(_) => {
                        v7 = Arguments {
                            pieces: ["the buffer is big enough to contain 1 line"]
                            args: []
                            fmt: 0
                        };
                    },
                    None => {
                        v4 = 12;
                        break;
                    },
                }
            } else {
                v16 = *((*((a1 + 32) as &i64) + 99) as &i8);
                if v16 || (v7 = *(&v0 as &i192), v3 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v13, &v7), v3 as i64 == 0x8000000000000000) {
                    v4 = 12;
                    if v16 {
                        break;
                    }
                } else {
                    v7 = "the buffer is big enough to contain 1 line";
                }
            }
            core::panicking::panic_fmt(&v7); /* do not return */
        }
    }
    uu_csplit::SplitWriter::finish_split(a1);
    return Ok(struct40 {
        field_0: v19
        field_16: *(&v5.field_8 as &i128)
        field_32: v17
    });
}
