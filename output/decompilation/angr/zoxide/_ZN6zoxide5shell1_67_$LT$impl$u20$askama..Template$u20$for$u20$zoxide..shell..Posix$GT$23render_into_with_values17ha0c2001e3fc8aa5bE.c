long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Posix>::render_into_with_values(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [sp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned int v7;  // eax
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx

    a2.write_str("# shellcheck shell=sh\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\n__zoxide_pwd() {\n    \\command pwd -L\n    \\command pwd -P\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck di", 23);
    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v4 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\n__zoxide_pwd() {\n    \\command pwd -L\n    \\command pwd -P\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\comma", 102);
        if ((char)askama::helpers::as_bool(&g_419dac))
        {
            v5 = "\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the datab";
            v6 = 45;
        }
        else
        {
            v5 = (!(char)askama::helpers::as_bool((char *)&a1[1].field_0 + 1) ? "\n    \\command pwd -L\n    \\command pwd -P\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\command cd \"$@\"# Hook to add new entries to the database.\n__zoxide_hook() {\n    \\command zoxide add -- \"$(_" : "\n    \\command pwd -P\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\command cd \"$@\"# Hook to add new entries to the database.\n__zoxide_hook() {\n    \\command zoxide add -- \"$(__zoxide_pwd || \\buil");
            v6 = 20;
        }
        a2.write_str(v5, v6);
        a2.write_str("\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\command cd \"$@\"# Hook to add new entries to the database.\n__zoxide_hook() {\n    \\command zoxide add -- \"$(__zoxide_pwd || \\builtin true)\"\n}\n\n# Init", 124);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str(" && __zoxide_pwdhost unreachable", 16);
        a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v4 = *((long long *)&v1);
        if (*((long long *)&v1) == 4)
        {
            a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\n", 37);
            v7 = a1->field_10;
            if (v7)
            {
                if (v7 == 1)
                {
                    a2.write_str("# Hook to add new entries to the database.\n__zoxide_hook() {\n    \\command zoxide add -- \"$(__zoxide_pwd || \\builtin true)\"\n}\n\n# Initialize hook.\nif [ \"${PS1:=}\" = \"${PS1#*\\$(__zoxide_hook)}\" ]; then\n    PS1=\"${PS1}\\$(__zoxide_hook)\"\nfi\n\n# Report common issues.\n__zoxide_doctor() {", 280);
                    v1 = a1->field_10 != 1;
                    if ((char)askama::helpers::as_bool(&v1))
                    {
                        v8 = "\n    return 0\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n__zoxide_z_prefix='z#'\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n\n    # shellcheck disable=SC2199\n    if [[ $# -eq ";
                        v9 = 13;
                    }
                    else
                    {
                        v8 = "\n    [ \"${_ZO_DOCTOR:-1}\" -eq 0 ] && return 0\n    case \"${PS1:-}\" in\n    *__zoxide_hook*) return 0 ;;\n    *) ;;\n    esac\n\n    _ZO_DOCTOR=0\n    \\command printf \'%s\\n\' \\\n        \'zoxide: detected a possible configuration issue.\' \\\n        \'Please ensure that zoxide is initialized right at the end of your shell configuration file.\' \\\n        \'\' \\\n        \'If the issue persists, consider filing an issue at:\' \\\n        \'https://github.com/ajeetdsouza/zoxide/issues\' \\\n        \'\' \\\n        \'Disable this message by setting _ZO_DOCTOR=0.\' \\\n        \'\' >&2";
                        v9 = 552;
                    }
                    a2.write_str(v8, v9);
                    v10 = "\n}\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfn __zoxide_z {|@rest|\n    if (builtin:eq [] $rest) {\n        __zoxide_cd ~\n    } elif (builtin:eq [-] $rest) {\n        __zoxide_";
                    v11 = 2;
                }
                else
                {
                    v10 = "\\command printf \"%s\\n%s\\n\" \\\n    \"zoxide: PWD hooks are not supported on POSIX shells.\" \\\n    \"        Use \'zoxide init posix --hook prompt\' instead.\"\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory us";
                    v11 = 150;
                }
                a2.write_str(v10, v11);
LABEL_4993e2:
                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                v0 = a2;
                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\n__zoxide_z() {\n    __zoxide_doctor\n\n    if [ \"$#\" -eq 0 ]; then\n        __zoxide_cd ~\n    elif [ \"$#\" -eq 1 ] && [ \"$1\" = \'-\' ]; then\n        if [ -n \"${OLDPWD}\" ]; then\n            __zoxide_cd \"${OLDPWD}\"\n        else\n            # shellcheck disable=SC2016\n            \\command printf \'zoxide: $OLDPWD is not set\'\n            return 1\n        fi\n    elif [ \"$#\" -eq 1 ] && [ -d \"$1\" ]; then\n        __zoxide_cd \"$1\"\n    else\n        __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd || \\builtin true)\" -- \"$@\")\" &&\n            __zoxide_cd \"${__zoxide_result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\n__zoxide_zi() {\n    __zoxide_doctor\n    __zoxide_result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${__zoxide_result}\"\n}\n\n", 906);
                    v0 = a2;
                    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                    v4 = *((long long *)&v1);
                    if (*((long long *)&v1) == 4)
                    {
                        a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                        if (a1->field_0)
                        {
                            a2.write_str("\n\n\\command unalias  >/dev/null 2>&1 || \\true\n() {\n    __zoxide_z \"$@\"\n}\n\n\\command unalias i >/dev/null 2>&1 || \\true\ni() {\n    __zoxide_zi \"$@\"\n}\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utilit", 19);
                            v0 = a2;
                            v1.write_into(a1, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
                                a2.write_str(" >/dev/null 2>&1 || \\true\n() {\n    __zoxide_z \"$@\"\n}\n\n\\command unalias i >/dev/null 2>&1 || \\true\ni() {\n    __zoxide_zi \"$@\"\n}\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utility functions for zox", 26);
                                v0 = a2;
                                v1.write_into(a1, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("() {\n    __zoxide_z \"$@\"\n}\n\n\\command unalias i >/dev/null 2>&1 || \\true\ni() {\n    __zoxide_zi \"$@\"\n}\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utility functions for zoxide.\n#\n\n# Call zoxide bina", 45);
                                    v0 = a2;
                                    v1.write_into(a1, &v0);
                                    v4 = *((long long *)&v1);
                                    if (*((long long *)&v1) == 4)
                                    {
                                        a2.write_str("i >/dev/null 2>&1 || \\true\ni() {\n    __zoxide_zi \"$@\"\n}\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction g", 27);
                                        v0 = a2;
                                        v1.write_into(a1, &v0);
                                        v4 = *((long long *)&v1);
                                        if (*((long long *)&v1) == 4)
                                        {
                                            a2.write_str("i() {\n    __zoxide_zi \"$@\"\n}\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction global:__zoxide_bin {\n    $e", 28);
                                            goto LABEL_4995ae;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                            v0 = a2;
                            v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
LABEL_4995ae:
                                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                v0 = a2;
                                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction global:__zoxide_bin {\n    $encoding = [Console]::OutputE", 102);
                                    a0->field_0 = 4;
                                    return 4;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                v0 = a2;
                v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                    goto LABEL_4993e2;
            }
        }
    }
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
    a0->field_0 = v4;
    return v4;
}
