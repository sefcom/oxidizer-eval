fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Bash>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x40]
    let v1: struct8;  // [sp-0x38], Other Possible Types: u8
    let v2: i8;  // [bp-0x30]
    let v4: core::option::Option<std::path::Component>;  // rax
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: u64;  // rsi
    let v8: u64;  // rdx
    let v9: struct24;  // rsi
    let v10: u64;  // rdx
    let v12: u64;  // rax
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
    let v30: core::result::Result<(), core::fmt::Error>;  // rax
    let v31: core::result::Result<(), core::fmt::Error>;  // rax
    let v32: core::result::Result<(), core::fmt::Error>;  // rax
    let v33: core::result::Result<(), core::fmt::Error>;  // rax
    let v34: core::result::Result<(), core::fmt::Error>;  // rax
    let v35: core::result::Result<(), core::fmt::Error>;  // rax
    let v36: core::result::Result<(), core::fmt::Error>;  // rax
    let v37: core::result::Result<(), core::fmt::Error>;  // rax
    let v38: core::result::Result<(), core::fmt::Error>;  // rax

    v38 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# shellcheck shell=bash\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v4 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v12
            field_8: *(&v2 as &i128)
        };
    }
    v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {") as u64;
    if !askama::helpers::as_bool(&g_419dac) {
        v5 = (!askama::helpers::as_bool(a1 + 18) ? &g_41b860 : &g_41b874);
    }
    v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, v5, v6) as u64;
    v32 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"") as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, " && __zoxide_pwd") as u64;
    }
    v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v4 = v1.field_0;
    if v1.field_0 == 4 {
        v33 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#") as u64;
        v1 = *((a1 + 16) as &i8);
        if askama::helpers::as_bool(&v1) {
            v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Hook to add new entries to the database.") as u64;
            v1 = *((a1 + 16) as &i8) == 1;
            if !askama::helpers::as_bool(&v1) {
                v1 = *((a1 + 16) as &i8) == 2;
                if !askama::helpers::as_bool(&v1) {
                    goto LABEL_4982bf;
                }
            }
            v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, v7, v8) as u64;
LABEL_4982bf:
            v31 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Initialize hook.\nif [[ ${PROMPT_COMMAND:=} != *\'__zoxide_hook\'* ]]; then\n    PROMPT_COMMAND=\"__zoxide_hook;${PROMPT_COMMAND#;}\"\nfi") as u64;
        }
        v13 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Report common issues.\nfunction __zoxide_doctor() {") as u64;
        v37 = <alloc::string::String as core::fmt::Write>::write_str(a2, v9, v10) as u64;
        v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
        v0 = a2;
        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
        v4 = v1.field_0;
        if v1.field_0 == 4 {
            v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n__zoxide_z_prefix=\'z#\'\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n\n    # shellcheck disable=SC2199\n    if [[ $# -eq 0 ]]; then\n        __zoxide_cd ~\n    elif [[ $# -eq 1 && $1 == \'-\' ]]; then\n        __zoxide_cd \"${OLDPWD}\"\n    elif [[ $# -eq 1 && -d $1 ]]; then\n        __zoxide_cd \"$1\"\n    elif [[ $# -eq 2 && $1 == \'--\' ]]; then\n        __zoxide_cd \"$2\"\n    elif [[ ${@: -1} == \"${__zoxide_z_prefix}\"?* ]]; then\n        # shellcheck disable=SC2124\n        \\builtin local result=\"${@: -1}\"\n        __zoxide_cd \"${result:${#__zoxide_z_prefix}}\"\n    else\n        \\builtin local result\n        # shellcheck disable=SC2312\n        result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" -- \"$@\")\" &&\n            __zoxide_cd \"${result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi() {\n    __zoxide_doctor\n    \\builtin local result\n    result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${result}\"\n}\n\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v4 = v1.field_0;
            if v1.field_0 == 4 {
                v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                if *(a1 as &i64) {
                    v34 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n\\builtin unalias ") as u64;
                    v0 = a2;
                    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                    v4 = v1.field_0;
                    if v1.field_0 == 4 {
                        v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, " &>/dev/null || \\builtin true\nfunction ") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v4 = v1.field_0;
                        if v1.field_0 == 4 {
                            v35 = <alloc::string::String as core::fmt::Write>::write_str(a2, "() {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias ") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v4 = v1.field_0;
                            if v1.field_0 == 4 {
                                v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i &>/dev/null || \\builtin true\nfunction ") as u64;
                                v0 = a2;
                                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                v4 = v1.field_0;
                                if v1.field_0 == 4 {
                                    v36 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require line editing. Since Bash supports only two modes of\n#   line editing (`vim` and `emacs`), we check if either them is enabled.\n# - Completions don\'t work on `dumb` terminals.\nif [[ ${BASH_VERSINFO[0]:-0} -eq 4 && ${BASH_VERSINFO[1]:-0} -ge 4 || ${BASH_VERSINFO[0]:-0} -ge 5 ]] &&\n    [[ :\"${SHELLOPTS}\": =~ :(vi|emacs): && ${TERM} != \'dumb\' ]]; then\n\n    function __zoxide_z_complete_helper() {\n        READLINE_LINE=\"") as u64;
                                    v0 = a2;
                                    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                    v4 = v1.field_0;
                                    if v1.field_0 == 4 {
                                        v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, " ${__zoxide_result@Q}\"\n        READLINE_POINT=${#READLINE_LINE}\n        bind \'\"\\e[0n\": accept-line\'\n        \\builtin printf \'\\e[5n\' >/dev/tty\n    }\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        [[ ${#COMP_WORDS[@]} -eq $((COMP_CWORD + 1)) ]] || return\n\n        # If there is only one argument, use `cd` completions.\n        if [[ ${#COMP_WORDS[@]} -eq 2 ]]; then\n            \\builtin mapfile -t COMPREPLY < <(\n                \\builtin compgen -A directory -- \"${COMP_WORDS[-1]}\" || \\builtin true\n            )\n        # If there is a space after the last word, use interactive selection.\n        elif [[ -z ${COMP_WORDS[-1]} ]]; then\n            # shellcheck disable=SC2312\n            __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" --interactive -- \"${COMP_WORDS[@]:1:${#COMP_WORDS[@]}-2}\")\" && {\n                # In case the terminal does not respond to \\e[5n or another\n                # mechanism steals the response, it is still worth completing\n                # the directory in the command line.\n                COMPREPLY=(\"${__zoxide_z_prefix}${__zoxide_result}/\")\n\n                # Note: We here call \"bind\" without prefixing \"\\builtin\" to be\n                # compatible with frameworks like ble.sh, which emulates Bash\'s\n                # builtin \"bind\".\n                bind -x \'\"\\e[0n\": __zoxide_z_complete_helper\'\n                \\builtin printf \'\\e[5n\' >/dev/tty\n            }\n        fi\n    }\n\n    \\builtin complete -F __zoxide_z_complete -o filenames -- ") as u64;
                                        v0 = a2;
                                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                        v4 = v1.field_0;
                                        if v1.field_0 == 4 {
                                            v30 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    \\builtin complete -r ") as u64;
                                            v0 = a2;
                                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                            v4 = v1.field_0;
                                            if v1.field_0 == 4 {
                                                v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i &>/dev/null || \\builtin true\nfi") as u64;
                                                goto LABEL_4985b0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                    v0 = a2;
                    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                    v4 = v1.field_0;
                    if v1.field_0 == 4 {
LABEL_4985b0:
                        v29 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                        v4 = v1.field_0;
                        if v1.field_0 == 4 {
                            v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your shell configuration file (usually ~/.bashrc):\n#\n# eval \"$(zoxide init bash)\"") as u64;
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v12
        field_8: *(&v2 as &i128)
    };
}
