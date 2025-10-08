long long fish::reader::Reader::request_cursor_position(void* a0, unsigned long long a1, uint128_t a2[3])
{
    char v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long v3;  // r14
    void* v4;  // rax
    int v5;  // xmm0
    int v6;  // xmm1
    unsigned long long v7;  // rdx

    v2 = fish::reader::querying_allowed();
    if (!(char)v2)
        return v2;
    v3 = *((long long *)a0);
    v4 = v3.blocking_query();
    if (*((int *)v4) != 3)
        core::panicking::panic("assertion failed: query.is_none()forcedhighlightselectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 33, &g_14dfeb0); /* do not return */
    v5 = a2[0];
    v6 = a2[1];
    *((uint128_t *)&v4[32]) = a2[2];
    v4[16] = v6;
    *(v4) = v5;
    a1.begin_buffering();
    v0 = 37;
    a1.write_command(&v0);
    v0 = 21;
    a1.write_command(&v0);
    a1.end_buffering();
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v7);
    return v3.save_screen_state();
}
