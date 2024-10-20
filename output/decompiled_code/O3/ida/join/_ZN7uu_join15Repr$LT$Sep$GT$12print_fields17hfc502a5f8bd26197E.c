__int64 __fastcall uu_join::Repr<Sep>::print_fields(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 i; // r13
  const void *field; // rax
  size_t v7; // rdx
  size_t v8; // rbp
  __int64 v9; // r15
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    for ( i = 0LL; v3 != i; ++i )
    {
      if ( a3 != i )
      {
        if ( *a1 == a1[2] )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, 1LL, 0LL);
          if ( result )
            return result;
        }
        field = (const void *)uu_join::Line::get_field(a2, i);
        if ( !field )
          core::option::unwrap_failed(&off_FAF68);
        v8 = v7;
        v9 = a1[2];
        if ( *a1 - v9 > v7 )
        {
          memcpy((void *)(v9 + a1[1]), field, v7);
          a1[2] = v9 + v8;
        }
        else
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, field, v7);
          if ( result )
            return result;
        }
      }
    }
  }
  return 0LL;
}
