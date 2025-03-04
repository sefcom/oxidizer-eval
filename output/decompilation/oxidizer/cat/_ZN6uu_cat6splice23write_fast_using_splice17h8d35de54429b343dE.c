fn uu_cat::splice::write_fast_using_splice(a0: &Result<struct4, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x58]
    let v1: i32;  // [sp-0x50]
    let v2: i32;  // [sp-0x4c]
    let v3: Result<struct8, struct4>;  // [sp-0x40]
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: i64;  // rbx
    let v9: i64;  // rcx
    let v10: i64;  // rax
    let v11: i64;  // rdx

    v5 = uucore::features::pipes::pipe();
    if v5 as u32 == -1 {
        v6 = 9223372036854775809;
        return Ok(struct4 {
            field_0: v2
        });
    }
    v1 = v5 as u32;
    v2 = (v5 >> 32) as u32;
    do {
        v0 = 0;
        v3 = nix::fcntl::splice(a1, 0, &v2, 0, 0x20000);
        match v3 {
            Err(_) => {
                v9 = a0;
                *((v9 + 8) as &i8) = 1;
            },
            Ok(v7) => {
            },
        }
        if !v7 {
            v9 = a0;
            return Err(struct1 {
                field_0: 0
            });
        }
    } while (uucore::features::pipes::splice_exact(&v1, a2, v7) as i32 == 134);
    if uu_cat::splice::copy_exact(v1 as u64, a2, v7) as i32 != 134 {
        v11 = a0;
        return Ok(struct4 {
            field_0: v8
        });
    }
    v10 = a0;
    return Err(struct1 {
        field_0: 1
    });
}
