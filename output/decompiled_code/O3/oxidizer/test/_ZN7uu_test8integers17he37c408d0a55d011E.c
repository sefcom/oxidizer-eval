fn uu_test::integers(a0: &Option<Result<struct24, struct1>>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78], Other Possible Types: Result<struct16, struct10>, struct25
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i8;  // [bp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x50]
    let v6: i192;  // [sp-0x48], Other Possible Types: struct24
    let v7: i64;  // [bp+0x8]
    let v8: i64;  // r13
    let v9: i64;  // rbp
    let v10: i64;  // r15
    let v11: i128;  // xmm0
    let v12: i64;  // rax
    let v13: i64;  // r12
    let v14: i64;  // r15
    let v16: i8;  // al
    let v18: i64;  // rax
    let v19: i64;  // 4098
    let v20: i64;  // cc_dep2
    let v21: i64;  // cc_ndep
    let v22: i64;  // rax
    let v23: i64;  // cc_dep2
    let v24: i64;  // cc_ndep
    let v25: i64;  // rbp
    let v26: i64;  // 4098

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if v0 || (v0 = core::num::<impl core::str::traits::FromStr for i128>::from_str(v1, v2), v0) {
        v0 = 1;
        v1 = a1;
        v2 = a2;
    } else {
        v8 = v2;
        v9 = v3;
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a3, a4);
        if !v0 {
            v0 = core::num::<impl core::str::traits::FromStr for i128>::from_str(v1, v2);
            if !v0 {
                v10 = v3;
                v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a5, v7);
                if v0 {
                    v0 = struct25 {
                        field_0: 1
                        field_8: a5
                        field_24: 1
                    };
                    v12 = <T as alloc::string::ToString>::to_string(a0 + 8, &v0);
                    *(a0 as &i64) = 4;
                    return v12;
                }
                v4 = v2;
                v5 = v10;
                v13 = v1;
                v14 = v2;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-eq") as i8 {
                    v16 = !(v9 ^ v5) && !(v8 ^ v4);
                    return struct9 {
                        field_0: 7
                        field_8: v16
                    };
                } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-ne") as i8 {
                    v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-gt");
                    if v18 {
                        v19 = v4;
                        v5 = v5 - v9 - (v19 < v8);
                        v20 = v9 ^ v19 < v8;
                        v21 = v19 < v8;
                        v5 = v5;
                        goto LABEL_4ad024;
                    }
                    v22 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-ge");
                    if v22 {
                        v23 = v5 ^ v8 < v4;
                        v24 = v8 < v4;
                        goto LABEL_4ad04e;
                    } else {
                        v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-lt");
                        if v18 {
                            v20 = v5 ^ v8 < v4;
                            v21 = v8 < v4;
LABEL_4ad024:
                            v12 = v18 | -0x100 | amd64g_calculate_condition(12, 16, v5, v20, v21) & 255;
                        } else {
                            v22 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-le");
                            if !v22 {
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
                            v26 = v4;
                            v5 = v5 - v9 - (v26 < v8);
                            v23 = v9 ^ v26 < v8;
                            v24 = v26 < v8;
                            v25 = v5;
LABEL_4ad04e:
                            v12 = v22 | -0x100 | amd64g_calculate_condition(13, 16, v25, v23, v24) & 255;
                        }
                        return struct9 {
                            field_0: 7
                            field_8: v16
                        };
                    }
                } else {
                    return struct9 {
                        field_0: 7
                        field_8: v16
                    };
                }
            }
        }
        v0 = 1;
        v1 = a3;
        v2 = a4;
    }
    v3 = 1;
    v6 = <T as alloc::string::ToString>::to_string(&v0);
    v11 = v6;
    v12 = *((&v6 as &char + 16) as &i64);
    *(a0 as &i64) = 5;
    *((a0 + 8) as &i128) = v11;
    *((a0 + 24) as &i64) = v12;
    return v12;
}
