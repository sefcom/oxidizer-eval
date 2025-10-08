fn starship::print::explain(a0: void*) -> void {
    let v0: Option<struct48>;  // [bp-0x918], Other Possible Types: struct16
    let v1: struct16;  // [bp-0x918]
    let v5: struct80;  // [bp-0x8f8], Other Possible Types: u64
    let v6: alloc::string::String;  // [bp-0x8f8], Other Possible Types: struct32, struct80
    let v7: struct32;  // [bp-0x8f8]
    let v8: struct24;  // [bp-0x8d8], Other Possible Types: u128
    let v11: i64;  // [bp-0x8d8]
    let v12: core::fmt::Arguments;  // [bp-0x8c8], Other Possible Types: struct24
    let v13: struct64;  // [bp-0x8c0]
    let v14: core::fmt::rt::Argument;  // [bp-0x8b8], Other Possible Types: u64
    let v15: struct161;  // [bp-0x8a8]
    let v16: struct40;  // [bp-0x8a8]
    let v17: struct24;  // [bp-0x898], Other Possible Types: u128
    let v18: u64;  // [bp-0x890]
    let v19: iNone;  // [bp-0x888], Other Possible Types: core::fmt::rt::Argument
    let v20: iNone;  // [bp-0x878]
    let v21: struct216;  // [bp-0x878]
    let v22: struct192;  // [bp-0x860], Other Possible Types: struct32, struct64, struct24
    let v23: struct40;  // [bp-0x860]
    let v24: struct40;  // [bp-0x860]
    let v25: struct32;  // [bp-0x850], Other Possible Types: struct24
    let v26: struct24;  // [bp-0x850]
    let v27: u64;  // [bp-0x7a0]
    let v28: u64;  // [bp-0x798]
    let v31: iNone;  // [bp-0x780], Other Possible Types: struct72, Option<struct80>
    let v32: struct161;  // [bp-0x770], Other Possible Types: struct40
    let v33: struct24;  // [bp-0x760], Other Possible Types: u128
    let v34: iNone;  // [bp-0x750], Other Possible Types: Result<struct72, struct24>
    let v35: iNone;  // [bp-0x740], Other Possible Types: struct216
    let v36: struct32;  // [bp-0x720]
    let v37: struct361;  // [bp-0x700]
    let v39: struct24;  // rcx
    let v40: Option<struct24>;  // rbx
    let v41: u64;  // r15
    let v42: u64;  // rcx
    let v43: struct24;  // rdi
    let v44: Result<struct32, struct9>;  // al
    let v47: i64;  // rdx
    let v52: Result<struct24, struct16>;  // [bp-0x8d8], Other Possible Types: struct24
    let v56: struct72;  // r13

    v22 = 0x8000000000000000;
    v37 = starship::context::Context::new(a0, &v22 as u32);
    starship::print::compute_modules(&v14, &v37);
    v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
    core::iter::traits::iterator::Iterator::collect(&v28, &v22);
    v13 = v39;
    v40 = terminal_size::unix::terminal_size();
    if (v40 as u8 & 1) {
        v41 = ((v40 & 4294967295) >> 16 & 4294967295) - core::cmp::Ord::min((v40 & 4294967295) >> 16 & 4294967295, v13 + 11);
    }
    println!("\n Here's a breakdown of your prompt:");
    v36 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v28);
    v31 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36);
    if let None = v31 {
        return;
    }
    if (v40 as u8 & 1) {
        v27 = v13 + 11;
        v21 = v35;
        v19 = v34;
        v17 = v33;
        v16 = v32;
        v14 = v31;
        v22 = alloc::slice::<impl [T]>::repeat(" ", v13 - v21.field_8 as i64);
        v12 = v25;
        v8 = *(&v22.field_0 as &i128);
        print!(" \"{}\" ({}){}  -  ", &v14, &v19, &v52);
        v42 = v18;
        v22 = struct192 {
            field_0: 0
            padding_8: <UNKNOWN>
            field_16: 0
            padding_24: <UNKNOWN>
            field_32: 0
            padding_40: <UNKNOWN>
            field_48: 0
            field_56: v42
            field_64: 0
            field_72: 2
            field_76: 268566529
            field_80: 16
            field_88: 0
            padding_96: <UNKNOWN>
            field_104: 0
            padding_112: <UNKNOWN>
            field_120: 0
            padding_128: <UNKNOWN>
            field_136: v42
            field_144: v42
            field_152: 0
            field_160: 2
            field_164: 268566529
            field_168: 16
            field_176: v17 as i64
            field_184: v42
        };
        v56 = 0;
        v43 = &v22;
        v6 = v5;
        loop {
            v8 = v52;
            if let Ok(_) = v44 {
                continue;
            }
            v0 = struct16 {
                field_0: <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(v43)
                field_8: v47
            };
            v0 = v1;
            print!("{}", &v0);
            v8 = v11;
            v7 = v5;
            if core::ops::range::RangeBounds::contains("a", v0) {
                v6 = v7;
                v52 = v8;
                goto LABEL_bc74a2;
            } else {
                v44 = core::ops::range::RangeBounds::contains("A", v0) ^ 1;
                v52 = v11;
                v6 = v5;
LABEL_bc74a2:
                v43 = &v22;
            }
        }
    } else {
        do {
            v20 = v35;
            v19 = v34;
            v17 = v33;
            v15 = v32;
            v14 = v31;
            v22 = alloc::slice::<impl [T]>::repeat(" ", v13 - (&v20)[8] as i64);
            v12 = v25;
            v8 = *(&v22.field_0 as &i128);
            println!(" {}{}  -  {}", &v14, &v52, &v53);
            v31 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36);
            v24 = v23;
            v25 = v26;
        } while (v31 as i64 != 0x8000000000000000);
    }
    return;
}
