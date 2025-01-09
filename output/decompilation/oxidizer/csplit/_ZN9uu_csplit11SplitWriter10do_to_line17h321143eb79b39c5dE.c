fn uu_csplit::SplitWriter::do_to_line(a0: &Result<struct40, struct8>, a1: void*, a2: u32, a3: u32, a4: u32, a5: void*) -> u64 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: Option<struct24>;  // [sp-0xc8], Other Possible Types: i192
    let v4: i64;  // [sp-0xb0]
    let v5: struct24;  // [sp-0xa8]
    let v7: i320;  // [sp-0x88], Other Possible Types: Arguments
    let v8: i256;  // [sp-0x50], Other Possible Types: struct32
    let v10: i64;  // rcx
    let v12: i64;  // rdx
    let v13: i64;  // rcx
    let v15: i8;  // bpl

    *((a5 + 56) as &i8) = 1;
    *((a5 + 48) as &i64) = 1;
    v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a2, a3);
    v4 = 1;
    loop {
        v8 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a5);
        v10 = *((&v8 as &char + 8) as &i64);
        if v10 == 9223372036854775809 {
            break;
        }
        if v10 == 0x8000000000000000 {
            return Err(struct8 {
                field_0: v1
            });
        }
        v12 = v8;
        v0 = v10;
        v1 = *((&v8 as &char + 16) as &i64);
        v2 = *((&v8 as &char + 24) as &i64);
        v13 = (!(v12 + 1 <= a4) ? 255 : v12 + 1 != a4);
        if v13 != 1 {
            if v13 {
                v7 = v0;
                v3 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v12, &v7);
                match v3 {
                    Some(_) => {
                        v7 = "the buffer is big enough to contain 1 line";
                    },
                    None => {
                        v4 = 12;
                        break;
                    },
                }
            } else {
                v15 = *((*((a1 + 32) as &i64) + 99) as &i8);
                if v15 || (v7 = v0, v3 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v12, &v7), v3 == 0x8000000000000000) {
                    v4 = 12;
                    if v15 {
                        break;
                    }
                } else {
                    v7 = Arguments {
                        pieces: ["the buffer is big enough to contain 1 line"]
                        args: []
                        fmt: 0
                    };
                }
            }
            core::panicking::panic_fmt(&v7); /* do not return */
        }
    }
    uu_csplit::SplitWriter::finish_split(a1);
    return Ok(struct40 {
        field_0: v18
        field_16: *((&v5 as &char + 8) as &i128)
        field_32: v16
    });
}
