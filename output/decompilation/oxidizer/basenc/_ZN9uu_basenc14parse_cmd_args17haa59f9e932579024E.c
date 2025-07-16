fn uu_basenc::parse_cmd_args(a1: i64, a2: i64) -> Result<struct49, struct24> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x370], Other Possible Types: struct24
    let v1: struct56;  // [bp-0x358]
    let v2: u32;  // [bp-0x350]
    let v3: Result<struct56, struct16>;  // [bp-0x320]
    let v4: struct24;  // [bp-0x320], Other Possible Types: struct56
    let v5: u8;  // [bp-0x2e8], Other Possible Types: Result<struct42, struct24>
    let v6: u64;  // [bp-0x2e0]
    let v7: u64;  // [bp-0x2d8]
    let v8: u32;  // [bp-0x2d0]
    let v10: i64;  // rax
    let v11: u8;  // bpl
    let v12: u64;  // rdx

    uu_basenc::uu_app(&v5);
    v0 = uucore::Args::collect_lossy(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v5, &v0);
    match v3 {
        Err(_) => {
            return struct24 {
                field_0: 2
                field_8: alloc::boxed::Box<T>::new(v2)
                field_16: &g_54cd90
            };
        },
        Ok(v1) => {
            v0 = struct16 {
                field_0: "base64"
                field_8: &g_54ccb0
            };
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
            if !v10 {
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v7 = v4.field_16;
                v5 = v3 as i128 as u128;
                v8 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v5);
                *((a0 + 16) as &&u8) = &g_54cce8;
            }
            v11 = *((v10 + 16) as &i8);
            v5 = uu_base32::base_common::Config::from(&v1);
            v12 = v5 as i64;
            if v12 != 2 {
                return struct58 {
                    field_0: v12
                    field_8: v6
                    field_16: v7
                    field_24: <UNKNOWN>
                    field_40: v11
                    field_48: <UNKNOWN>
                };
            }
            return struct24 {
                field_0: 2
                field_8: v6
                field_16: v7
            };
        },
    }
}
