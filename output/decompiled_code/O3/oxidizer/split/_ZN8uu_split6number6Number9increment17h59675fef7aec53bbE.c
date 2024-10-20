fn uu_split::number::Number::increment(a0: &struct_0) -> u64 {
    let v1: u64;  // r14
    let v2: u64;  // rbx
    let v3: u8;  // al
    let v4: u64;  // rbx
    let v5: u64;  // rcx
    let v6: u8;  // dl
    let v8: u32;  // ebp

    if a0->field_0 == 0x8000000000000000 {
        a0->field_8 = a0->field_8 + 1;
    } else {
        v1 = a0->field_8;
        v2 = a0->field_10;
        if !v2 {
            v8 = vvar_51{reg 56} | -0x100 | !bcmp(v1, 1, v2);
            return v8;
        }
        v3 = a0->field_18;
        do {
            v5 = v4;
            v6 = *((v1 + v5 - 1) as &i8);
            *((v1 + v5 - 1) as &u8) = v6 + 1;
        } while (v6 + 1 == v3 && (*((v1 + v5 - 1) as &i8) = 0, v5 != 1));
        if !bcmp(v1, __rust_alloc_zeroed(v2, 1), v2) as i64 {
            v8 = vvar_51{reg 56} | -0x100 | 1;
            return v8;
        }
    }
    return 0;
}
