fn starship::init::init_stub(a0: u64, a1: i64) -> long long {
    let v0: i64;  // [bp-0xe8], Other Possible Types: u64
    let v1: &str;  // [bp-0xe0], Other Possible Types: u64
    let v2: u64;  // [bp-0xd8]
    let v3: core::fmt::Arguments;  // [bp-0xd0], Other Possible Types: Result<struct24, struct16>
    let v4: u64;  // [bp-0xd0]
    let v5: Result<struct24, struct16>;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xc8]
    let v8: i64;  // [bp-0xc0]
    let v9: i64;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb8]
    let v11: void*;  // [bp-0xb0]
    let v12: core::fmt::rt::Argument;  // [bp-0xa0], Other Possible Types: Result<struct24, struct16>, u64
    let v13: u128;  // [bp-0xa0]
    let v14: struct40;  // [bp-0xa0]
    let v15: &str;  // [bp-0x98], Other Possible Types: u64
    let v16: i64;  // [bp-0x90], Other Possible Types: u64
    let v17: i64;  // [bp-0x78]
    let v18: &str;  // [bp-0x70]
    let v19: u64;  // [bp-0x68]
    let v20: u64;  // [bp-0x60]
    let v21: u64;  // [bp-0x50]
    let v22: u64;  // [bp-0x48]
    let v23: i64;  // [bp-0x40]
    let v24: struct16;  // [bp-0x38]
    let v26: u64;  // 4096
    let v27: i64;  // 4096
    let v29: struct16;  // rax
    let v30: u64;  // rdx
    let v32: i64;  // r12
    let v33: u64;  // r15
    let v34: &str;  // rbx

    v20 = a0;
    v26 = a0;
    v27 = a1;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        v0 = &v20;
        v1 = <&T as core::fmt::Display>::fmt;
        v4 = "Shell name: ";
        v7 = 1;
        v11 = 0;
        v9 = &v0;
        v10 = 1;
        v14 = struct40 {
            field_0: "starship::init"
            field_16: "starship::init"
            field_32: log::__private_api::loc("src/init/mod.rs")
        };
        log::__private_api::log(&v4, 4, &v14);
        v26 = v20;
        v27 = a1;
    }
    v29 = std::path::Path::file_stem(v26, v27);
    if v29 {
        v3 = core::str::converts::from_utf8(v29, v30);
        if let Err(_) = v3 {
            goto LABEL_b810e4;
        }
        v6 = v7;
        v8 = v9;
    } else {
LABEL_b810e4:
        v6 = v20;
    }
    v32 = a1;
    v33 = v6;
    v24 = struct16 {
        field_0: v33
        field_8: v32
    };
    v5 = starship::init::StarshipPath::init();
    if (((0 ^ v5 as i64) & (0 ^ -(v4))) >> 63) as char {
        return v7;
    }
    v21 = v5 as i64;
    v22 = v7;
    v23 = v9;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "bash") {
        v12 = starship::init::StarshipPath::sprint_posix(v22, v9);
        v34 = v15;
        if let Ok(_) = v12 {
            v0 = v12 as i64;
            v1 = v34;
            v2 = v16;
            print!("eval -- \"$({} init bash --print-full-init)\"", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "zsh") {
        v3 = starship::init::StarshipPath::sprint_posix(v22, v9);
        v34 = v7;
        if let Ok(_) = v3 {
            v12 = v3 as i64;
            v15 = v34;
            v16 = v9;
            starship::init::print_script("# ZSH has a quirk where `preexec` is only run if a command is actually run (i.e\n# pressing ENTER at an empty command line will not cause preexec to fire). This\n# can cause timing issues, as a user who presses \"ENTER\" without running a command\n# will see the time to the start of the last command, which may be very large.\n\n# To fix this, we create STARSHIP_START_TIME upon preexec() firing, and destroy it\n# after drawing the prompt. This ensures that the timing for one command is only\n# ever drawn once (for the prompt immediately after it is run).\n\nzmodload zsh/parameter  # Needed to access jobstates variable for STARSHIP_JOBS_COUNT\n\n# Defines a function `__starship_get_time` that sets the time since epoch in millis in STARSHIP_CAPTURED_TIME.\nif [[ $ZSH_VERSION == ([1-4]*) ]]; then\n    # ZSH <= 5; Does not have a built-in variable so we will rely on Starship\'s inbuilt time function.\n    __starship_get_time() {\n        STARSHIP_CAPTURED_TIME=$(::STARSHIP:: time)\n    }\nelse\n    zmodload zsh/datetime\n    zmodload zsh/mathfunc\n    __starship_get_time() {\n        (( STARSHIP_CAPTURED_TIME = int(rint(EPOCHREALTIME * 1000)) ))\n    }\nfi\n\n# The two functions below follow the naming convention `prompt_<theme>_<hook>`\n# for compatibility with Zsh\'s prompt system. See\n# https://github.com/zsh-users/zsh/blob/2876c25a28b8052d6683027998cc118fc9b50157/Functions/Prompts/promptinit#L155\n\n# Runs before each new command line.\nprompt_starship_precmd() {\n    # Save the status, because subsequent commands in this function will change $?\n    STARSHIP_CMD_STATUS=$? STARSHIP_PIPE_STATUS=(${pipestatus[@]})\n\n    # Calculate duration if a command was executed\n    if (( ${+STARSHIP_START_TIME} )); then\n        # If an arithmetic expression evaluates to 0, its exit status is 1:\n        # \"The return status is 0 if the arithmetic value of the expression is non-zero, 1 if it is zero, and 2 if an error occurred.\"\n        # In rare cases, the subtraction below can result in an int 0 result (yes, really),\n        # which would then kill the shell if \'set -e\' is in effect.\n        # We therefore have to assign the result outside the expression (using \'STARSHIP_DURATION=$((...))\'),\n        # because unlike \'(())\', \'$(())\' gets a return status of 0 even if the expression evaluates to int 0\n        # (but it still surfaces a potential error, normally status 2, as status 1).\n        __starship_get_time && STARSHIP_DURATION=$(( STARSHIP_CAPTURED_TIME - STARSHIP_START_TIME ))\n        unset STARSHIP_START_TIME\n    # Drop status and duration otherwise\n    else\n        unset STARSHIP_DURATION STARSHIP_CMD_STATUS STARSHIP_PIPE_STATUS\n    fi\n\n    # Use length of jobstates array as number of jobs. Expansion fails inside\n    # quotes so we set it here and then use the value later on.\n    STARSHIP_JOBS_COUNT=${#jobstates}\n}\n\n# Runs after the user submits the command line, but before it is executed and\n# only if there\'s an actual command to run\nprompt_starship_preexec() {\n    __starship_get_time && STARSHIP_START_TIME=$STARSHIP_CAPTURED_TIME\n}\n\n# Add hook functions\nautoload -Uz add-zsh-hook\nadd-zsh-hook precmd prompt_starship_precmd\nadd-zsh-hook preexec prompt_starship_preexec\n\n# Set up a function to redraw the prompt if the user switches vi modes\nstarship_zle-keymap-select() {\n    zle reset-prompt\n}\n\n## Check for existing keymap-select widget.\nif [[ -v widgets[zle-keymap-select] ]]; then\n    # zle-keymap-select is a special widget so it\'ll be \"user:fnName\" or nothing. Let\'s get fnName only.\n    __starship_preserved_zle_keymap_select=${widgets[zle-keymap-select]#user:}\nfi\n\nif [[ -z ${__starship_preserved_zle_keymap_select:-} ]]; then\n    zle -N zle-keymap-select starship_zle-keymap-select;\nelse\n    # Define a wrapper fn to call the original widget fn and then Starship\'s.\n    starship_zle-keymap-select-wrapped() {\n        $__starship_preserved_zle_keymap_select \"$@\";\n        starship_zle-keymap-select \"$@\";\n    }\n    zle -N zle-keymap-select starship_zle-keymap-select-wrapped;\nfi\n\nexport STARSHIP_SHELL=\"zsh\"\n\n# Set up the session key that will be used to store logs\nSTARSHIP_SESSION_KEY=\"$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM\"; # Random generates a number b/w 0 - 32767\nSTARSHIP_SESSION_KEY=\"${STARSHIP_SESSION_KEY}0000000000000000\" # Pad it to 16+ chars.\nexport STARSHIP_SESSION_KEY=${STARSHIP_SESSION_KEY:0:16}; # Trim to 16-digits if excess.\n\nVIRTUAL_ENV_DISABLE_PROMPT=1\n\nsetopt promptsubst\n\nPROMPT=\'$(\'::STARSHIP::\' prompt --terminal-width=\"$COLUMNS\" --keymap=\"${KEYMAP:-}\" --status=\"${STARSHIP_CMD_STATUS:-}\" --pipestatus=\"${STARSHIP_PIPE_STATUS[*]:-}\" --cmd-duration=\"${STARSHIP_DURATION:-}\" --jobs=\"$STARSHIP_JOBS_COUNT\")\'\nRPROMPT=\'$(\'::STARSHIP::\' prompt --right --terminal-width=\"$COLUMNS\" --keymap=\"${KEYMAP:-}\" --status=\"${STARSHIP_CMD_STATUS:-}\" --pipestatus=\"${STARSHIP_PIPE_STATUS[*]:-}\" --cmd-duration=\"${STARSHIP_DURATION:-}\" --jobs=\"$STARSHIP_JOBS_COUNT\")\'\nPROMPT2=\"$(::STARSHIP:: prompt --continuation)\"\n", v15, v9);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "fish") {
        v12 = starship::init::StarshipPath::sprint_posix(v22, v9);
        v34 = v15;
        if let Ok(_) = v12 {
            v0 = v12 as i64;
            v1 = v34;
            v2 = v16;
            print!("source ({} init fish --print-full-init | psub)", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "powershell") {
        starship::init::StarshipPath::sprint_pwsh(&v5 as u64 as u32, v22, v9);
        v34 = v15;
        if v12 != 0x8000000000000000 {
            v0 = v12;
            v1 = v34;
            v2 = v16;
            print!("Invoke-Expression (& {} init powershell --print-full-init | Out-String)", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "ion") {
        starship::init::StarshipPath::sprint(&v5 as u64, v22, v9);
        v34 = v15;
        if v12 != 0x8000000000000000 {
            v0 = v12;
            v1 = v34;
            v2 = v16;
            print!("eval $({} init ion --print-full-init)", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "elvish") {
        starship::init::StarshipPath::sprint(&v5 as u64, v22, v9);
        v34 = v15;
        if v12 != 0x8000000000000000 {
            v0 = v12;
            v1 = v34;
            v2 = v16;
            print!("eval ({} init elvish --print-full-init | slurp)", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "tcsh") {
        v12 = starship::init::StarshipPath::sprint_posix(v22, v9);
        v34 = v15;
        if let Ok(_) = v12 {
            v0 = v12 as i64;
            v1 = v34;
            v2 = v16;
            print!("eval `({} init tcsh --print-full-init)`", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "nu") {
        v3 = starship::init::StarshipPath::init();
        v34 = v7;
        if let Ok(_) = v3 {
            v12 = v3 as i64;
            v15 = v34;
            v16 = v9;
            starship::init::StarshipPath::sprint(&v0, v15, v9);
            v34 = v1;
            if v0 != 0x8000000000000000 {
                v17 = v0;
                v18 = v34;
                v19 = v2;
                starship::init::print_script("# this file is both a valid\n# - overlay which can be loaded with `overlay use starship.nu`\n# - module which can be used with `use starship.nu`\n# - script which can be used with `source starship.nu`\nexport-env { $env.STARSHIP_SHELL = \"nu\"; load-env {\n    STARSHIP_SESSION_KEY: (random chars -l 16)\n    PROMPT_MULTILINE_INDICATOR: (\n        ^::STARSHIP:: prompt --continuation\n    )\n\n    # Does not play well with default character module.\n    # TODO: Also Use starship vi mode indicators?\n    PROMPT_INDICATOR: \"\"\n\n    PROMPT_COMMAND: {||\n        (\n            # The initial value of `$env.CMD_DURATION_MS` is always `0823`, which is an official setting.\n            # See https://github.com/nushell/nushell/discussions/6402#discussioncomment-3466687.\n            let cmd_duration = if $env.CMD_DURATION_MS == \"0823\" { 0 } else { $env.CMD_DURATION_MS };\n            ^::STARSHIP:: prompt\n                --cmd-duration $cmd_duration\n                $\"--status=($env.LAST_EXIT_CODE)\"\n                --terminal-width (term size).columns\n                ...(\n                    if (which \"job list\" | where type == built-in | is-not-empty) {\n                        [\"--jobs\", (job list | length)]\n                    } else {\n                        []\n                    }\n                )\n        )\n    }\n\n    config: ($env.config? | default {} | merge {\n        render_right_prompt_on_last_line: true\n    })\n\n    PROMPT_COMMAND_RIGHT: {||\n        (\n            # The initial value of `$env.CMD_DURATION_MS` is always `0823`, which is an official setting.\n            # See https://github.com/nushell/nushell/discussions/6402#discussioncomment-3466687.\n            let cmd_duration = if $env.CMD_DURATION_MS == \"0823\" { 0 } else { $env.CMD_DURATION_MS };\n            ^::STARSHIP:: prompt\n                --right\n                --cmd-duration $cmd_duration\n                $\"--status=($env.LAST_EXIT_CODE)\"\n                --terminal-width (term size).columns\n                ...(\n                    if (which \"job list\" | where type == built-in | is-not-empty) {\n                        [\"--jobs\", (job list | length)]\n                    } else {\n                        []\n                    }\n                )\n        )\n    }\n}}\n", v18, v2);
            }
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "xonsh") {
        v12 = starship::init::StarshipPath::sprint_posix(v22, v9);
        v34 = v15;
        if let Ok(_) = v12 {
            v0 = v12 as i64;
            v1 = v34;
            v2 = v16;
            print!("execx($({} init xonsh --print-full-init))", &v0);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v32, "cmd") {
        v3 = starship::init::StarshipPath::init();
        v34 = v7;
        if let Ok(_) = v3 {
            v12 = v3 as i64;
            v15 = v34;
            v16 = v9;
            starship::init::StarshipPath::sprint_cmdexe(&v0 as u32, v15, v9);
            v34 = v1;
            if v0 != 0x8000000000000000 {
                v17 = v0;
                v18 = v34;
                v19 = v2;
                starship::init::print_script("if (clink.version_encoded or 0) < 10020030 then\n  error(\"Starship requires a newer version of Clink; please upgrade to Clink v1.2.30 or later.\")\nend\n\nlocal starship_prompt = clink.promptfilter(5)\n\nstart_time = os.clock()\nend_time = 0\ncurr_duration = 0\nis_line_empty = true\n\nclink.onbeginedit(function ()\n  end_time = os.clock()\n  if not is_line_empty then\n    curr_duration = end_time - start_time\n  end\nend)\n\nclink.onendedit(function (curr_line)\n  if starship_precmd_user_func ~= nil then\n    starship_precmd_user_func(curr_line)\n  end\n  start_time = os.clock()\n  if string.len(string.gsub(curr_line, \'^%s*(.-)%s*$\', \'%1\')) == 0 then\n    is_line_empty = true\n  else\n    is_line_empty = false\n  end\nend)\n\nfunction starship_prompt:filter(prompt)\n  if starship_preprompt_user_func ~= nil then\n    starship_preprompt_user_func(prompt)\n  end\n  return io.popen([[::STARSHIP::]]..\" prompt\"\n    ..\" --status=\"..os.geterrorlevel()\n    ..\" --cmd-duration=\"..math.floor(curr_duration*1000)\n    ..\" --terminal-width=\"..console.getwidth()\n    ..\" --keymap=\"..rl.getvariable(\'keymap\')\n  ):read(\"*a\")\nend\n\nfunction starship_prompt:rightfilter(prompt)\n  return io.popen([[::STARSHIP::]]..\" prompt --right\"\n    ..\" --status=\"..os.geterrorlevel()\n    ..\" --cmd-duration=\"..math.floor(curr_duration*1000)\n    ..\" --terminal-width=\"..console.getwidth()\n    ..\" --keymap=\"..rl.getvariable(\'keymap\')\n  ):read(\"*a\")\nend\n\nif starship_transient_prompt_func ~= nil then\n  function starship_prompt:transientfilter(prompt)\n    return starship_transient_prompt_func(prompt)\n  end\nend\n\nif starship_transient_rprompt_func ~= nil then\n  function starship_prompt:transientrightfilter(prompt)\n    return starship_transient_rprompt_func(prompt)\n  end\nend\n\nlocal characterset = \"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\"\nlocal randomkey = \"\"\nmath.randomseed(os.time())\nfor i = 1, 16 do\n  local rand = math.random(#characterset)\n  randomkey = randomkey..string.sub(characterset, rand, rand)\nend\n\nos.setenv(\'STARSHIP_SHELL\', \'cmd\')\nos.setenv(\'STARSHIP_SESSION_KEY\', randomkey)\n", v18, v2);
            }
        }
    } else {
        v12 = core::fmt::rt::Argument {
            ty: &v24
        };
        v3 = core::fmt::Arguments {
            pieces: [&g_11f3960, " is not yet supported by starship.\nFor the time being, we support the following shells:\n* bash\n* elvish\n* fish\n* ion\n* powershell\n* tcsh\n* zsh\n* nu\n* xonsh\n* cmd\n\nPlease open an issue in the starship repo if you would like to see support for ", ":\nhttps://github.com/starship/starship/issues/new\n\n"]
            args: [v13]
            fmt: &g_535838
        };
        std::io::stdio::_eprint(&v3);
    }
    return v34;
}
