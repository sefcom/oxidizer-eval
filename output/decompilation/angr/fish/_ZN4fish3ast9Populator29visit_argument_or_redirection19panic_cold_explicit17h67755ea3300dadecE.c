void fish::ast::Populator::visit_argument_or_redirection::panic_cold_explicit()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    core::panicking::panic_explicit(&g_14c5710); /* do not return */
}
