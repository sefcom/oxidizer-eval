long long starship::modules::terraform::get_terraform_workspace(void* a0, unsigned long long a1[25])
{
    char v0;  // [bp-0x80]
    int v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    int v9;  // [bp-0x30], Other Possible Types: char
    char v10;  // [bp-0x20]
    unsigned long long v12;  // rax

    v9.get_env("TF_WORKSPACETF_DATA_DIRTerraform OpenTofu Timer module is enabled with format string: Error in module `time`: \n", 12);
    if (!((char)(((0 ^ *((long long *)&v9)) & (0 ^ -(*((long long *)&v9)))) >> 63)))
    {
        v12 = *((long long *)&v10);
        *((unsigned long long *)&a0[16]) = v12;
        *(a0) = v9;
        return v12;
    }
    (char)v1.get_env("TF_DATA_DIRTerraform OpenTofu Timer module is enabled with format string: Error in module `time`: \n", 11);
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        v3.join(a1[23], a1[24], ".terraformterraformversionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tab", 10);
    }
    else
    {
        v5 = v2;
        v3 = v1;
    }
    (char)v1.join(v4, v5, "environmentError in module `container`: \nsrc/modules/container.rs", 11);
    starship::utils::read_file(&v6, &(char)v1);
    if (v6 == 0x8000000000000000)
    {
        if ((char)v7.kind())
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            (char)v1.to_vec("defaultdriverrecursivemergeshowUntrackedFilesrenamesstatusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR", 7);
            *((unsigned long long *)&a0[16]) = v2;
            *(a0) = v1;
        }
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v6);
    }
    else
    {
        *((unsigned long long *)&a0[16]) = v8;
        *((int128_t *)a0) = *((int128_t *)&v6);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return (unsigned long long)core::ptr::drop_in_place<regex::error::Error>(&v9);
}
