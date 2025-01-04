fn uu_join::get_field_number(a0: &struct16, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x90]
    let v1: u64;  // [sp-0x88]
    let v2: i192;  // [sp-0x30]
    let v3: u32;  // [sp-0x18]
    let v4: u64;  // [sp-0x10]
    let v5: u64;  // [sp-0x8]
    let v7: u64;  // 4096
    let v8: u64;  // r14
    let v9: u64;  // rbx

    if a1 != 1 {
        if !a3 {
            v7 = a3;
        } else {
            v7 = a4;
        }
        return struct16 {
            field_0: 0
            field_8: v7
        };
    } else {
        if !(a3 == 1 && a2 != a4) {
            return struct16 {
                field_0: 0
                field_8: a2
            };
        }
        v5 = v8;
        v4 = v9;
        v0 = a2 + 1;
        v1 = a4 + 1;
        v2 = format!("incompatible join fields {:?}, {:?}", &v0, &v1);
        v3 = 1;
        return struct16 {
            field_0:             alloc::boxed::Box<T>::new(&v2)
            field_8: &g_5352b8
        };
    }
}
