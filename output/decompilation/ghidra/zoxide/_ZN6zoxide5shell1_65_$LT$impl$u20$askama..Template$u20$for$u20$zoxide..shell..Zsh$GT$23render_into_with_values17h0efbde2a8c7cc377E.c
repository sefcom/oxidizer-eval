void _ZN6zoxide5shell1_65__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Zsh_GT_23render_into_with_values17h0efbde2a8c7cc377E
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
                (param_3,
                 "\n# Hook configuration for zoxide.\n#\n\n# Hook to add new entries to the database.\nfunction __zoxide_hook() {\n    # shellcheck disable=SC2312\n    \\command zoxide add -- \"$(__zoxide_pwd)\"\n}\n\n# Initialize hook.\n\\builtin typeset -ga precmd_functions\n\\builtin typeset -ga chpwd_functions\n# shellcheck disable=SC2034,SC2296\nprecmd_functions=(\"${(@)precmd_functions:#__zoxide_hook}\")\n# shellcheck disable=SC2034,SC2296\nchpwd_functions=(\"${(@)chpwd_functions:#__zoxide_hook}\")"
                 ,0x1d2);
      cVar1 = *(char *)(param_2 + 2);
      local_38 = cVar1 == '\x01';
      cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar2 == '\0') {
        local_38 = cVar1 == '\x02';
        cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar1 != '\0') {
          pcVar5 = "\nchpwd_functions+=(__zoxide_hook)";
          uVar4 = 0x21;
          goto LAB_0019a2fb;
        }
      }
      else {
        pcVar5 = "\nprecmd_functions+=(__zoxide_hook)";
        uVar4 = 0x22;
LAB_0019a2fb:
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,pcVar5,uVar4);
      }
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n\n# Report common issues.\nfunction __zoxide_doctor() {",0x36);
      local_38 = *(char *)(param_2 + 2) == '\0';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar1 == '\0') {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"\n    [[ ${_ZO_DOCTOR:-1} -ne 0 ]] || return 0",0x2d);
        cVar1 = *(char *)(param_2 + 2);
        local_38 = cVar1 == '\x01';
        cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar2 == '\0') {
          local_38 = cVar1 == '\x02';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
          if (cVar1 != '\0') {
            pcVar5 = "\n    [[ ${chpwd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0";
            uVar4 = 0x44;
            goto LAB_0019a39e;
          }
        }
        else {
          pcVar5 = "\n    [[ ${precmd_functions[(Ie)__zoxide_hook]:-} -eq 0 ]] || return 0";
          uVar4 = 0x45;
LAB_0019a39e:
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar5,uVar4);
        }
        pcVar5 = 
        "\n\n    _ZO_DOCTOR=0\n    \\builtin printf \'%s\\n\' \\\n        \'zoxide: detected a possible configuration issue.\' \\\n        \'Please ensure that zoxide is initialized right at the end of your shell configuration file (usually ~/.zshrc).\' \\\n        \'\' \\\n        \'If the issue persists, consider filing an issue at:\' \\\n        \'https://github.com/ajeetdsouza/zoxide/issues\' \\\n        \'\' \\\n        \'Disable this message by setting _ZO_DOCTOR=0.\' \\\n        \'\' >&2"
        ;
        uVar4 = 0x1c3;
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
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z() {\n    __zoxide_doctor\n    if [[ \"$#\" -eq 0 ]]; then\n        __zoxide_cd ~\n    elif [[ \"$#\" -eq 1 ]] && { [[ -d \"$1\" ]] || [[ \"$1\" = \'-\' ]] || [[ \"$1\" =~ ^[-+][0-9]+$ ]]; }; then\n        __zoxide_cd \"$1\"\n    elif [[ \"$#\" -eq 2 ]] && [[ \"$1\" = \"--\" ]]; then\n        __zoxide_cd \"$2\"\n    else\n        \\builtin local result\n        # shellcheck disable=SC2312\n        result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd)\" -- \"$@\")\" && __zoxide_cd \"${result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi() {\n    __zoxide_doctor\n    \\builtin local result\n    result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${result}\"\n}\n\n"
                   ,0x33b);
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
LAB_0019a52b:
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,
                         "\n\n# Completions.\nif [[ -o zle ]]; then\n    __zoxide_result=\'\'\n\n    function __zoxide_z_complete() {\n        # Only show completions when the cursor is at the end of the line.\n        # shellcheck disable=SC2154\n        [[ \"${#words[@]}\" -eq \"${CURRENT}\" ]] || return 0\n\n        if [[ \"${#words[@]}\" -eq 2 ]]; then\n            # Show completions for local directories.\n            _cd -/\n\n        elif [[ \"${words[-1]}\" == \'\' ]]; then\n            # Show completions for Space-Tab.\n            # shellcheck disable=SC2086\n            __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd || \\builtin true)\" --interactive -- ${words[2,-1]})\" || __zoxide_result=\'\'\n\n            # Set a result to ensure completion doesn\'t re-run\n            compadd -Q \"\"\n\n            # Bind \'\\e[0n\' to helper function.\n            \\builtin bindkey \'\\e[0n\' \'__zoxide_z_complete_helper\'\n            # Sends query device status code, which results in a \'\\e[0n\' being sent to console input.\n            \\builtin printf \'\\e[5n\'\n\n            # Report that the completion was successful, so that we don\'t fall back\n            # to another completion function.\n            return 0\n        fi\n    }\n\n    function __zoxide_z_complete_helper() {\n        if [[ -n \"${__zoxide_result}\" ]]; then\n            # shellcheck disable=SC2034,SC2296\n            BUFFER=\""
                         ,0x540);
              pcVar5 = (char *)*param_2;
              if (pcVar5 == (char *)0x0) {
                lVar3 = 2;
                pcVar5 = "cd";
              }
              else {
                lVar3 = param_2[1];
              }
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                        (&local_38,pcVar5,lVar3,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,
                           " ${(q-)__zoxide_result}\"\n            __zoxide_result=\'\'\n            \\builtin zle reset-prompt\n            \\builtin zle accept-line\n        else\n            \\builtin zle reset-prompt\n        fi\n    }\n    \\builtin zle -N __zoxide_z_complete_helper"
                           ,0xf5);
                if (*param_2 != 0) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,
                             "\n\n    [[ \"${+functions[compdef]}\" -ne 0 ]] && \\compdef __zoxide_z_complete "
                             ,0x4b);
                  local_40 = param_3;
                  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                            (&local_38,param_2,&local_40);
                  lVar3 = CONCAT71(uStack_37,local_38);
                  if (lVar3 != 4) goto LAB_0019a626;
                }
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"\nfi\n\n",5);
                local_40 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                          (&local_38,
                           "# =============================================================================\n#"
                           ,0x51,&local_40);
                lVar3 = CONCAT71(uStack_37,local_38);
                if (lVar3 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,
                             "\n# To initialize zoxide, add this to your shell configuration file (usually ~/.zshrc):\n#\n# eval \"$(zoxide init zsh)\""
                             ,0x74);
                  lVar3 = 4;
                  goto LAB_0019a62f;
                }
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\nfunction ",0xb);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_38,param_2,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,"() {\n    __zoxide_z \"$@\"\n}\n\nfunction ",0x25);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_38,param_2,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"i() {\n    __zoxide_zi \"$@\"\n}",0x1c);
                goto LAB_0019a52b;
              }
            }
          }
        }
      }
    }
  }
LAB_0019a626:
  param_1[1] = local_30;
  param_1[2] = lStack_28;
LAB_0019a62f:
  *param_1 = lVar3;
  return;
}