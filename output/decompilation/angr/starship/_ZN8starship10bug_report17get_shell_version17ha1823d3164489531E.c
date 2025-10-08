long long starship::bug_report::get_shell_version(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    unsigned long long v3;  // rcx

    v3 = ((char)a1.equal(a2, "powershellcmdelvish#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other cont", 10) ? &g_11f2500 : &g_11f24f0);
    starship::utils::exec_cmd(&v0, a1, a2, v3);
    return a0.map_or_else(&v0);
}
