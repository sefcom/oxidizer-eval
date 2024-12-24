fn uu_pr::header_content(a0: &u64, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: i192;  // [sp-0x80]
    let v3: &struct_0;  // rax
    let v4: u64;  // rax

    v0 = a2;
    if !a1->field_141 {
        return struct24 {
            field_0: 0
            field_8: 8
            field_16: 0
        };
    }
    v1 = format!("{:?} {:?} Page {:?}", a1 + 120, a1 + 48, &v0);
    v3 = alloc::alloc::Global::alloc_impl(8, 120);
    v3->field_0 = 0;
    v3->field_8 = 1;
    v3->field_10 = 0;
    v3->field_20 = 1;
    v3->field_28 = 0;
    *(&v3->field_30 as &i192) = v1;
    v3->field_40 = *((&v1 as &char + 16) as &i64);
    v3->field_48 = 0;
    v3->field_50 = 1;
    *(&(&v3->field_50)[1] as &i128) = 0;
    *((&v3->field_58 as &char + 8) as &i64) = 1;
    v3->field_68 = 0;
    v4 = alloc::slice::hack::into_vec(a0, v3, 5);
    return v4;
}
