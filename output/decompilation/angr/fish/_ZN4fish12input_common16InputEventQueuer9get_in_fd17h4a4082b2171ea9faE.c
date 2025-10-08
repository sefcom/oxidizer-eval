long long fish::input_common::InputEventQueuer::get_in_fd(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((int *)(a0.get_input_data() + 176));
}
