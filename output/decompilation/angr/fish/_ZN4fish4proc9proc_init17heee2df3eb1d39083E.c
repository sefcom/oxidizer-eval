long long fish::proc::proc_init()
{
    return fish::signal::signal_set_handlers_once(0);
}
