long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Elvish>::render_into_with_values(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [sp-0x38]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdx

    a2.write_str("use builtin\nuse path\n\n\n# Utility functions for zoxide.\n#\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfn __zoxide_cd {|path|\n    builtin:cd $path\n    builtin:echo $pwd\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to track previous director", 22);
    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v5 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfn __zoxide_cd {|path|\n    builtin:cd $path\n    builtin:echo $pwd\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to track previous directory.\nvar oldpwd = $built", 131);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str("\n    builtin:echo $pwd\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to track previous directory.\nvar oldpwd = $builtin:pwd\nset builtin:before-chdir = [$@builtin:before-chdir {|_| set oldpwd = $builtin:pwd }]\n\n# Initialize hook to add directories t", 22);
        a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v5 = *((long long *)&v1);
        if (*((long long *)&v1) == 4)
        {
            a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to track previous directory.\nvar oldpwd = $builtin:pwd\nset builtin:before-chdir = [$@builtin:before-chdir {|_| set oldpwd = $builtin:pwd }]\n\n# Initialize hook to add directories to zoxide.\nif (builtin:", 243);
            v2 = !a1->field_10;
            if ((char)askama::helpers::as_bool(&v2))
            {
                a2.write_str("\ncould not render templatestdoutcould not read selection from fzfno match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 1);
                v0 = a2;
                v2.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                v5 = *((long long *)&v2);
                if (*((long long *)&v2) == 4)
                    goto LABEL_4987ef;
            }
            else
            {
                a2.write_str("\nif (builtin:not (builtin:eq $E:__zoxide_shlvl $E:SHLVL)) {\n    set E:__zoxide_shlvl = $E:SHLVL\n    set builtin:after-chdir = [$@builtin:after-chdir {|_| zoxide add -- $pwd }]\n    set edit:before-readline = [$@edit:before-readline {|| zoxide add -- $pwd }]", 95);
                v2 = a1->field_10 == 1;
                if ((char)askama::helpers::as_bool(&v2))
                {
                    v6 = "\n    set edit:before-readline = [$@edit:before-readline {|| zoxide add -- $pwd }]\n}\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfn __zoxide_z {|@rest|\n    if (builtin:eq [] $re";
                    v7 = 81;
                }
                else
                {
                    v2 = a1->field_10 == 2;
                    if (!(char)askama::helpers::as_bool(&v2))
                        goto LABEL_4987db;
                    v6 = "\n    set builtin:after-chdir = [$@builtin:after-chdir {|_| zoxide add -- $pwd }]\n    set edit:before-readline = [$@edit:before-readline {|| zoxide add -- $pwd }]\n}\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a";
                    v7 = 80;
                }
                a2.write_str(v6, v7);
LABEL_4987db:
                a2.write_str("\n}\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfn __zoxide_z {|@rest|\n    if (builtin:eq [] $rest) {\n        __zoxide_cd ~\n    } elif (builtin:eq [-] $rest) {\n        __zoxide_", 2);
LABEL_4987ef:
                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                v0 = a2;
                v2.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v5 = *((long long *)&v2);
                if (*((long long *)&v2) == 4)
                {
                    a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfn __zoxide_z {|@rest|\n    if (builtin:eq [] $rest) {\n        __zoxide_cd ~\n    } elif (builtin:eq [-] $rest) {\n        __zoxide_cd $oldpwd\n    } elif (and ('builtin:==' (builtin:count $rest) 1) (path:is-dir &follow-symlink=$true $rest[0])) {\n        __zoxide_cd $rest[0]\n    } else {\n        var path\n        try {\n            set path = (zoxide query --exclude $pwd -- $@rest)\n        } catch {\n        } else {\n            __zoxide_cd $path\n        }\n    }\n}\nedit:add-var __zoxide_z~ $__zoxide_z~\n\n# Jump to a directory using interactive search.\nfn __zoxide_zi {|@rest|\n    var path\n    try {\n        set path = (zoxide query --interactive -- $@rest)\n    } catch {\n    } else {\n        __zoxide_cd $path\n    }\n}\nedit:add-var __zoxide_zi~ $__zoxide_zi~\n\n", 881);
                    v0 = a2;
                    v2.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                    v5 = *((long long *)&v2);
                    if (*((long long *)&v2) == 4)
                    {
                        a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                        if (a1->field_0)
                        {
                            a2.write_str("\n\nedit:add-var ~ $__zoxide_z~\nedit:add-var i~ $__zoxide_zi~\n\n# Load completions.\nfn __zoxide_z_complete {|@rest|\n    if (!= (builtin:count $rest) 2) {\n        builtin:return\n    }\n    edit:complete-filename $rest[1] |\n        builtin:each {|completion|\n   ", 15);
                            v0 = a2;
                            v2.write_into(a1, &v0);
                            v5 = *((long long *)&v2);
                            if (*((long long *)&v2) == 4)
                            {
                                a2.write_str("~ $__zoxide_z~\nedit:add-var i~ $__zoxide_zi~\n\n# Load completions.\nfn __zoxide_z_complete {|@rest|\n    if (!= (builtin:count $rest) 2) {\n        builtin:return\n    }\n    edit:complete-filename $rest[1] |\n        builtin:each {|completion|\n            var di", 28);
                                v0 = a2;
                                v2.write_into(a1, &v0);
                                v5 = *((long long *)&v2);
                                if (*((long long *)&v2) == 4)
                                {
                                    a2.write_str("i~ $__zoxide_zi~\n\n# Load completions.\nfn __zoxide_z_complete {|@rest|\n    if (!= (builtin:count $rest) 2) {\n        builtin:return\n    }\n    edit:complete-filename $rest[1] |\n        builtin:each {|completion|\n            var dir = $completion[stem]\n            if (path:is-dir $dir) {\n                builtin:put $dir\n            }\n        }\n}\nset edit:completion:arg-completer[", 379);
                                    v0 = a2;
                                    v2.write_into(a1, &v0);
                                    v5 = *((long long *)&v2);
                                    if (*((long long *)&v2) == 4)
                                    {
                                        a2.write_str("] = $__zoxide_z_complete~\n# To initialize zoxide, add this to your configuration (usually\n# ~/.elvish/rc.elv):\n#\n#   eval (zoxide init elvish | slurp)\n#\n# Note: zoxide only supports elvish v0.18.0 and above.\n# Utility functions for zoxide.\n#\n\n# pwd based o", 25);
                                        goto LABEL_498996;
                                    }
                                }
                            }
                        }
                        else
                        {
                            a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                            v0 = a2;
                            v2.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                            v5 = *((long long *)&v2);
                            if (*((long long *)&v2) == 4)
                            {
LABEL_498996:
                                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                v0 = a2;
                                v2.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                v5 = *((long long *)&v2);
                                if (*((long long *)&v2) == 4)
                                {
                                    a2.write_str("\n# To initialize zoxide, add this to your configuration (usually\n# ~/.elvish/rc.elv):\n#\n#   eval (zoxide init elvish | slurp)\n#\n# Note: zoxide only supports elvish v0.18.0 and above.\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLV", 182);
                                    a0->field_0 = 4;
                                    return 4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
    a0->field_0 = v5;
    return v5;
}
