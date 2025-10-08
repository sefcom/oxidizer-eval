fn uu_seq::print_seq(a0: &struct120, a1: i64, a2: i64, a3: i32, a4: i64, a5: &struct80, a6: i8, a7: i64) -> u64 {
    let v0: struct24;  // [bp-0x298], Other Possible Types: struct40
    let v3: u128;  // [bp-0x268]
    let v4: u128;  // [bp-0x258]
    let v5: u64;  // [bp-0x248]
    let v6: void*;  // [bp-0x238], Other Possible Types: std::io::stdio::Stdout
    let v7: u64;  // [bp-0x230]
    let v8: iNone;  // [bp-0x228]
    let v9: struct24;  // [bp-0x228]
    let v10: u64;  // [bp-0x218]
    let v11: iNone;  // [bp-0x210]
    let v12: u64;  // [bp-0x200]
    let v13: Option<struct24>;  // [bp-0x1e8], Other Possible Types: struct40
    let v16: struct33;  // [bp-0x1b8]
    let v17: struct40;  // [bp-0x1b8]
    let v18: u128;  // [bp-0x188]
    let v19: u128;  // [bp-0x178]
    let v20: u64;  // [bp-0x168]
    let v21: struct24;  // [bp-0x158]
    let v22: struct40;  // [bp-0x128], Other Possible Types: u128
    let v23: u128;  // [bp-0x118]
    let v24: u64;  // [bp-0x108]
    let v25: Option<struct24>;  // [bp-0xb8]
    let v26: struct24;  // [bp-0xb8]
    let v27: u64;  // [bp-0xa8]
    let v28: Option<struct24>;  // [bp-0xa0]
    let v30: void*;  // r14
    let v31: u64;  // rdx
    let v32: u64;  // rbx
    let v33: struct712;  // r14

    v6 = std::io::stdio::stdout();
    v16 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v6));
    v24 = *((a0 + 32) as &i64);
    v23 = *((a0 + 16) as &i128);
    v22 = *(a0 as &i128);
    v5 = *((a0 + 72) as &i64);
    v4 = *((a0 + 56) as &i128);
    v3 = *((a0 + 40) as &i128);
    v20 = *((a0 + 112) as &i64);
    v19 = *((a0 + 96) as &i128);
    v18 = *((a0 + 80) as &i128);
    if a6 {
        v13 = uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint(&v22);
        v28 = uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint(&v3);
        v30 = 0;
        if !((((0 ^ v28 as i64) & (0 ^ -(v28 as i64))) >> 63) as char) {
            v30 = uu_seq::print_seq::{{closure}}(&v28);
            v32 = v31;
        }
        v25 = uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint(&v18);
        v10 = *((&v13 as &char + 16) as &i64);
        v8 = v13 as i128;
        v6 = v30;
        v7 = v32;
        v11 = v25 as i128;
        v12 = v27;
        if v8 as i64 == 0x8000000000000000 || !(v30 as u8 & 1) || v11 as i64 == 0x8000000000000000 {
            goto LABEL_47221b;
        }
        v0 = v9;
        v21 = v26;
        v13 = v17;
        v33 = uu_seq::fast_print_seq(&v13, &v0, v32, &v21, a1, a2, a3, a4, a7);
    } else {
LABEL_47221b:
        v0 = v22;
        if uu_seq::done_printing(&v0, &v3, &v18) {
            v33 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v16);
        } else {
            v33 = uucore::features::format::Format<F,T>::fmt(a5, &v16, &v0);
        }
    }
    return v33;
}
