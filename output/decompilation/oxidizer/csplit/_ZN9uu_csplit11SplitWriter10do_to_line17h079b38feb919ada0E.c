fn uu_csplit::SplitWriter::do_to_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: &struct9) -> int {
    let v0: i64;  // [bp-0xf0]
    let v1: struct24;  // [bp-0xe0]
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: Option<struct24>;  // [bp-0xc8]
    let v6: u64;  // [bp-0xb0]
    let v7: struct24;  // [bp-0xa8]
    let v8: u128;  // [bp-0xa0]
    let v9: u64;  // [bp-0x90]
    let v10: core::fmt::Arguments;  // [bp-0x88], Other Possible Types: struct40, struct24
    let v11: u64;  // [bp-0x88]
    let v12: u64;  // [bp-0x88]
    let v14: struct32;  // [bp-0x50]
    let v15: u64;  // [bp-0x48]
    let v16: u64;  // [bp-0x40]
    let v18: u64;  // rcx
    let v19: u64;  // rax
    let v21: u128;  // xmm0

    *((a5 + 88) as &i8) = 1;
    *((a5 + 80) as &i64) = 1;
    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a2, a3);
    loop {
        vvar_374{stack -80} = struct32 OrderedDict({0: 𝜙@64b [((5630776, None), vvar_311{stack -80}), ((5630600, None), None)], 16: 𝜙@64b [((5630776, None), vvar_313{stack -64}), ((5630600, None), None)]})
        <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v14, a5);
        if v15 == 9223372036854775809 {
            uu_csplit::SplitWriter::finish_split(a1);
            *((v0 + 32) as &u64) = v9;
            v21 = *(&v6 as &i128);
            *((v0 + 16) as &u128) = v8;
            *(v0 as &u128) = v21;
            return;
        }
        if v15 == 0x8000000000000000 {
            *(v0 as &i64) = 0;
            *((v0 + 8) as &u64) = v3;
            return;
        }
        v2 = v15;
        v3 = v16;
        v4 = *((&v14.field_16 as &char + 8) as &i64);
        if (v14.field_0 as i64 + 1 > a4 ? 255 : v14.field_0 as i64 + 1 != a4) != 1 {
            break;
        }
        v19 = uu_csplit::SplitWriter::writeln(a1, v3, *((&v14.field_16 as &char + 8) as &i64));
        if v19 {
            *(v0 as &i64) = 0;
            *((v0 + 8) as &u64) = v19;
            return;
        }
    }
    if v18 {
        v10 = v1;
        v5 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v14.field_0 as i64, &v10);
        match v5 {
            Some(_) => {
                v11 = "the buffer is big enough to contain 1 line";
                vvar_380{stack -136} = struct40 {0: 𝜙@64b [((5631140, None), vvar_351{stack -136}), ((5631171, None), vvar_353{stack -136})], 8: 0x1<64>, 16: 0x8<64>, 24: 0x0<128>}
                vvar_381{stack -136} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5631140, None), vvar_351{stack -136}), ((5631171, None), vvar_353{stack -136})], 8: 0x1<64>}), 16: [], 32: 0x0<64>})
                core::panicking::panic_fmt(&v10); /* do not return */
            },
            None => {
                uu_csplit::SplitWriter::finish_split(a1);
                *((v0 + 32) as &u64) = v9;
                v21 = *(&v6 as &i128);
                *((v0 + 16) as &u128) = v8;
                *(v0 as &u128) = v21;
                return;
            },
        }
    } else if !*((*((a1 + 32) as &i64) + 99) as &i8) {
        v10 = v1;
        v5 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v14.field_0 as i64, &v10);
        match v5 {
            Some(_) => {
                v12 = "the buffer is big enough to contain 1 line";
                vvar_373{stack -136} = struct40 {0: 𝜙@64b [((5631140, None), vvar_351{stack -136}), ((5631171, None), vvar_353{stack -136})], 8: 0x1<64>, 16: 0x8<64>, 24: 0x0<128>}
                vvar_372{stack -136} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5631140, None), vvar_351{stack -136}), ((5631171, None), vvar_353{stack -136})], 8: 0x1<64>}), 16: [], 32: 0x0<64>})
                core::panicking::panic_fmt(&v10); /* do not return */
            },
            None => {
                uu_csplit::SplitWriter::finish_split(a1);
                *((v0 + 32) as &u64) = v9;
                v21 = *(&v6 as &i128);
                *((v0 + 16) as &u128) = v8;
                *(v0 as &u128) = v21;
                return;
            },
        }
    } else {
        uu_csplit::SplitWriter::finish_split(a1);
        *((v0 + 32) as &u64) = v9;
        v21 = *(&v6 as &i128);
        *((v0 + 16) as &u128) = v8;
        *(v0 as &u128) = v21;
        return;
    }
}
