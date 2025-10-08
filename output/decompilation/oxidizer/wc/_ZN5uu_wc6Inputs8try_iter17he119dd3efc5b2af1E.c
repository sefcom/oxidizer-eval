fn uu_wc::Inputs::try_iter(a0: i64, a1: void*, a2: i64) -> long long {
    let v0: Result<struct73, struct24>;  // [bp-0xe0], Other Possible Types: struct81, struct9
    let v1: struct24;  // [bp-0xe0], Other Possible Types: struct73
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd0]
    let v4: iNone;  // [bp-0x88]
    let v5: struct73;  // [bp-0x78]
    let v6: u64;  // [bp-0x70]
    let v8: struct30;  // rax
    let v9: struct32;  // r15
    let v10: u64;  // r13
    let v12: u64;  // r12

    if !*(a1 as &i64) {
        v0 = struct9 {
            field_0: 9223372036854775809
            field_8: 1
        };
        v8 = alloc::boxed::Box<T>::new(&v0) as u64;
        v9 = v8;
        v10 = &g_4f9100;
        v12 = 9223372036854775810;
        if *(a2 as &i64) != 9223372036854775810 {
            goto LABEL_46529b;
        }
    } else if *(a1 as &i64) == 1 {
        v8 = alloc::boxed::Box<T>::new(a1[16] as i64, a1[16] as i64 + a1[24] as i64 * 24);
        v9 = v8;
        v10 = &g_4f9138;
        v12 = 9223372036854775810;
        if *(a2 as &i64) != 9223372036854775810 {
            goto LABEL_46529b;
        }
    } else if a1[8] as i64 == 9223372036854775809 {
        v0 = uu_wc::files0_iter_stdin();
        v8 = alloc::boxed::Box<T>::new(&v0) as u64;
        v9 = v8;
        v10 = &g_4f91a8;
        v12 = 9223372036854775810;
        if *(a2 as &i64) != 9223372036854775810 {
            goto LABEL_46529b;
        }
    } else {
        v0 = uu_wc::files0_iter_file(a1[16] as i64, a1[24] as i64);
        if let Err(_) = v0 {
            return struct24 {
                field_0: 9223372036854775811
                field_8: v6
                field_16: v3
            };
        }
        v5 = v1;
        v8 = alloc::boxed::Box<T>::new(&v5) as u64;
        v9 = v8;
        v10 = &g_4f9170;
        v12 = 9223372036854775810;
        if *(a2 as &i64) != 9223372036854775810 {
LABEL_46529b:
            vvar_269{stack -224} = struct24 OrderedDict([(0, 𝜙@64b [((4608602, None), vvar_257{stack -224}), ((4608562, None), None), ((4608649, None), None), ((4608878, None), vvar_242{stack -224})])])
            v8 = uu_wc::Input::as_borrowed(&v1, a2) as u64;
            v4 = *((&v1.field_0 as &char + 8) as &i128);
            v12 = v2;
        }
    }
    return struct48 {
        field_0: v12
        field_8: v4
        field_24: v9
        field_32: v10
        field_40: 0
    };
}
