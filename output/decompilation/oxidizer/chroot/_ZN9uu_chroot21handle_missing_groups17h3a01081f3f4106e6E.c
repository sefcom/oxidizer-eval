fn uu_chroot::handle_missing_groups(a0: i64, a1: u8) -> void {
    let v0: i8;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u8;  // [bp-0x18]
    let v4: u32;  // edi
    let v5: u64;  // r14
    let v6: u64;  // rax
    let v7: u64;  // r14
    let v8: u64;  // rax

    if !(a1 & 1) {
        return struct4 {
            field_0: 14
        };
    }
    v4 = &v0 as u32;
    if !(a1 & 0x100) {
        uu_chroot::supplemental_gids(v4, 0);
        if !*(&v2 as &i64) {
            return struct8 {
                field_0: 7
                field_4: 0
            };
        }
        v5 = v1;
        v6 = uu_chroot::set_supplemental_gids(v5, *(&v2 as &i64));
        if !v6 {
            return struct4 {
                field_0: 14
            };
        }
        return struct16 {
            field_0: 12
            padding_4: <UNKNOWN>
            field_8: v6
        };
    } else {
        uu_chroot::supplemental_gids(v4, 0);
        v7 = v1;
        v8 = uu_chroot::set_supplemental_gids(v7, *(&v2 as &i64));
        if !v8 {
            return struct4 {
                field_0: 14
            };
        }
        return struct16 {
            field_0: 12
            padding_4: <UNKNOWN>
            field_8: v8
        };
    }
}
