__int64 __fastcall uu_join::Repr<Sep>::print_fields(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 i; // rbp
  __int64 v6; // rax
  const void *field; // rax
  size_t v8; // rdx
  size_t v9; // r13
  __int64 v10; // r15
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    for ( i = 0LL; v3 != i; ++i )
    {
      if ( a3 != i )
      {
        v6 = a1[2];
        if ( (unsigned __int64)(*a1 - v6) < 2 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, asc_122CD, 1LL);
          if ( result )
            return result;
        }
        else
        {
          *(_BYTE *)(a1[1] + v6) = 32;
          a1[2] = v6 + 1;
        }
        field = (const void *)uu_join::Line::get_field(a2, i);
        if ( !field )
          core::option::unwrap_failed(&off_FAF68);
        v9 = v8;
        v10 = a1[2];
        if ( *a1 - v10 > v8 )
        {
          memcpy((void *)(v10 + a1[1]), field, v8);
          a1[2] = v10 + v9;
        }
        else
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, field, v8);
          if ( result )
            return result;
        }
      }
    }
  }
  return 0LL;
}
