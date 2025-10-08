fn uu_csplit::SplitWriter::do_to_line(a0: i64, a1: i64, a2: void*, a3: u32, a4: u64, a5: i64) -> int {
    let v0: void*;  // [bp-0xd0]
    let v1: u64;  // [bp-0xc0]
    let v2: void*;  // [bp-0xb8]
    let v3: u64;  // [bp-0xb0]
    let v5: struct24;  // [bp-0xa0]
    let v9: struct32;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: void*;  // [bp-0x70]
    let v12: u64;  // [bp-0x68]
    let v13: Option<struct24>;  // [bp-0x60]
    let v15: u64;  // rcx
    let v16: void*;  // rax

    *((a5 + 88) as &i8) = 1;
    *((a5 + 80) as &i64) = 1;
    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a2, a3);
    do {
        vvar_328{stack -128} = struct32 OrderedDict([(0, 𝜙@64b [((5335352, None), vvar_276{stack -128}), ((5335192, None), None)]), (8, 𝜙@64b [((5335352, None), vvar_277{stack -120}), ((5335192, None), None)]), (24, 𝜙@64b [((5335352, None), vvar_279{stack -104}), ((5335192, None), None)])])
        <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v9, a5);
        if v10 == 9223372036854775809 {
LABEL_516a1d:
            uu_csplit::SplitWriter::finish_split(a1);
        }
        if v10 == 0x8000000000000000 {
            *(v0 as &i64) = 12;
            *(&v0[8] as &void*) = v2;
            *(&v0[16] as &u64) = v3;
            goto LABEL_516a6d__1;
        }
        v1 = v10;
        v2 = v11;
        v15 = v9.field_0 + 1;
        v3 = v12;
        if (a4 > v15) - 0 - (a4 < v15) != 1 {
            if !(a4 > v15) - 0 - (a4 < v15) {
                if *((*((a1 + 32) as &i64) + 99) as &i8) {
                    goto LABEL_516a1d;
                }
                v13 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v9.field_0, &v1);
                if let None = v13 {
                    goto LABEL_516a1d;
                }
            } else {
                v13 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v9.field_0, &v1);
                if let None = v13 {
                    goto LABEL_516a1d;
                }
            }
            panic!("the buffer is big enough to contain 1 line");
        }
        v16 = uu_csplit::SplitWriter::writeln(a1, v2, v3);
    } while (!v16);
    *(v0 as &i64) = 0;
    *(&v0[8] as &void*) = v16;
LABEL_516a6d__1:
    return;
}
