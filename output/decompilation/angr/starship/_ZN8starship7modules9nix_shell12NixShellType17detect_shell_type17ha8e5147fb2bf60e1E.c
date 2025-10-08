long long starship::modules::nix_shell::NixShellType::detect_shell_type(char a0)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v4;  // ebp
    unsigned long long v5;  // rax

    v0.get_env("IN_NIX_SHELL/nix/storeError in module `nix_shell`:\nsrc/modules/nix_shell.rs", 12);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v4 = vvar_34{reg 56} & 0xffffff00 | 3;
        if (a0)
            goto LABEL_baaf06;
    }
    else if ((char)v1.equal(*((long long *)&v2), "pureredssolctofuSTOPTTIN%2e. -> '\\''|", 4))
    {
        v4 = 0;
    }
    else
    {
        v5 = v1.equal(*((long long *)&v2), "impurejsmjscjstsmtsctspackage.json.node-version.nvmrc!bunfig.toml!bun.lock!bun.lockbnode_modulesmlmlirereidune-projectjbuildjbuild-ignore.merlin_opamvia [$symbol($version )(\\($switch_indicator$switch_name\\) )]($style)*", 6);
        if (a0 != 1 || (char)v5)
        {
            v4 = (unsigned int)v5 & 0xffffff00 | ((char)v5 ^ 1) * 2 + 1;
        }
        else
        {
LABEL_baaf06:
            v4 = (int)starship::modules::nix_shell::NixShellType::in_new_nix_shell() & 255 & 0xffffff00 | (char)starship::modules::nix_shell::NixShellType::in_new_nix_shell() ^ 3;
        }
    }
    core::ptr::drop_in_place<regex::error::Error>(&v0);
    return v4;
}
