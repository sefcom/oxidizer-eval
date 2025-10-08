void bat::invoke_bugreport(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x1a8], Other Possible Types: char, unsigned long long
    void* v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x1a0]
    int v3;  // [bp-0x198], Other Possible Types: void*, unsigned long long
    unsigned long long v4;  // [bp-0x190]
    int v5;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x180]
    unsigned long long v7;  // [bp-0x178]
    unsigned long long v8;  // [bp-0x170]
    unsigned long long v9;  // [bp-0x168]
    unsigned long long v10;  // [bp-0x158]
    int v11;  // [bp-0x158]
    int v12;  // [bp-0x148]
    int v13;  // [bp-0x138]
    int v14;  // [bp-0x128], Other Possible Types: char
    unsigned long long v15;  // [bp-0x118]
    int v16;  // [bp-0x108], Other Possible Types: char
    unsigned long long v17;  // [bp-0xf8]
    int v18;  // [bp-0xe8]
    int v19;  // [bp-0xd8]
    char v20;  // [bp-0xc8]
    char v21;  // [bp-0xb8]
    unsigned long long v22;  // [bp-0xa8]
    int v23;  // [bp-0x98], Other Possible Types: char
    unsigned long long v24;  // [bp-0x88]
    char v25;  // [bp-0x80], Other Possible Types: unsigned long
    char v26;  // [bp-0x78]
    char v27;  // [bp-0x60]
    struct_0 *v29;  // rax
    void* v30;  // rsi
    unsigned long long v31;  // rdx

    v0.try_get_one(a0, "pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v29 = "pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(5, &v0);
    if (v29)
    {
        v30 = v29->field_8;
        v31 = v29->field_10;
    }
    else
    {
        v30 = 0;
    }
    bat::config::get_pager_executable(&v0, v30, v31);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v21.to_vec("lessOS: ", 4);
    }
    else
    {
        v22 = v3;
        memcpy(&v21, &v0, 16);
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v23, a1, a2);
    v23.push("metadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache ", 13);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v4 = "batA cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-";
    v5 = 3;
    v6 = "0.25.0Clearing  ... okay\nskipped (not present)\n";
    v7 = 6;
    v8 = "v0.25.0-285-g2c87b948cache-actionsbatA cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to ";
    v9 = 21;
    v10 = 0x8000000000000000;
    v16.info(&v1, &v10);
    v1.info(&v16);
    v16.info(&v1);
    v10.list();
    v1.info(&v16, &v10);
    bat::config::system_config_file(&v16);
    v10.new("System Config fileConfig fileCustom assets metadataCustom assets--version", 18, &v16);
    v16.info(&v1, &v10);
    bat::config::config_file(&v1);
    v10.new("Config fileCustom assets metadataCustom assets--version", 11, &v1);
    v1.info(&v16, &v10);
    v17 = v24;
    v16 = v23;
    v10.new("Custom assets metadataCustom assets--version", 22, &v16);
    v16.info(&v1, &v10);
    v10.new(a1, a2);
    v1.info(&v16, &v10);
    v10.info(&v1);
    grep_cli::decompress::resolve_binary(&v25, &v21);
    if (v25)
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,grep_cli::process::CommandError>>(&v25);
    }
    else
    {
        v9 = v15;
        memcpy(&v7, &v14, 16);
        v5 = v13;
        v3 = v12;
        v0 = v11;
        v27.new(&v26);
        v16.info(&v1, &v27);
        v11 = v16;
        memcpy(&v12, &v17, 16);
        v13 = v18;
        v14 = v19;
        v15 = *((long long *)&v20);
    }
    v11.print();
    core::ptr::drop_in_place<bugreport::BugReport>(&v11);
    return;
}
