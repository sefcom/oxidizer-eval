fn uu_csplit::SplitWriter::do_to_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: &struct9) -> int {
    let v0: i64;  // [bp-0xf0]
    let v1: u192;  // [bp-0xe0]
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: u64;  // [bp-0xd0]
    let v5: Option<struct24>;  // [bp-0xc8]
    let v6: u64;  // [bp-0xb0]
    let v7: u128;  // [bp-0xa0]
    let v8: u64;  // [bp-0x90]
    let v9: u384;  // [bp-0x88]
    let v10: u64;  // [bp-0x88]
    let v11: u64;  // [bp-0x88]
    let v13: u256;  // [bp-0x50]
    let v14: u64;  // [bp-0x48]
    let v15: u64;  // [bp-0x40]
    let v17: u64;  // rcx
    let v18: u64;  // rax
    let v20: u64;  // rsi
    let v21: u128;  // xmm0

    *((a5 + 56) as &i8) = 1;
    *((a5 + 48) as &i64) = 1;
    <T as alloc::slice::hack::ConvertVec>::to_vec(a2, a3, a3);
    loop {
        vvar_372{stack -80} = struct32 OrderedDict({0: 𝜙@64b [((5631560, None), vvar_311{stack -80}), ((5631384, None), None)], 8: 𝜙@64b [((5631560, None), vvar_312{stack -72}), ((5631384, None), None)]})
        <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v13, a5);
        if v14 == 9223372036854775809 {
            uu_csplit::SplitWriter::finish_split(v20);
            *((v0 + 32) as &u64) = v8;
            v21 = *(&v6 as &i128);
            *((v0 + 16) as &u128) = v7;
            *(v0 as &u128) = v21;
            return;
        }
        if v14 == 0x8000000000000000 {
            *(v0 as &i64) = 0;
            *((v0 + 8) as &u64) = v3;
            return;
        }
        v2 = v14;
        v3 = v15;
        v4 = *((&v13 as &char + 24) as &i64);
        if (v13 as i64 + 1 > a4 ? 255 : v13 as i64 + 1 != a4) != 1 {
            break;
        }
        v18 = uu_csplit::SplitWriter::writeln(a1, v3, *((&v13 as &char + 24) as &i64));
        if v18 {
            *(v0 as &i64) = 0;
            *((v0 + 8) as &u64) = v18;
            return;
        }
    }
    if v17 {
        v9 = v1;
        v5 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v13 as i64, &v9);
        match v5 {
            Some(_) => {
                v10 = "the buffer is big enough to contain 1 line";
                vvar_378{stack -136} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5631924, None), vvar_351{stack -136}), ((5631955, None), vvar_353{stack -136})], 8: 0x1<64>}), 16: [], 32: 0x0<64>})
                core::panicking::panic_fmt(&v9); /* do not return */
            },
            None => {
                uu_csplit::SplitWriter::finish_split(v20);
                *((v0 + 32) as &u64) = v8;
                v21 = *(&v6 as &i128);
                *((v0 + 16) as &u128) = v7;
                *(v0 as &u128) = v21;
                return;
            },
        }
    } else if !*((*((a1 + 32) as &i64) + 99) as &i8) {
        v9 = v1;
        v5 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a5, v13 as i64, &v9);
        match v5 {
            Some(_) => {
                v11 = "the buffer is big enough to contain 1 line";
                vvar_371{stack -136} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5631924, None), vvar_351{stack -136}), ((5631955, None), vvar_353{stack -136})], 8: 0x1<64>}), 16: [], 32: 0x0<64>})
                core::panicking::panic_fmt(&v9); /* do not return */
            },
            None => {
                uu_csplit::SplitWriter::finish_split(v20);
                *((v0 + 32) as &u64) = v8;
                v21 = *(&v6 as &i128);
                *((v0 + 16) as &u128) = v7;
                *(v0 as &u128) = v21;
                return;
            },
        }
    } else {
        uu_csplit::SplitWriter::finish_split(v20);
        *((v0 + 32) as &u64) = v8;
        v21 = *(&v6 as &i128);
        *((v0 + 16) as &u128) = v7;
        *(v0 as &u128) = v21;
        return;
    }
}
