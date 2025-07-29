long long flealib::systemcmd::SystemCmd::get_process_list(void* a0, unsigned int a1)
{
    a0.execute_bash_command(a1, "ps auxkill Bash executed ", 6);
    return a0;
}
