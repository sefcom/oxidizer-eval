long long fish::proc::ProcStatus::signal_exited(struct_0 *a0)
{
    unsigned long v1;  // rax

    v1 = a0->field_4;
    return v1 & 0xffffff00 | (char)_ccall(13, 5, (unsigned long long)(((char)v1 & 127) + 1), 2, 0) & a0->field_0;
}
