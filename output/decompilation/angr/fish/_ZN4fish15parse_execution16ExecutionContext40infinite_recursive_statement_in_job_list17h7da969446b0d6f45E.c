long long fish::parse_execution::ExecutionContext::infinite_recursive_statement_in_job_list(unsigned long long a0, void* a1, unsigned long long a2[16], unsigned long a3, unsigned long a4)
{
    struct_0 *v0;  // [bp-0xa0]
    unsigned long long v1[3];  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    char *v4;  // [bp-0x70]
    int v5;  // [bp-0x68], Other Possible Types: char
    unsigned long long v6;  // [bp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long long v10;  // rax
    struct_1 *v11;  // r15
    struct_2 **v12;  // rbx
    unsigned long long v13[3];  // rbx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v10 = a1.parser();
    v11 = v10.block_at_index(0);
    v12 = v10.block_at_index(1);
    if (!v12 || !v11)
    {
        if (v11)
            goto LABEL_13dc676;
        if (!v12)
            return 0;
    }
    else if (v11->field_14 == 8)
    {
        v13 = *(v12);
        if (v13 && v13[0] > 9223372036854775809)
        {
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
            v1[0] = v13;
            if (a3)
            {
                v2 = a0;
                v3 = a1;
                v4 = &v1;
                v15 = fish::parse_execution::ExecutionContext::infinite_recursive_statement_in_job_list::{{closure}}(&v2, &a2[6]);
                v16 = v15.or_else(a2[14], a2[15], &v2);
                if (v16)
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, v13[1], v13[2]);
                    v6 = *((long long *)&v8);
                    memcpy(&v5, &v7, 16);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v0);
                    v0->field_10 = v6;
                    *((void*)&v0->field_0) = v5;
                }
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
                return v16;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
        }
    }
    else
    {
LABEL_13dc676:
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
        if (!v12)
            return 0;
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
    return 0;
}
