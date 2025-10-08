void _ZN6zoxide5shell1_67__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Posix_GT_23render_into_with_values17ha0c2001e3fc8aa5bE
               (long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_38;
  undefined local_30;
  undefined7 uStack_2f;
  long local_28;
  long lStack_20;
  
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
            (param_3,"# shellcheck shell=sh\n\n",0x17);
  local_38 = param_3;
  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
            (&local_30,
             "# =============================================================================\n#",
             0x51,&local_38);
  lVar2 = CONCAT71(uStack_2f,local_30);
  if (lVar2 == 4) {
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\n__zoxide_pwd() {"
               ,0x66);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE("");
    if (cVar1 == '\0') {
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x12);
      if (cVar1 == '\0') {
        pcVar4 = "\n    \\command pwd -L";
      }
      else {
        pcVar4 = "\n    \\command pwd -P";
      }
      uVar3 = 0x14;
    }
    else {
      pcVar4 = "\n    \\command cygpath -w \"$(\\builtin pwd -P)\"";
      uVar3 = 0x2d;
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,pcVar4,uVar3);
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\n__zoxide_cd() {\n    # shellcheck disable=SC2164\n    \\command cd \"$@\""
               ,0x7c);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x11);
    if (cVar1 != '\0') {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,&DAT_00118ae0,0x10);
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,&DAT_00118e6c,4);
    local_38 = param_3;
    _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
              (&local_30,
               "# =============================================================================\n#",
               0x51,&local_38);
    lVar2 = CONCAT71(uStack_2f,local_30);
    if (lVar2 == 4) {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n# Hook configuration for zoxide.\n#\n\n",0x25);
      if (*(char *)(param_2 + 2) == '\0') {
        local_38 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_30,"# -- not configured --",0x16,&local_38);
        lVar2 = CONCAT71(uStack_2f,local_30);
        if (lVar2 != 4) goto LAB_00199605;
      }
      else {
        if (*(char *)(param_2 + 2) == '\x01') {
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,
                     "# Hook to add new entries to the database.\n__zoxide_hook() {\n    \\command zoxide add -- \"$(__zoxide_pwd || \\builtin true)\"\n}\n\n# Initialize hook.\nif [ \"${PS1:=}\" = \"${PS1#*\\$(__zoxide_hook)}\" ]; then\n    PS1=\"${PS1}\\$(__zoxide_hook)\"\nfi\n\n# Report common issues.\n__zoxide_doctor() {"
                     ,0x118);
          local_30 = *(char *)(param_2 + 2) != '\x01';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_30);
          if (cVar1 == '\0') {
            pcVar4 = 
            "\n    [ \"${_ZO_DOCTOR:-1}\" -eq 0 ] && return 0\n    case \"${PS1:-}\" in\n    *__zoxide_hook*) return 0 ;;\n    *) ;;\n    esac\n\n    _ZO_DOCTOR=0\n    \\command printf \'%s\\n\' \\\n        \'zoxide: detected a possible configuration issue.\' \\\n        \'Please ensure that zoxide is initialized right at the end of your shell configuration file.\' \\\n        \'\' \\\n        \'If the issue persists, consider filing an issue at:\' \\\n        \'https://github.com/ajeetdsouza/zoxide/issues\' \\\n        \'\' \\\n        \'Disable this message by setting _ZO_DOCTOR=0.\' \\\n        \'\' >&2"
            ;
            uVar3 = 0x228;
          }
          else {
            pcVar4 = "\n    return 0";
            uVar3 = 0xd;
          }
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar4,uVar3);
          pcVar4 = "\n}";
          uVar3 = 2;
        }
        else {
          pcVar4 = 
          "\\command printf \"%s\\n%s\\n\" \\\n    \"zoxide: PWD hooks are not supported on POSIX shells.\" \\\n    \"        Use \'zoxide init posix --hook prompt\' instead.\""
          ;
          uVar3 = 0x96;
        }
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,pcVar4,uVar3);
      }
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n\n",2);
      local_38 = param_3;
      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                (&local_30,
                 "# =============================================================================\n#"
                 ,0x51,&local_38);
      lVar2 = CONCAT71(uStack_2f,local_30);
      if (lVar2 == 4) {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\n__zoxide_z() {\n    __zoxide_doctor\n\n    if [ \"$#\" -eq 0 ]; then\n        __zoxide_cd ~\n    elif [ \"$#\" -eq 1 ] && [ \"$1\" = \'-\' ]; then\n        if [ -n \"${OLDPWD}\" ]; then\n            __zoxide_cd \"${OLDPWD}\"\n        else\n            # shellcheck disable=SC2016\n            \\command printf \'zoxide: $OLDPWD is not set\'\n            return 1\n        fi\n    elif [ \"$#\" -eq 1 ] && [ -d \"$1\" ]; then\n        __zoxide_cd \"$1\"\n    else\n        __zoxide_result=\"$(\\command zoxide query --exclude \"$(__zoxide_pwd || \\builtin true)\" -- \"$@\")\" &&\n            __zoxide_cd \"${__zoxide_result}\"\n    fi\n}\n\n# Jump to a directory using interactive search.\n__zoxide_zi() {\n    __zoxide_doctor\n    __zoxide_result=\"$(\\command zoxide query --interactive -- \"$@\")\" && __zoxide_cd \"${__zoxide_result}\"\n}\n\n"
                   ,0x38a);
        local_38 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_30,
                   "# =============================================================================\n#"
                   ,0x51,&local_38);
        lVar2 = CONCAT71(uStack_2f,local_30);
        if (lVar2 == 4) {
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,"\n# Commands for zoxide. Disable these using --no-cmd.\n#",0x37);
          if (*param_2 == 0) {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\n",2);
            local_38 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                      (&local_30,"# -- not configured --",0x16,&local_38);
            lVar2 = CONCAT71(uStack_2f,local_30);
            if (lVar2 == 4) {
LAB_001995ae:
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,"\n\n",2);
              local_38 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                        (&local_30,
                         "# =============================================================================\n#"
                         ,0x51,&local_38);
              lVar2 = CONCAT71(uStack_2f,local_30);
              if (lVar2 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,
                           "\n# To initialize zoxide, add this to your configuration:\n#\n# eval \"$(zoxide init posix --hook prompt)\""
                           ,0x66);
                lVar2 = 4;
                goto LAB_0019960e;
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\n\\command unalias ",0x13);
            local_38 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_30,param_2,&local_38);
            lVar2 = CONCAT71(uStack_2f,local_30);
            if (lVar2 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3," >/dev/null 2>&1 || \\true\n",0x1a);
              local_38 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_30,param_2,&local_38);
              lVar2 = CONCAT71(uStack_2f,local_30);
              if (lVar2 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"() {\n    __zoxide_z \"$@\"\n}\n\n\\command unalias ",0x2d);
                local_38 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                          (&local_30,param_2,&local_38);
                lVar2 = CONCAT71(uStack_2f,local_30);
                if (lVar2 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,"i >/dev/null 2>&1 || \\true\n",0x1b);
                  local_38 = param_3;
                  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                            (&local_30,param_2,&local_38);
                  lVar2 = CONCAT71(uStack_2f,local_30);
                  if (lVar2 == 4) {
                    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                              (param_3,"i() {\n    __zoxide_zi \"$@\"\n}",0x1c);
                    goto LAB_001995ae;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00199605:
  param_1[1] = local_28;
  param_1[2] = lStack_20;
LAB_0019960e:
  *param_1 = lVar2;
  return;
}