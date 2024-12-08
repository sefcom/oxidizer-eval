long long uu_pr::trailer_content::he845b55af2a875c4(unsigned long long a0[3], char a1, char a2)
{
    struct_0 *v1;  // rax
    unsigned long v2;  // rax

    if (!(a1 && !a2))
    {
        a0[0] = 0;
        a0[1] = 8;
        a0[2] = 0;
        return v2;
    }
    v1 = ::0x5c18a0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 120);
    if (v1)
    {
        v1->field_0 = 0;
        v1->field_8 = 1;
        v1->field_10 = 0;
        v1->field_20 = 1;
        *((int128_t *)&(&v1->field_20)[1]) = 0;
        *((long long *)((char *)&v1->field_28 + 8)) = 1;
        *((int128_t *)&v1->field_38) = 0;
        *((long long *)&v1->field_40) = 1;
        *((int128_t *)((char *)&v1->field_40 + 8)) = 0;
        (&v1->field_50)[1] = 1;
        *((long long *)&v1->field_58) = 0;
        return alloc::slice::hack::into_vec::ha0836a38beee886e(a0, v1, 5);
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
