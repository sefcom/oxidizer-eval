long long starship::init::init_main(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x88]
    void* v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3[3];  // [bp-0x70]
    void* v4;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x60]
    uint128_t v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]

    v3.init();
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v4;
    *((unsigned long long [3])&v7) = v3;
    v8 = v4;
    v9 = v5;
    if ((char)a0.equal(a1, "bashopam$allHOMEUserBare0000koi8CoreTextSlimv150granname", 4))
    {
        v3.sprint_posix(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("# We use PROMPT_COMMAND and the DEBUG trap to generate timing information. We try\n# to avoid clobbering what we can, and try to give the user ways around our\n# clobbers, if it\'s unavoidable. For example, PROMPT_COMMAND is appended to,\n# and the DEBUG trap is layered with other traps, if it exists.\n\n# A bash quirk is that the DEBUG trap is fired every time a command runs, even\n# if it\'s later on in the pipeline. If uncorrected, this could cause bad timing\n# data for commands like `slow | slow | fast`, since the timer starts at the start\n# of the \"fast\" command.\n\n# To solve this, we set a flag `STARSHIP_PREEXEC_READY` when the prompt is\n# drawn, and only start the timer if this flag is present. That way, timing is\n# for the entire command, and not just a portion of it.\n\n# A way to set \'$?\', since bash does not allow assigning to \'$?\' directly\nfunction _starship_set_return() { return \"${1:-0}\"; }\n\n# Will be run before *every* command (even ones in pipes!)\nstarship_preexec() {\n    # Save previous command\'s last a", 7390, v1, v5);
    }
    else if ((char)a0.equal(a1, "zshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).tr", 3))
    {
        v3.sprint_posix(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("# ZSH has a quirk where `preexec` is only run if a command is actually run (i.e\n# pressing ENTER at an empty command line will not cause preexec to fire). This\n# can cause timing issues, as a user who presses \"ENTER\" without running a command\n# will see the time to the start of the last command, which may be very large.\n\n# To fix this, we create STARSHIP_START_TIME upon preexec() firing, and destroy it\n# after drawing the prompt. This ensures that the timing for one command is only\n# ever drawn once (for the prompt immediately after it is run).\n\nzmodload zsh/parameter  # Needed to access jobstates variable for STARSHIP_JOBS_COUNT\n\n# Defines a function `__starship_get_time` that sets the time since epoch in millis in STARSHIP_CAPTURED_TIME.\nif [[ $ZSH_VERSION == ([1-4]*) ]]; then\n    # ZSH <= 5; Does not have a built-in variable so we will rely on Starship\'s inbuilt time function.\n    __starship_get_time() {\n        STARSHIP_CAPTURED_TIME=$(::STARSHIP:: time)\n    }\nelse\n    zmodload zsh/datetime\n    zmodload z", 4941, v1, v5);
    }
    else if ((char)a0.equal(a1, "fish ", 4))
    {
        v3.sprint_posix(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("function __starship_set_job_count --description \'Set STARSHIP_JOBS using fish job groups (or legacy PIDs if toggled)\'\n    # To force legacy behavior (process PIDs), set this variable to \"false\":\n    #   set -g __starship_fish_use_job_groups \"false\"\n    if test \"$__starship_fish_use_job_groups\" = \"false\"\n        # Legacy behavior: counts PIDs (may overcount pipelines with terminated producers)\n        set -l __count (jobs -p 2>/dev/null | count)\n    else\n        # Default behavior: count job groups\n        set -l __count (jobs -g 2>/dev/null | count)\n    end\n    set -g STARSHIP_JOBS $__count\nend\n\nfunction fish_prompt\n    switch \"$fish_key_bindings\"\n        case fish_hybrid_key_bindings fish_vi_key_bindings fish_helix_key_bindings\n            set STARSHIP_KEYMAP \"$fish_bind_mode\"\n        case \'*\'\n            set STARSHIP_KEYMAP insert\n    end\n\n    set STARSHIP_CMD_PIPESTATUS $pipestatus\n    set STARSHIP_CMD_STATUS $status\n    # Account for changes in variable name between v2.7 and v3.0\n    set STARSHIP_DURATION", 4457, v1, v5);
    }
    else if ((char)a0.equal(a1, "powershellcmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other cont", 10))
    {
        v3.sprint_pwsh(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("#!/usr/bin/env pwsh\n\n# Create a new dynamic module so we don\'t pollute the global namespace with our functions and\n# variables\n$null = New-Module starship {\n    function Get-Cwd {\n        $cwd = Get-Location\n        $provider_prefix = \"$($cwd.Provider.ModuleName)\\$($cwd.Provider.Name)::\"\n        return @{\n            # Resolve the actual/physical path\n            # NOTE: ProviderPath is only a physical filesystem path for the \"FileSystem\" provider\n            # E.g. `Dev:\\` -> `C:\\Users\\Joe Bloggs\\Dev\\`\n            Path = $cwd.ProviderPath;\n            # Resolve the provider-logical path\n            # NOTE: Attempt to trim any \"provider prefix\" from the path string.\n            # E.g. `Microsoft.PowerShell.Core\\FileSystem::Dev:\\` -> `Dev:\\`\n            LogicalPath =\n                if ($cwd.Path.StartsWith($provider_prefix)) {\n                    $cwd.Path.Substring($provider_prefix.Length)\n                } else {\n                    $cwd.Path\n                };\n        }\n    }\n\n    function Invoke-Native {\n", 10349, v1, v5);
    }
    else if ((char)a0.equal(a1, "ionzshxonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String)", 3))
    {
        v3.sprint(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("# The PROMPT function is called whenever a prompt needs to be drawn. Docs: https://doc.redox-os.org/ion-manual/html/misc/06-prompt_fn.html\nfn PROMPT\n    # Save the status immediately, since the status is also updated after variable assignment, etc.\n    let STARSHIP_ION_STATUS = $?\n    # Save the ION_CMD_DURATION before running any other commands, but after the status since the\n    # duration is not updated during variable assignment\n    # Account for variable name change sometime during December 2019 - January 2020\n    let STARSHIP_ION_CMD_DURATION = $or($CMD_DURATION $ION_CMD_DURATION)\n    let STARSHIP_ION_CMD_DURATION = $((STARSHIP_ION_CMD_DURATION * 1000))\n\n    # The STARSHIP between the colons will be replaced with the actual path to the starship executable.\n    # The jobs command outputs to stderr, therefore we need to pipe stderr to `wc -l`.\n    ::STARSHIP:: prompt --status $STARSHIP_ION_STATUS --jobs $(jobs ^| wc -l) --cmd-duration $STARSHIP_ION_CMD_DURATION\nend\n\n# Export the correct name of the shell\n", 1162, v1, v5);
    }
    else if ((char)a0.equal(a1, "elvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about the problem here. If applicable, add screenshots to help explain. -->\n\n#### Possible Solution\n<!--- Only if you have suggestions on a fix for the bug -->\n\n#### Environment\n- Starship version: \n-  version: \n- Operating system: \n- Terminal emulator: \n- Git Commit Hash: \n- Branch/Tag: \n- Rust Version: \n- Rust channel: \n- Build Time: \n#### Relevant Shell Configuration\n\n```\n```\n\n#### Starship Configuration\n\n```toml\n", 6))
    {
        v3.sprint(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("set-env STARSHIP_SHELL \"elvish\"\nset-env STARSHIP_SESSION_KEY (to-string (randint 10000000000000 10000000000000000))\n\n# Define Hooks\nvar cmd-status-code = 0\n\nfn starship-after-command-hook {|m|\n    var error = $m[error]\n    if (is $error $nil) {\n        set cmd-status-code = 0\n    } else {\n        try {\n            set cmd-status-code = $error[reason][exit-status]\n        } catch {\n            # The error is from the built-in commands and they have no status code.\n            set cmd-status-code = 1\n        }\n    }\n}\n\n# Install Hooks\nset edit:after-command = [ $@edit:after-command $starship-after-command-hook~ ]\n\n# Install starship\nset edit:prompt = {\n    var cmd-duration = (printf \"%.0f\" (* $edit:command-duration 1000))\n    ::STARSHIP:: prompt --jobs=$num-bg-jobs --cmd-duration=$cmd-duration --status=$cmd-status-code --logical-path=$pwd\n}\n\nset edit:rprompt = {\n    var cmd-duration = (printf \"%.0f\" (* $edit:command-duration 1000))\n    ::STARSHIP:: prompt --right --jobs=$num-bg-jobs --cmd-duration=$cmd-duration", 1073, v1, v5);
    }
    else if ((char)a0.equal(a1, "tcsh", 4))
    {
        v3.sprint_posix(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("setenv STARSHIP_SHELL tcsh;\nsetenv STARSHIP_SESSION_KEY `::STARSHIP:: session`;\nset USER_PRECMD = \"`alias precmd`\";\nset USER_POSTCMD = \"`alias postcmd`\";\nset STARSHIP_PRECMD = \'set STARSHIP_CMD_STATUS = $status;set STARSHIP_PATH = ::STARSHIP::;set STARSHIP_END_TIME = `$STARSHIP_PATH time`;set STARSHIP_DURATION = 0;if ( $STARSHIP_START_TIME != -1 ) @ STARSHIP_DURATION = $STARSHIP_END_TIME - $STARSHIP_START_TIME;set prompt = \"`$STARSHIP_PATH prompt --status $STARSHIP_CMD_STATUS --cmd-duration $STARSHIP_DURATION`\";set STARSHIP_START_TIME = -1\';\nset STARSHIP_POSTCMD = \'set STARSHIP_START_TIME = `::STARSHIP:: time`\';\nalias precmd \"$STARSHIP_PRECMD;$USER_PRECMD\";\nalias postcmd \"$STARSHIP_POSTCMD;$USER_POSTCMD\";\nset STARSHIP_START_TIME = `::STARSHIP:: time`;\n", 762, v1, v5);
    }
    else if ((char)a0.equal(a1, "xonsh.tcshrc.elvish/rc.elv.zshrc.config/powershell/Microsoft.PowerShell_profile.ps1.config/ion/initrc.config/fish/config.fish.bashrcSTARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim(", 5))
    {
        v3.sprint_posix(v8, v5);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
            return v4;
        }
        *((unsigned long long [3])&v0) = v3;
        v1 = v4;
        v2 = v5;
        starship::init::print_script("import uuid\n\n\ndef starship_prompt():\n    last_cmd = __xonsh__.history[-1] if __xonsh__.history else None\n    status = last_cmd.rtn if last_cmd else 0\n    # I believe this is equivalent to xonsh.jobs.get_next_job_number() for our purposes,\n    # but we can't use that function because of https://gitter.im/xonsh/xonsh?at=60e8832d82dd9050f5e0c96a\n    jobs = sum(1 for job in __xonsh__.all_jobs.values() if job['obj'] and job['obj'].poll() is None)\n    duration = round((last_cmd.ts[1] - last_cmd.ts[0]) * 1000) if last_cmd else 0\n    return $(::STARSHIP:: prompt --status=@(status) --jobs=@(jobs) --cmd-duration=@(duration))\n\ndef starship_rprompt():\n    last_cmd = __xonsh__.history[-1] if __xonsh__.history else None\n    status = last_cmd.rtn if last_cmd else 0\n    # I believe this is equivalent to xonsh.jobs.get_next_job_number() for our purposes,\n    # but we can't use that function because of https://gitter.im/xonsh/xonsh?at=60e8832d82dd9050f5e0c96a\n    jobs = sum(1 for job in __xonsh__.all_jobs.values() if job['obj'", 1370, v1, v5);
    }
    else
    {
        *(v3) = &g_11f3990;
        v4 = 1;
        v5 = 8;
        v6 = 0;
        std::io::stdio::_print(&v3);
        core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
        return 0;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<gix::open::repository::<impl gix::types::ThreadSafeRepository>::open_with_environment_overrides<&std::path::Path>::{{closure}}>(&v7);
    return 0;
}
