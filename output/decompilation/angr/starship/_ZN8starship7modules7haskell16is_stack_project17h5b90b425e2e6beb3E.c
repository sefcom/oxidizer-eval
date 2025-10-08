long long starship::modules::haskell::is_stack_project(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int v3;  // rdx

    v0 = v2;
    if (!((char)a0.dir_contents() & 1))
        return v3.has_file_name("stack.yamlcabal.project", 10);
    return 0;
}
