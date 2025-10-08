fn zoxide::shell::_::<impl askama::Template for zoxide::shell::Powershell>::render_into_with_values(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: core::result::Result<(), core::fmt::Error>;  // [bp-0x40], Other Possible Types: u64
    let v1: core::result::Result<(), core::fmt::Error>;  // [bp-0x38], Other Possible Types: struct8
    let v2: struct8;  // [bp-0x38]
    let v3: i8;  // [bp-0x30]
    let v5: core::str::pattern::CharSearcher;  // rax
    let v6: u8;  // bpl
    let v7: core::result::Result<(), core::fmt::Error>;  // rsi
    let v8: u64;  // rdx
    let v10: u64;  // rax
    let v11: core::result::Result<(), core::fmt::Error>;  // rax
    let v12: core::result::Result<(), core::fmt::Error>;  // rax
    let v13: core::result::Result<(), core::fmt::Error>;  // rax
    let v14: core::result::Result<(), core::fmt::Error>;  // rax
    let v15: core::result::Result<(), core::fmt::Error>;  // rax
    let v16: core::result::Result<(), core::fmt::Error>;  // rax
    let v17: core::result::Result<(), core::fmt::Error>;  // rax
    let v18: core::result::Result<(), core::fmt::Error>;  // rax
    let v19: core::result::Result<(), core::fmt::Error>;  // rax
    let v20: core::result::Result<(), core::fmt::Error>;  // rax
    let v21: core::result::Result<(), core::fmt::Error>;  // rax
    let v22: core::result::Result<(), core::fmt::Error>;  // rax
    let v23: core::result::Result<(), core::fmt::Error>;  // rax
    let v24: core::result::Result<(), core::fmt::Error>;  // rax
    let v25: core::result::Result<(), core::fmt::Error>;  // rax

    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 != 4 {
        return struct24 {
            field_0: v10
            field_8: *(&v3 as &i128)
        };
    }
    v19 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction global:__zoxide_bin {\n    $encoding = [Console]::OutputEncoding\n    try {\n        [Console]::OutputEncoding = [System.Text.Utf8Encoding]::new()\n        $result = zoxide @args\n        return $result\n    } finally {\n        [Console]::OutputEncoding = $encoding\n    }\n}\n\n# pwd based on zoxide\'s format.\nfunction global:__zoxide_pwd {\n    $cwd = Get-Location\n    if ($cwd.Provider.Name -eq \"FileSystem\") {\n        $cwd.ProviderPath\n    }\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction global:__zoxide_cd($dir, $literal) {\n    $dir = if ($literal) {\n        Set-Location -LiteralPath $dir -Passthru -ErrorAction Stop\n    } else {\n        if ($dir -eq \'-\' -and ($PSVersionTable.PSVersion -lt 6.1)) {\n            Write-Error \"cd - is not supported below PowerShell 6.1. Please upgrade your version of PowerShell.\"\n        }\n        elseif ($dir -eq \'+\' -and ($PSVersionTable.PSVersion -lt 6.2)) {\n            Write-Error \"cd + is not supported below PowerShell 6.2. Please upgrade your version of PowerShell.\"\n        }\n        else {\n            Set-Location -Path $dir -Passthru -ErrorAction Stop\n        }\n    }") as u64;
    if askama::helpers::as_bool(a1 + 17) {
        v18 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n    Write-Output $dir.Path") as u64;
    }
    v16 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n}\n\n") as u64;
    v0 = a2;
    v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
    v5 = v1.field_0;
    if v1.field_0 == 4 {
        v24 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Hook configuration for zoxide.\n#\n\n") as u64;
        v6 = *((a1 + 16) as &i8);
        v1 = !v6;
        if askama::helpers::as_bool(&v1) {
            v0 = a2;
            v2 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
            v5 = v2.field_0;
            if v2.field_0 == 4 {
                goto LABEL_49979d;
            }
        } else {
            v1 = v6 == 1;
            if !askama::helpers::as_bool(&v1) {
                v1 = v6 == 2;
                if !askama::helpers::as_bool(&v1) {
                    goto LABEL_499789;
                }
            }
            v12 = <alloc::string::String as core::fmt::Write>::write_str(a2, v7, v8) as u64;
LABEL_499789:
            v22 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n# Initialize hook.\n$global:__zoxide_hooked = (Get-Variable __zoxide_hooked -ErrorAction Ignore -ValueOnly)\nif ($global:__zoxide_hooked -ne 1) {\n    $global:__zoxide_hooked = 1\n    $global:__zoxide_prompt_old = $function:prompt\n\n    function global:prompt {\n        if ($null -ne $__zoxide_prompt_old) {\n            & $__zoxide_prompt_old\n        }\n        $null = __zoxide_hook\n    }\n}") as u64;
LABEL_49979d:
            v14 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
            v0 = a2;
            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
            v5 = v1.field_0;
            if v1.field_0 == 4 {
                v20 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction global:__zoxide_z {\n    if ($args.Length -eq 0) {\n        __zoxide_cd ~ $true\n    }\n    elseif ($args.Length -eq 1 -and ($args[0] -eq \'-\' -or $args[0] -eq \'+\')) {\n        __zoxide_cd $args[0] $false\n    }\n    elseif ($args.Length -eq 1 -and (Test-Path -PathType Container -LiteralPath $args[0])) {\n        __zoxide_cd $args[0] $true\n    }\n    elseif ($args.Length -eq 1 -and (Test-Path -PathType Container -Path $args[0] )) {\n        __zoxide_cd $args[0] $false\n    }\n    else {\n        $result = __zoxide_pwd\n        if ($null -ne $result) {\n            $result = __zoxide_bin query --exclude $result \"--\" @args\n        }\n        else {\n            $result = __zoxide_bin query \"--\" @args\n        }\n        if ($LASTEXITCODE -eq 0) {\n            __zoxide_cd $result $true\n        }\n    }\n}\n\n# Jump to a directory using interactive search.\nfunction global:__zoxide_zi {\n    $result = __zoxide_bin query -i \"--\" @args\n    if ($LASTEXITCODE -eq 0) {\n        __zoxide_cd $result $true\n    }\n}\n\n") as u64;
                v0 = a2;
                v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                v5 = v1.field_0;
                if v1.field_0 == 4 {
                    v15 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# Commands for zoxide. Disable these using --no-cmd.\n#") as u64;
                    if *(a1 as &i64) {
                        v17 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\nSet-Alias -Name ") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
                            v21 = <alloc::string::String as core::fmt::Write>::write_str(a2, " -Value __zoxide_z -Option AllScope -Scope Global -Force\nSet-Alias -Name ") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into(a1, &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v11 = <alloc::string::String as core::fmt::Write>::write_str(a2, "i -Value __zoxide_zi -Option AllScope -Scope Global -Force") as u64;
                                goto LABEL_49990a;
                            }
                        }
                    } else {
                        v25 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                        v0 = a2;
                        v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# -- not configured --", &v0);
                        v5 = v1.field_0;
                        if v1.field_0 == 4 {
LABEL_49990a:
                            v13 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n\n") as u64;
                            v0 = a2;
                            v1 = askama::_::_::<impl askama::FastWritable for &T>::write_into("# =============================================================================\n#", &v0);
                            v5 = v1.field_0;
                            if v1.field_0 == 4 {
                                v23 = <alloc::string::String as core::fmt::Write>::write_str(a2, "\n# To initialize zoxide, add this to your configuration (find it by running\n# `echo $profile` in PowerShell):\n#\n# Invoke-Expression (& { (zoxide init powershell | Out-String) })") as u64;
                            }
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v10
        field_8: *(&v3 as &i128)
    };
}
