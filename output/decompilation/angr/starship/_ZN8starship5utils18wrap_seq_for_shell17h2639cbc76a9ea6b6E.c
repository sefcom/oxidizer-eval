long long starship::utils::wrap_seq_for_shell(struct_1 *a0, struct_0 *a1, char a2)
{
    char v0;  // [bp-0x89]
    unsigned int v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x84]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    char *v10;  // [bp-0x48]
    char *v11;  // [bp-0x40]
    char *v12;  // [bp-0x38]
    char *v13;  // [bp-0x30]
    int v14;  // [bp-0x28], Other Possible Types: char
    char v15;  // [bp-0x18]
    unsigned int v17;  // eax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rcx

    v1 = 27;
    v2 = 109;
    if (a2)
    {
        v17 = a2;
        if (v17 != 5 && v17 != 7)
        {
            v18 = *((long long *)&a1->field_8);
            a0->field_10 = v18;
            *((unsigned long long [2])&a0->field_0) = a1->field_0;
            return v18;
        }
        v19 = "%}Unable to run Unable to decode stdout: Unable to decode stderr: , stderr: , exit code: \"You can set command_timeout in your config to a higher value to allow longer-running commands to keep executing. failed by: ";
        v20 = "%{%}Unable to run Unable to decode stdout: Unable to decode stderr: , stderr: , exit code: \"You can set command_timeout in your config to a higher value to allow longer-running commands to keep executing. failed by: ";
    }
    else
    {
        v19 = "\\]%{%}Unable to run Unable to decode stdout: Unable to decode stderr: , stderr: , exit code: \"You can set command_timeout in your config to a higher value to allow longer-running commands to keep executing. failed by: ";
        v20 = "\\[\\]%{%}Unable to run Unable to decode stdout: Unable to decode stderr: , stderr: , exit code: \"You can set command_timeout in your config to a higher value to allow longer-running commands to keep executing. failed by: ";
    }
    v3 = v20;
    v4 = 2;
    v5 = v19;
    v6 = 2;
    v0 = 0;
    v7 = a1->field_0[1];
    v8 = *((long long *)&a1->field_8) + a1->field_0[1];
    v9 = &v1;
    v10 = &v0;
    v11 = &v3;
    v12 = &v2;
    v13 = &v5;
    v14.collect(&v7);
    a0->field_10 = *((long long *)&v15);
    *((void*)&a0->field_0) = v14;
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(a1);
}
