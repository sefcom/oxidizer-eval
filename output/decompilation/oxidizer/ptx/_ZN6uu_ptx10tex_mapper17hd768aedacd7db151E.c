fn uu_ptx::tex_mapper(a0: u64, a1: u32) -> long long {
    let v0: u32;  // [bp-0x4c]
    let v1: u32;  // [bp-0x48]
    let v2: i64;  // [bp-0x48]
    let v3: u64;  // [sp-0x40]
    let v4: core::fmt::Arguments;  // [bp-0x38], Other Possible Types: struct24, u64
    let v5: u64;  // [bp-0x38]
    let v6: u64;  // [bp-0x30]
    let v7: u64;  // [bp-0x28]
    let v9: u32;  // rdx
    let v11: &mut [u8];  // rax:rdx

    v0 = a1;
    if a1 - 35 < 4 {
        goto LABEL_52cd8a;
    }
    match (a1) {
        95 => {
LABEL_52cd8a:
            v2 = &v0;
            v3 = <char as core::fmt::Display>::fmt;
            v4 = "\\";
            v6 = 1;
            break;
        }
        123 | 125 => {
            v2 = &v0;
            v3 = <char as core::fmt::Display>::fmt;
            v5 = "$\\";
            v6 = 2;
            break;
        }
        _ => {
            v1 = 0;
            v11 = core::char::methods::encode_utf8_raw(a1, &v1, v9);
            v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11.data_ptr, v9);
            return struct24 {
                field_0: *(&v4.field_0 as &i128)
                field_16: v7
            };
        }
    }
    vvar_113{stack -56} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((5426570, None), vvar_105{stack -56}), ((5426525, None), vvar_94{stack -56})])])), (16, [vvar_112{stack -72}]), (32, 0x0<64>)])
    return core::option::Option<T>::map_or_else(a0, &v4);
}
