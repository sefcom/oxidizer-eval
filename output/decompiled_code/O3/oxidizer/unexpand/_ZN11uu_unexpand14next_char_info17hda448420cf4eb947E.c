fn uu_unexpand::next_char_info(a0: &struct_0, a1: u32, a2: &u8, a3: u64, a4: &u8) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: Result<struct16, struct10>;  // [sp-0x30], Other Possible Types: u128
    let v3: i8;  // [bp-0x20]
    let v5: u64;  // r14
    let v6: u32;  // ecx
    let v7: u64;  // rax
    let v8: u32;  // rdx
    let v9: u64;  // rcx

    if !a1 {
        if a4 < a3 {
            v7 = 1;
            switch (v6) {
            case 8:
                break;
            case 9:
                break;
            case 32:
                break;
            default:
                goto LABEL_4b2aa1;
            }
        }
LABEL_4b2aa1:
        v9 = 1;
    } else {
        v5 = -0x100 | *((a2 + a4) as &i8) < 0;
        if &a4[v5 + 1] > a3 {
            v7 = 1;
            goto LABEL_4b2aa1;
        } else {
            v2 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a4, &a4[v5 + 1], a2, a3, "src/uu/unexpand/src/unexpand.rs"), v8);
            match v2 {
                Err(_) => {
                    v7 = 1;
                    v9 = 1;
                },
                Ok(_) => {
                    v0 = *((&v2 as &char + 8) as &i64);
                    v1 = v3 + v0;
                    v9 = 1;
                    if !core::str::validations::next_code_point(&v0) as i32 {
                        v7 = 1;
                    } else {
                        switch (v8 as u32) {
                        case 8:
                            v7 = 0;
                            break;
                        case 9:
                            v7 = 0;
                            break;
                        case 32:
                            v7 = 0;
                            break;
                        default:
                            v9 = v5 + 1;
                            v7 = (v8 as u32 < 127 ? -0x100 | (32 <= v8 as u32) as u8 as u64 : (v8 as u32 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v8 as u32 as u64)));
                            break;
                        }
                    }
                },
            }
        }
    }
    a0->field_8 = 3;
    a0->field_0 = v7;
    a0->field_10 = v9;
    return v7;
}
