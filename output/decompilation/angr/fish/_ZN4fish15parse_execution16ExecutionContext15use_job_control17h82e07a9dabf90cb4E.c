long long fish::parse_execution::ExecutionContext::use_job_control(void* a0)
{
    unsigned long long v1;  // rax

    if ((char)a0.parser().is_command_substitution())
        return 0;
    v1 = (unsigned long long)fish::proc::get_job_control_mode();
    if (!(char)v1)
    {
        return v1 & 0xffffffffffffff00 | 1;
    }
    else if ((unsigned int)v1 == 1)
    {
        return *((char *)(a0.parser() + 90));
    }
    else
    {
        return 0;
    }
}
