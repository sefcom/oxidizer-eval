fn uu_pr::header_content(a0: i64, a1: i64, a2: u64) -> int {
    let v0: u64;  // [bp-0x90]
    let v1: u128;  // [bp-0x88]
    let v2: u64;  // [bp-0x78]
    let v3: alloc::string::String;  // [bp-0x50]
    let v4: u64;  // [bp-0x40]
    let v6: i64;  // rax

    v0 = a2;
    if !*((a1 + 321) as &i8) {
        return Ok(struct16 {
            field_0: 8
            field_8: 0
        });
    }
    v3 = format!("{} {} Page {}", a1 + 120, a1 + 48, &v0);
    v6 = alloc::alloc::Global::alloc_impl(8, 120);
    v2 = v4;
    v1 = *(&v3.vec.buf.inner.cap as &i128);
    *(v6 as &i64) = 0;
    *((v6 + 8) as &i64) = 1;
    *((v6 + 16) as &i128) = 0;
    *((v6 + 32) as &i64) = 1;
    *((v6 + 40) as &i64) = 0;
    *((v6 + 48) as &u128) = v1;
    *((v6 + 64) as &u64) = v2;
    *((v6 + 72) as &i64) = 0;
    *((v6 + 80) as &i64) = 1;
    *((v6 + 88) as &i128) = 0;
    *((v6 + 104) as &i64) = 1;
    *((v6 + 112) as &i64) = 0;
    return Err(struct16 {
        field_0: v6
        field_8: 5
    });
}
