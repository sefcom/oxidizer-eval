fn uu_runcon::get_transition_context(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct56;  // [bp-0xf0]
    let v1: struct56;  // [bp-0xf0]
    let v2: struct28;  // [bp-0xf0]
    let v3: struct56;  // [bp-0xf0]
    let v4: u16;  // [bp-0xec]
    let v5: struct32;  // [bp-0xe8]
    let v6: u16;  // [bp-0xba]
    let v7: u128;  // [bp-0xb8]
    let v8: iNone;  // [bp-0xa8]
    let v9: iNone;  // [bp-0x98]
    let v10: iNone;  // [bp-0x88]
    let v11: u32;  // [bp-0x78]
    let v12: struct32;  // [bp-0x68]
    let v13: iNone;  // [bp-0x48]
    let v14: iNone;  // [bp-0x38]
    let v15: u32;  // [bp-0x28]
    let v17: iNone;  // xmm0
    let v18: iNone;  // xmm0
    let v19: iNone;  // xmm1
    let v20: iNone;  // xmm0
    let v21: iNone;  // xmm1
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm1

    v0 = selinux::SecurityClass::from_name("process");
    if v0.field_0 != 10 {
        v22 = *((&v0.field_4 as &char + 2) as &i128);
        v23 = *((&v0.field_8 as &char + 14) as &i128);
        return struct80 {
            field_0: v0.field_0
            field_4: v4
            field_6: <UNKNOWN>
            field_22: <UNKNOWN>
            field_38: <UNKNOWN>
            field_54: &g_41b2fa
            field_56: 30
            field_64: <UNKNOWN>
        };
    }
    v1 = selinux::SecurityContext::of_path(a1, a2);
    if v1.field_0 != 10 {
        v20 = *(&v1.field_0 as &i128);
        v21 = *((&v1.field_8 as &char + 8) as &i128);
        return struct72 {
            field_0: v20
            field_16: v21
            field_32: *((&v1.field_24 as &char + 8) as &i128)
            field_48: *((&v1.field_40 as &char + 8) as &i64)
            field_56: &g_41b2d2
            field_64: 40
        };
    } else if v1.field_8 as i32 != 2 {
        v8 = v1.field_24;
        v7 = v1.field_8;
        v2 = selinux::SecurityContext::current(None);
        if v2.field_0 != 10 {
            v11 = *((&v1.field_24 as &char + 12) as &i32);
            v10 = *((&v1.field_8 as &char + 12) as &i128);
            v9 = *(&(&v2.field_0)[1] as &i128);
            v13 = v9;
            v14 = v10;
            v15 = v11;
            return struct80 {
                field_0: v1.field_0
                field_4: <UNKNOWN>
                field_20: <UNKNOWN>
                field_36: v1.field_40
                field_40: <UNKNOWN>
                field_56: 47
                field_64: <UNKNOWN>
            };
        }
        v12 = v5;
        v3 = selinux::SecurityContext::of_labeling_decision(&v12, &v7, v4, 1, 0);
        if v3.field_0 != 10 {
            v18 = *(&v3.field_0 as &i128);
            v19 = *((&v3.field_8 as &char + 8) as &i128);
            return struct72 {
                field_0: v18
                field_16: v19
                field_32: *((&v3.field_24 as &char + 8) as &i128)
                field_48: *((&v3.field_40 as &char + 8) as &i64)
                field_56: &g_41b318
                field_64: 38
            };
        }
        v17 = v3.field_8;
        return struct40 {
            field_0: 17
            padding_4: <UNKNOWN>
            field_8: v17
            field_24: v3.field_24
        };
    } else {
        uu_runcon::errors::Error::from_io1(a0, "getfilecon", a1, a2, 261993005058);
        return;
    }
}
