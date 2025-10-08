long long starship::init::init_stub(unsigned long long a0, char *a1)
{
    char *v0;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [sp-0xd0]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [sp-0xc8]
    unsigned long long v6;  // [bp-0xc8]
    char *v7;  // [sp-0xc0]
    char *v8;  // [bp-0xc0]
    unsigned long long v9;  // [sp-0xb8]
    void* v10;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xa8]
    char *v12;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x98]
    char *v14;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    char *v17;  // [sp-0x78]
    unsigned long long v18;  // [sp-0x70]
    unsigned long long v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    char *v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    char *v25;  // [bp-0x30]
    unsigned long long v27;  // 4096
    char *v28;  // 4096
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    char *v32;  // r12
    unsigned long long v33;  // r15
    unsigned long long v34;  // rbx
    char *v35;  // rdi

    v20 = a0;
    v27 = a0;
    v28 = a1;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v0 = &v20;
        v1 = <&T as core::fmt::Display>::fmt;
        v4 = &g_11f3858;
        v6 = 1;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        v12 = "starship::init is not yet supported by starship.\nFor the time being, we support the following shells:\n* bash\n* elvish\n* fish\n* ion\n* powershell\n* tcsh\n* zsh\n* nu\n* xonsh\n* cmd\n\nPlease open an issue in the starship repo if you would like to see support for :\nhttps://github.com/starship/starship/issues/new\n\n";
        v13 = 14;
        v14 = "starship::init is not yet supported by starship.\nFor the time being, we support the following shells:\n* bash\n* elvish\n* fish\n* ion\n* powershell\n* tcsh\n* zsh\n* nu\n* xonsh\n* cmd\n\nPlease open an issue in the starship repo if you would like to see support for :\nhttps://github.com/starship/starship/issues/new\n\n";
        v15 = 14;
        v16 = log::__private_api::loc(&g_11f3948);
        log::__private_api::log(&v4, 4, &v12);
        v27 = v20;
        v28 = a1;
    }
    v30 = v27.file_stem(v28);
    if (v30)
    {
        core::str::converts::from_utf8(&v4, v30, v31);
        if ((int)v4 == 1)
            goto LABEL_b810e4;
        v5 = v6;
        v7 = v8;
    }
    else
    {
LABEL_b810e4:
        v5 = v20;
        v7 = a1;
    }
    v32 = v7;
    v33 = v5;
    v24 = v33;
    v25 = v32;
    v4.init();
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        return v6;
    v21 = v4;
    v22 = v6;
    v23 = v8;
    if ((char)v33.equal(v32, "bashopam$allHOMEUserBare0000koi8CoreTextSlimv150granname", 4))
    {
        v12.sprint_posix(v22, v8);
        if (v12 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
            return v13;
        }
        v0 = v12;
        v1 = v13;
        v2 = v14;
        v17 = &v0;
        v18 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_11f3868;
        v5 = 2;
        v10 = 0;
        v7 = &v17;
        v9 = 1;
        std::io::stdio::_print(&v3);
        goto LABEL_b811fc;
    }
    else
    {
        if ((char)v33.equal(v32, "zshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).tr", 3))
        {
            v4.sprint_posix(v22, v8);
            if (v4 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                return v6;
            }
            v12 = v4;
            v13 = v6;
            v14 = v8;
            starship::init::print_script("# ZSH has a quirk where `preexec` is only run if a command is actually run (i.e\n# pressing ENTER at an empty command line will not cause preexec to fire). This\n# can cause timing issues, as a user who presses \"ENTER\" without running a command\n# will see the time to the start of the last command, which may be very large.\n\n# To fix this, we create STARSHIP_START_TIME upon preexec() firing, and destroy it\n# after drawing the prompt. This ensures that the timing for one command is only\n# ever drawn once (for the prompt immediately after it is run).\n\nzmodload zsh/parameter  # Needed to access jobstates variable for STARSHIP_JOBS_COUNT\n\n# Defines a function `__starship_get_time` that sets the time since epoch in millis in STARSHIP_CAPTURED_TIME.\nif [[ $ZSH_VERSION == ([1-4]*) ]]; then\n    # ZSH <= 5; Does not have a built-in variable so we will rely on Starship\'s inbuilt time function.\n    __starship_get_time() {\n        STARSHIP_CAPTURED_TIME=$(::STARSHIP:: time)\n    }\nelse\n    zmodload zsh/datetime\n    zmodload z", 4941, v13, v8);
            v35 = &v12;
        }
        else
        {
            if ((char)v33.equal(v32, "fish ", 4))
            {
                v12.sprint_posix(v22, v8);
                if (v12 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v13;
                }
                v0 = v12;
                v1 = v13;
                v2 = v14;
                v17 = &v0;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_11f3888;
                v5 = 2;
                v10 = 0;
                v7 = &v17;
                v9 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v33.equal(v32, "powershellcmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other cont", 10))
            {
                v12.sprint_pwsh(v22, v8);
                if (v12 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v13;
                }
                v0 = v12;
                v1 = v13;
                v2 = v14;
                v17 = &v0;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_11f38a8;
                v5 = 2;
                v10 = 0;
                v7 = &v17;
                v9 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v33.equal(v32, "ionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String)", 3))
            {
                v12.sprint(v22, v8);
                if (v12 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v13;
                }
                v0 = v12;
                v1 = v13;
                v2 = v14;
                v17 = &v0;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_11f38c8;
                v5 = 2;
                v10 = 0;
                v7 = &v17;
                v9 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v33.equal(v32, "elvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about the problem here. If applicable, add screenshots to help explain. -->\n\n#### Possible Solution\n<!--- Only if you have suggestions on a fix for the bug -->\n\n#### Environment\n- Starship version: \n-  version: \n- Operating system: \n- Terminal emulator: \n- Git Commit Hash: \n- Branch/Tag: \n- Rust Version: \n- Rust channel: \n- Build Time: \n#### Relevant Shell Configuration\n\n```\n```\n\n#### Starship Configuration\n\n```toml\n", 6))
            {
                v12.sprint(v22, v8);
                if (v12 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v13;
                }
                v0 = v12;
                v1 = v13;
                v2 = v14;
                v17 = &v0;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_11f38e8;
                v5 = 2;
                v10 = 0;
                v7 = &v17;
                v9 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v33.equal(v32, "tcsh", 4))
            {
                v12.sprint_posix(v22, v8);
                if (v12 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v13;
                }
                v0 = v12;
                v1 = v13;
                v2 = v14;
                v17 = &v0;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_11f3908;
                v5 = 2;
                v10 = 0;
                v7 = &v17;
                v9 = 1;
                std::io::stdio::_print(&v3);
            }
            else if ((char)v33.equal(v32, "nunushellconfig.nuionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHea", 2))
            {
                v4.init();
                if (v4 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v6;
                }
                v12 = v4;
                v13 = v6;
                v14 = v8;
                v0.sprint(v13, v8);
                if (v0 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v12);
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v1;
                }
                v17 = v0;
                v18 = v1;
                v19 = v2;
                starship::init::print_script("# this file is both a valid\n# - overlay which can be loaded with `overlay use starship.nu`\n# - module which can be used with `use starship.nu`\n# - script which can be used with `source starship.nu`\nexport-env { $env.STARSHIP_SHELL = \"nu\"; load-env {\n    STARSHIP_SESSION_KEY: (random chars -l 16)\n    PROMPT_MULTILINE_INDICATOR: (\n        ^::STARSHIP:: prompt --continuation\n    )\n\n    # Does not play well with default character module.\n    # TODO: Also Use starship vi mode indicators?\n    PROMPT_INDICATOR: \"\"\n\n    PROMPT_COMMAND: {||\n        (\n            # The initial value of `$env.CMD_DURATION_MS` is always `0823`, which is an official setting.\n            # See https://github.com/nushell/nushell/discussions/6402#discussioncomment-3466687.\n            let cmd_duration = if $env.CMD_DURATION_MS == \"0823\" { 0 } else { $env.CMD_DURATION_MS };\n            ^::STARSHIP:: prompt\n                --cmd-duration $cmd_duration\n                $\"--status=($env.LAST_EXIT_CODE)\"\n                --terminal-width (term size", 2238, v18, v2);
                goto LABEL_b8182a;
            }
            else if ((char)v33.equal(v32, "xonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim(", 5))
            {
                v12.sprint_posix(v22, v8);
                if (v12 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v13;
                }
                v0 = v12;
                v1 = v13;
                v2 = v14;
                v17 = &v0;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_11f3928;
                v5 = 2;
                v10 = 0;
                v7 = &v17;
                v9 = 1;
                std::io::stdio::_print(&v3);
            }
            else
            {
                if (!(char)v33.equal(v32, "cmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about ", 3))
                {
                    v12 = &v24;
                    v13 = <&T as core::fmt::Display>::fmt;
                    v3 = &g_11f3960;
                    v5 = 3;
                    v10 = &g_535838;
                    v11 = 2;
                    v7 = &v12;
                    v9 = 1;
                    std::io::stdio::_eprint(&v3);
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return 0;
                }
                v4.init();
                if (v4 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v6;
                }
                v12 = v4;
                v13 = v6;
                v14 = v8;
                v0.sprint_cmdexe(v13, v8);
                v34 = v1;
                if (v0 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v12);
                    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                    return v34;
                }
                v17 = v0;
                v18 = v34;
                v19 = v2;
                starship::init::print_script("if (clink.version_encoded or 0) < 10020030 then\n  error(\"Starship requires a newer version of Clink; please upgrade to Clink v1.2.30 or later.\")\nend\n\nlocal starship_prompt = clink.promptfilter(5)\n\nstart_time = os.clock()\nend_time = 0\ncurr_duration = 0\nis_line_empty = true\n\nclink.onbeginedit(function ()\n  end_time = os.clock()\n  if not is_line_empty then\n    curr_duration = end_time - start_time\n  end\nend)\n\nclink.onendedit(function (curr_line)\n  if starship_precmd_user_func ~= nil then\n    starship_precmd_user_func(curr_line)\n  end\n  start_time = os.clock()\n  if string.len(string.gsub(curr_line, \'^%s*(.-)%s*$\', \'%1\')) == 0 then\n    is_line_empty = true\n  else\n    is_line_empty = false\n  end\nend)\n\nfunction starship_prompt:filter(prompt)\n  if starship_preprompt_user_func ~= nil then\n    starship_preprompt_user_func(prompt)\n  end\n  return io.popen([[::STARSHIP::]]..\" prompt\"\n    ..\" --status=\"..os.geterrorlevel()\n    ..\" --cmd-duration=\"..math.floor(curr_duration*1000)\n    ..\" --terminal-width=\"..console.getwidth", 2062, v18, v2);
LABEL_b8182a:
                core::ptr::drop_in_place<alloc::string::String>(&v17);
                core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v12);
                core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
                return 0;
            }
LABEL_b811fc:
            v35 = &v0;
        }
        core::ptr::drop_in_place<alloc::string::String>(v35);
        core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v21);
        return 0;
    }
}
