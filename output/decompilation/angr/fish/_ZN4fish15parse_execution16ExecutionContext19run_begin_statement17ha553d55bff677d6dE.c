long long fish::parse_execution::ExecutionContext::run_begin_statement(unsigned long long a0, void* a1, unsigned long long a2)
{
    char v0;  // [bp-0x48]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // eax

    fish::trace::trace_if_enabled(a1.parser(), "b", 5);
    v3 = a1.parser();
    v0.scope_block(9);
    v4 = v3.push_block(&v0);
    v5 = a0.run_job_list(a1, a2);
    a1.parser().pop_block(v4);
    fish::trace::trace_if_enabled(a1.parser(), "e", 9);
    return v5;
}
