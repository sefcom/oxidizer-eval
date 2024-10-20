__int64 __fastcall uu_join::Repr<Sep>::print_fields(const void *a1, size_t a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  size_t v8; // r13
  __int64 i; // rbx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r15
  const void *field; // rax
  size_t v14; // rdx
  size_t v15; // rbp
  __int64 v16; // r14
  __int64 result; // rax

  v5 = *(_QWORD *)(a4 + 16);
  if ( v5 )
  {
    v8 = a2;
    for ( i = 0LL; v5 != i; ++i )
    {
      if ( a5 != i )
      {
        v10 = a3[2];
        if ( *a3 - v10 <= v8 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, a1, v8);
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v10 + a3[1]), a1, v8);
          a3[2] = v8 + v10;
        }
        v11 = v5;
        v12 = a5;
        field = (const void *)uu_join::Line::get_field(a4, i);
        if ( !field )
          core::option::unwrap_failed(&off_FAF68);
        v15 = v14;
        v16 = a3[2];
        if ( *a3 - v16 > v14 )
        {
          memcpy((void *)(v16 + a3[1]), field, v14);
          a3[2] = v16 + v15;
          a5 = v12;
          v5 = v11;
          v8 = a2;
        }
        else
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, field, v14);
          a5 = v12;
          v5 = v11;
          v8 = a2;
          if ( result )
            return result;
        }
      }
    }
  }
  return 0LL;
}
