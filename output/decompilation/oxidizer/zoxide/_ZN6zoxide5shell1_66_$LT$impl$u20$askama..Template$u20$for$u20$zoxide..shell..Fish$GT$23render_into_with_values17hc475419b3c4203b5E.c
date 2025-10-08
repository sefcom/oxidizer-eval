fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Fish>::render_into_with_values(a0: i64, a1: i64, a2: i128) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x40], Other Possible Types: struct32, struct8, Result<struct24, struct16>, struct16
    let v1: struct8;  // [bp-0x38]
    let v2: struct8;  // [bp-0x38]
    let v3: i8;  // [bp-0x30]
    let v5: struct24;  // rax
    let v6: struct9;  // rsi
    let v7: struct80;  // rdx
    let v8: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rsi
    let v9: u64;  // rdx
    let v10: struct16;  // rsi
    let v11: struct24;  // rdx
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

    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v13
            field_8: *(&v3 as &i128)
        };
    }
    v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd") as u64;
    if !askama::helpers::as_bool(&g_419dac) {
        v6 = (!askama::helpers::as_bool(a1 + 18) ? &g_41d5e3 : &g_41d5f6);
    }
    v29 = <alloc::string::String as core::fmt::Write>::write_str(a2, v6, v7) as u64;
    v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\nend\n\n# A copy of fish\'s internal cd function. This makes it possible to use\n# `alias cd=z` without causing an infinite loop.\nif ! builtin functions --query __zoxide_cd_internal\n    string replace --regex -- \'^function cd\\s\' \'function __zoxide_cd_internal \' <$__fish_data_dir/functions/cd.fish | source\nend\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd\n    if set -q __zoxide_loop\n        builtin echo \"zoxide: infinite loop detected\"\n        builtin echo \"Avoid aliasing `cd` to `z` directly, use `zoxide init --cmd=cd fish` instead\"\n        return 1\n    end") as u64;
    v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, v8, v9) as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    and __zoxide_pwd") as u64;
    }
    v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\nend\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 == 4 {
        v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#\n\n") as u64;
        v1 = !*((a1 + 16) as &i8);
        if askama::helpers::as_bool(&v1) {
            v0 = a2;
            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
            v5 = v2.field_0;
            if v2.field_0 == 4 {
                goto LABEL_498c35;
            }
        } else {
            v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "# Initialize hook to add new entries to the database.") as u64;
            v1 = *((a1 + 16) as &i8) == 1;
            if !askama::helpers::as_bool(&v1) {
                v1 = *((a1 + 16) as &i8) == 2;
                if !askama::helpers::as_bool(&v1) {
                    goto LABEL_498c21;
                }
            }
            v34 = <alloc::string::String as core::fmt::Write>::write_str(a2, v10, v11) as u64;
LABEL_498c21:
            v31 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\nend") as u64;
LABEL_498c35:
            v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v5 = v1.field_0;
            if v1.field_0 == 4 {
                v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z\n    set -l argc (builtin count $argv)\n    if test $argc -eq 0\n        __zoxide_cd $HOME\n    else if test \"$argv\" = -\n        __zoxide_cd -\n    else if test $argc -eq 1 -a -d $argv[1]\n        __zoxide_cd $argv[1]\n    else if test $argc -eq 2 -a $argv[1] = --\n        __zoxide_cd -- $argv[2]\n    else\n        set -l result (command zoxide query --exclude (__zoxide_pwd) -- $argv)\n        and __zoxide_cd $result\n    end\nend\n\n# Completions.\nfunction __zoxide_z_complete\n    set -l tokens (builtin commandline --current-process --tokenize)\n    set -l curr_tokens (builtin commandline --cut-at-cursor --current-process --tokenize)\n\n    if test (builtin count $tokens) -le 2 -a (builtin count $curr_tokens) -eq 1\n        # If there are < 2 arguments, use `cd` completions.\n        complete --do-complete \"\'\' \"(builtin commandline --cut-at-cursor --current-token) | string match --regex -- \'.*/$\'\n    else if test (builtin count $tokens) -eq (builtin count $curr_tokens)\n        # If the last argument is empty, use interactive selection.\n        set -l query $tokens[2..-1]\n        set -l result (command zoxide query --exclude (__zoxide_pwd) --interactive -- $query)\n        and __zoxide_cd $result\n        and builtin commandline --function cancel-commandline repaint\n    end\nend\ncomplete --command __zoxide_z --no-files --arguments \'(__zoxide_z_complete)\'\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi\n    set -l result (command zoxide query --interactive -- $argv)\n    and __zoxide_cd $result\nend\n\n") as u64;
                v0 = a2;
                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                v5 = v1.field_0;
                if v1.field_0 == 4 {
                    v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                    if *(a1 as &i64) {
                        v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\nabbr --erase ") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
                            v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, " &>/dev/null\nalias ") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, "=__zoxide_z\n\nabbr --erase ") as u64;
                                v0 = a2;
                                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                v5 = v1.field_0;
                                if v1.field_0 == 4 {
                                    v32 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i &>/dev/null\nalias ") as u64;
                                    v0 = a2;
                                    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                    v5 = v1.field_0;
                                    if v1.field_0 == 4 {
                                        v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i=__zoxide_zi") as u64;
                                        goto LABEL_498e16;
                                    }
                                }
                            }
                        }
                    } else {
                        v33 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
LABEL_498e16:
                            v30 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source") as u64;
                            }
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v13
        field_8: *(&v3 as &i128)
    };
}
