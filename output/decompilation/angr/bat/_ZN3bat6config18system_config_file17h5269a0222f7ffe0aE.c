long long bat::config::system_config_file(struct_0 *a0)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v0.to_vec("/etc", 4);
    v0.push("batA cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-", 3);
    v0.push("configBAT_CONFIG_PATH# This is `bat`s configuration file. Each line either contains a comment or\n# a command-line option that you want to pass to `bat` by default. You can\n# run `bat --help` to get a list of all possible configuration options.\n\n# Specify d", 6);
    v3 = *((long long *)&v1);
    a0->field_10 = v3;
    *((void*)&a0->field_0) = v0;
    return v3;
}
