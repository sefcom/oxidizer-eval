long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Fish>::render_into_with_values(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx

    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v4 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd\n    builtin pwd -L\n    builtin pwd -P\n    command cygpath -w (builtin pwd -P)\nend\n\n# A copy of fish's internal cd function. This makes it possible t", 107);
        if ((char)askama::helpers::as_bool(&g_419dac))
        {
            v5 = "\n    command cygpath -w (builtin pwd -P)\nend\n\n# A copy of fish's internal cd function. This makes it possible to use\n# `alias cd=z` without causing an infinite loop.\nif ! builtin functions --query __zoxide_cd_internal\n    string replace --regex -- '^functi";
            v6 = 40;
        }
        else
        {
            v5 = (!(char)askama::helpers::as_bool((char *)&a1[1].field_0 + 1) ? "\n    builtin pwd -L\n    builtin pwd -P\n    command cygpath -w (builtin pwd -P)\nend\n\n# A copy of fish's internal cd function. This makes it possible to use\n# `alias cd=z` without causing an infinite loop.\nif ! builtin functions --query __zoxide_cd_internal\n" : "\n    builtin pwd -P\n    command cygpath -w (builtin pwd -P)\nend\n\n# A copy of fish's internal cd function. This makes it possible to use\n# `alias cd=z` without causing an infinite loop.\nif ! builtin functions --query __zoxide_cd_internal\n    string replace ");
            v6 = 19;
        }
        a2.write_str(v5, v6);
        a2.write_str("\nend\n\n# A copy of fish\'s internal cd function. This makes it possible to use\n# `alias cd=z` without causing an infinite loop.\nif ! builtin functions --query __zoxide_cd_internal\n    string replace --regex -- \'^function cd\\s\' \'function __zoxide_cd_internal \' <$__fish_data_dir/functions/cd.fish | source\nend\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd\n    if set -q __zoxide_loop\n        builtin echo \"zoxide: infinite loop detected\"\n        builtin echo \"Avoid aliasing `cd` to `z` directly, use `zoxide init --cmd=cd fish` instead\"\n        return 1\n    end", 587);
        if ((char)askama::helpers::as_bool(&g_419dac))
        {
            v7 = "\n    __zoxide_loop=1 __zoxide_cd_internal (cygpath -u $argv)\n    and __zoxide_pwd\nend\n\n\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fis";
            v8 = 60;
        }
        else
        {
            v7 = "\n    __zoxide_loop=1 __zoxide_cd_internal $argv\n    __zoxide_loop=1 __zoxide_cd_internal (cygpath -u $argv)\n    and __zoxide_pwd\nend\n\n\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-var";
            v8 = 47;
        }
        a2.write_str(v7, v8);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str("\n    and __zoxide_pwd\nend\n\n\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zo", 21);
        a2.write_str("\nend\n\n\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide", 6);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v4 = *((long long *)&v1);
        if (*((long long *)&v1) == 4)
        {
            a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\n", 37);
            v1 = !a1->field_10;
            if ((char)askama::helpers::as_bool(&v1))
            {
                v0 = a2;
                v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                    goto LABEL_498c35;
            }
            else
            {
                a2.write_str("# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\nend\n# When using zoxide with --no-cmd", 53);
                v1 = a1->field_10 == 1;
                if ((char)askama::helpers::as_bool(&v1))
                {
                    v9 = "\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\nend\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfun";
                    v10 = 46;
                }
                else
                {
                    v1 = a1->field_10 == 2;
                    if (!(char)askama::helpers::as_bool(&v1))
                        goto LABEL_498c21;
                    v9 = "\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\nend\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jum";
                    v10 = 41;
                }
                a2.write_str(v9, v10);
LABEL_498c21:
                a2.write_str("\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\nend\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z\n    set -l argc (builtin coun", 82);
LABEL_498c35:
                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                v0 = a2;
                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z\n    set -l argc (builtin count $argv)\n    if test $argc -eq 0\n        __zoxide_cd $HOME\n    else if test \"$argv\" = -\n        __zoxide_cd -\n    else if test $argc -eq 1 -a -d $argv[1]\n        __zoxide_cd $argv[1]\n    else if test $argc -eq 2 -a $argv[1] = --\n        __zoxide_cd -- $argv[2]\n    else\n        set -l result (command zoxide query --exclude (__zoxide_pwd) -- $argv)\n        and __zoxide_cd $result\n    end\nend\n\n# Completions.\nfunction __zoxide_z_complete\n    set -l tokens (builtin commandline --current-process --tokenize)\n    set -l curr_tokens (builtin commandline --cut-at-cursor --current-process --tokenize)\n\n    if test (builtin count $tokens) -le 2 -a (builtin count $curr_tokens) -eq 1\n        # If there are < 2 arguments, use `cd` completions.\n        complete --do-complete \"\'\' \"(builtin commandline --cut-at-cursor --current-token) | string match --regex", 1665);
                    v0 = a2;
                    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                    v4 = *((long long *)&v1);
                    if (*((long long *)&v1) == 4)
                    {
                        a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                        if (a1->field_0)
                        {
                            a2.write_str("\n\nabbr --erase  &>/dev/null\nalias =__zoxide_z\n\nabbr --erase i &>/dev/null\nalias i=__zoxide_zi\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source# Code generated by zoxide. DO NOT E", 15);
                            v0 = a2;
                            v1.write_into(a1, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
                                a2.write_str(" &>/dev/null\nalias =__zoxide_z\n\nabbr --erase i &>/dev/null\nalias i=__zoxide_zi\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source# Code generated by zoxide. DO NOT EDIT.\n\n# Initial", 19);
                                v0 = a2;
                                v1.write_into(a1, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("=__zoxide_z\n\nabbr --erase i &>/dev/null\nalias i=__zoxide_zi\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source# Code generated by zoxide. DO NOT EDIT.\n\n# Initialize hook to add new", 26);
                                    v0 = a2;
                                    v1.write_into(a1, &v0);
                                    v4 = *((long long *)&v1);
                                    if (*((long long *)&v1) == 4)
                                    {
                                        a2.write_str("i &>/dev/null\nalias i=__zoxide_zi\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source# Code generated by zoxide. DO NOT EDIT.\n\n# Initialize hook to add new entries to the database.\n", 20);
                                        v0 = a2;
                                        v1.write_into(a1, &v0);
                                        v4 = *((long long *)&v1);
                                        if (*((long long *)&v1) == 4)
                                        {
                                            a2.write_str("i=__zoxide_zi\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source# Code generated by zoxide. DO NOT EDIT.\n\n# Initialize hook to add new entries to the database.\nexport-env {\n  $env.", 13);
                                            goto LABEL_498e16;
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
LABEL_498e16:
                                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                v0 = a2;
                                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source# Code generated by zoxide. DO NOT EDIT.\n\n# Initialize hook to add new entries to the database.\nexport-env {\n  $env.config = (\n  ", 127);
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
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
    a0->field_0 = v4;
    return v4;
}
