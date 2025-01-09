fn uu_numfmt::parse_unit_size_suffix(a0: u32, a1: u32) -> u64 {
    let v0: u32;  // [sp-0x28]
    let v1: struct1;  // [bp-0x24]
    let v2: u64;  // [sp-0x20]
    let v3: u64;  // [sp-0x18]
    let v6: u32;  // edx
    let v7: u64;  // cc_ndep
    let v8: u64;  // rdx
    let v9: &u64;  // rax
    let v10: u8;  // al
    let v11: u64;  // cc_ndep
    let v12: u64;  // rdx
    let v13: u64;  // xmm0lq

    if !a1 {
        return 1;
    }
    v2 = a0;
    v3 = a0 + a1;
    if !core::str::validations::next_code_point(&v2) as i32 {
        core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
    }
    v0 = v6;
    v2 = &g_422450;
    v3 = &g_422468;
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) != 1 {
        return 0;
    }
    if a1 == 1 {
        v7 = a1 < 1;
        v9 = &(&g_422468)[8 + 8 * v8];
    } else {
        if a1 != 2 {
            return 0;
        }
        v1 = struct1 {
            field_0: 0
        };
        v10 = core::slice::<impl [T]>::ends_with(a0, 2, core::char::methods::encode_utf8_raw(&v1), 1) as i8;
        if !v10 {
            return 0;
        }
        v7 = amd64g_calculate_rflags_c(17, v10 as u64, 0, v11);
        v9 = &(&g_4224b8)[8 + 8 * v12];
    }
    v13 = *(v9);
    return 1;
}
