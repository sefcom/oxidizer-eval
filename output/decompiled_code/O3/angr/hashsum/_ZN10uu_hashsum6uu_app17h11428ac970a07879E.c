long long uu_hashsum::uu_app::h11428ac970a07879(struct_1 *a0, struct_0 *a1, unsigned long a2)
{
    switch (a2)
    {
    case 5:
        if (!((char)a1->field_3 ^ 109) && !(1970483810 ^ a1->field_0))
        {
            uu_hashsum::uu_app_length::hebecf6b51f76ad1d(a0);
            break;
        }
        else
        {
            if (!(!((char)a1->field_3 ^ 109)) || !(!(1970484066 ^ a1->field_0)))
                goto LABEL_561067;
            uu_hashsum::uu_app_b3sum::hc9ecde2fd3b09222(a0);
            break;
        }
        a0->field_2c8 = 0;
        return a0;
    case 6:
        if (!((unsigned short)a1->field_3 ^ 28021) && !(1932878957 ^ a1->field_0))
            goto LABEL_5611cc;
        goto LABEL_561067;
    case 7:
        if (!(1836413745 ^ *((int *)((char *)&a1->field_0 + 3))) && !(828467315 ^ a1->field_0))
            goto LABEL_5611cc;
        if (!(1836413747 ^ *((int *)((char *)&a1->field_0 + 3))) && !(862021747 ^ a1->field_0))
        {
LABEL_561041:
            uu_hashsum::uu_app_bits::h8046f152c98cd03e(a0);
            break;
        }
    case 9:
        if (!(((char)a1[1].field_0 ^ 109)) && !((8463165514957547635 ^ *((long long *)&a1->field_0))) || !(((char)a1[1].field_0 ^ 109)) && !((8463167726865705075 ^ *((long long *)&a1->field_0))) || !(((char)a1[1].field_0 ^ 109)) && !((8463165540744128627 ^ *((long long *)&a1->field_0))) || !(((char)a1[1].field_0 ^ 109)) && !((8463163311689656435 ^ *((long long *)&a1->field_0))))
        {
LABEL_5611cc:
            uu_hashsum::uu_app_common::h7d3dd46f0fb032b6(a0);
            break;
        }
    case 11:
        if (!(!(!(*((long long *)((char *)&a1->field_0 + 3)) ^ 7887336990426934579))) && !(!(!(3761123808524724339 ^ *((long long *)&a1->field_0)))) || !((*((long long *)((char *)&a1->field_0 + 3)) ^ 7887336999067200819)) && !((3906083421530712179 ^ *((long long *)&a1->field_0))) || !((7887336990527663411 ^ *((long long *)((char *)&a1->field_0 + 3)))) && !((3762813757896616051 ^ *((long long *)&a1->field_0))) || !((7887336981820419379 ^ *((long long *)((char *)&a1->field_0 + 3)))) && !((3616730444007041139 ^ *((long long *)&a1->field_0))))
            goto LABEL_5611cc;
        if (!(!(!(7887337007606752619 ^ *((long long *)((char *)&a1->field_0 + 3))))) && !(!(!(4049353326622500979 ^ *((long long *)&a1->field_0)))) || !(!(!(7887336999067215211 ^ *((long long *)((char *)&a1->field_0 + 3))))) && !(!(!(3906083662988404851 ^ *((long long *)&a1->field_0)))))
            goto LABEL_561041;
        goto LABEL_561067;
    default:
LABEL_561067:
        uu_hashsum::uu_app_custom::h20352c472376330f(a0);
        a0->field_2c8 = 1;
        return a0;
    }
}
