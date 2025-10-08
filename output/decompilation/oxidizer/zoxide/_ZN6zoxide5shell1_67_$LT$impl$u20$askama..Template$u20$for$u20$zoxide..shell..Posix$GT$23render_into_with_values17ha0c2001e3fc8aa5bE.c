fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Posix>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: core::option::Option<std::path::Component>;  // [bp-0x38], Other Possible Types: struct16, struct8, u64
    let v1: struct8;  // [bp-0x30]
    let v2: i8;  // [bp-0x28]
    let v4: struct16;  // rax
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: u32;  // eax
    let v8: struct24;  // rsi
    let v9: core::result::Result<(), core::fmt::Error>;  // rdx
    let v10: u64;  // rsi
    let v11: u64;  // rdx
    let v13: u64;  // rax
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
    let v30: core::result::Result<(), core::fmt::Error>;  // rax
    let v31: core::result::Result<(), core::fmt::Error>;  // rax
    let v32: core::result::Result<(), core::fmt::Error>;  // rax
    let v33: core::result::Result<(), core::fmt::Error>;  // rax
    let v34: core::result::Result<(), core::fmt::Error>;  // rax

    v29 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# shellcheck shell=sh\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v4 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v13
            field_8: *(&v2 as &i128)
        };
    }
    v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\n__zoxide_pwd() {") as u64;
    if !askama::helpers::as_bool(&g_419dac) {
        v5 = (!askama::helpers::as_bool(a1 + 18) ? &g_41e989 : &g_41e99d);
    }
    v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, v5, v6) as u64;
    v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\command cd \"$@\"") as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, " && __zoxide_pwd") as u64;
    }
    v33 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v4 = v1.field_0;
    if v1.field_0 == 4 {
        v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#\n\n") as u64;
        v7 = *((a1 + 16) as &i8);
        if v7 {
            if v7 == 1 {
                v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# Hook to add new entries to the database.\n__zoxide_hook() {\n    \\command zoxide add -- \"$(__zoxide_pwd || \\builtin true)\"\n}\n\n# Initialize hook.\nif [ \"${PS1:=}\" = \"${PS1#*\\$(__zoxide_hook)}\" ]; then\n    PS1=\"${PS1}\\$(__zoxide_hook)\"\nfi\n\n# Report common issues.\n__zoxide_doctor() {") as u64;
                v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, v8, v9) as u64;
            }
            v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, v10, v11) as u64;
LABEL_4993e2:
            v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v4 = v1.field_0;
            if v1.field_0 == 4 {
                v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\n__zoxide_z() {\n    __zoxide_doctor\n\n    if [ \"$#\" -eq 0 ]; then\n        __zoxide_cd ~\n    elif [ \"$#\" -eq 1 ] && [ \"$1\" = \'-\' ]; then\n        if [ -n \"${OLDPWD}\" ]; then\n            __zoxide_cd \"${OLDPWD}\"\n        else\n            # shellcheck disable=SC2016\n            \\command printf \'zoxide: $OLDPWD is not set\'\n            return 1\n        fi\n    elif [ \"$#\" -eq 1 ] && [ -d \"$1\" ]; then\n        __zoxide_cd \"$1\"\n    else\n        __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd || \\builtin true)\" -- \"$@\")\" &&\n            __zoxide_cd \"${__zoxide_result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\n__zoxide_zi() {\n    __zoxide_doctor\n    __zoxide_result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${__zoxide_result}\"\n}\n\n") as u64;
                v0 = a2;
                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                v4 = v1.field_0;
                if v1.field_0 == 4 {
                    v30 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                    if *(a1 as &i64) {
                        v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n\\command unalias ") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v4 = v1.field_0;
                        if v1.field_0 == 4 {
                            v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, " >/dev/null 2>&1 || \\true\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v4 = v1.field_0;
                            if v1.field_0 == 4 {
                                v31 = <alloc::string::String as core::fmt::Write>::write_str(a2, "() {\n    __zoxide_z \"$@\"\n}\n\n\\command unalias ") as u64;
                                v0 = a2;
                                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                v4 = v1.field_0;
                                if v1.field_0 == 4 {
                                    v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i >/dev/null 2>&1 || \\true\n") as u64;
                                    v0 = a2;
                                    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                    v4 = v1.field_0;
                                    if v1.field_0 == 4 {
                                        v32 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i() {\n    __zoxide_zi \"$@\"\n}") as u64;
                                        goto LABEL_4995ae;
                                    }
                                }
                            }
                        }
                    } else {
                        v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                        v4 = v1.field_0;
                        if v1.field_0 == 4 {
LABEL_4995ae:
                            v34 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                            v4 = v1.field_0;
                            if v1.field_0 == 4 {
                                v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"") as u64;
                            }
                        }
                    }
                }
            }
        } else {
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
            v4 = v1.field_0;
            if v1.field_0 == 4 {
                goto LABEL_4993e2;
            }
        }
    }
    return struct24 {
        field_0: v13
        field_8: *(&v2 as &i128)
    };
}
