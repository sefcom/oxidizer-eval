void fish::reader::Reader::run_input_command_scripts(unsigned long long a0[229], unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    a0.eval_bind_cmd(a1, a2, a3);
    fish::reader::set_shell_modes(0, "bind scripts", 12);
    fish::termsize::termsize_invalidate_tty();
    return;
}
