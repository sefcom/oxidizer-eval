fn uu_cat::splice::write_fast_using_splice(a1: i64, a2: i64) -> Result<struct4, struct1> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x50]
    let v1: u32;  // [bp-0x4c]
    let v3: struct12;  // [bp-0x40]
    let v5: u64;  // rax
    let v6: u64;  // rbx
    let v7: u32;  // eax
    let v8: i64;  // rcx

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
        vvar_175{stack -64} = struct12 OrderedDict({0: 𝜙@64b [((4907551, None), vvar_159{stack -64}), ((4907453, None), None)]})
        nix::fcntl::splice(&v3, a1, 0, &v1, 0, 0x20000, 0);
        if v3.field_0 {
            v8 = a0;
            *((a0 + 8) as &i8) = 1;
            *(v8 as &i64) = 9223372036854775814;
        }
        if !v3.field_8 {
            v8 = a0;
            *((a0 + 8) as &i8) = 0;
            *(v8 as &i64) = 9223372036854775814;
        }
    } while (uucore::features::pipes::splice_exact(&v0, a2, v6) as i32 == 134);
    v7 = uu_cat::splice::copy_exact(v0, a2, v6) as i32;
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
