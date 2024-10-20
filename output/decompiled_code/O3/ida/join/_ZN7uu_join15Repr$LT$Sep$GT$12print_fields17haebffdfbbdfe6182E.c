__int64 __fastcall uu_join::Repr<Sep>::print_fields(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 v7; // rax
  const void *field; // rax
  size_t v9; // rdx
  size_t v10; // rbx
  __int64 v11; // r15
  __int64 result; // rax
  char v13; // [rsp+7h] [rbp-41h]

  v4 = *(_QWORD *)(a3 + 16);
  if ( v4 )
  {
    v13 = *(_BYTE *)(a1 + 41);
    for ( i = 0LL; v4 != i; ++i )
    {
      if ( a4 != i )
      {
        v7 = a2[2];
        if ( (unsigned __int64)(*a2 - v7) < 2 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, a1 + 41, 1LL);
          if ( result )
            return result;
        }
        else
        {
          *(_BYTE *)(a2[1] + v7) = v13;
          a2[2] = v7 + 1;
        }
        field = (const void *)uu_join::Line::get_field(a3, i);
        if ( !field )
          core::option::unwrap_failed(&off_FAF68);
        v10 = v9;
        v11 = a2[2];
        if ( *a2 - v11 > v9 )
        {
          memcpy((void *)(v11 + a2[1]), field, v9);
          a2[2] = v10 + v11;
        }
        else
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, field, v9);
          if ( result )
            return result;
        }
      }
    }
  }
  return 0LL;
}
