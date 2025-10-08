fn starship::modules::description(a0: i64, a1: i32) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: struct24;  // rbx

    v0 = v2;
    v3 = a1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "aws") {
        return &g_543321;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "azure") {
        return &g_543303;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "battery") {
        return &g_5432b9;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "buf") {
        return &g_54328b;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "bun") {
        return &g_543261;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "c") {
        return &g_54324d;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "character") {
        return &g_5431fd;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "cmake") {
        return &g_5431d5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "cmd_duration") {
        return &g_5431ac;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "cobol") {
        return &g_54317b;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "conda") {
        return &g_543140;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "container") {
        return &g_543111;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "cpp") {
        return &g_5430fb;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "crystal") {
        return &g_5430d1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "daml") {
        return &g_5430ad;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "dart") {
        return &g_543086;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "deno") {
        return &g_54305f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "directory") {
        return &g_543042;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "direnv") {
        return &g_543021;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "docker_context") {
        return &g_543007;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "dotnet") {
        return &g_542fc4;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "elixir") {
        return &g_542f92;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "elm") {
        return &g_542f6c;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "erlang") {
        return &g_542f59;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "fennel") {
        return &g_542f30;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "fill") {
        return &g_542ef9;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "fossil_branch") {
        return &g_542ebd;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "fossil_metrics") {
        return &g_542e8a;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "gcloud") {
        return &g_542e66;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "git_branch") {
        return &g_542e2f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "git_commit") {
        return &g_542de7;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "git_metrics") {
        return &g_542db9;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "git_state") {
        return &g_542d8d;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "git_status") {
        return &g_542d64;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "gleam") {
        return &g_542d3c;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "golang") {
        return &g_542d13;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "gradle") {
        return &g_542cea;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "guix_shell") {
        return &g_542cd0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "haskell") {
        return &g_542ca3;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "haxe") {
        return &g_542c7c;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "helm") {
        return &g_542c55;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "hg_branch") {
        return &g_542c14;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "hg_state") {
        return &g_542bfc;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "hostname") {
        return &g_542be9;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "java") {
        return &g_542bc2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "jobs") {
        return &g_542ba0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "julia") {
        return &g_542b78;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "kotlin") {
        return &g_542b4f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "kubernetes") {
        return &g_542b11;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "line_break") {
        return &g_542aee;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "localip") {
        return &g_542acb;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "lua") {
        return &g_542aa5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "memory_usage") {
        return &g_542a81;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "meson") {
        return &g_542a32;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "mise") {
        return &g_542a1b;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "mojo") {
        return &g_5429f4;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "nats") {
        return &g_5429dc;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "netns") {
        return &g_5429bf;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "nim") {
        return &g_542999;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "nix_shell") {
        return &g_542980;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "nodejs") {
        return &g_542957;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "ocaml") {
        return &g_54292f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "odin") {
        return &g_542908;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "opa") {
        return &g_5428d2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "openstack") {
        return &g_5428ab;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "os") {
        return &g_54288f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "package") {
        return &g_542859;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "perl") {
        return &g_542832;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "php") {
        return &g_54280c;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "pijul_channel") {
        return &g_5427d4;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "pixi") {
        return &g_542770;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "pulumi") {
        return &g_542734;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "purescript") {
        return &g_542707;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "python") {
        return &g_5426de;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "quarto") {
        return &g_5426b7;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "raku") {
        return &g_542690;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "red") {
        return &g_54266a;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "rlang") {
        return &g_542646;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "ruby") {
        return &g_54261f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "rust") {
        return &g_5425f8;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "scala") {
        return &g_5425d0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "shell") {
        return &g_5425ae;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "shlvl") {
        return &g_542594;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "singularity") {
        return &g_542570;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "solidity") {
        return &g_542547;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "spack") {
        return &g_542514;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "status") {
        return &g_5424f6;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "sudo") {
        return &g_5424cd;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "swift") {
        return &g_5424a5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "terraform") {
        return &g_54246f;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "time") {
        return &g_542459;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "typst") {
        return &g_542433;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "username") {
        return &g_542419;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "vagrant") {
        return &g_5423ef;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "vcsh") {
        return &g_5423cb;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "vlang") {
        return &g_5423a7;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "xmake") {
        return &g_54237f;
    } else {
        return (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "zig") ? &g_542359 : &g_525060);
    }
}
