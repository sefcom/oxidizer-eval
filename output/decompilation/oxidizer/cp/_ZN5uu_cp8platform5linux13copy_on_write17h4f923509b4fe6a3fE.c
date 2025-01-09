fn uu_cp::platform::linux::copy_on_write(a0: &Option<Result<struct32, struct3>>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x60]
    let v1: i64;  // [bp-0x58]
    let v2: i192;  // [sp-0x50], Other Possible Types: Result<struct8, struct4>
    let v3: i8;  // [bp-0x38]
    let v4: i64;  // [bp+0x8]
    let v5: i8;  // [bp+0x10]
    let v6: i8;  // [bp+0x20]
    let v7: i64;  // rdi
    let v8: i8;  // al
    let v9: i64;  // rax
    let v10: i64;  // r14
    let v11: i64;  // r15
    let v14: i64;  // r14
    let v15: i64;  // r15
    let v16: i8;  // al
    let v17: i64;  // r14
    let v18: i64;  // r15
    let v19: i8;  // al
    let v20: i8;  // al
    let v21: i8;  // al
    let v22: i8;  // cl
    let v23: i8;  // cc_dep1
    let v24: i8;  // cc_dep1

    v7 = v4;
    if !a5 {
        if v7 != 1 {
            <uu_cp::Error as core::convert::From<&str>>::from(a0, "`--reflink=always` can be used only with --sparse=auto");
        } else {
            v9 = uu_cp::platform::linux::clone(a1, a2, a3, a4, 0);
            goto LABEL_51382b;
        }
        goto LABEL_51382b;
    }
    v8 = v6;
    if a5 != 1 {
        if !v7 {
            if v8 && uu_cp::platform::linux::copy_fifo_contents(a1, a2, a3, a4) {
                vvar_713{stack -80} = v5;
                <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
            }
            v0 = a1;
            v1 = a2;
            v2 = uu_cp::platform::linux::handle_reflink_never_sparse_always(a1, a2, a3, a4);
            v19 = v2;
            v3 = v19;
            if v19 {
LABEL_51392b:
                uu_cp::platform::linux::sparse_copy(v0, v1, a3, a4);
LABEL_513b2a:
                goto LABEL_51382b;
            } else if !(*((&v2 as &char + 4) as &i8) == 1) {
                goto LABEL_51392b;
            }
        } else {
            if v7 != 1 {
                if !v8 {
                    v1 = a4;
                    v3 = a3;
                    v2 = uu_cp::platform::linux::handle_reflink_never_sparse_never(a1, a2);
                    v22 = v2;
                    v0 = v22;
                    v23 = v22;
                    if std::fs::copy(a1, a2, v3, v1) {
                        v2 = v5;
                        <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
                    }
                }
LABEL_513864:
                if uu_cp::platform::linux::copy_fifo_contents(a1, a2, a3, a4) {
                    vvar_717{stack -80} = v5;
                    <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
                }
            }
            if !(*((&v2 as &char + 4) as &i8) == 1) {
                goto LABEL_513864;
            }
            v0 = a1;
            v1 = a2;
            v17 = a3;
            v18 = a4;
            v2 = uu_cp::platform::linux::handle_reflink_never_sparse_auto(a1, a2, a3, a4);
            v21 = v2;
            v3 = v21;
            if !v21 {
                if !(*((&v2 as &char + 4) as &i8) == 1) {
                    goto LABEL_513aa1;
                }
                uu_cp::platform::linux::sparse_copy_without_hole(v0, v1, v17, v18);
                goto LABEL_51382b;
            } else {
LABEL_513aa1:
                if !std::fs::copy(v0, v1, v17, v18) {
                    return struct11 {
                        field_0: 13
                        field_8: 3
                        field_9: 4
                        field_10: 2
                    };
                }
            }
        }
        vvar_703{stack -80} = v5;
        <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
    } else {
        if !v7 {
            if !v8 {
                v0 = a1;
                v1 = a2;
                v10 = a3;
                v11 = a4;
                v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_always(a1, a2, a3, a4);
                v16 = v2;
                v3 = v16;
                if !v16 {
                    if !(*((&v2 as &char + 4) as &i8) == 1) {
                        goto LABEL_513a45;
                    }
                    uu_cp::platform::linux::clone(v0, v1, v10, v11, 1);
                    goto LABEL_513b2a;
                } else {
LABEL_513a45:
                    uu_cp::platform::linux::clone(v0, v1, v10, v11, 2);
                    goto LABEL_513b2a;
                }
            }
        } else {
            if v7 != 1 {
                if !(*((&v2 as &char + 4) as &i8) == 1) {
                    goto LABEL_513864;
                }
                v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_never(a1, a2);
                v0 = v2;
                v3 = *((&v2 as &char + 2) as &i8);
                v1 = *((&v2 as &char + 3) as &i8);
                v9 = uu_cp::platform::linux::clone(a1, a2, a3, a4, 1);
                v24 = v0;
LABEL_51382b:
                vvar_709{stack -80} = v5;
                <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
            } else if !v8 {
                v0 = a1;
                v1 = a2;
                v14 = a3;
                v15 = a4;
                v2 = uu_cp::platform::linux::handle_reflink_auto_sparse_auto(a1, a2, a3, a4);
                v20 = v2;
                v3 = v20;
                if !v20 {
                    if !(*((&v2 as &char + 4) as &i8) == 1) {
                        goto LABEL_5139ed;
                    }
                    uu_cp::platform::linux::clone(v0, v1, v14, v15, 3);
                    goto LABEL_513b2a;
                } else {
LABEL_5139ed:
                    uu_cp::platform::linux::clone(v0, v1, v14, v15, 1);
                    goto LABEL_513b2a;
                }
            }
        }
        vvar_706{stack -80} = v5;
        <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v2);
    }
}
