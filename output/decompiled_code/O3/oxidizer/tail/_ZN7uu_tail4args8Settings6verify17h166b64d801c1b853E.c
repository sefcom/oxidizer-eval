fn uu_tail::args::Settings::verify(a0: void*) -> u64 {
    let v0: struct16;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u8;  // cl
    let v4: void*;  // rax
    let v5: u64;  // rax

    v0 = struct16 {
        field_0: a0->field_20
        field_8: a0->field_28 * 48 + v0
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    v3 = a0->field_4c;
    if v2 {
        v4 = v2 | -0x100 | 1;
        if (v3 & 1) {
            return v4;
        }
    }
    if v3 != 2 {
        return 0;
    }
    v5 = a0->field_0;
    if v5 == 4 {
        v5 = a0->field_8;
    }
    v4 = v5 | -0x100 | (v5 == 3) * 2;
    return v4;
}
