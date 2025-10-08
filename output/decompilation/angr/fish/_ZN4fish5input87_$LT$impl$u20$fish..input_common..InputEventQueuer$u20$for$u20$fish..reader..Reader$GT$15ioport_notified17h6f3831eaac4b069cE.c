void fish::input::<impl fish::input_common::InputEventQueuer for fish::reader::Reader>::ioport_notified(unsigned long long a0)
{
    fish::threads::iothread_service_main(a0);
    return;
}
