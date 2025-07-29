fn flealib::systemcmd::SystemCmd::get_process_list(a0: u64, a1: u32) -> long long {
    flealib::systemcmd::SystemCmd::execute_bash_command(a0, a1, "ps aux");
    return a0;
}
