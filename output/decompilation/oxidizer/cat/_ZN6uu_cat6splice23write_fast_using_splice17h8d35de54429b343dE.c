fn uu_cat::splice::write_fast_using_splice(a1: i64, a2: i64) -> Result<struct4, struct1> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x50]
    let v1: u32;  // [bp-0x4c]
    let v3: u96;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: u32;  // eax
    let v9: i64;  // rcx

    v6 = uucore::features::pipes::pipe();
    if v6 == -1 {
        return Ok(v1);
    }
    v0 = v6;
    v1 = v6 >> 32;
    do {
        vvar_175{stack -64} = struct12 OrderedDict({0: 𝜙@64b [((4907551, None), vvar_159{stack -64}), ((4907453, None), None)]})
        nix::fcntl::splice(&v3, a1, 0, &v1, 0, 0x20000, 0);
        if v3 as i32 {
            v9 = a0;
            *((a0 + 8) as &i8) = 1;
            *(v9 as &i64) = 9223372036854775814;
        }
        if !v4 {
            v9 = a0;
            *((a0 + 8) as &i8) = 0;
            *(v9 as &i64) = 9223372036854775814;
        }
    } while (uucore::features::pipes::splice_exact(&v0, a2, v7) as i32 == 134);
    v8 = uu_cat::splice::copy_exact(v0, a2, v7) as i32;
    if v8 != 134 {
        return Ok(v8);
    }
    return Err(1);
}
