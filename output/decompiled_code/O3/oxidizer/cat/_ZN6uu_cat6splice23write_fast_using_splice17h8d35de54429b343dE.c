fn uu_cat::splice::write_fast_using_splice(a0: &struct_0, a1: u64, a2: u64) -> u64 {
    let v0: u32;  // [sp-0x50]
    let v1: u32;  // [sp-0x4c]
    let v2: Result<struct8, struct4>;  // [sp-0x40]
    let v3: i8;  // [bp-0x38]
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: u32;  // eax
    let v9: &struct_0;  // rcx
    let v10: &struct_0;  // rax
    let v11: &struct_0;  // rdx

    v5 = uucore::features::pipes::pipe(a0, a1, a2);
    if v5 == -1 {
        return struct12 {
            field_0: 9223372036854775809
            field_8: v1
        };
    }
    v0 = v5;
    v1 = v5 >> 32;
    do {
        v2 = nix::fcntl::splice(a1, 0, &v1, 0, 0x20000, 0);
        match v2 {
            Err(_) => {
                v9 = a0;
                v9->field_8 = 1 as u8;
                v9->field_0 = 9223372036854775814 as u64;
                return v6;
            },
            Ok(v7) => {
            },
        }
        if !v7 {
            v9 = a0;
            v9->field_8 = 0;
            v9->field_0 = 9223372036854775814;
            return v6;
        }
    } while (uucore::features::pipes::splice_exact(&v0, a2, v7) as i32 == 134);
    v8 = uu_cat::splice::copy_exact(v0, a2, v7) as i32;
    if v8 == 134 {
        v10 = a0;
        v10->field_8 = 1;
        v10->field_0 = 9223372036854775814;
    } else {
        v11 = a0;
        v11->field_0 = 9223372036854775809;
        v11->field_8 = v8;
    }
    return v6;
}
