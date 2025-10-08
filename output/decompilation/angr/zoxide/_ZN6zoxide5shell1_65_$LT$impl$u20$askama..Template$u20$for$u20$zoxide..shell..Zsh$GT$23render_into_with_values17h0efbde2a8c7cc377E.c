long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Zsh>::render_into_with_values(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [sp-0x38]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx

    a2.write_str("# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on th", 25);
    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v5 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunc", 111);
        if ((char)askama::helpers::as_bool(&g_419dac))
        {
            v6 = "\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the datab";
            v7 = 45;
        }
        else
        {
            v6 = (!(char)askama::helpers::as_bool((char *)&a1[1].field_0 + 1) ? "\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#" : "\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new ");
            v7 = 20;
        }
        a2.write_str(v6, v7);
        a2.write_str("\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\n__zoxide_oldpwd=\"$(__zoxide_pwd)\"\n\nfunct", 136);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str(" && __zoxide_pwdhost unreachable", 16);
        a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v5 = *((long long *)&v1);
        if (*((long long *)&v1) == 4)
        {
            a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\nfunction __zoxide_hook() {\n    # shellcheck disable=SC2312\n    \\command zoxide add -- \"$(__zoxide_pwd)\"\n}\n\n# Initialize hook.\n\\builtin typeset -ga precmd_functions\n\\builtin typeset -ga chpwd_functions\n# shellcheck disable=SC2034,SC2296\nprecmd_functions=(\"${(@)precmd_functions:#__zoxide_hook}\")\n# shellcheck disable=SC2034,SC2296\nchpwd_functions=(\"${(@)chpwd_functions:#__zoxide_hook}\")", 466);
            v1 = a1->field_10 == 1;
            if ((char)askama::helpers::as_bool(&v1))
            {
                v8 = "\nprecmd_functions+=(__zoxide_hook)\n    [[ ${_ZO_DOCTOR:-1} -ne 0 ]] || return 0\n    [[ ${chpwd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n    [[ ${precmd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n\n    _ZO_DOCTOR=0\n    \\builtin printf '";
                v9 = 34;
            }
            else
            {
                v1 = a1->field_10 == 2;
                if (!(char)askama::helpers::as_bool(&v1))
                    goto LABEL_49a303;
                v8 = "\nchpwd_functions+=(__zoxide_hook)\nprecmd_functions+=(__zoxide_hook)\n    [[ ${_ZO_DOCTOR:-1} -ne 0 ]] || return 0\n    [[ ${chpwd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n    [[ ${precmd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n\n    _";
                v9 = 33;
            }
            a2.write_str(v8, v9);
LABEL_49a303:
            a2.write_str("\n\n# Report common issues.\nfunction __zoxide_doctor() {\n    [[ ${_ZO_DOCTOR:-1} -eq 0 ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${PROMPT_COMMAND[@]:-} == *'__zoxide_hook'* ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${__vsc_original_pr", 54);
            v2 = !a1->field_10;
            if ((char)askama::helpers::as_bool(&v2))
            {
                v10 = "\n    return 0\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n__zoxide_z_prefix='z#'\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n\n    # shellcheck disable=SC2199\n    if [[ $# -eq ";
                v11 = 13;
            }
            else
            {
                a2.write_str("\n    [[ ${_ZO_DOCTOR:-1} -ne 0 ]] || return 0\n    [[ ${chpwd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n    [[ ${precmd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n\n    _ZO_DOCTOR=0\n    \\builtin printf '%s\\n' \\\n        'zoxide: detected ", 45);
                v2 = a1->field_10 == 1;
                if ((char)askama::helpers::as_bool(&v2))
                {
                    v12 = "\n    [[ ${precmd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n\n    _ZO_DOCTOR=0\n    \\builtin printf '%s\\n' \\\n        'zoxide: detected a possible configuration issue.' \\\n        'Please ensure that zoxide is initialized right at the end of your she";
                    v13 = 69;
                }
                else
                {
                    v2 = a1->field_10 == 2;
                    if (!(char)askama::helpers::as_bool(&v2))
                        goto LABEL_49a3a6;
                    v12 = "\n    [[ ${chpwd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n    [[ ${precmd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0\n\n    _ZO_DOCTOR=0\n    \\builtin printf '%s\\n' \\\n        'zoxide: detected a possible configuration issue.' \\\n        'P";
                    v13 = 68;
                }
                a2.write_str(v12, v13);
LABEL_49a3a6:
                v10 = "\n\n    _ZO_DOCTOR=0\n    \\builtin printf '%s\\n' \\\n        'zoxide: detected a possible configuration issue.' \\\n        'Please ensure that zoxide is initialized right at the end of your shell configuration file (usually ~/.zshrc).' \\\n        '' \\\n        'If the issue persists, consider filing an issue at:' \\\n        'https://github.com/ajeetdsouza/zoxide/issues' \\\n        '' \\\n        'Disable this message by setting _ZO_DOCTOR=0.' \\\n        '' >&2";
                v11 = 451;
            }
            a2.write_str(v10, v11);
            a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
            v0 = a2;
            v2.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
            v5 = *((long long *)&v2);
            if (*((long long *)&v2) == 4)
            {
                a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n    if [[ \"$#\" -eq 0 ]]; then\n        __zoxide_cd ~\n    elif [[ \"$#\" -eq 1 ]] && { [[ -d \"$1\" ]] || [[ \"$1\" = \'-\' ]] || [[ \"$1\" =~ ^[-+][0-9]+$ ]]; }; then\n        __zoxide_cd \"$1\"\n    elif [[ \"$#\" -eq 2 ]] && [[ \"$1\" = \"--\" ]]; then\n        __zoxide_cd \"$2\"\n    else\n        \\builtin local result\n        # shellcheck disable=SC2312\n        result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" -- \"$@\")\" && __zoxide_cd \"${result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi() {\n    __zoxide_doctor\n    \\builtin local result\n    result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${result}\"\n}\n\n", 827);
                v0 = a2;
                v2.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v5 = *((long long *)&v2);
                if (*((long long *)&v2) == 4)
                {
                    a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                    if (a1->field_0)
                    {
                        a2.write_str("\n\nfunction () {\n    __zoxide_z \"$@\"\n}\n\nfunction \n\n# Completions.\nif [[ -o zle ]]; then\n    __zoxide_result=\'\'\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        # shellcheck disable=SC21", 11);
                        v0 = a2;
                        v2.write_into(a1, &v0);
                        v5 = *((long long *)&v2);
                        if (*((long long *)&v2) == 4)
                        {
                            a2.write_str("() {\n    __zoxide_z \"$@\"\n}\n\nfunction \n\n# Completions.\nif [[ -o zle ]]; then\n    __zoxide_result=\'\'\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        # shellcheck disable=SC2154\n        ", 37);
                            v0 = a2;
                            v2.write_into(a1, &v0);
                            v5 = *((long long *)&v2);
                            if (*((long long *)&v2) == 4)
                            {
                                a2.write_str("i() {\n    __zoxide_zi \"$@\"\n}\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\"\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction global:__zoxide_bin {\n    $e", 28);
LABEL_49a52b:
                                a2.write_str("\n\n# Completions.\nif [[ -o zle ]]; then\n    __zoxide_result=\'\'\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        # shellcheck disable=SC2154\n        [[ \"${#words[@]}\" -eq \"${CURRENT}\" ]] || return 0\n\n        if [[ \"${#words[@]}\" -eq 2 ]]; then\n            # Show completions for local directories.\n            _cd -/\n\n        elif [[ \"${words[-1]}\" == \'\' ]]; then\n            # Show completions for Space-Tab.\n            # shellcheck disable=SC2086\n            __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd || \\builtin true)\" --interactive -- ${words[2,-1]})\" || __zoxide_result=\'\'\n\n            # Set a result to ensure completion doesn\'t re-run\n            compadd -Q \"\"\n\n            # Bind \'\\e[0n\' to helper function.\n            \\builtin bindkey \'\\e[0n\' \'__zoxide_z_complete_helper\'\n            # Sends query device status code, which results in a \'\\e[0n\' being sent to console input.\n            \\builtin printf \'\\e[5n\'\n\n       ", 1344);
                                v14 = a1->field_0;
                                if (a1->field_0)
                                {
                                    v15 = a1->padding_8;
                                }
                                else
                                {
                                    v15 = 2;
                                    v14 = "cd\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\nfunction __zoxide_hook() {\n    # shellcheck disable=SC2312\n    \\command zoxide add -- \"$(__zoxide_pwd)\"\n}\n\n# Initialize hook.\n\\builtin typeset -ga precmd_functions\n\\builtin t";
                                }
                                v0 = a2;
                                v2.write_into(v14, v15, &v0);
                                v5 = *((long long *)&v2);
                                if (*((long long *)&v2) == 4)
                                {
                                    a2.write_str(" ${(q-)__zoxide_result}\"\n            __zoxide_result=\'\'\n            \\builtin zle reset-prompt\n            \\builtin zle accept-line\n        else\n            \\builtin zle reset-prompt\n        fi\n    }\n    \\builtin zle -N __zoxide_z_complete_helper\n\n    [[ \"$", 245);
                                    if (a1->field_0)
                                    {
                                        a2.write_str("\n\n    [[ \"${+functions[compdef]}\" -ne 0 ]] && \\compdef __zoxide_z_complete \nfi\n\n\n# To initialize zoxide, add this to your shell configuration file (usually ~/.zshrc):\n#\n# eval \"$(zoxide init zsh)\"", 75);
                                        v0 = a2;
                                        v2.write_into(a1, &v0);
                                        v5 = *((long long *)&v2);
                                        if (*((long long *)&v2) == 4)
                                            goto LABEL_49a5cc;
                                    }
                                    else
                                    {
LABEL_49a5cc:
                                        a2.write_str("\nfi\n\n\n# To initialize zoxide, add this to your shell configuration file (usually ~/.zshrc):\n#\n# eval \"$(zoxide init zsh)\"", 5);
                                        v0 = a2;
                                        v2.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                        v5 = *((long long *)&v2);
                                        if (*((long long *)&v2) == 4)
                                        {
                                            a2.write_str("\n# To initialize zoxide, add this to your shell configuration file (usually ~/.zshrc):\n#\n# eval \"$(zoxide init zsh)\"", 116);
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
                        a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                        v0 = a2;
                        v2.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                        v5 = *((long long *)&v2);
                        if (*((long long *)&v2) == 4)
                            goto LABEL_49a52b;
                    }
                }
            }
        }
    }
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
    a0->field_0 = v5;
    return v5;
}
