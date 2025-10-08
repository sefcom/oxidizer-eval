fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Elvish>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: struct56;  // [bp-0x40], Other Possible Types: u64
    let v1: struct8;  // [sp-0x38]
    let v2: u8;  // [bp-0x38]
    let v3: i8;  // [bp-0x30]
    let v5: core::option::Option<(&str, &str)>;  // rax
    let v6: u64;  // rsi
    let v7: u64;  // rdx
    let v9: u64;  // rax
    let v10: core::result::Result<(), core::fmt::Error>;  // rax
    let v11: core::result::Result<(), core::fmt::Error>;  // rax
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

    v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, "use builtin\nuse path\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v9
            field_8: *(&v3 as &i128)
        };
    }
    v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfn __zoxide_cd {|path|\n    builtin:cd $path") as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v10 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    builtin:echo $pwd") as u64;
    }
    v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 == 4 {
        v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to track previous directory.\nvar oldpwd = $builtin:pwd\nset builtin:before-chdir = [$@builtin:before-chdir {|_| set oldpwd = $builtin:pwd }]\n\n# Initialize hook to add directories to zoxide.") as u64;
        v2 = !*((a1 + 16) as &i8);
        if askama::helpers::as_bool(&v2) {
            v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
            v5 = v1.field_0;
            if v1.field_0 == 4 {
                goto LABEL_4987ef;
            }
        } else {
            v11 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\nif (builtin:not (builtin:eq $E:__zoxide_shlvl $E:SHLVL)) {\n    set E:__zoxide_shlvl = $E:SHLVL") as u64;
            v2 = *((a1 + 16) as &i8) == 1;
            if !askama::helpers::as_bool(&v2) {
                v2 = *((a1 + 16) as &i8) == 2;
                if !askama::helpers::as_bool(&v2) {
                    goto LABEL_4987db;
                }
            }
            v27 = <alloc::string::String as core::fmt::Write>::write_str(a2, v6, v7) as u64;
LABEL_4987db:
            v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}") as u64;
LABEL_4987ef:
            v28 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v5 = v1.field_0;
            if v1.field_0 == 4 {
                v13 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfn __zoxide_z {|@rest|\n    if (builtin:eq [] $rest) {\n        __zoxide_cd ~\n    } elif (builtin:eq [-] $rest) {\n        __zoxide_cd $oldpwd\n    } elif (and ('builtin:==' (builtin:count $rest) 1) (path:is-dir &follow-symlink=$true $rest[0])) {\n        __zoxide_cd $rest[0]\n    } else {\n        var path\n        try {\n            set path = (zoxide query --exclude $pwd -- $@rest)\n        } catch {\n        } else {\n            __zoxide_cd $path\n        }\n    }\n}\nedit:add-var __zoxide_z~ $__zoxide_z~\n\n# Jump to a directory using interactive search.\nfn __zoxide_zi {|@rest|\n    var path\n    try {\n        set path = (zoxide query --interactive -- $@rest)\n    } catch {\n    } else {\n        __zoxide_cd $path\n    }\n}\nedit:add-var __zoxide_zi~ $__zoxide_zi~\n\n") as u64;
                v0 = a2;
                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                v5 = v1.field_0;
                if v1.field_0 == 4 {
                    v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                    if *(a1 as &i64) {
                        v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\nedit:add-var ") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
                            v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "~ $__zoxide_z~\nedit:add-var ") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v26 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i~ $__zoxide_zi~\n\n# Load completions.\nfn __zoxide_z_complete {|@rest|\n    if (!= (builtin:count $rest) 2) {\n        builtin:return\n    }\n    edit:complete-filename $rest[1] |\n        builtin:each {|completion|\n            var dir = $completion[stem]\n            if (path:is-dir $dir) {\n                builtin:put $dir\n            }\n        }\n}\nset edit:completion:arg-completer[") as u64;
                                v0 = a2;
                                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                                v5 = v1.field_0;
                                if v1.field_0 == 4 {
                                    v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, "] = $__zoxide_z_complete~") as u64;
                                    goto LABEL_498996;
                                }
                            }
                        }
                    } else {
                        v12 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
LABEL_498996:
                            v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your configuration (usually\n# ~/.elvish/rc.elv):\n#\n#   eval (zoxide init elvish | slurp)\n#\n# Note: zoxide only supports elvish v0.18.0 and above.") as u64;
                            }
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v9
        field_8: *(&v3 as &i128)
    };
}
