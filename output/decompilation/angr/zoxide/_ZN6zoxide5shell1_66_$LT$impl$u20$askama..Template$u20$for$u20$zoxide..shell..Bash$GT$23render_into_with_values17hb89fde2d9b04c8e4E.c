long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Bash>::render_into_with_values(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx

    a2.write_str("# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on th", 25);
    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v4 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunc", 111);
        if ((char)askama::helpers::as_bool(&g_419dac))
        {
            v5 = "\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the datab";
            v6 = 45;
        }
        else
        {
            v5 = (!(char)askama::helpers::as_bool((char *)&a1[1].field_0 + 1) ? "\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#" : "\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new ");
            v6 = 20;
        }
        a2.write_str(v5, v6);
        a2.write_str("\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\"\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\n__zoxide_oldpwd=\"$(__zoxide_pwd)\"\n\nfunct", 136);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str(" && __zoxide_pwdhost unreachable", 16);
        a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v4 = *((long long *)&v1);
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
                    v7 = "\nfunction __zoxide_hook() {\n    \\builtin local -r retval=\"$?\"\n    # shellcheck disable=SC2312\n    \\command zoxide add -- \"$(__zoxide_pwd)\"\n    return \"${retval}\"\n}\n\n# Initialize hook.\nif [[ ${PROMPT_COMMAND:=} != *\'__zoxide_hook\'* ]]; then\n    PROMPT_COMMA";
                    v8 = 163;
                }
                else
                {
                    v1 = a1->field_10 == 2;
                    if (!(char)askama::helpers::as_bool(&v1))
                        goto LABEL_4982bf;
                    v7 = "\n__zoxide_oldpwd=\"$(__zoxide_pwd)\"\n\nfunction __zoxide_hook() {\n    \\builtin local -r retval=\"$?\"\n    \\builtin local pwd_tmp\n    pwd_tmp=\"$(__zoxide_pwd)\"\n    if [[ ${__zoxide_oldpwd} != \"${pwd_tmp}\" ]]; then\n        __zoxide_oldpwd=\"${pwd_tmp}\"\n        \\command zoxide add -- \"${__zoxide_oldpwd}\"\n    fi\n    return \"${retval}\"\n}";
                    v8 = 328;
                }
                a2.write_str(v7, v8);
LABEL_4982bf:
                a2.write_str("\n\n# Initialize hook.\nif [[ ${PROMPT_COMMAND:=} != *\'__zoxide_hook\'* ]]; then\n    PROMPT_COMMAND=\"__zoxide_hook;${PROMPT_COMMAND#;}\"\nfi\n\n# Report common issues.\nfunction __zoxide_doctor() {\n    [[ ${_ZO_DOCTOR:-1} -eq 0 ]] && return 0\n    # shellcheck disab", 134);
            }
            a2.write_str("\n\n# Report common issues.\nfunction __zoxide_doctor() {\n    [[ ${_ZO_DOCTOR:-1} -eq 0 ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${PROMPT_COMMAND[@]:-} == *'__zoxide_hook'* ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${__vsc_original_pr", 54);
            v1 = !a1->field_10;
            if ((char)askama::helpers::as_bool(&v1))
            {
                v9 = "\n    return 0\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n__zoxide_z_prefix='z#'\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n\n    # shellcheck disable=SC2199\n    if [[ $# -eq ";
                v10 = 13;
            }
            else
            {
                v9 = "\n    [[ ${_ZO_DOCTOR:-1} -eq 0 ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${PROMPT_COMMAND[@]:-} == *'__zoxide_hook'* ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${__vsc_original_prompt_command[@]:-} == *'__zoxide_hook'* ]] && return 0\n\n    _ZO_DOCTOR=0\n    \\builtin printf '%s\\n' \\\n        'zoxide: detected a possible configuration issue.' \\\n        'Please ensure that zoxide is initialized right at the end of your shell configuration file (usually ~/.bashrc).' \\\n        '' \\\n        'If the issue persists, consider filing an issue at:' \\\n        'https://github.com/ajeetdsouza/zoxide/issues' \\\n        '' \\\n        'Disable this message by setting _ZO_DOCTOR=0.' \\\n        '' >&2";
                v10 = 708;
            }
            a2.write_str(v9, v10);
            a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
            v0 = a2;
            v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
            v4 = *((long long *)&v1);
            if (*((long long *)&v1) == 4)
            {
                a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n__zoxide_z_prefix=\'z#\'\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n\n    # shellcheck disable=SC2199\n    if [[ $# -eq 0 ]]; then\n        __zoxide_cd ~\n    elif [[ $# -eq 1 && $1 == \'-\' ]]; then\n        __zoxide_cd \"${OLDPWD}\"\n    elif [[ $# -eq 1 && -d $1 ]]; then\n        __zoxide_cd \"$1\"\n    elif [[ $# -eq 2 && $1 == \'--\' ]]; then\n        __zoxide_cd \"$2\"\n    elif [[ ${@: -1} == \"${__zoxide_z_prefix}\"?* ]]; then\n        # shellcheck disable=SC2124\n        \\builtin local result=\"${@: -1}\"\n        __zoxide_cd \"${result:${#__zoxide_z_prefix}}\"\n    else\n        \\builtin local result\n        # shellcheck disable=SC2312\n        result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" -- \"$@\")\" &&\n            __zoxide_cd \"${result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi() {\n    __zoxide_doctor\n    \\builtin local result\n    result=\"$(\\command zoxide ", 1084);
                v0 = a2;
                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                    if (a1->field_0)
                    {
                        a2.write_str("\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require ", 19);
                        v0 = a2;
                        v1.write_into(a1, &v0);
                        v4 = *((long long *)&v1);
                        if (*((long long *)&v1) == 4)
                        {
                            a2.write_str(" &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require line editing. Since", 39);
                            v0 = a2;
                            v1.write_into(a1, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
                                a2.write_str("() {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require line editing. Since Bash supports only two modes of\n#   li", 45);
                                v0 = a2;
                                v1.write_into(a1, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require line editing. Since Bash supports only two modes of\n#   line editing (`vim` and `emacs`), we check if e", 40);
                                    v0 = a2;
                                    v1.write_into(a1, &v0);
                                    v4 = *((long long *)&v1);
                                    if (*((long long *)&v1) == 4)
                                    {
                                        a2.write_str("i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require line editing. Since Bash supports only two modes of\n#   line editing (`vim` and `emacs`), we check if either them is enabled.\n# - Completions don\'t work on `dumb` terminals.\nif [[ ${BASH_VERSINFO[0]:-0} -eq 4 && ${BASH_VERSINFO[1]:-0} -ge 4 || ${BASH_VERSINFO[0]:-0} -ge 5 ]] &&\n    [[ :\"${SHELLOPTS}\": =~ :(vi|emacs): && ${TERM} != \'dumb\' ]]; then\n\n    function __zoxide_z_complete_helper() {\n        READLINE_LINE=\"", 530);
                                        v0 = a2;
                                        v1.write_into(a1, &v0);
                                        v4 = *((long long *)&v1);
                                        if (*((long long *)&v1) == 4)
                                        {
                                            a2.write_str(" ${__zoxide_result@Q}\"\n        READLINE_POINT=${#READLINE_LINE}\n        bind \'\"\\e[0n\": accept-line\'\n        \\builtin printf \'\\e[5n\' >/dev/tty\n    }\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        [[ ${#COMP_WORDS[@]} -eq $((COMP_CWORD + 1)) ]] || return\n\n        # If there is only one argument, use `cd` completions.\n        if [[ ${#COMP_WORDS[@]} -eq 2 ]]; then\n            \\builtin mapfile -t COMPREPLY < <(\n                \\builtin compgen -A directory -- \"${COMP_WORDS[-1]}\" || \\builtin true\n            )\n        # If there is a space after the last word, use interactive selection.\n        elif [[ -z ${COMP_WORDS[-1]} ]]; then\n            # shellcheck disable=SC2312\n            __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" --interactive -- \"${COMP_WORDS[@]:1:${#COMP_WORDS[@]}-2}\")\" && {\n                # In case the terminal does not respond to \\e[5n or another\n                # mechanism steals the response, it i", 1571);
                                            v0 = a2;
                                            v1.write_into(a1, &v0);
                                            v4 = *((long long *)&v1);
                                            if (*((long long *)&v1) == 4)
                                            {
                                                a2.write_str("\n    \\builtin complete -r i &>/dev/null || \\builtin true\nfi\n# To initialize zoxide, add this to your shell configuration file (usually ~/.bashrc):\n#\n# eval \"$(zoxide init bash)\"use builtin\nuse path\n\n\n# Utility functions for zoxide.\n#\n\n# cd + custom logic b", 26);
                                                v0 = a2;
                                                v1.write_into(a1, &v0);
                                                v4 = *((long long *)&v1);
                                                if (*((long long *)&v1) == 4)
                                                {
                                                    a2.write_str("i &>/dev/null || \\builtin true\nfi\n# To initialize zoxide, add this to your shell configuration file (usually ~/.bashrc):\n#\n# eval \"$(zoxide init bash)\"use builtin\nuse path\n\n\n# Utility functions for zoxide.\n#\n\n# cd + custom logic based on the value of _ZO_E", 33);
                                                    goto LABEL_4985b0;
                                                }
                                            }
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
                        v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                        v4 = *((long long *)&v1);
                        if (*((long long *)&v1) == 4)
                        {
LABEL_4985b0:
                            a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                            v0 = a2;
                            v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
                                a2.write_str("\n# To initialize zoxide, add this to your shell configuration file (usually ~/.bashrc):\n#\n# eval \"$(zoxide init bash)\"use builtin\nuse path\n\n\n# Utility functions for zoxide.\n#\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfn __zoxide_cd {|path|\n    b", 118);
                                a0->field_0 = 4;
                                return 4;
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
