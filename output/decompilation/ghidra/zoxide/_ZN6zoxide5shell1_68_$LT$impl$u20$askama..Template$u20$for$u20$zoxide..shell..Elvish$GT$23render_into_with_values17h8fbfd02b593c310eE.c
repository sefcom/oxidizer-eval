void _ZN6zoxide5shell1_68__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Elvish_GT_23render_into_with_values17h8fbfd02b593c310eE
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
            (param_3,"use builtin\nuse path\n\n",0x16);
  local_40 = param_3;
  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
            (&local_38,
             "# =============================================================================\n#",
             0x51,&local_40);
  lVar3 = CONCAT71(uStack_37,local_38);
  if (lVar3 == 4) {
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n# Utility functions for zoxide.\n#\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfn __zoxide_cd {|path|\n    builtin:cd $path"
               ,0x83);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x11);
    if (cVar1 != '\0') {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n    builtin:echo $pwd",0x16);
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
                 "\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to track previous directory.\nvar oldpwd = $builtin:pwd\nset builtin:before-chdir = [$@builtin:before-chdir {|_| set oldpwd = $builtin:pwd }]\n\n# Initialize hook to add directories to zoxide."
                 ,0xf3);
      local_38 = *(char *)(param_2 + 2) == '\0';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar1 == '\0') {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\nif (builtin:not (builtin:eq $E:__zoxide_shlvl $E:SHLVL)) {\n    set E:__zoxide_shlvl = $E:SHLVL"
                   ,0x5f);
        cVar1 = *(char *)(param_2 + 2);
        local_38 = cVar1 == '\x01';
        cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar2 == '\0') {
          local_38 = cVar1 == '\x02';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
          if (cVar1 != '\0') {
            pcVar5 = 
            "\n    set builtin:after-chdir = [$@builtin:after-chdir {|_| zoxide add -- $pwd }]";
            uVar4 = 0x50;
            goto LAB_001987d3;
          }
        }
        else {
          pcVar5 = 
          "\n    set edit:before-readline = [$@edit:before-readline {|| zoxide add -- $pwd }]";
          uVar4 = 0x51;
LAB_001987d3:
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar5,uVar4);
        }
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"\n}",2);
      }
      else {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"\n",1);
        local_40 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_38,"# -- not configured --",0x16,&local_40);
        lVar3 = CONCAT71(uStack_37,local_38);
        if (lVar3 != 4) goto LAB_001989f0;
      }
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
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfn __zoxide_z {|@rest|\n    if (builtin:eq [] $rest) {\n        __zoxide_cd ~\n    } elif (builtin:eq [-] $rest) {\n        __zoxide_cd $oldpwd\n    } elif (and (\'builtin:==\' (builtin:count $rest) 1) (path:is-dir &follow-symlink=$true $rest[0])) {\n        __zoxide_cd $rest[0]\n    } else {\n        var path\n        try {\n            set path = (zoxide query --exclude $pwd -- $@rest)\n        } catch {\n        } else {\n            __zoxide_cd $path\n        }\n    }\n}\nedit:add-var __zoxide_z~ $__zoxide_z~\n\n# Jump to a directory using interactive search.\nfn __zoxide_zi {|@rest|\n    var path\n    try {\n        set path = (zoxide query --interactive -- $@rest)\n    } catch {\n    } else {\n        __zoxide_cd $path\n    }\n}\nedit:add-var __zoxide_zi~ $__zoxide_zi~\n\n"
                   ,0x371);
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
LAB_00198996:
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
                           "\n# To initialize zoxide, add this to your configuration (usually\n# ~/.elvish/rc.elv):\n#\n#   eval (zoxide init elvish | slurp)\n#\n# Note: zoxide only supports elvish v0.18.0 and above."
                           ,0xb6);
                lVar3 = 4;
                goto LAB_001989f9;
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\nedit:add-var ",0xf);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_38,param_2,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,"~ $__zoxide_z~\nedit:add-var ",0x1c);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_38,param_2,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,
                           "i~ $__zoxide_zi~\n\n# Load completions.\nfn __zoxide_z_complete {|@rest|\n    if (!= (builtin:count $rest) 2) {\n        builtin:return\n    }\n    edit:complete-filename $rest[1] |\n        builtin:each {|completion|\n            var dir = $completion[stem]\n            if (path:is-dir $dir) {\n                builtin:put $dir\n            }\n        }\n}\nset edit:completion:arg-completer["
                           ,0x17b);
                local_40 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                          (&local_38,param_2,&local_40);
                lVar3 = CONCAT71(uStack_37,local_38);
                if (lVar3 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,"] = $__zoxide_z_complete~",0x19);
                  goto LAB_00198996;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001989f0:
  param_1[1] = local_30;
  param_1[2] = lStack_28;
LAB_001989f9:
  *param_1 = lVar3;
  return;
}