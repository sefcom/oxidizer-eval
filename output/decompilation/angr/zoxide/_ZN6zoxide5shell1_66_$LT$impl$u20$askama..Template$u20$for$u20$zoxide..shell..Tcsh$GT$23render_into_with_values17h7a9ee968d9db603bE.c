long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Tcsh>::render_into_with_values(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v5;  // r12
    unsigned long long v6;  // rax
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx

    v5 = ((char)askama::helpers::as_bool((char *)&a1[1].field_0 + 1) ? "pwd -P\nset __zoxide_pwd_old = ``\nalias __zoxide_hook \'set __zoxide_pwd_tmp = \"``\"; test \"$__zoxide_pwd_tmp\" != \"$__zoxide_pwd_old\" && zoxide add -- \"$__zoxide_pwd_tmp\"; set __zoxide_pwd_old = \"$__zoxide_pwd_tmp\"\'\nalias __zoxide_hook \'zoxide add -- \"``\"\'\n\n#" : "pwd -Lpwd -P\nset __zoxide_pwd_old = ``\nalias __zoxide_hook \'set __zoxide_pwd_tmp = \"``\"; test \"$__zoxide_pwd_tmp\" != \"$__zoxide_pwd_old\" && zoxide add -- \"$__zoxide_pwd_tmp\"; set __zoxide_pwd_old = \"$__zoxide_pwd_tmp\"\'\nalias __zoxide_hook \'zoxide add -- \"`");
    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v6 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\n__zoxide_oldpwd=\"$(__zoxide_pwd)\"\n\nfunction __zoxide_hook() {\n    \\builtin local -r retval=\"$?\"\n    \\builtin local pwd_tmp\n    pwd_tmp=\"$(__zoxide_pwd)\"\n    if [[ ${__zoxide_ol", 35);
        v1 = a1->field_10;
        if ((char)askama::helpers::as_bool(&v1))
        {
            a2.write_str("\n\n# Hook to add new entries to the database.\n__zoxide_oldpwd=\"$(__zoxide_pwd)\"\n\nfunction __zoxide_hook() {\n    \\builtin local -r retval=\"$?\"\n    \\builtin local pwd_tmp\n    pwd_tmp=\"$(__zoxide_pwd)\"\n    if [[ ${__zoxide_oldpwd} != \"${pwd_tmp}\" ]]; then\n    ", 44);
            v1 = a1->field_10 == 1;
            if ((char)askama::helpers::as_bool(&v1))
            {
                a2.write_str("\nalias __zoxide_hook \'zoxide add -- \"``\"\'\n\n# Initialize hook.\nalias precmd \';__zoxide_hook\'\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nalias __zoxide_z \'set __zoxide_args = (\\", 38);
                v0 = a2;
                v1.write_into(v5, 6, &v0);
                v6 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    v7 = "`\"\'\n\n# Initialize hook.\nalias precmd \';__zoxide_hook\'\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nalias __zoxide_z \'set __zoxide_args = (\\!*)\\\nif (\"$#__zoxide_args\" == 0) then\\";
                    v8 = 3;
                    goto LABEL_499a86;
                }
            }
            else
            {
                v1 = a1->field_10 == 2;
                if (!(char)askama::helpers::as_bool(&v1))
                    goto LABEL_499b37;
                a2.write_str("\nset __zoxide_pwd_old = ``\nalias __zoxide_hook \'set __zoxide_pwd_tmp = \"``\"; test \"$__zoxide_pwd_tmp\" != \"$__zoxide_pwd_old\" && zoxide add -- \"$__zoxide_pwd_tmp\"; set __zoxide_pwd_old = \"$__zoxide_pwd_tmp\"\'\nalias __zoxide_hook \'zoxide add -- \"``\"\'\n\n# Initi", 25);
                v0 = a2;
                v1.write_into(v5, 6, &v0);
                v6 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("`\nalias __zoxide_hook \'set __zoxide_pwd_tmp = \"``\"; test \"$__zoxide_pwd_tmp\" != \"$__zoxide_pwd_old\" && zoxide add -- \"$__zoxide_pwd_tmp\"; set __zoxide_pwd_old = \"$__zoxide_pwd_tmp\"\'\nalias __zoxide_hook \'zoxide add -- \"``\"\'\n\n# Initialize hook.\nalias precmd ", 48);
                    v0 = a2;
                    v1.write_into(v5, 6, &v0);
                    v6 = *((long long *)&v1);
                    if (*((long long *)&v1) == 4)
                    {
                        v7 = "`\"; test \"$__zoxide_pwd_tmp\" != \"$__zoxide_pwd_old\" && zoxide add -- \"$__zoxide_pwd_tmp\"; set __zoxide_pwd_old = \"$__zoxide_pwd_tmp\"\'\nalias __zoxide_hook \'zoxide add -- \"``\"\'\n\n# Initialize hook.\nalias precmd \';__zoxide_hook\'\n# When using zoxide with --no-c";
                        v8 = 133;
LABEL_499a86:
                        a2.write_str(v7, v8);
LABEL_499b37:
                        a2.write_str("\n\n# Initialize hook.\nalias precmd \';__zoxide_hook\'\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nalias __zoxide_z \'set __zoxide_args = (\\!*)\\\nif (\"$#__zoxide_args\" == 0) then\\\n  ", 50);
                        goto LABEL_499b4b;
                    }
                }
            }
        }
        else
        {
LABEL_499b4b:
            a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
            v0 = a2;
            v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
            v6 = *((long long *)&v1);
            if (*((long long *)&v1) == 4)
            {
                a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nalias __zoxide_z \'set __zoxide_args = (\\!*)\\\nif (\"$#__zoxide_args\" == 0) then\\\n    cd ~\\\nelse\\\n    if (\"$#__zoxide_args\" == 1 && \"$__zoxide_args[1]\" == \"-\") then\\\n        cd -\\\n    else if (\"$#__zoxide_args\" == 1 && -d \"$__zoxide_args[1]\") then\\\n        cd \"$__zoxide_args[1]\"\\\n    else\\\n        set __zoxide_pwd = `", 441);
                v0 = a2;
                v1.write_into(v5, 6, &v0);
                v6 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("`\\\n        set __zoxide_result = \"`zoxide query --exclude \'\"\'\"\'$__zoxide_pwd\'\"\'\"\' -- $__zoxide_args`\" && cd \"$__zoxide_result\"\\\n    endif\\\nendif\'\n\n# Jump to a directory using interactive search.\nalias __zoxide_zi \'set __zoxide_args = (\\!*)\\\nset __zoxide_pwd = `", 261);
                    v0 = a2;
                    v1.write_into(v5, 6, &v0);
                    v6 = *((long long *)&v1);
                    if (*((long long *)&v1) == 4)
                    {
                        a2.write_str("`\\\nset __zoxide_result = \"`zoxide query --exclude \'\"\'\"\'$__zoxide_pwd\'\"\'\"\' --interactive -- $__zoxide_args`\" && cd \"$__zoxide_result\"\'\n\n __zoxide_z\nalias i __zoxide_zi\n# To initialize zoxide, add this to your shell configuration file (usually ~/.tcshrc):\n#\n", 135);
                        v0 = a2;
                        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                        v6 = *((long long *)&v1);
                        if (*((long long *)&v1) == 4)
                        {
                            a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                            if (a1->field_0)
                            {
                                a2.write_str("\n\nalias Excluded, found '; only ", 8);
                                v0 = a2;
                                v1.write_into(a1, &v0);
                                v6 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str(" __zoxide_z\nalias i __zoxide_zi\n# To initialize zoxide, add this to your shell configuration file (usually ~/.tcshrc):\n#\n#     zoxide init tcsh > ~/.zoxide.tcsh\n#     source ~/.zoxide.tcsh# pylint: disable=missing-module-docstring\n\nimport builtins  # pylin", 18);
                                    v0 = a2;
                                    v1.write_into(a1, &v0);
                                    v6 = *((long long *)&v1);
                                    if (*((long long *)&v1) == 4)
                                    {
                                        a2.write_str("i __zoxide_zi\n# To initialize zoxide, add this to your shell configuration file (usually ~/.tcshrc):\n#\n#     zoxide init tcsh > ~/.zoxide.tcsh\n#     source ~/.zoxide.tcsh# pylint: disable=missing-module-docstring\n\nimport builtins  # pylint: disable=unused-", 13);
                                        goto LABEL_499d21;
                                    }
                                }
                            }
                            else
                            {
                                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                v0 = a2;
                                v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                                v6 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
LABEL_499d21:
                                    a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                    v0 = a2;
                                    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                    v6 = *((long long *)&v1);
                                    if (*((long long *)&v1) == 4)
                                    {
                                        a2.write_str("\n# To initialize zoxide, add this to your shell configuration file (usually ~/.tcshrc):\n#\n#     zoxide init tcsh > ~/.zoxide.tcsh\n#     source ~/.zoxide.tcsh# pylint: disable=missing-module-docstring\n\nimport builtins  # pylint: disable=unused-import\nimport", 157);
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
    }
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
    a0->field_0 = v6;
    return v6;
}
