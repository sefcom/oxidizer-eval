fn uu_cat::splice::write_fast_using_splice(a0: i64, a1: u64) -> int {
    let v0: u32;  // [bp-0x48]
    let v1: u32;  // [bp-0x44]
    let v2: struct12;  // [bp-0x40]
    let v3: i8;  // [bp-0x38]
    let v5: u64;  // rax
    let v6: u64;  // rbp
    let v7: u32;  // eax

    v5 = uucore::features::pipes::pipe();
    if v5 == -1 {
        return struct16 {
            field_0: 9223372036854775809
            field_8: v1
        };
    }
    v0 = v5;
    v1 = v5 >> 32;
    do {
        nix::fcntl::splice(&v2, a1, &v1);
        if v2.field_0 == 1 {
            *((a0 + 8) as &i8) = 1;
        }
        if !*(&v3 as &i64) {
            return struct16 {
                field_0: 9223372036854775814
                field_8: 0
            };
        }
    } while (uucore::features::pipes::splice_exact(&v0, v6) == 134);
    v7 = uu_cat::splice::copy_exact(v0, v6);
    if v7 != 134 {
        return struct16 {
            field_0: 9223372036854775809
            field_8: v7
        };
    }
    return struct16 {
        field_0: 9223372036854775814
        field_8: 1
    };
}
