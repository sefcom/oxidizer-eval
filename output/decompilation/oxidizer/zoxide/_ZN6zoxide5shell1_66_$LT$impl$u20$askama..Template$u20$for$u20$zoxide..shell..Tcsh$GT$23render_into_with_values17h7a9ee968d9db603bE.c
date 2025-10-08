fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Tcsh>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0x48], Other Possible Types: struct20, struct16, struct8, u64
    let v1: struct8;  // [sp-0x40]
    let v2: struct8;  // [bp-0x40]
    let v3: i8;  // [bp-0x38]
    let v6: struct24;  // r12
    let v7: core::result::Result<(), core::fmt::Error>;  // rax
    let v8: struct24;  // rsi
    let v9: core::result::Result<(), core::fmt::Error>;  // rdx
    let v11: u64;  // rax
    let v12: core::result::Result<(), core::fmt::Error>;  // rax
    let v13: core::result::Result<(), core::fmt::Error>;  // rax
    let v14: core::result::Result<(), core::fmt::Error>;  // rax
    let v15: core::result::Result<(), core::fmt::Error>;  // rax
    let v16: core::result::Result<(), core::fmt::Error>;  // rax
    let v17: core::result::Result<(), core::fmt::Error>;  // rax
    let v18: core::result::Result<(), core::fmt::Error>;  // rax
    let v19: core::result::Result<(), core::fmt::Error>;  // rax
    let v20: core::result::Result<(), core::fmt::Error>;  // rax
    let v21: core::result::Result<(), core::fmt::Error>;  // rax
    let v22: core::result::Result<(), core::fmt::Error>;  // rax
    let v23: core::result::Result<(), core::fmt::Error>;  // rax
    let v24: core::result::Result<(), core::fmt::Error>;  // rax
    let v25: core::result::Result<(), core::fmt::Error>;  // rax
    let v26: core::result::Result<(), core::fmt::Error>;  // rax
    let v27: core::result::Result<(), core::fmt::Error>;  // rax
    let v28: core::result::Result<(), core::fmt::Error>;  // rax
    let v29: core::result::Result<(), core::fmt::Error>;  // rax

    v6 = (askama::helpers::as_bool(a1 + 18) ? &g_420080 : &g_42007a);
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v7 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v11
            field_8: *(&v3 as &i128)
        };
    }
    v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#") as u64;
    v1 = *((a1 + 16) as &i8);
    if askama::helpers::as_bool(&v1) {
        v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Hook to add new entries to the database.") as u64;
        v1 = *((a1 + 16) as &i8) == 1;
        if askama::helpers::as_bool(&v1) {
            v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\nalias __zoxide_hook \'zoxide add -- \"`") as u64;
            v0 = a2;
            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(v6, 6, &v0);
            v7 = v2.field_0;
            if v2.field_0 == 4 {
                goto LABEL_499a86;
            }
        } else {
            v1 = *((a1 + 16) as &i8) == 2;
            if !askama::helpers::as_bool(&v1) {
                goto LABEL_499b37;
            }
            v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\nset __zoxide_pwd_old = `") as u64;
            v0 = a2;
            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(v6, 6, &v0);
            v7 = v2.field_0;
            if v2.field_0 == 4 {
                v13 = <alloc::string::String as core::fmt::Write>::write_str(a2, "`\nalias __zoxide_hook \'set __zoxide_pwd_tmp = \"`") as u64;
                v0 = a2;
                v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(v6, 6, &v0);
                v7 = v2.field_0;
                if v2.field_0 == 4 {
LABEL_499a86:
                    v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, v8, v9) as u64;
LABEL_499b37:
                    v29 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Initialize hook.\nalias precmd ';__zoxide_hook'") as u64;
                    goto LABEL_499b4b;
                }
            }
        }
    } else {
LABEL_499b4b:
        v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
        v0 = a2;
        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
        v7 = v1.field_0;
        if v1.field_0 == 4 {
            v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nalias __zoxide_z \'set __zoxide_args = (\\!*)\\\nif (\"$#__zoxide_args\" == 0) then\\\n    cd ~\\\nelse\\\n    if (\"$#__zoxide_args\" == 1 && \"$__zoxide_args[1]\" == \"-\") then\\\n        cd -\\\n    else if (\"$#__zoxide_args\" == 1 && -d \"$__zoxide_args[1]\") then\\\n        cd \"$__zoxide_args[1]\"\\\n    else\\\n        set __zoxide_pwd = `") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(v6, 6, &v0);
            v7 = v1.field_0;
            if v1.field_0 == 4 {
                v12 = <alloc::string::String as core::fmt::Write>::write_str(a2, "`\\\n        set __zoxide_result = \"`zoxide query --exclude \'\"\'\"\'$__zoxide_pwd\'\"\'\"\' -- $__zoxide_args`\" && cd \"$__zoxide_result\"\\\n    endif\\\nendif\'\n\n# Jump to a directory using interactive search.\nalias __zoxide_zi \'set __zoxide_args = (\\!*)\\\nset __zoxide_pwd = `") as u64;
                v0 = a2;
                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(v6, 6, &v0);
                v7 = v1.field_0;
                if v1.field_0 == 4 {
                    v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "`\\\nset __zoxide_result = \"`zoxide query --exclude \'\"\'\"\'$__zoxide_pwd\'\"\'\"\' --interactive -- $__zoxide_args`\" && cd \"$__zoxide_result\"\'\n\n") as u64;
                    v0 = a2;
                    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                    v7 = v1.field_0;
                    if v1.field_0 == 4 {
                        v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                        if *(a1 as &i64) {
                            v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\nalias ") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v7 = v1.field_0;
                            if v1.field_0 == 4 {
                                v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, " __zoxide_z\nalias ") as u64;
                                v0 = a2;
                                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                v7 = v1.field_0;
                                if v1.field_0 == 4 {
                                    v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i __zoxide_zi") as u64;
                                    goto LABEL_499d21;
                                }
                            }
                        } else {
                            v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                            v7 = v1.field_0;
                            if v1.field_0 == 4 {
LABEL_499d21:
                                v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                                v0 = a2;
                                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                                v7 = v1.field_0;
                                if v1.field_0 == 4 {
                                    v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your shell configuration file (usually ~/.tcshrc):\n#\n#     zoxide init tcsh > ~/.zoxide.tcsh\n#     source ~/.zoxide.tcsh") as u64;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v11
        field_8: *(&v3 as &i128)
    };
}
