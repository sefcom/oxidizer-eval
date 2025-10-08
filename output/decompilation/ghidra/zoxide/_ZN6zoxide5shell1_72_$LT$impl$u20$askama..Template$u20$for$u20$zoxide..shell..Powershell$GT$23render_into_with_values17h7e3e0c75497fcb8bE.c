void _ZN6zoxide5shell1_72__LT_impl_u20_askama__Template_u20_for_u20_zoxide__shell__Powershell_GT_23render_into_with_values17h7e3e0c75497fcb8bE
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
               "\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction global:__zoxide_bin {\n    $encoding = [Console]::OutputEncoding\n    try {\n        [Console]::OutputEncoding = [System.Text.Utf8Encoding]::new()\n        $result = zoxide @args\n        return $result\n    } finally {\n        [Console]::OutputEncoding = $encoding\n    }\n}\n\n# pwd based on zoxide\'s format.\nfunction global:__zoxide_pwd {\n    $cwd = Get-Location\n    if ($cwd.Provider.Name -eq \"FileSystem\") {\n        $cwd.ProviderPath\n    }\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction global:__zoxide_cd($dir, $literal) {\n    $dir = if ($literal) {\n        Set-Location -LiteralPath $dir -Passthru -ErrorAction Stop\n    } else {\n        if ($dir -eq \'-\' -and ($PSVersionTable.PSVersion -lt 6.1)) {\n            Write-Error \"cd - is not supported below PowerShell 6.1. Please upgrade your version of PowerShell.\"\n        }\n        elseif ($dir -eq \'+\' -and ($PSVersionTable.PSVersion -lt 6.2)) {\n            Write-Error \"cd + is not supported below PowerShell 6.2. Please upgrade your version of PowerShell.\"\n        }\n        else {\n            Set-Location -Path $dir -Passthru -ErrorAction Stop\n        }\n    }"
               ,0x4c7);
    cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE((long)param_2 + 0x11);
    if (cVar1 != '\0') {
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                (param_3,"\n    Write-Output $dir.Path",0x1b);
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
                (param_3,"\n# Hook configuration for zoxide.\n#\n\n",0x25);
      cVar1 = *(char *)(param_2 + 2);
      local_38 = cVar1 == '\0';
      cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
      if (cVar2 == '\0') {
        local_38 = cVar1 == '\x01';
        cVar2 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
        if (cVar2 == '\0') {
          local_38 = cVar1 == '\x02';
          cVar1 = _ZN6askama7helpers7as_bool17h464cf54a5b8114baE(&local_38);
          if (cVar1 != '\0') {
            pcVar5 = 
            "# Hook to add new entries to the database.\n$global:__zoxide_oldpwd = __zoxide_pwd\nfunction global:__zoxide_hook {\n    $result = __zoxide_pwd\n    if ($result -ne $global:__zoxide_oldpwd) {\n        if ($null -ne $result) {\n            zoxide add \"--\" $result\n        }\n        $global:__zoxide_oldpwd = $result\n    }\n}"
            ;
            uVar4 = 0x13c;
            goto LAB_00199781;
          }
        }
        else {
          pcVar5 = 
          "# Hook to add new entries to the database.\nfunction global:__zoxide_hook {\n    $result = __zoxide_pwd\n    if ($null -ne $result) {\n        zoxide add \"--\" $result\n    }\n}"
          ;
          uVar4 = 0xaa;
LAB_00199781:
          _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                    (param_3,pcVar5,uVar4);
        }
        _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                  (param_3,
                   "\n\n# Initialize hook.\n$global:__zoxide_hooked = (Get-Variable __zoxide_hooked -ErrorAction Ignore -ValueOnly)\nif ($global:__zoxide_hooked -ne 1) {\n    $global:__zoxide_hooked = 1\n    $global:__zoxide_prompt_old = $function:prompt\n\n    function global:prompt {\n        if ($null -ne $__zoxide_prompt_old) {\n            & $__zoxide_prompt_old\n        }\n        $null = __zoxide_hook\n    }\n}"
                   ,0x183);
      }
      else {
        local_40 = param_3;
        _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17hdcf8716372c7333aE
                  (&local_38,"# -- not configured --",0x16,&local_40);
        lVar3 = CONCAT71(uStack_37,local_38);
        if (lVar3 != 4) goto LAB_00199964;
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
                   "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction global:__zoxide_z {\n    if ($args.Length -eq 0) {\n        __zoxide_cd ~ $true\n    }\n    elseif ($args.Length -eq 1 -and ($args[0] -eq \'-\' -or $args[0] -eq \'+\')) {\n        __zoxide_cd $args[0] $false\n    }\n    elseif ($args.Length -eq 1 -and (Test-Path -PathType Container -LiteralPath $args[0])) {\n        __zoxide_cd $args[0] $true\n    }\n    elseif ($args.Length -eq 1 -and (Test-Path -PathType Container -Path $args[0] )) {\n        __zoxide_cd $args[0] $false\n    }\n    else {\n        $result = __zoxide_pwd\n        if ($null -ne $result) {\n            $result = __zoxide_bin query --exclude $result \"--\" @args\n        }\n        else {\n            $result = __zoxide_bin query \"--\" @args\n        }\n        if ($LASTEXITCODE -eq 0) {\n            __zoxide_cd $result $true\n        }\n    }\n}\n\n# Jump to a directory using interactive search.\nfunction global:__zoxide_zi {\n    $result = __zoxide_bin query -i \"--\" @args\n    if ($LASTEXITCODE -eq 0) {\n        __zoxide_cd $result $true\n    }\n}\n\n"
                   ,0x465);
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
LAB_0019990a:
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
                           "\n# To initialize zoxide, add this to your configuration (find it by running\n# `echo $profile` in PowerShell):\n#\n# Invoke-Expression (& { (zoxide init powershell | Out-String) })"
                           ,0xb1);
                lVar3 = 4;
                goto LAB_0019996d;
              }
            }
          }
          else {
            _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                      (param_3,"\n\nSet-Alias -Name ",0x12);
            local_40 = param_3;
            _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                      (&local_38,param_2,&local_40);
            lVar3 = CONCAT71(uStack_37,local_38);
            if (lVar3 == 4) {
              _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                        (param_3,
                         " -Value __zoxide_z -Option AllScope -Scope Global -Force\nSet-Alias -Name "
                         ,0x49);
              local_40 = param_3;
              _ZN6askama1_1_56__LT_impl_u20_askama__FastWritable_u20_for_u20__RF_T_GT_10write_into17h9943a0e6cd37435bE
                        (&local_38,param_2,&local_40);
              lVar3 = CONCAT71(uStack_37,local_38);
              if (lVar3 == 4) {
                _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Write_GT_9write_str17h33a540353a43564dE
                          (param_3,"i -Value __zoxide_zi -Option AllScope -Scope Global -Force",0x3a
                          );
                goto LAB_0019990a;
              }
            }
          }
        }
      }
    }
  }
LAB_00199964:
  param_1[1] = local_30;
  param_1[2] = lStack_28;
LAB_0019996d:
  *param_1 = lVar3;
  return;
}