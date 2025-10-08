void _ZN6zoxide5shell1_66__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Tcsh_GT_23render_into_with_values17h7a9ee968d9db603bE
               (long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 local_48;
  undefined local_40;
  undefined7 uStack_3f;
  long local_38;
  long lStack_30;
  
  cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x12);
  pcVar6 = "pwd -L";
  if (cVar1 != '\0') {
    pcVar6 = "pwd -P";
  }
  local_48 = param_3;
  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
            (&local_40,
             "# =============================================================================\n#",
             0x51,&local_48);
  lVar3 = CONCAT71(uStack_3f,local_40);
  if (lVar3 != 4) goto LAB_00199d78;
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
            (param_3,"\n# Hook configuration for zoxide.\n#",0x23);
  local_40 = *(char *)(param_2 + 2) != '\0';
  cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_40);
  if (cVar1 == '\0') {
LAB_00199b4b:
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,"\n\n",2);
    local_48 = param_3;
    _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
              (&local_40,
               "# =============================================================================\n#",
               0x51,&local_48);
    lVar3 = CONCAT71(uStack_3f,local_40);
    if (lVar3 == 4) {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,
                 "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nalias __zoxide_z \'set __zoxide_args = (\\!*)\\\nif (\"$#__zoxide_args\" == 0) then\\\n    cd ~\\\nelse\\\n    if (\"$#__zoxide_args\" == 1 && \"$__zoxide_args[1]\" == \"-\") then\\\n        cd -\\\n    else if (\"$#__zoxide_args\" == 1 && -d \"$__zoxide_args[1]\") then\\\n        cd \"$__zoxide_args[1]\"\\\n    else\\\n        set __zoxide_pwd = `"
                 ,0x1b9);
      local_48 = param_3;
      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                (&local_40,pcVar6,6,&local_48);
      lVar3 = CONCAT71(uStack_3f,local_40);
      if (lVar3 == 4) {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "`\\\n        set __zoxide_result = \"`zoxide query --exclude \'\"\'\"\'$__zoxide_pwd\'\"\'\"\' -- $__zoxide_args`\" && cd \"$__zoxide_result\"\\\n    endif\\\nendif\'\n\n# Jump to a directory using interactive search.\nalias __zoxide_zi \'set __zoxide_args = (\\!*)\\\nset __zoxide_pwd = `"
                   ,0x105);
        local_48 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_40,pcVar6,6,&local_48);
        lVar3 = CONCAT71(uStack_3f,local_40);
        if (lVar3 == 4) {
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,
                     "`\\\nset __zoxide_result = \"`zoxide query --exclude \'\"\'\"\'$__zoxide_pwd\'\"\'\"\' --interactive -- $__zoxide_args`\" && cd \"$__zoxide_result\"\'\n\n"
                     ,0x87);
          local_48 = param_3;
          _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                    (&local_40,
                     "# =============================================================================\n#"
                     ,0x51,&local_48);
          lVar3 = CONCAT71(uStack_3f,local_40);
          if (lVar3 == 4) {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n# Commands for zoxide. Disable these using --no-cmd.\n#",0x37);
            if (*param_2 == 0) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,"\n\n",2);
              local_48 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                        (&local_40,"# -- not configured --",0x16,&local_48);
              lVar3 = CONCAT71(uStack_3f,local_40);
              if (lVar3 == 4) {
LAB_00199d21:
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"\n\n",2);
                local_48 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                          (&local_40,
                           "# =============================================================================\n#"
                           ,0x51,&local_48);
                lVar3 = CONCAT71(uStack_3f,local_40);
                if (lVar3 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,
                             "\n# To initialize zoxide, add this to your shell configuration file (usually ~/.tcshrc):\n#\n#     zoxide init tcsh > ~/.zoxide.tcsh\n#     source ~/.zoxide.tcsh"
                             ,0x9d);
                  lVar3 = 4;
                  goto LAB_00199d81;
                }
              }
            }
            else {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,&DAT_00118fd0,8);
              local_48 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_40,param_2,&local_48);
              lVar3 = CONCAT71(uStack_3f,local_40);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3," __zoxide_z\nalias ",0x12);
                local_48 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                          (&local_40,param_2,&local_48);
                lVar3 = CONCAT71(uStack_3f,local_40);
                if (lVar3 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,"i __zoxide_zi",0xd);
                  goto LAB_00199d21;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,"\n\n# Hook to add new entries to the database.",0x2c);
    cVar1 = *(char *)(param_2 + 2);
    local_40 = cVar1 == '\x01';
    cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_40);
    if (cVar2 == '\0') {
      local_40 = cVar1 == '\x02';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_40);
      if (cVar1 == '\0') goto LAB_00199b37;
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\nset __zoxide_pwd_old = `",0x19);
      local_48 = param_3;
      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                (&local_40,pcVar6,6,&local_48);
      lVar3 = CONCAT71(uStack_3f,local_40);
      if (lVar3 == 4) {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"`\nalias __zoxide_hook \'set __zoxide_pwd_tmp = \"`",0x30);
        local_48 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_40,pcVar6,6,&local_48);
        lVar3 = CONCAT71(uStack_3f,local_40);
        if (lVar3 == 4) {
          pcVar5 = 
          "`\"; test \"$__zoxide_pwd_tmp\" != \"$__zoxide_pwd_old\" && zoxide add -- \"$__zoxide_pwd_tmp\"; set __zoxide_pwd_old = \"$__zoxide_pwd_tmp\"\'"
          ;
          uVar4 = 0x85;
          goto LAB_00199a86;
        }
      }
    }
    else {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\nalias __zoxide_hook \'zoxide add -- \"`",0x26);
      local_48 = param_3;
      _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                (&local_40,pcVar6,6,&local_48);
      lVar3 = CONCAT71(uStack_3f,local_40);
      if (lVar3 == 4) {
        pcVar5 = "`\"\'";
        uVar4 = 3;
LAB_00199a86:
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,pcVar5,uVar4);
LAB_00199b37:
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"\n\n# Initialize hook.\nalias precmd \';__zoxide_hook\'",0x32);
        goto LAB_00199b4b;
      }
    }
  }
LAB_00199d78:
  param_1[1] = local_38;
  param_1[2] = lStack_30;
LAB_00199d81:
  *param_1 = lVar3;
  return;
}