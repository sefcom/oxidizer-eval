fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Zsh>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: struct8;  // [bp-0x40], Other Possible Types: u64
    let v1: struct8;  // [bp-0x38]
    let v2: struct8;  // [sp-0x38]
    let v3: i8;  // [bp-0x30]
    let v5: core::result::Result<(), core::fmt::Error>;  // rax
    let v6: u64;  // rsi
    let v7: core::result::Result<(), core::fmt::Error>;  // rdx
    let v8: core::result::Result<(), core::fmt::Error>;  // rsi
    let v9: core::result::Result<(), core::fmt::Error>;  // rdx
    let v10: u64;  // rsi
    let v11: Result<struct24, struct16>;  // rdx
    let v12: Result<struct8, struct8>;  // rsi
    let v13: u64;  // rdx
    let v14: struct8;  // rsi
    let v15: core::result::Result<(), core::fmt::Error>;  // rdx
    let v17: u64;  // rax
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
    let v35: core::result::Result<(), core::fmt::Error>;  // rax
    let v36: core::result::Result<(), core::fmt::Error>;  // rax
    let v37: core::result::Result<(), core::fmt::Error>;  // rax
    let v38: core::result::Result<(), core::fmt::Error>;  // rax
    let v39: core::result::Result<(), core::fmt::Error>;  // rax
    let v40: core::result::Result<(), core::fmt::Error>;  // rax
    let v41: core::result::Result<(), core::fmt::Error>;  // rax

    v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# shellcheck shell=bash\n\n") as u64;
    v0 = a2;
    v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v2.field_0;
    if v2.field_0 != 4 {
        return struct24 {
            field_0: v17
            field_8: *(&v3 as &i128)
        };
    }
    v33 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {") as u64;
    if !askama::helpers::as_bool(&g_419dac) {
        v6 = (!askama::helpers::as_bool(a1 + 18) ? &g_41b860 : &g_41b874);
    }
    v34 = <alloc::string::String as core::fmt::Write>::write_str(a2, v6, v7) as u64;
    v37 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"") as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v29 = <alloc::string::String as core::fmt::Write>::write_str(a2, " && __zoxide_pwd") as u64;
    }
    v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
    v0 = a2;
    v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v2.field_0;
    if v2.field_0 == 4 {
        v38 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\nfunction __zoxide_hook() {\n    # shellcheck disable=SC2312\n    \\command zoxide add -- \"$(__zoxide_pwd)\"\n}\n\n# Initialize hook.\n\\builtin typeset -ga precmd_functions\n\\builtin typeset -ga chpwd_functions\n# shellcheck disable=SC2034,SC2296\nprecmd_functions=(\"${(@)precmd_functions:#__zoxide_hook}\")\n# shellcheck disable=SC2034,SC2296\nchpwd_functions=(\"${(@)chpwd_functions:#__zoxide_hook}\")") as u64;
        v2 = *((a1 + 16) as &i8) == 1;
        if !askama::helpers::as_bool(&v2) {
            v2 = *((a1 + 16) as &i8) == 2;
            if !askama::helpers::as_bool(&v2) {
                goto LABEL_49a303;
            }
        }
        v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, v8, v9) as u64;
LABEL_49a303:
        v31 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Report common issues.\nfunction __zoxide_doctor() {") as u64;
        v1 = !*((a1 + 16) as &i8);
        if !askama::helpers::as_bool(&v1) {
            v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    [[ ${_ZO_DOCTOR:-1} -ne 0 ]] || return 0") as u64;
            v1 = *((a1 + 16) as &i8) == 1;
            if !askama::helpers::as_bool(&v1) {
                v1 = *((a1 + 16) as &i8) == 2;
                if !askama::helpers::as_bool(&v1) {
                    goto LABEL_49a3b2;
                }
            }
            v30 = <alloc::string::String as core::fmt::Write>::write_str(a2, v12, v13) as u64;
        }
LABEL_49a3b2:
        v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, v10, v11) as u64;
        v32 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
        v0 = a2;
        v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
        v5 = v2.field_0;
        if v2.field_0 == 4 {
            v39 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n    if [[ \"$#\" -eq 0 ]]; then\n        __zoxide_cd ~\n    elif [[ \"$#\" -eq 1 ]] && { [[ -d \"$1\" ]] || [[ \"$1\" = \'-\' ]] || [[ \"$1\" =~ ^[-+][0-9]+$ ]]; }; then\n        __zoxide_cd \"$1\"\n    elif [[ \"$#\" -eq 2 ]] && [[ \"$1\" = \"--\" ]]; then\n        __zoxide_cd \"$2\"\n    else\n        \\builtin local result\n        # shellcheck disable=SC2312\n        result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" -- \"$@\")\" && __zoxide_cd \"${result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi() {\n    __zoxide_doctor\n    \\builtin local result\n    result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${result}\"\n}\n\n") as u64;
            v0 = a2;
            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v5 = v2.field_0;
            if v2.field_0 == 4 {
                v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                if *(a1 as &i64) {
                    v41 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\nfunction ") as u64;
                    v0 = a2;
                    v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                    v5 = v2.field_0;
                    if v2.field_0 == 4 {
                        v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, "() {\n    __zoxide_z \"$@\"\n}\n\nfunction ") as u64;
                        v0 = a2;
                        v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v5 = v2.field_0;
                        if v2.field_0 == 4 {
                            v40 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i() {\n    __zoxide_zi \"$@\"\n}") as u64;
LABEL_49a52b:
                            v36 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Completions.\nif [[ -o zle ]]; then\n    __zoxide_result=\'\'\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        # shellcheck disable=SC2154\n        [[ \"${#words[@]}\" -eq \"${CURRENT}\" ]] || return 0\n\n        if [[ \"${#words[@]}\" -eq 2 ]]; then\n            # Show completions for local directories.\n            _cd -/\n\n        elif [[ \"${words[-1]}\" == \'\' ]]; then\n            # Show completions for Space-Tab.\n            # shellcheck disable=SC2086\n            __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd || \\builtin true)\" --interactive -- ${words[2,-1]})\" || __zoxide_result=\'\'\n\n            # Set a result to ensure completion doesn\'t re-run\n            compadd -Q \"\"\n\n            # Bind \'\\e[0n\' to helper function.\n            \\builtin bindkey \'\\e[0n\' \'__zoxide_z_complete_helper\'\n            # Sends query device status code, which results in a \'\\e[0n\' being sent to console input.\n            \\builtin printf \'\\e[5n\'\n\n            # Report that the completion was successful, so that we don\'t fall back\n            # to another completion function.\n            return 0\n        fi\n    }\n\n    function __zoxide_z_complete_helper() {\n        if [[ -n \"${__zoxide_result}\" ]]; then\n            # shellcheck disable=SC2034,SC2296\n            BUFFER=\"") as u64;
                            v0 = a2;
                            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(v14, v15, &v0);
                            v5 = v2.field_0;
                            if v2.field_0 == 4 {
                                v35 = <alloc::string::String as core::fmt::Write>::write_str(a2, " ${(q-)__zoxide_result}\"\n            __zoxide_result=\'\'\n            \\builtin zle reset-prompt\n            \\builtin zle accept-line\n        else\n            \\builtin zle reset-prompt\n        fi\n    }\n    \\builtin zle -N __zoxide_z_complete_helper") as u64;
                                if *(a1 as &i64) {
                                    v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n    [[ \"${+functions[compdef]}\" -ne 0 ]] && \\compdef __zoxide_z_complete ") as u64;
                                    v0 = a2;
                                    v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                    v5 = v2.field_0;
                                    if v2.field_0 == 4 {
                                        goto LABEL_49a5cc;
                                    }
                                } else {
LABEL_49a5cc:
                                    v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\nfi\n\n") as u64;
                                    v0 = a2;
                                    v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                                    v5 = v2.field_0;
                                    if v2.field_0 == 4 {
                                        v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your shell configuration file (usually ~/.zshrc):\n#\n# eval \"$(zoxide init zsh)\"") as u64;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                    v0 = a2;
                    v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                    v5 = v2.field_0;
                    if v2.field_0 == 4 {
                        goto LABEL_49a52b;
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v17
        field_8: *(&v3 as &i128)
    };
}
