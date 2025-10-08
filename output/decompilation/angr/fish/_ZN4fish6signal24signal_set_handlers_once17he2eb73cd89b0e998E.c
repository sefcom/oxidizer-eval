long long fish::signal::signal_set_handlers_once(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = std::sync::poison::once::Once::call_once();
    if (!a0)
        return v1;
    return std::sync::poison::once::Once::call_once();
}
