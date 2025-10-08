long long zoxide::shell::_::<impl askama::Template for zoxide::shell::Powershell>::render_into_with_values(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    char v5;  // bpl
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdx

    v0 = a2;
    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
    v4 = *((long long *)&v1);
    if (*((long long *)&v1) == 4)
    {
        a2.write_str("\n# Utility functions for zoxide.\n#\n\n# Call zoxide binary, returning the output as UTF-8.\nfunction global:__zoxide_bin {\n    $encoding = [Console]::OutputEncoding\n    try {\n        [Console]::OutputEncoding = [System.Text.Utf8Encoding]::new()\n        $result = zoxide @args\n        return $result\n    } finally {\n        [Console]::OutputEncoding = $encoding\n    }\n}\n\n# pwd based on zoxide\'s format.\nfunction global:__zoxide_pwd {\n    $cwd = Get-Location\n    if ($cwd.Provider.Name -eq \"FileSystem\") {\n        $cwd.ProviderPath\n    }\n}\n\n# cd + custom logic based on the value of _ZO_ECHO.\nfunction global:__zoxide_cd($dir, $literal) {\n    $dir = if ($literal) {\n        Set-Location -LiteralPath $dir -Passthru -ErrorAction Stop\n    } else {\n        if ($dir -eq \'-\' -and ($PSVersionTable.PSVersion -lt 6.1)) {\n            Write-Error \"cd - is not supported below PowerShell 6.1. Please upgrade your version of PowerShell.\"\n        }\n        elseif ($dir -eq \'+\' -and ($PSVersionTable.PSVersion -lt 6.2)) {\n            Write-", 1223);
        if ((char)askama::helpers::as_bool(a1 + 1))
            a2.write_str("\n    Write-Output $dir.Path# Hook to add new entries to the database.\n$global:__zoxide_oldpwd = __zoxide_pwd\nfunction global:__zoxide_hook {\n    $result = __zoxide_pwd\n    if ($result -ne $global:__zoxide_oldpwd) {\n        if ($null -ne $result) {\n        ", 27);
        a2.write_str("\n}\n\nhelpNoneshimbashHOME", 4);
        v0 = a2;
        v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
        v4 = *((long long *)&v1);
        if (*((long long *)&v1) == 4)
        {
            a2.write_str("\n# Hook configuration for zoxide.\n#\n\n# Initialize hook to add new entries to the database.\nfunction __zoxide_hook --on-variable PWD\nfunction __zoxide_hook --on-event fish_prompt\n    test -z \"$fish_private_mode\"\n    and command zoxide add -- (__zoxide_pwd)\n", 37);
            v5 = a1->field_10;
            v1 = !v5;
            if ((char)askama::helpers::as_bool(&v1))
            {
                v0 = a2;
                v1.write_into("# -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd -L\n    \\builtin pwd -P\n    \\command cygpath -w \"$(\\builtin pwd -P)\"\n}\n\n# cd + cu", 22, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                    goto LABEL_49979d;
            }
            else
            {
                v1 = v5 == 1;
                if ((char)askama::helpers::as_bool(&v1))
                {
                    v6 = "# Hook to add new entries to the database.\nfunction global:__zoxide_hook {\n    $result = __zoxide_pwd\n    if ($null -ne $result) {\n        zoxide add \"--\" $result\n    }\n}\n\n# Initialize hook.\n$global:__zoxide_hooked = (Get-Variable __zoxide_hooked -ErrorAct";
                    v7 = 170;
                }
                else
                {
                    v1 = v5 == 2;
                    if (!(char)askama::helpers::as_bool(&v1))
                        goto LABEL_499789;
                    v6 = "# Hook to add new entries to the database.\n$global:__zoxide_oldpwd = __zoxide_pwd\nfunction global:__zoxide_hook {\n    $result = __zoxide_pwd\n    if ($result -ne $global:__zoxide_oldpwd) {\n        if ($null -ne $result) {\n            zoxide add \"--\" $result\n        }\n        $global:__zoxide_oldpwd = $result\n    }\n}";
                    v7 = 316;
                }
                a2.write_str(v6, v7);
LABEL_499789:
                a2.write_str("\n\n# Initialize hook.\n$global:__zoxide_hooked = (Get-Variable __zoxide_hooked -ErrorAction Ignore -ValueOnly)\nif ($global:__zoxide_hooked -ne 1) {\n    $global:__zoxide_hooked = 1\n    $global:__zoxide_prompt_old = $function:prompt\n\n    function global:prompt {\n        if ($null -ne $__zoxide_prompt_old) {\n            & $__zoxide_prompt_old\n        }\n        $null = __zoxide_hook\n    }\n}", 387);
LABEL_49979d:
                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                v0 = a2;
                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                v4 = *((long long *)&v1);
                if (*((long long *)&v1) == 4)
                {
                    a2.write_str("\n# When using zoxide with --no-cmd, alias these internal functions as desired.\n#\n\n# Jump to a directory using only keywords.\nfunction global:__zoxide_z {\n    if ($args.Length -eq 0) {\n        __zoxide_cd ~ $true\n    }\n    elseif ($args.Length -eq 1 -and ($args[0] -eq \'-\' -or $args[0] -eq \'+\')) {\n        __zoxide_cd $args[0] $false\n    }\n    elseif ($args.Length -eq 1 -and (Test-Path -PathType Container -LiteralPath $args[0])) {\n        __zoxide_cd $args[0] $true\n    }\n    elseif ($args.Length -eq 1 -and (Test-Path -PathType Container -Path $args[0] )) {\n        __zoxide_cd $args[0] $false\n    }\n    else {\n        $result = __zoxide_pwd\n        if ($null -ne $result) {\n            $result = __zoxide_bin query --exclude $result \"--\" @args\n        }\n        else {\n            $result = __zoxide_bin query \"--\" @args\n        }\n        if ($LASTEXITCODE -eq 0) {\n            __zoxide_cd $result $true\n        }\n    }\n}\n\n# Jump to a directory using interactive search.\nfunction global:__zoxide_zi {\n    $result = __zoxi", 1125);
                    v0 = a2;
                    v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                    v4 = *((long long *)&v1);
                    if (*((long long *)&v1) == 4)
                    {
                        a2.write_str("\n# Commands for zoxide. Disable these using --no-cmd.\n#\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Ba", 55);
                        if (a1->field_0)
                        {
                            a2.write_str("\n\nSet-Alias -Name  -Value __zoxide_z -Option AllScope -Scope Global -Force\nSet-Alias -Name i -Value __zoxide_zi -Option AllScope -Scope Global -Force\n# To initialize zoxide, add this to your configuration (find it by running\n# `echo $profile` in PowerShell", 18);
                            v0 = a2;
                            v1.write_into(a1, &v0);
                            v4 = *((long long *)&v1);
                            if (*((long long *)&v1) == 4)
                            {
                                a2.write_str(" -Value __zoxide_z -Option AllScope -Scope Global -Force\nSet-Alias -Name i -Value __zoxide_zi -Option AllScope -Scope Global -Force\n# To initialize zoxide, add this to your configuration (find it by running\n# `echo $profile` in PowerShell):\n#\n# Invoke-Expr", 73);
                                v0 = a2;
                                v1.write_into(a1, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("i -Value __zoxide_zi -Option AllScope -Scope Global -Force\n# To initialize zoxide, add this to your configuration (find it by running\n# `echo $profile` in PowerShell):\n#\n# Invoke-Expression (& { (zoxide init powershell | Out-String) })pwd -Lpwd -P\nset __zo", 58);
                                    goto LABEL_49990a;
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
LABEL_49990a:
                                a2.write_str("\n\n\n\n\\builtin unalias  &>/dev/null || \\builtin true\nfunction () {\n    __zoxide_z \"$@\"\n}\n\n\\builtin unalias i &>/dev/null || \\builtin true\nfunction i() {\n    __zoxide_zi \"$@\"\n}\n\n# Load completions.\n# - Bash 4.4+ is required to use `@Q`.\n# - Completions requir", 2);
                                v0 = a2;
                                v1.write_into("# =============================================================================\n## -- not configured --# shellcheck shell=bash\n\n\n# Utility functions for zoxide.\n#\n\n# pwd based on the value of _ZO_RESOLVE_SYMLINKS.\nfunction __zoxide_pwd() {\n    \\builtin pwd", 81, &v0);
                                v4 = *((long long *)&v1);
                                if (*((long long *)&v1) == 4)
                                {
                                    a2.write_str("\n# To initialize zoxide, add this to your configuration (find it by running\n# `echo $profile` in PowerShell):\n#\n# Invoke-Expression (& { (zoxide init powershell | Out-String) })pwd -Lpwd -P\nset __zoxide_pwd_old = ``\nalias __zoxide_hook 'set __zoxide_pwd_tm", 177);
                                    a0->field_0 = 4;
                                    return 4;
                                }
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
