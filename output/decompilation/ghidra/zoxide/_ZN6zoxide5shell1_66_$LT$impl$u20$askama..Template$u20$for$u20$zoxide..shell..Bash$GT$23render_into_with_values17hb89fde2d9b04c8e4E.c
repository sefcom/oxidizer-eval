void _ZN6zoxide5shell1_66__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Bash_GT_23render_into_with_values17hb89fde2d9b04c8e4E
               (long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 local_40;
  undefined local_38;
  undefined7 uStack_37;
  long local_30;
  long lStack_28;
  
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
            (param_3,"# shellcheck shell=bash\n\n",0x19);
  local_40 = param_3;
  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
            (&local_38,
             "# =============================================================================\n#",
             0x51,&local_40);
  lVar3 = CONCAT71(uStack_37,local_38);
  if (lVar3 == 4) {
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {"
               ,0x6f);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE("");
    if (cVar1 == '\0') {
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x12);
      if (cVar1 == '\0') {
        pcVar5 = "\n    \\builtin pwd -L";
      }
      else {
        pcVar5 = "\n    \\builtin pwd -P";
      }
      uVar4 = 0x14;
    }
    else {
      pcVar5 = "\n    \\command cygpath -w \"$(\\builtin pwd -P)\"";
      uVar4 = 0x2d;
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,pcVar5,uVar4);
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\builtin cd -- \"$@\""
               ,0x88);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x11);
    if (cVar1 != '\0') {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,&DAT_00118ae0,0x10);
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,&DAT_00118e6c,4);
    local_40 = param_3;
    _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
              (&local_38,
               "# =============================================================================\n#",
               0x51,&local_40);
    lVar3 = CONCAT71(uStack_37,local_38);
    if (lVar3 == 4) {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n# Hook configuration for zoxide.\n#",0x23);
      local_38 = *(char *)(param_2 + 2) != '\0';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar1 != '\0') {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"\n\n# Hook to add new entries to the database.",0x2c);
        cVar1 = *(char *)(param_2 + 2);
        local_38 = cVar1 == '\x01';
        cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar2 == '\0') {
          local_38 = cVar1 == '\x02';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
          if (cVar1 != '\0') {
            pcVar5 = 
            "\n__zoxide_oldpwd=\"$(__zoxide_pwd)\"\n\nfunction __zoxide_hook() {\n    \\builtin local -r retval=\"$?\"\n    \\builtin local pwd_tmp\n    pwd_tmp=\"$(__zoxide_pwd)\"\n    if [[ ${__zoxide_oldpwd} != \"${pwd_tmp}\" ]]; then\n        __zoxide_oldpwd=\"${pwd_tmp}\"\n        \\command zoxide add -- \"${__zoxide_oldpwd}\"\n    fi\n    return \"${retval}\"\n}"
            ;
            uVar4 = 0x148;
            goto LAB_001982b7;
          }
        }
        else {
          pcVar5 = 
          "\nfunction __zoxide_hook() {\n    \\builtin local -r retval=\"$?\"\n    # shellcheck disable=SC2312\n    \\command zoxide add -- \"$(__zoxide_pwd)\"\n    return \"${retval}\"\n}"
          ;
          uVar4 = 0xa3;
LAB_001982b7:
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar5,uVar4);
        }
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n\n# Initialize hook.\nif [[ ${PROMPT_COMMAND:=} != *\'__zoxide_hook\'* ]]; then\n    PROMPT_COMMAND=\"__zoxide_hook;${PROMPT_COMMAND#;}\"\nfi"
                   ,0x86);
      }
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n\n# Report common issues.\nfunction __zoxide_doctor() {",0x36);
      local_38 = *(char *)(param_2 + 2) == '\0';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar1 == '\0') {
        pcVar5 = 
        "\n    [[ ${_ZO_DOCTOR:-1} -eq 0 ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${PROMPT_COMMAND[@]:-} == *\'__zoxide_hook\'* ]] && return 0\n    # shellcheck disable=SC2199\n    [[ ${__vsc_original_prompt_command[@]:-} == *\'__zoxide_hook\'* ]] && return 0\n\n    _ZO_DOCTOR=0\n    \\builtin printf \'%s\\n\' \\\n        \'zoxide: detected a possible configuration issue.\' \\\n        \'Please ensure that zoxide is initialized right at the end of your shell configuration file (usually ~/.bashrc).\' \\\n        \'\' \\\n        \'If the issue persists, consider filing an issue at:\' \\\n        \'https://github.com/ajeetdsouza/zoxide/issues\' \\\n        \'\' \\\n        \'Disable this message by setting _ZO_DOCTOR=0.\' \\\n        \'\' >&2"
        ;
        uVar4 = 0x2c4;
      }
      else {
        pcVar5 = "\n    return 0";
        uVar4 = 0xd;
      }
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,pcVar5,uVar4);
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,&DAT_00118e6c,4);
      local_40 = param_3;
      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                (&local_38,
                 "# =============================================================================\n#"
                 ,0x51,&local_40);
      lVar3 = CONCAT71(uStack_37,local_38);
      if (lVar3 == 4) {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n__zoxide_z_prefix=\'z#\'\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n\n    # shellcheck disable=SC2199\n    if [[ $# -eq 0 ]]; then\n        __zoxide_cd ~\n    elif [[ $# -eq 1 && $1 == \'-\' ]]; then\n        __zoxide_cd \"${OLDPWD}\"\n    elif [[ $# -eq 1 && -d $1 ]]; then\n        __zoxide_cd \"$1\"\n    elif [[ $# -eq 2 && $1 == \'--\' ]]; then\n        __zoxide_cd \"$2\"\n    elif [[ ${@: -1} == \"${__zoxide_z_prefix}\"?* ]]; then\n        # shellcheck disable=SC2124\n        \\builtin local result=\"${@: -1}\"\n        __zoxide_cd \"${result:${#__zoxide_z_prefix}}\"\n    else\n        \\builtin local result\n        # shellcheck disable=SC2312\n        result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" -- \"$@\")\" &&\n            __zoxide_cd \"${result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi() {\n    __zoxide_doctor\n    \\builtin local result\n    result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${result}\"\n}\n\n"
                   ,0x43c);
        local_40 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_38,
                   "# =============================================================================\n#"
                   ,0x51,&local_40);
        lVar3 = CONCAT71(uStack_37,local_38);
        if (lVar3 == 4) {
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,"\n# Commands for zoxide. Disable these using --no-cmd.\n#",0x37);
          if (*param_2 == 0) {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\n",2);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                      (&local_38,"# -- not configured --",0x16,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
LAB_001985b0:
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,"\n\n",2);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                        (&local_38,
                         "# =============================================================================\n#"
                         ,0x51,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,
                           "\n# To initialize zoxide, add this to your shell configuration file (usually ~/.bashrc):\n#\n# eval \"$(zoxide init bash)\""
                           ,0x76);
                lVar3 = 4;
                goto LAB_00198613;
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\n\\builtin unalias ",0x13);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_38,param_2,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3," &>/dev/null || \\builtin true\nfunction ",0x27);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_38,param_2,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"() {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias ",0x2d);
                local_40 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                          (&local_38,param_2,&local_40);
                lVar3 = CONCAT71(uStack_37,local_38);
                if (lVar3 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,"i &>/dev/null || \\builtin true\nfunction ",0x28);
                  local_40 = param_3;
                  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                            (&local_38,param_2,&local_40);
                  lVar3 = CONCAT71(uStack_37,local_38);
                  if (lVar3 == 4) {
                    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                              (param_3,
                               "i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions require line editing. Since Bash supports only two modes of\n#   line editing (`vim` and `emacs`), we check if either them is enabled.\n# - Completions don\'t work on `dumb` terminals.\nif [[ ${BASH_VERSINFO[0]:-0} -eq 4 && ${BASH_VERSINFO[1]:-0} -ge 4 || ${BASH_VERSINFO[0]:-0} -ge 5 ]] &&\n    [[ :\"${SHELLOPTS}\": =~ :(vi|emacs): && ${TERM} != \'dumb\' ]]; then\n\n    function __zoxide_z_complete_helper() {\n        READLINE_LINE=\""
                               ,0x212);
                    local_40 = param_3;
                    _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                              (&local_38,param_2,&local_40);
                    lVar3 = CONCAT71(uStack_37,local_38);
                    if (lVar3 == 4) {
                      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                                (param_3,
                                 " ${__zoxide_result@Q}\"\n        READLINE_POINT=${#READLINE_LINE}\n        bind \'\"\\e[0n\": accept-line\'\n        \\builtin printf \'\\e[5n\' >/dev/tty\n    }\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        [[ ${#COMP_WORDS[@]} -eq $((COMP_CWORD + 1)) ]] || return\n\n        # If there is only one argument, use `cd` completions.\n        if [[ ${#COMP_WORDS[@]} -eq 2 ]]; then\n            \\builtin mapfile -t COMPREPLY < <(\n                \\builtin compgen -A directory -- \"${COMP_WORDS[-1]}\" || \\builtin true\n            )\n        # If there is a space after the last word, use interactive selection.\n        elif [[ -z ${COMP_WORDS[-1]} ]]; then\n            # shellcheck disable=SC2312\n            __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" --interactive -- \"${COMP_WORDS[@]:1:${#COMP_WORDS[@]}-2}\")\" && {\n                # In case the terminal does not respond to \\e[5n or another\n                # mechanism steals the response, it is still worth completing\n                # the directory in the command line.\n                COMPREPLY=(\"${__zoxide_z_prefix}${__zoxide_result}/\")\n\n                # Note: We here call \"bind\" without prefixing \"\\builtin\" to be\n                # compatible with frameworks like ble.sh, which emulates Bash\'s\n                # builtin \"bind\".\n                bind -x \'\"\\e[0n\": __zoxide_z_complete_helper\'\n                \\builtin printf \'\\e[5n\' >/dev/tty\n            }\n        fi\n    }\n\n    \\builtin complete -F __zoxide_z_complete -o filenames -- "
                                 ,0x623);
                      local_40 = param_3;
                      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                                (&local_38,param_2,&local_40);
                      lVar3 = CONCAT71(uStack_37,local_38);
                      if (lVar3 == 4) {
                        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                                  (param_3,"\n    \\builtin complete -r ",0x1a);
                        local_40 = param_3;
                        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                                  (&local_38,param_2,&local_40);
                        lVar3 = CONCAT71(uStack_37,local_38);
                        if (lVar3 == 4) {
                          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                                    (param_3,"i &>/dev/null || \\builtin true\nfi",0x21);
                          goto LAB_001985b0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  param_1[1] = local_30;
  param_1[2] = lStack_28;
LAB_00198613:
  *param_1 = lVar3;
  return;
}