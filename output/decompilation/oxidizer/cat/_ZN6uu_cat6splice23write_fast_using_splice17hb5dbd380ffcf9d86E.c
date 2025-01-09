fn uu_cat::splice::write_fast_using_splice(a0: &Result<struct4, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x50]
    let v1: i32;  // [sp-0x4c]
    let v2: i96;  // [sp-0x40]
    let v4: i64;  // rax
    let v5: i64;  // rax
    let v6: i64;  // rbx
    let v8: i64;  // rcx
    let v9: i64;  // rax
    let v10: i64;  // rdx

    v4 = uucore::features::pipes::pipe();
    if v4 == -1 {
        v5 = 9223372036854775809;
        return Ok(struct4 {
            field_0: v1
        });
    }
    v0 = v4;
    v1 = v4 >> 32;
    do {
        v6 = nix::fcntl::splice(a1, 0, &v1, 0, 0x20000, 0)?;
        if !v6 {
            v8 = a0;
            *((v8 + 8) as &i8) = 0;
        }
    } while (uucore::features::pipes::splice_exact(&v0, a2, v6) as i32 == 134);
    if uu_cat::splice::copy_exact(v0, a2, v6) as i32 != 134 {
        v10 = a0;
        return Ok(struct4 {
            field_0: v7
        });
    }
    v9 = a0;
    return Err(struct1 {
        field_0: 1
    });
}
