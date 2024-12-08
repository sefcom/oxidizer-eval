long long uu_tsort::Graph::add_edge::h291c02ca2b894066(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rax

    uu_tsort::Graph::add_node::h2ee68e40ffd482bd(a0, a1, a2);
    v1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc9a95d870349b7a9(a1, a2, a3, a4);
    if ((char)v1)
        return v1;
    uu_tsort::Graph::add_node::h2ee68e40ffd482bd(a0, a3, a4);
    v2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h1070f8199d7ae068(a0, a1, a2);
    if (!v2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    uu_tsort::Node::add_successor::h2fc4cf18592343a8(v2 + 16, a3, a4);
    v1 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h1070f8199d7ae068(a0, a3, a4);
    if (v1)
    {
        v1->field_28 = v1->field_28 + 1;
        return v1;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
