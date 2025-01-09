long long uu_df::is_best::h69ca5df66aadf4f9(unsigned long a0, unsigned long a1, unsigned long long a2[3])
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v3[3];  // rax
    unsigned long long v6;  // rax

    v0 = a0;
    v1 = a1 * 152 + a0;
    v3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h437f1ce06bbe5de2(&v0);
    if (v3)
    {
        do
        {
            if ((char)::0x4c5af0::alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(v3[1], v3[2], a2[1], a2[2]) && (char)uu_df::mount_info_lt::he7799b73577b1743(a2, v3))
                return 0;
        } while ((v3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h437f1ce06bbe5de2(&v0), v3));
    }
    v6 = v3 & 0xffffffffffffff00 | 1;
    return v6;
}
