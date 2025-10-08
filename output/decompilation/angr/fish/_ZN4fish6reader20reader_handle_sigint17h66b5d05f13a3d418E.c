void fish::reader::reader_handle_sigint()
{
    core::sync::atomic::atomic_store(&_ZN4fish6reader11INTERRUPTED17hc35fd21f5b04b69bE, 2);
    return;
}
