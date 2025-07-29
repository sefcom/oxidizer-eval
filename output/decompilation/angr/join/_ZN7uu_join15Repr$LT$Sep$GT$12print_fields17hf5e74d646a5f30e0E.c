long long uu_join::Repr<Sep>::print_fields(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    void* v3;  // rbp
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v0 = v2;
    if (!a1->field_10)
        return 0;
    v3 = 0;
    do
    {
        v4 = v3;
        v5 = v4.forward_unchecked();
        if (v4 != a2)
        {
            v6 = a0.write_all(" UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 1);
            if (v6)
                return v6;
            v7 = a1.get_field(v4);
            if (!v7)
                core::option::unwrap_failed(&g_593a78); /* do not return */
            v8 = a0.write_all(v7, a2);
            if (v8)
                return v8;
        }
        v3 = v5;
    } while (v3 < a1->field_10);
    return 0;
}
