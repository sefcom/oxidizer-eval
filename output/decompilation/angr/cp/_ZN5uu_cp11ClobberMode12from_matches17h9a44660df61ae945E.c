long long uu_cp::ClobberMode::from_matches(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)a0.get_flag("forcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-", 5))
    {
        v1 = a0.get_flag("remove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencederefer", 18);
        return v1 & 0xffffffffffffff00 | 2 - (char)v1;
    }
    return 0;
}
