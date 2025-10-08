long long fish::parse_tree::ParsedSource::top_job_list(unsigned long long *a0)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep

    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(a0)) + 1, 0, _ccall(v1, v2, v3, v4))))
        return *(a0);
    [D] Unsupported jumpkind Ijk_NoDecode at address 20851950()
}
