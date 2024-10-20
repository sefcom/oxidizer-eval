fn uu_ls::match_quoting_style_name(a0: &struct_0, a1: u64, a2: u8) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u32;  // ecx
    let v3: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rcx

    v2 = 0;
    switch (a1) {
    case 1:
        v2 = (-0x100 | a0->field_0 == 99) * 2;
        break;
    case 5:
        v2 = 0;
        break;
    case 6:
        v0 = v3 | -0x100 | 4;
        bcmp(a0, &g_42ddd0, a1);
        v2 = 0;
        break;
    case 7:
        v2 = a2 & (!(1818325605 ^ *(&a0->padding_1[2] as &i32)) && !(1702127980 ^ *(&a0->field_0 as &i32)));
        break;
    case 12:
        v5 = 7809573172535453811 ^ *(&a0->field_0 as &i64);
        v6 = a0->field_8 ^ 1937334647;
        if !v6 && !v5 {
            v2 = v6 | v5 | -0x10000 | 0x100;
            break;
        } else {
            v2 = -0x100 | (!(a0->field_8 ^ 1701863779) && !(8315102230707791987 ^ *(&a0->field_0 as &i64)));
            break;
        }
    case 19:
        v2 = (UnaryOp GetMSBs != 65535 ? 0 : 257);
        break;
    }
    return v2 | 0x40000;
}
