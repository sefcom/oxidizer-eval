fn uu_tail::tail_file() -> u32 {
    let v15: i64;  // [sp-0x2108]
    let v16: i64;  // [sp-0x2100]
    let v24: i1408;  // [sp-0x2048], Other Possible Types: Enum
    let v27: i64;  // [sp-0x2030]
    let v29: i64;  // [sp-0x1030]
    let v31: i64;  // rcx
    let v32: i64;  // r8

    v29 = 0;
    v27 = 0;
    v24 = std::sys::pal::unix::fs::stat(v31, v32);
    if v24 == 2 {
        v16 = *((&v24 as &char + 8) as &i64);
        v15 = 2;
    }
    memcpy(&v15, &v24, 176);
    if v15 == 2 {
        goto LABEL_0x4bdebc;
    } else {
        goto LABEL_0x4be01f;
    }
}
