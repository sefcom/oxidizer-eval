fn uu_chroot::set_supplemental_gids_with_strategy(a0: u64, a1: u8, a2: i64) -> void {
    let v0: core::fmt::rt::Argument;  // [bp-0x70], Other Possible Types: struct16
    let v1: u64;  // [bp-0x68]
    let v2: core::fmt::Arguments;  // [bp-0x60]
    let v3: core::fmt::rt::Argument;  // [bp-0x58]
    let v4: core::fmt::Arguments;  // [bp-0x54]
    let v5: core::fmt::rt::Argument;  // [bp-0x50]
    let v6: i8;  // [bp-0x40]
    let v8: void*;  // rbp
    let v9: u64;  // rax
    let v11: u32;  // eax
    let v12: u32;  // eax

    if !a2 {
        uu_chroot::handle_missing_groups(a0, a1);
        return;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    if *((a2 + 16) as &i64) {
        do {
            uu_chroot::name_to_gid(&v3, *((8 + *((a2 + 8) as &i64) + v8 as &u8) as &i64), *((16 + *((a2 + 8) as &i64) + v8 as &u8) as &i64));
            if v3 != 14 {
                return struct40 {
                    field_0: v3
                    field_4: v4
                    field_8: v5
                    field_24: *(&v6 as &i128)
                };
            }
            v0 = alloc::vec::Vec<T,A>::push(v4);
            v8 += 24;
        } while (*((a2 + 16) as &i64) * 24 != v8);
        v9 = uu_chroot::set_supplemental_gids(4, 0);
    } else {
        v9 = uu_chroot::set_supplemental_gids(4, 0);
    }
    v11 = 12;
    return struct16 {
        field_0: v12
        padding_4: <UNKNOWN>
        field_8: v9
    };
}
