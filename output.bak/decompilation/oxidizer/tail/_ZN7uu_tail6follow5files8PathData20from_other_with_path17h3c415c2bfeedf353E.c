fn uu_tail::follow::files::PathData::from_other_with_path(a0: &struct216, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x1a0]
    let v1: i64;  // [sp-0x198]
    let v2: i64;  // [sp-0x190], Other Possible Types: Result<struct4, struct8>
    let v3: i128;  // [sp-0xe0], Other Possible Types: struct16, struct44
    let v4: i64;  // [sp-0x10]
    let v6: i64;  // r15
    let v7: i64;  // r15

    v4 = v6;
    v7 = *((a1 + 208) as &i64);
    v1 = v7;
    v0 = *((a1 + 200) as &i64);
    if !v0 {
        v2 = std::fs::File::open(a2, a3) as u64;
        if v2 {
            v0 = 0;
        } else {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v2 as &char + 4) as &i32));
            v0 = alloc::boxed::Box<T>::new(&v3);
        }
        v7 = &g_5bc4c8;
    }
    v3 = std::fs::metadata(a2, a3);
    if v3 != 2 {
        memcpy(&v2, &v3, 176);
    } else {
        v2 = 2;
    }
    uu_tail::follow::files::PathData::new(a0, v0, v7, &v2, *((a1 + 184) as &i64), *((a1 + 192) as &i64));
    return a0;
}
