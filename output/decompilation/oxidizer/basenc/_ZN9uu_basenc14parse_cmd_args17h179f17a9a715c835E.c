fn uu_basenc::parse_cmd_args(a0: i64, a1: u64, a2: u64) -> int {
    let v0: u128;  // [bp-0x348]
    let v1: struct16;  // [bp-0x348]
    let v2: Result<struct42, struct24>;  // [bp-0x348], Other Possible Types: struct56
    let v3: u64;  // [bp-0x340]
    let v4: u64;  // [bp-0x338]
    let v5: u32;  // [bp-0x330]
    let v6: struct24;  // [bp-0x310], Other Possible Types: u8
    let v7: u64;  // [bp-0x300]
    let v8: struct16;  // [bp-0x2f8]
    let v9: struct56;  // [bp-0x2e8], Other Possible Types: struct712
    let v10: u64;  // [bp-0x2e0]
    let v12: i64;  // rax
    let v13: u8;  // bpl
    let v14: u64;  // rdx
    let v15: u64;  // rcx

    v9 = uu_basenc::uu_app();
    uucore::Args::collect_lossy(&v6, a1, a2);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v9, &v6);
    if (((0 ^ v1.field_0) & (0 ^ -(v1.field_0))) >> 63) as char {
        return struct24 {
            field_0: 2
            field_8: alloc::boxed::Box<T>::new(v10)
            field_16: &g_510cc0
        };
    }
    v9 = v2;
    v8 = struct16 {
        field_0: "base64"
        field_8: &g_510c18
    };
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v8, &v9);
    if !v12 {
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing encoding type");
        v4 = v7;
        v0 = *(&v6.field_0 as &i128);
        v5 = 1;
        return struct24 {
            field_0: 2
            field_8: alloc::boxed::Box<T>::new(&v0) as u64
            field_16: &g_510c38
        };
    }
    v13 = *((v12 + 16) as &i8);
    v2 = uu_base32::base_common::Config::from(&v9);
    v14 = v2 as i64;
    v15 = *((&v2 as &char + 16) as &i64);
    if v14 != 2 {
        return struct56 {
            field_0: v14
            field_8: v3
            field_16: v15
            field_24: *((&v2 as &char + 24) as &i128)
            field_40: *((&v2 as &char + 40) as &i64)
            field_48: v13
        };
    }
    return struct24 {
        field_0: 2
        field_8: v3
        field_16: v15
    };
}
