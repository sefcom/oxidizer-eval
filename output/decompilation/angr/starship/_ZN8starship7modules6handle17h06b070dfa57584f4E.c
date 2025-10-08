long long starship::modules::handle(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x130]
    char v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x130]
    unsigned long long v3;  // [bp-0x128]
    char *v4;  // [bp-0x120]
    unsigned long long v5;  // [bp-0x118]
    void* v6;  // [bp-0x110]
    int v7;  // [bp-0x100]
    unsigned long v8;  // [bp-0xf0]
    unsigned long long v9;  // [bp-0xe8]
    unsigned int v10;  // [bp-0xe0]
    unsigned long v11;  // [bp-0xdc]
    unsigned int v12;  // [bp-0xd4]
    unsigned long long v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xc0]
    char *v16;  // [bp-0xb0], Other Possible Types: unsigned long, unsigned long long
    int v17;  // [bp-0xa8], Other Possible Types: unsigned long long
    char *v18;  // [bp-0xa0]
    unsigned long long v19;  // [bp-0x98]
    void* v20;  // [bp-0x90]
    unsigned long long v21;  // [bp-0x80]
    unsigned int v22;  // [bp-0x78]
    char *v23;  // [bp-0x70]
    unsigned long long v24;  // [bp-0x68]
    char *v25;  // [bp-0x60]
    unsigned long long v26;  // [bp-0x58]
    unsigned long long v27;  // [bp-0x50]
    unsigned long long v28;  // [bp-0x48]
    unsigned long long v29;  // [bp-0x40]
    unsigned long long v30;  // [bp-0x38]
    unsigned long long v31;  // [bp-0x30]
    unsigned int v33;  // edx
    char *v34;  // rdi
    void* v35;  // rsi
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rax
    unsigned int v38;  // ebp
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // xmm2

    v13 = a1;
    v14 = a2;
    v21 = std::time::Instant::now();
    v22 = v33;
    if ((char)a1.equal(a2, "awsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean", 3))
    {
        starship::modules::aws::module(&(char)v0, a3);
    }
    else if ((char)a1.equal(a2, "azuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 5))
    {
        starship::modules::azure::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "batterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 7))
    {
        starship::modules::battery::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "bufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key ", 3))
    {
        starship::modules::buf::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "buncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcha", 3))
    {
        starship::modules::bun::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "chccgccclangvia [$symbol($version(-$name) )]($style)C ", 1))
    {
        starship::modules::c::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "characterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 9))
    {
        starship::modules::character::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "cmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharac", 5))
    {
        starship::modules::cmake::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "cmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 12))
    {
        starship::modules::cmd_duration::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "coboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterfo", 5))
    {
        starship::modules::cobol::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "condamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in confi", 5))
    {
        starship::modules::conda::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "containernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 9))
    {
        starship::modules::container::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "cppcxxc++hpphhhxxh++tccg++clang++crshard.yml", 3))
    {
        starship::modules::cpp::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "damlrubyFishSUSEnone", 4))
    {
        starship::modules::daml::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "dart or FullPATHC++ trueTERM", 4))
    {
        starship::modules::dart::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "deno", 4))
    {
        starship::modules::deno::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "directoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_s", 9))
    {
        starship::modules::directory::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "direnvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6))
    {
        starship::modules::direnv::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "docker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycon", 14))
    {
        starship::modules::docker_context::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "dotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatr", 6))
    {
        starship::modules::dotnet::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "elixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_f", 6))
    {
        starship::modules::elixir::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "elm.elm-versionelm-stuff", 3))
    {
        starship::modules::elm::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "erlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatG", 6))
    {
        starship::modules::erlang::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "env_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 7))
    {
        v34 = &v1;
        v35 = 0;
        goto LABEL_bc3f67;
    }
    else if ((char)a1.equal(a2, "fennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven m", 6))
    {
        starship::modules::fennel::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "fillrust", 4))
    {
        starship::modules::fill::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "fossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_s", 13))
    {
        starship::modules::fossil_branch::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "fossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondameso", 14))
    {
        starship::modules::fossil_metrics::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "gcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' f", 6))
    {
        starship::modules::gcloud::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "git_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_u", 10))
    {
        starship::modules::git_branch::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "git_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcl", 10))
    {
        starship::modules::git_commit::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "git_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredi", 11))
    {
        starship::modules::git_metrics::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "git_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopensta", 9))
    {
        starship::modules::git_state::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "git_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystal", 10))
    {
        starship::modules::git_status::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "gleamgleam.tomlbold #FFAFF3gogo.modgo.sumgo.workglide.yamlGopkg.ymlGopkg.lock.go-versionGodeps", 5))
    {
        starship::modules::gleam::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "golanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module ", 6))
    {
        starship::modules::golang::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "gradlegradle.kts", 6))
    {
        starship::modules::gradle::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "guix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' ", 10))
    {
        starship::modules::guix_shell::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "haskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not", 7))
    {
        starship::modules::haskell::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "haxekeysrego` :\ncoreUSR1CharV6_0kndalimbnkoosundTotou128for<", 4))
    {
        starship::modules::haxe::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "helmbashopam$allHOMEUserBare0000koi8CoreTextSlimv150granname", 4))
    {
        starship::modules::helm::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "hg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durati", 9))
    {
        starship::modules::hg_branch::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "hg_state ]\n  }\n\nskipHashCharging$symbol histedit", 8))
    {
        starship::modules::hg_state::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "hostname.haxelibClient: a structENOTSOCKpathspeciso88598upstreamGurmukhiTai_Thamlocation.xonshrcbuf.yamlOS_CLOUDWorktreesafecrlfiso88596", 8))
    {
        starship::modules::hostname::module(&v1);
    }
    else if ((char)a1.equal(a2, "javavcsh", 4))
    {
        starship::modules::java::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "jobs  # ", 4))
    {
        starship::modules::jobs::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "julianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found ", 5))
    {
        starship::modules::julia::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "kotlin[$symbol$context( \\($namespace\\))]($style) in [$localipv4]($style) .lua-version", 6))
    {
        starship::modules::kotlin::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "kubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmak", 10))
    {
        starship::modules::kubernetes::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "line_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 10))
    {
        starship::modules::line_break::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "localipshlvlsingularitykubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorla", 7))
    {
        starship::modules::localip::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "lua1.23.0rustc 1.89.0-nightly (bf64d66bd 2025-05-21)nightly-2025-05-22-x86_64-unknown-linux-gnurelease2025-10-02 04:15:51 +00:00", 3))
    {
        starship::modules::lua::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "memory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be", 12))
    {
        starship::modules::memory_usage::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "mesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config fil", 5))
    {
        starship::modules::meson::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "miseDate", 4))
    {
        starship::modules::mise::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "mojo", 4))
    {
        starship::modules::mojo::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "natsinitalseJulyRulepod6porthebrougrpalmpauctakrtaluteluraku", 4))
    {
        starship::modules::nats::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "netnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 5))
    {
        starship::modules::netns::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "nimnimblenim.cfg", 3))
    {
        starship::modules::nim::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "nix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist", 9))
    {
        starship::modules::nix_shell::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "nodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in co", 6))
    {
        starship::modules::nodejs::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "ocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config f", 5))
    {
        starship::modules::ocaml::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "odinfish ", 4))
    {
        starship::modules::odin::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "opapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGi", 3))
    {
        starship::modules::opa::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "openstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 9))
    {
        starship::modules::openstack::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "osshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 2))
    {
        starship::modules::os::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "packagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsoss", 7))
    {
        starship::modules::package::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "perl\" [\nbolddunedumbtext", 4))
    {
        starship::modules::perl::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "phpcomposer.json.php-version", 3))
    {
        starship::modules::php::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "pijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_br", 13))
    {
        starship::modules::pijul_channel::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "pixi    yearblue", 4))
    {
        starship::modules::pixi::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "pulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven", 6))
    {
        starship::modules::pulumi::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "purescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven confi", 10))
    {
        starship::modules::purescript::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "pythonpython3python2pyipynb.python-versionpyproject.tomlPipfiletox.ini__init__.pyVIRTUAL_ENVpyenv via [${symbol}${pyenv_prefix}(${version} )(\\($virtualenv\\) )]($style)", 6))
    {
        starship::modules::python::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "quartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry ''", 6))
    {
        starship::modules::quarto::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "raku", 4))
    {
        starship::modules::raku::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "rlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is no", 5))
    {
        starship::modules::rlang::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "redgreenyellowpurplewhitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, us", 3))
    {
        starship::modules::red::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "rubyFishSUSEnone", 4))
    {
        starship::modules::ruby::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "rust", 4))
    {
        starship::modules::rust::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "scala.scalaenv.sbtenv.metals", 5))
    {
        starship::modules::scala::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "shellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 5))
    {
        starship::modules::shell::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "shlvlsingularitykubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypst", 5))
    {
        starship::modules::shlvl::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "singularitykubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlang", 11))
    {
        starship::modules::singularity::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "soliditydisabled", 8))
    {
        starship::modules::solidity::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "spackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' mu", 5))
    {
        starship::modules::spack::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "swiftPackage.swifttftfplantfstate.terraformterraformversionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis com", 5))
    {
        starship::modules::swift::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "statusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR", 6))
    {
        starship::modules::status::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "sudo", 4))
    {
        starship::modules::sudo::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "terraformversionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warni", 9))
    {
        starship::modules::terraform::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "time\": \"unixlifecodeHashTaskbodyPing\'", 4))
    {
        starship::modules::time::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "typstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a m", 5))
    {
        starship::modules::typst::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "crystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 7))
    {
        starship::modules::crystal::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "usernamebold redstderr: ", 8))
    {
        starship::modules::username::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "vlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a module", 5))
    {
        starship::modules::vlang::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "vagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven", 7))
    {
        starship::modules::vagrant::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "vcsh", 4))
    {
        starship::modules::vcsh::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "xmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config", 5))
    {
        starship::modules::xmake::module(&v1, a3);
    }
    else if ((char)a1.equal(a2, "zigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This config does not include keys that have an unset value\n\n# $all is shorthand for # $custom (excluding any modules already listed in `format`) is shorthand for ", 3))
    {
        starship::modules::zig::module(&v1, a3);
    }
    else if ((char)core::slice::<impl [T]>::starts_with(a1, a2, "env_var.-noshell", 8))
    {
        v35 = "env_var.-noshell".strip_prefix_of(8, a1, a2);
        v34 = &v1;
LABEL_bc3f67:
        starship::modules::env_var::module(v34, v35, v36);
    }
    else if ((char)core::slice::<impl [T]>::starts_with(a1, a2, "custom.Error in module `custom.`:\n", 7))
    {
        v37 = "custom.Error in module `custom.`:\n".strip_prefix_of(7, a1, a2);
        if (!v37)
            core::option::unwrap_failed(&g_11f6690); /* do not return */
        starship::modules::custom::module(&v1, v37, a2, a3);
    }
    else
    {
        v16 = &v13;
        v17 = <&T as core::fmt::Display>::fmt;
        v2 = &g_11f6650;
        v3 = 2;
        v6 = 0;
        v4 = &v16;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        v0 = 0x8000000000000000;
    }
    v15 = v21.elapsed();
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v23 = &v15;
        v24 = <core::time::Duration as core::fmt::Debug>::fmt;
        v25 = &v13;
        v26 = <&T as core::fmt::Debug>::fmt;
        v16 = &g_11f6670;
        v17 = 2;
        v20 = 0;
        v18 = &v23;
        v19 = 2;
        v27 = "starship::modulesThe currently installed version of ZigThe currently installed version of XMakeThe currently installed version of VThe currently active VCSH repositoryThe currently installed version of VagrantThe active user's usernameThe current installed";
        v28 = 17;
        v29 = "starship::modulesThe currently installed version of ZigThe currently installed version of XMakeThe currently installed version of VThe currently active VCSH repositoryThe currently installed version of VagrantThe active user's usernameThe current installed";
        v30 = 17;
        v31 = log::__private_api::loc(&g_11f66a8);
        log::__private_api::log(&v16, 5, &v27);
    }
    if (v38 * 1125899907 >> 50 || v15 * 1000 || v15 / 18446744073709552)
    {
        v16 = a3;
        *((int128_t *)&v17) = *((int128_t *)&v13);
        (char)v0.get_or_insert_with(&v16);
        v9 = v15;
        v10 = v38;
    }
    a0->field_50 = v10;
    *((unsigned long *)&(&a0->field_50)[1]) = v11;
    *((unsigned int *)((char *)&a0->field_54 + 4)) = v12;
    a0->field_40 = v8;
    a0->field_48 = v9;
    v39 = *((int128_t *)&v0);
    v40 = *((int128_t *)&v4);
    v41 = *((int128_t *)&v6);
    *((void*)&a0->field_30) = v7;
    *((void*)&a0->field_20) = v41;
    *((void*)&a0->field_10) = v40;
    *((void*)&a0->field_0) = v39;
    return v9;
}
