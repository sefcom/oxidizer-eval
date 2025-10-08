long long starship::shadow::get_preset_content(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if ((char)a0.equal(a1, "bracketed-segmentscatppuccin-powerlinegruvbox-rainbowjetpacknerd-font-symbolsno-empty-iconsno-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 18))
    {
        return &g_54b24b;
    }
    else if ((char)a0.equal(a1, "catppuccin-powerlinegruvbox-rainbowjetpacknerd-font-symbolsno-empty-iconsno-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 20))
    {
        return &g_549d61;
    }
    else if ((char)a0.equal(a1, "gruvbox-rainbowjetpacknerd-font-symbolsno-empty-iconsno-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 15))
    {
        return &g_548e3d;
    }
    else if ((char)a0.equal(a1, "jetpacknerd-font-symbolsno-empty-iconsno-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 7))
    {
        return &g_5474b6;
    }
    else if ((char)a0.equal(a1, "nerd-font-symbolsno-empty-iconsno-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 17))
    {
        return &g_546c75;
    }
    else if ((char)a0.equal(a1, "no-empty-iconsno-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 14))
    {
        return &g_546252;
    }
    else if ((char)a0.equal(a1, "no-nerd-fontno-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 12))
    {
        return &g_54615c;
    }
    else if ((char)a0.equal(a1, "no-runtime-versionsplain-text-symbolspure-presettokyo-nightsrc/segment.rs", 19))
    {
        return &g_545890;
    }
    else if ((char)a0.equal(a1, "pastel-powerline  export extern ", 16))
    {
        return &g_544ce3;
    }
    else if ((char)a0.equal(a1, "plain-text-symbolspure-presettokyo-nightsrc/segment.rs", 18))
    {
        return "[character]\nsuccess_symbol = \"[>](bold green)\"\nerror_symbol = \"[x](bold red)\"\nvimcmd_symbol = \"[<](bold green)\"\n\n[git_commit]\ntag_symbol = \" tag \"\n\n[git_status]\nahead = \">\"\nbehind = \"<\"\ndiverged = \"<>\"\nrenamed = \"r\"\ndeleted = \"x\"\n\n[aws]\nsymbol = \"aws \"\n\n[azure]\nsymbol = \"az \"\n\n[buf]\nsymbol = \"buf \"\n\n[bun]\nsymbol = \"bun \"\n\n[c]\nsymbol = \"C \"\n\n[cpp]\nsymbol = \"C++ \"\n\n[cobol]\nsymbol = \"cobol \"\n\n[conda]\nsymbol = \"conda \"\n\n[container]\nsymbol = \"container \"\n\n[crystal]\nsymbol = \"cr \"\n\n[cmake]\nsymbol = \"cmake \"\n\n[daml]\nsymbol = \"daml \"\n\n[dart]\nsymbol = \"dart \"\n\n[deno]\nsymbol = \"deno \"\n\n[dotnet]\nsymbol = \".NET \"\n\n[directory]\nread_only = \" ro\"\n\n[docker_context]\nsymbol = \"docker \"\n\n[elixir]\nsymbol = \"exs \"\n\n[elm]\nsymbol = \"elm \"\n\n[fennel]\nsymbol = \"fnl \"\n\n[fossil_branch]\nsymbol = \"fossil \"\n\n[gcloud]\nsymbol = \"gcp \"\n\n[git_branch]\nsymbol = \"git \"\n\n[gleam]\nsymbol = \"gleam \"\n\n[golang]\nsymbol = \"go \"\n\n[gradle]\nsymbol = \"gradle \"\n\n[guix_shell]\nsymbol = \"guix \"\n\n[haskell]\nsymbol = \"haskell \"\n\n[helm]\nsymbol = \"helm \"\n\n[hg_branch]";
    }
    else if ((char)a0.equal(a1, "pure-presettokyo-nightsrc/segment.rs", 11))
    {
        return &g_543e26;
    }
    else if ((char)a0.equal(a1, "tokyo-nightsrc/segment.rs", 11))
    {
        return &g_5438e7;
    }
    else
    {
        core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-core-1.13.0/src/job.rs", 40, &g_11f75a0); /* do not return */
    }
}
