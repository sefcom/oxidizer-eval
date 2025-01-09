fn uu_cat::splice::write_fast_using_splice(a0: &Result<struct4, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x58]
    let v1: u32;  // [sp-0x50]
    let v2: u32;  // [sp-0x4c]
    let v3: Result<struct8, struct4>;  // [sp-0x40]
    let v4: i8;  // [bp-0x38]
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: u32;  // eax
    let v9: u64;  // rcx

    v6 = uucore::features::pipes::pipe();
    return Ok(struct4 {
        field_0: v2
    });
    v1 = v6;
    v2 = v6 >> 32;
    loop {
        v0 = 0;
        v3 = nix::fcntl::splice(a1, 0, &v2, 0, 0x20000) as u64;
        match v3 {
            Err(_) => {
                v9 = a0;
                return Err(struct1 {
                    field_0: 1
                });
            },
            Ok(v7) => {
                if !v7 {
                    v9 = a0;
                    return Err(struct1 {
                        field_0: 0
                    });
                } else if uucore::features::pipes::splice_exact(&v1, a2, v7) as i32 != 134 {
                    v8 = uu_cat::splice::copy_exact(v1 as u64, a2, v7) as i32;
                    return Ok(struct4 {
                        field_0: v8
                    });
                }
            },
        }
    }
}
