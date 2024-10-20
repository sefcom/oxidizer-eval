fn uu_dircolors::guess_syntax(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x30], Other Possible Types: Enum
    let v1: i8;  // [bp-0x18]
    let v3: i64;  // rbx
    let v4: i32;  // ebx
    let v6: i64;  // rbx
    let v7: i64;  // rdx
    let v8: i64;  // rcx
    let v9: i64;  // rax
    let v14: i64;  // cc_ndep

    v0 = std::env::_var(&g_422889, 5);
    if v0 {
        v4 = v3 | -0x100 | 3;
        return v4;
    } else if v1 {
        v6 = *((&v0 as &char + 16) as &i64);
        v9 = std::path::Path::file_name(v6, v1, v7, v8);
        if !v9 {
            return 0;
        }
        if v7 == 4 {
            return v4;
        } else if v7 == 3 {
            v4 = v6 | -0x100 | amd64g_calculate_condition(4, 18, ((*((v9 + 2) as &i8) as u8 as u32 ^ 104) as u16 | (*(v9 as &i16) as u16 as u32 ^ 29539) as u16) as u64, 0, v14) & 255;
            return v4;
        }
    } else {
        return 0;
    }
}
