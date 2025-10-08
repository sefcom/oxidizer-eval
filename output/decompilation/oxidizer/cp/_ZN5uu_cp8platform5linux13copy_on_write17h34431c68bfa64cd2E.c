fn uu_cp::platform::linux::copy_on_write(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u8, a6: u8, a7: i384, a8: i384, a9: u8, a10: u8) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x70], Other Possible Types: u64
    let v1: core::fmt::rt::Argument;  // [bp-0x68], Other Possible Types: u64
    let v2: struct24;  // [bp-0x60], Other Possible Types: struct9
    let v3: core::fmt::Arguments;  // [bp-0x5e]
    let v4: u8;  // [bp-0x5d]
    let v5: struct24;  // [bp-0x41]
    let v6: core::fmt::Arguments;  // [bp-0x40]
    let v7: struct48;  // [bp-0x38]
    let v8: Result<struct4, struct8>;  // r12b
    let v9: u8;  // r13b
    let v10: u8;  // bpl
    let v11: core::result::Result<usize, std::io::error::Error>;  // rax
    let v12: Result<struct4, struct8>;  // al

    if a5 {
        if a5 == 1 {
            if a6 {
                if a6 != 1 {
                    if a10 {
                        goto LABEL_49bc61;
                    }
                    v6 = a7;
                    v7 = a8;
                    v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_never(a1, a2);
                    v5 = v2.field_0;
                    v0 = v3;
                    v1 = v4;
                    uu_cp::platform::linux::clone(a1, a2, a3, a4, 1);
                    goto LABEL_49bf03;
                }
                if a10 {
                    if !(uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1) {
                        return struct16 {
                            field_0: 9223372036854775820
                            field_8: v10
                            field_9: v8
                            field_10: v9
                        };
                    }
                } else {
                    v6 = a7;
                    v7 = a8;
                    v1 = a1;
                    v0 = a2;
                    v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_auto(a1, a2, a3, a4);
                    if !v2.field_0 && (&v2.field_0)[4] == 3 {
                        uu_cp::platform::linux::clone(v1, v0, a3, a4, 3);
                    } else {
                        uu_cp::platform::linux::clone(v1, v0, a3, a4, 1);
                    }
                    goto LABEL_49bf03;
                }
            } else if !a10 {
                v6 = a7;
                v7 = a8;
                v1 = a1;
                v0 = a2;
                v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_always(a1, a2, a3, a4);
                if !v2.field_0 && (&v2.field_0)[4] == 1 {
                    uu_cp::platform::linux::clone(v1, v0, a3, a4, 1);
                } else {
                    uu_cp::platform::linux::clone(v1, v0, a3, a4, 2);
                }
                goto LABEL_49bf03;
            } else if !(uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1) {
                return struct16 {
                    field_0: 9223372036854775820
                    field_8: v10
                    field_9: v8
                    field_10: v9
                };
            }
        } else {
            if a6 {
                if a6 == 1 {
                    if a10 {
                        goto LABEL_49bc61;
                    }
                    v6 = a7;
                    v7 = a8;
                    v1 = a1;
                    v0 = a2;
                    v2 = uu_cp::platform::linux::handle_reflink_never_sparse_auto(a1, a2, a3, a4);
                    if !v2.field_0 && (&v2.field_0)[4] == 3 {
                        uu_cp::platform::linux::sparse_copy_without_hole(v1, v0, a3, a4);
                    } else {
                        std::fs::copy(v1, v0, a3, a4);
                        goto LABEL_49bec2;
                    }
                    goto LABEL_49bf03;
                } else {
                    if !a10 {
                        v6 = a7;
                        v7 = a8;
                        v1 = a4;
                        v0 = a3;
                        v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_never(a1, a2);
                        std::fs::copy(a1, a2, v0, v1);
                        goto LABEL_49bec2;
                    }
LABEL_49bc61:
                    if !(uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1) {
                        return struct16 {
                            field_0: 9223372036854775820
                            field_8: v10
                            field_9: v8
                            field_10: v9
                        };
                    }
                }
            } else {
                if !a10 {
                    v6 = a7;
                    v7 = a8;
                    v1 = a1;
                    v0 = a2;
                    v2 = uu_cp::platform::linux::handle_reflink_never_sparse_always(a1, a2, a3, a4);
                    if !v2.field_0 && (&v2.field_0)[4] == 1 {
                        std::fs::copy(v1, v0, a3, a4);
LABEL_49bec2:
                        if let Ok(_) = v12 {
                            return struct16 {
                                field_0: 9223372036854775820
                                field_8: v10
                                field_9: v8
                                field_10: v9
                            };
                        }
                    } else {
                        uu_cp::platform::linux::sparse_copy(v1, v0, a3, a4);
LABEL_49bf03:
                        if let Ok(_) = v11 {
                            return struct16 {
                                field_0: 9223372036854775820
                                field_8: v10
                                field_9: v8
                                field_10: v9
                            };
                        }
                    }
                } else if !(uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1) {
                    return struct16 {
                        field_0: 9223372036854775820
                        field_8: v10
                        field_9: v8
                        field_10: v9
                    };
                }
            }
        }
    } else {
        if a6 == 1 {
            uu_cp::platform::linux::clone(a1, a2, a3, a4, 0);
            if let Ok(_) = v11 {
                return struct16 {
                    field_0: 9223372036854775820
                    field_8: v10
                    field_9: v8
                    field_10: v9
                };
            }
        } else {
            return <uu_cp::Error as core::convert::From<&str>>::from(a0, "`--reflink=always` can be used only with --sparse=auto");
        }
    }
    v2 = struct24 {
        field_0: v6
        field_8: v7
        field_16: v11
    };
    return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
}
