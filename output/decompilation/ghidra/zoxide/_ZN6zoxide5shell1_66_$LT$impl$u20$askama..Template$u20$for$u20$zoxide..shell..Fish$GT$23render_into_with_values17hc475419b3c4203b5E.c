void _ZN6zoxide5shell1_66__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Fish_GT_23render_into_with_values17hc475419b3c4203b5E
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
  
  local_40 = param_3;
  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
            (&local_38,
             "# =============================================================================\n#",
             0x51,&local_40);
  lVar3 = CONCAT71(uStack_37,local_38);
  if (lVar3 == 4) {
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd"
               ,0x6b);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE("");
    if (cVar1 == '\0') {
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x12);
      if (cVar1 == '\0') {
        pcVar5 = "\n    builtin pwd -L";
      }
      else {
        pcVar5 = "\n    builtin pwd -P";
      }
      uVar4 = 0x13;
    }
    else {
      pcVar5 = "\n    command cygpath -w (builtin pwd -P)";
      uVar4 = 0x28;
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,pcVar5,uVar4);
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,
               "\nend\n\n# A copy of fish\'s internal cd function. This makes it possible to use\n# `alias cd=z` without causing an infinite loop.\nif ! builtin functions --query __zoxide_cd_internal\n    string replace --regex -- \'^function cd\\s\' \'function __zoxide_cd_internal \' <$__fish_data_dir/functions/cd.fish | source\nend\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction __zoxide_cd\n    if set -q __zoxide_loop\n        builtin echo \"zoxide: infinite loop detected\"\n        builtin echo \"Avoid aliasing `cd` to `z` directly, use `zoxide init --cmd=cd fish` instead\"\n        return 1\n    end"
               ,0x24b);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE("");
    if (cVar1 == '\0') {
      pcVar5 = "\n    __zoxide_loop=1 __zoxide_cd_internal $argv";
      uVar4 = 0x2f;
    }
    else {
      pcVar5 = "\n    __zoxide_loop=1 __zoxide_cd_internal (cygpath -u $argv)";
      uVar4 = 0x3c;
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,pcVar5,uVar4);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x11);
    if (cVar1 != '\0') {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n    and __zoxide_pwd",0x15);
    }
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
              (param_3,"\nend\n\n",6);
    local_40 = param_3;
    _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
              (&local_38,
               "# =============================================================================\n#",
               0x51,&local_40);
    lVar3 = CONCAT71(uStack_37,local_38);
    if (lVar3 == 4) {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n# Hook configuration for zoxide.\n#\n\n",0x25);
      local_38 = *(char *)(param_2 + 2) == '\0';
      cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar1 == '\0') {
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,"# Initialize hook to add new entries to the database.",0x35);
        cVar1 = *(char *)(param_2 + 2);
        local_38 = cVar1 == '\x01';
        cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar2 == '\0') {
          local_38 = cVar1 == '\x02';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
          if (cVar1 != '\0') {
            pcVar5 = "\nfunction __zoxide_hook --on-variable PWD";
            uVar4 = 0x29;
            goto LAB_00198c19;
          }
        }
        else {
          pcVar5 = "\nfunction __zoxide_hook --on-event fish_prompt";
          uVar4 = 0x2e;
LAB_00198c19:
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar5,uVar4);
        }
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\nend"
                   ,0x52);
      }
      else {
        local_40 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_38,"# -- not configured --",0x16,&local_40);
        lVar3 = CONCAT71(uStack_37,local_38);
        if (lVar3 != 4) goto LAB_00198e70;
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
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction __zoxide_z\n    set -l argc (builtin count $argv)\n    if test $argc -eq 0\n        __zoxide_cd $HOME\n    else if test \"$argv\" = -\n        __zoxide_cd -\n    else if test $argc -eq 1 -a -d $argv[1]\n        __zoxide_cd $argv[1]\n    else if test $argc -eq 2 -a $argv[1] = --\n        __zoxide_cd -- $argv[2]\n    else\n        set -l result (command zoxide query --exclude (__zoxide_pwd) -- $argv)\n        and __zoxide_cd $result\n    end\nend\n\n# Completions.\nfunction __zoxide_z_complete\n    set -l tokens (builtin commandline --current-process --tokenize)\n    set -l curr_tokens (builtin commandline --cut-at-cursor --current-process --tokenize)\n\n    if test (builtin count $tokens) -le 2 -a (builtin count $curr_tokens) -eq 1\n        # If there are < 2 arguments, use `cd` completions.\n        complete --do-complete \"\'\' \"(builtin commandline --cut-at-cursor --current-token) | string match --regex -- \'.*/$\'\n    else if test (builtin count $tokens) -eq (builtin count $curr_tokens)\n        # If the last argument is empty, use interactive selection.\n        set -l query $tokens[2..-1]\n        set -l result (command zoxide query --exclude (__zoxide_pwd) --interactive -- $query)\n        and __zoxide_cd $result\n        and builtin commandline --function cancel-commandline repaint\n    end\nend\ncomplete --command __zoxide_z --no-files --arguments \'(__zoxide_z_complete)\'\n\n# Jump to a directory using interactive search.\nfunction __zoxide_zi\n    set -l result (command zoxide query --interactive -- $argv)\n    and __zoxide_cd $result\nend\n\n"
                   ,0x681);
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
LAB_00198e16:
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
                           "\n# To initialize zoxide, add this to your configuration (usually\n# ~/.config/fish/config.fish):\n#\n#   zoxide init fish | source"
                           ,0x7f);
                lVar3 = 4;
                goto LAB_00198e79;
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\nabbr --erase ",0xf);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_38,param_2,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3," &>/dev/null\nalias ",0x13);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_38,param_2,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"=__zoxide_z\n\nabbr --erase ",0x1a);
                local_40 = param_3;
                _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                          (&local_38,param_2,&local_40);
                lVar3 = CONCAT71(uStack_37,local_38);
                if (lVar3 == 4) {
                  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                            (param_3,"i &>/dev/null\nalias ",0x14);
                  local_40 = param_3;
                  _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                            (&local_38,param_2,&local_40);
                  lVar3 = CONCAT71(uStack_37,local_38);
                  if (lVar3 == 4) {
                    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                              (param_3,"i=__zoxide_zi",0xd);
                    goto LAB_00198e16;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00198e70:
  param_1[1] = local_30;
  param_1[2] = lStack_28;
LAB_00198e79:
  *param_1 = lVar3;
  return;
}