fn uu_cat::splice::write_fast_using_splice(a0: &Result<struct4, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x50]
    let v1: u32;  // [sp-0x4c]
    let v2: Result<struct8, struct4>;  // [sp-0x40]
    let v3: i8;  // [bp-0x38]
    let v5: u64;  // rax
    let v6: u64;  // rbx
    let v7: u32;  // eax
    let v8: u64;  // rcx

    v5 = uucore::features::pipes::pipe();
    return Ok(struct4 {
        field_0: v1
    });
    v0 = v5;
    v1 = v5 >> 32;
    loop {
        v2 = nix::fcntl::splice(a1, 0, &v1, 0, 0x20000, 0) as u64;
        match v2 {
            Err(_) => {
                v8 = a0;
                return Err(struct1 {
                    field_0: 1
                });
            },
            Ok(v6) => {
                if !v6 {
                    v8 = a0;
                    return Err(struct1 {
                        field_0: 0
                    });
                } else if uucore::features::pipes::splice_exact(&v0, a2, v6) as i32 != 134 {
                    v7 = uu_cat::splice::copy_exact(v0 as u64, a2, v6) as i32;
                    return Ok(struct4 {
                        field_0: v7
                    });
                }
            },
        }
    }
}
