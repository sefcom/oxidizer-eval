fn uu_tail::args::parse_args(a0: i64, a1: u64, a2: u64) -> void {
    let v0: u8;  // [bp-0x410]
    let v1: u64;  // [bp-0x408]
    let v2: u64;  // [bp-0x400]
    let v3: u128;  // [bp-0x3f8]
    let v4: u64;  // [bp-0x3f0]
    let v5: u128;  // [bp-0x3e8]
    let v6: u64;  // [bp-0x3e0]
    let v7: u128;  // [bp-0x3d8]
    let v8: u64;  // [bp-0x3d0]
    let v9: u64;  // [bp-0x3c8]
    let v10: u8;  // [bp-0x3c0]
    let v11: i64;  // [bp-0x3b8]
    let v12: u64;  // [bp-0x3b0]
    let v13: struct56;  // [bp-0x3a8]
    let v14: u32;  // [bp-0x3a8]
    let v15: iNone;  // [bp-0x368]
    let v16: iNone;  // [bp-0x358]
    let v17: iNone;  // [bp-0x348]
    let v18: u64;  // [bp-0x338]
    let v19: struct56;  // [bp-0x330], Other Possible Types: u64
    let v20: struct16;  // [bp-0x330]
    let v21: u64;  // [bp-0x328]
    let v22: Result<struct80, struct24>;  // [bp-0x2f8]
    let v23: struct712;  // [bp-0x2f8]
    let v24: struct80;  // [bp-0x2f8]
    let v25: u64;  // [bp-0x2f0]
    let v26: u64;  // [bp-0x2e8]
    let v27: iNone;  // [bp-0x2e0], Other Possible Types: u128
    let v28: iNone;  // [bp-0x2d0], Other Possible Types: u128
    let v29: iNone;  // [bp-0x2c0], Other Possible Types: u128
    let v31: u64;  // rdx
    let v33: u64;  // rcx
    let v40: &mut [u8];  // rax:rdx

    core::iter::traits::iterator::Iterator::collect(&v10, a1, a2);
    v23 = uu_tail::args::uu_app();
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0, v11, v12);
    v20 = clap_builder::builder::command::Command::try_get_matches_from(&v23, &v0);
    if (((0 ^ v20.field_0) & (0 ^ -(v19))) >> 63) as char {
        v1 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        v2 = v31;
        v0 = 5;
        if (576460752303423486 & v12) != 2 {
            return struct80 {
                field_0: v0
                field_8: v1
                field_16: v2
                field_24: v3 as i64
                field_32: *(&v4 as &i128)
                field_48: *(&v6 as &i128)
                field_64: *(&v8 as &i128)
            };
        }
    } else {
        v13 = v19;
        v22 = uu_tail::args::Settings::from(&v13);
        match v22 {
            Err(_) => {
                return struct24 {
                    field_0: 5
                    field_8: v25
                    field_16: v26
                };
            },
            Ok(_) => {
                v9 = *((&v22 as &char + 72) as &i64);
                v7 = v29;
                v5 = v28;
                v3 = v27;
                v0 = v22 as i64;
                v1 = v25;
                v2 = v26;
                if (576460752303423486 & v12) != 2 {
                    return struct80 {
                        field_0: v0
                        field_8: v1
                        field_16: v2
                        field_24: v3 as i64
                        field_32: *(&v4 as &i128)
                        field_48: *(&v6 as &i128)
                        field_64: *(&v8 as &i128)
                    };
                }
                v22 = alloc::string::String::from_utf8_lossy(*((v11 + 32) as &i64), *((v11 + 40) as &i64));
                v14 = 0;
                v40 = core::char::methods::encode_utf8_raw(&v14 as u128 as u32, a1, a2);
                if !core::slice::<impl [T]>::starts_with(v25, v26, v40.data_ptr, v33) as u32 as u8 {
                    return struct80 {
                        field_0: *(&v0 as &i128)
                        field_16: *(&v2 as &i128)
                        field_32: *(&v4 as &i128)
                        field_48: *(&v6 as &i128)
                        field_64: *(&v8 as &i128)
                    };
                }
            },
        }
    }
    vvar_464{stack -760} = struct80 OrderedDict([(0, 𝜙@64b [((4766229, None), vvar_425{stack -760}), ((4765774, None), None)]), (16, 𝜙@64b [((4766229, None), vvar_427{stack -744}), ((4765774, None), None)])])
    uu_tail::args::parse_obsolete(&v24, v11 + 24, (3 <= v12 ? v11 + 48 : 0));
    if v24.field_0 as i64 == 6 {
        return struct24 {
            field_0: 5
            field_8: v25
            field_16: v26
        };
    }
    v18 = *((&v24.field_64 as &char + 8) as &i64);
    v17 = v29;
    v16 = v28;
    v15 = v27;
    if v24.field_0 as i32 != 5 {
        return struct80 {
            field_0: v24.field_0 as i64
            field_8: v25
            field_16: v26
            field_24: v15
            field_40: v16
            field_56: v17
            field_72: v18
        };
    }
    return struct80 {
        field_0: *(&v0 as &i128)
        field_16: *(&v2 as &i128)
        field_32: *(&v4 as &i128)
        field_48: *(&v6 as &i128)
        field_64: *(&v8 as &i128)
    };
}
