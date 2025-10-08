long long fish::parse_tree::NodeRef<NodeType>::child_ref(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_dep2
    unsigned long v5;  // cc_ndep
    unsigned long long v6;  // rbx

    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0) + 1, 0, _ccall(v2, v3, v4, v5))))
    {
        v0 = v6;
        fish::exec::get_performer_for_function::{{closure}}::{{closure}}(a1);
        return a0;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20851978()
}
