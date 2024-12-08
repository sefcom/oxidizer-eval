fn uu_test::integers(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i136;  // [sp-0x78], Other Possible Types: Result<struct2, struct17>, struct25
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i8;  // [bp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x50]
    let v6: i8;  // [bp-0x48]
    let v7: i8;  // [bp-0x38]
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // r13
    let v10: i64;  // rbp
    let v11: i64;  // r15
    let v12: i128;  // xmm0
    let v13: i64;  // rax
    let v14: i64;  // r12
    let v15: i64;  // r15
    let v17: i8;  // al
    let v19: i64;  // rax
    let v20: i64;  // 4098
    let v21: i64;  // cc_dep2
    let v22: i64;  // cc_ndep
    let v23: i64;  // rax
    let v24: i64;  // cc_dep2
    let v25: i64;  // cc_ndep
    let v26: i64;  // rbp
    let v27: i64;  // 4098

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if v0 || (v0 = core::num::<impl core::str::traits::FromStr for i128>::from_str(v1, v2), v0) {
        v0 = 1;
        v1 = a1;
        v2 = a2;
    } else {
        v9 = v2;
        v10 = v3;
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a3, a4);
        if !v0 {
            v0 = core::num::<impl core::str::traits::FromStr for i128>::from_str(v1, v2);
            if !v0 {
                v11 = v3;
                v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a5, v8);
                if v0 {
                    v0 = struct25 {
                        field_0: 1
                        field_8: a5
                        field_24: 1
                    };
                    v13 = <T as alloc::string::ToString>::to_string(a0 + 8, &v0);
                    *(a0 as &i64) = 4;
                    return v13;
                }
                v4 = v2;
                v5 = v11;
                v14 = v1;
                v15 = v2;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, "-eq") as i8 {
                    v17 = !(v10 ^ v5) && !(v9 ^ v4);
                    return struct9 {
                        field_0: 7
                        field_8: v17
                    };
                } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, "-ne") as i8 {
                    v19 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, "-gt");
                    if v19 {
                        v20 = v4;
                        v5 = v5 - v10 - (v20 < v9);
                        v21 = v10 ^ v20 < v9;
                        v22 = v20 < v9;
                        v5 = v5;
                        goto LABEL_4ad1b4;
                    }
                    v23 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, "-ge");
                    if v23 {
                        v24 = v5 ^ v9 < v4;
                        v25 = v9 < v4;
                        goto LABEL_4ad1de;
                    } else {
                        v19 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, "-lt");
                        if v19 {
                            v21 = v5 ^ v9 < v4;
                            v22 = v9 < v4;
LABEL_4ad1b4:
                            v13 = v19 | -0x100 | amd64g_calculate_condition(12, 16, v5, v21, v22) & 255;
                        } else {
                            v23 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, "-le");
                            if !v23 {
                                v0 = struct25 {
                                    field_0: 1
                                    field_8: a5
                                    field_24: 1
                                };
                                <T as alloc::string::ToString>::to_string(a0 + 8, &v0);
                                return struct8 {
                                    field_0: 4
                                };
                            }
                            v27 = v4;
                            v5 = v5 - v10 - (v27 < v9);
                            v24 = v10 ^ v27 < v9;
                            v25 = v27 < v9;
                            v26 = v5;
LABEL_4ad1de:
                            v13 = v23 | -0x100 | amd64g_calculate_condition(13, 16, v26, v24, v25) & 255;
                        }
                        return struct9 {
                            field_0: 7
                            field_8: v17
                        };
                    }
                } else {
                    return struct9 {
                        field_0: 7
                        field_8: v17
                    };
                }
            }
        }
        v0 = 1;
        v1 = a3;
        v2 = a4;
    }
    v3 = 1;
    <T as alloc::string::ToString>::to_string(&v6, &v0);
    v12 = v6;
    v13 = v7;
    *(a0 as &i64) = 5;
    *((a0 + 8) as &i128) = v12;
    *((a0 + 24) as &i64) = v13;
    return v13;
}
