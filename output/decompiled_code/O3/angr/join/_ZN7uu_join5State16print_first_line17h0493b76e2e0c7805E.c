long long uu_join::State::print_first_line::h0493b76e2e0c7805(struct_0 *a0, unsigned long long a1, void* a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    if (a0->field_10)
        return uu_join::State::print_line::h10cc8ae5f0481fff(a0, a1, a0->field_8, a2);
    v0 = v2;
    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
}
