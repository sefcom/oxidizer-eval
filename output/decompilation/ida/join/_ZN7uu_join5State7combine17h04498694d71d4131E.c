__int64 __fastcall uu_join::State::combine(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 result; // rax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r12
  char v21; // [rsp+7h] [rbp-B1h]
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 current_key; // [rsp+10h] [rbp-A8h]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  _QWORD v30[5]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v31[8]; // [rsp+78h] [rbp-40h] BYREF

  current_key = uu_join::State::get_current_key(a1);
  v31[0] = current_key;
  v31[1] = v8;
  v9 = a1[2];
  if ( !v9 )
    return 0LL;
  v10 = a1[1];
  v11 = v10 + 48 * v9;
  v22 = v10;
  v12 = v10 + 48;
  v13 = a3[1];
  v25 = v13 + 48LL * a3[2];
  v21 = *(_BYTE *)(a4 + 328);
  v24 = v13;
  if ( *(_QWORD *)(a4 + 320) )
  {
    v27 = v10 + 48 * v9;
    do
    {
      v14 = v22;
      v22 = v12;
      v15 = v13;
      while ( 1 )
      {
        v16 = v15 + 48;
        if ( v15 == v25 )
          break;
        v30[0] = v31;
        v30[1] = a1;
        v30[2] = v14;
        v30[3] = a3;
        v30[4] = v15;
        result = uu_join::Repr<Sep>::print_format(a4, a2, v30);
        if ( !result )
        {
          LOBYTE(v30[0]) = v21;
          result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v30);
          v15 = v16;
          if ( !result )
            continue;
        }
        return result;
      }
      v12 += 48LL;
      if ( v22 == v27 )
        v12 = v22;
      v13 = v24;
      result = 0LL;
    }
    while ( v22 != v27 );
  }
  else
  {
    if ( !current_key )
      current_key = *(_QWORD *)(a4 + 288);
    v29 = a1[8];
    v18 = *(_QWORD *)(a4 + 264);
    v19 = *(_QWORD *)(a4 + 272);
    v28 = a3[8];
    do
    {
      v26 = v12;
      v20 = v13;
      while ( v20 != v25 )
      {
        result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, current_key);
        if ( !result )
        {
          result = uu_join::Repr<Sep>::print_fields(v18, v19, a2, v22, v29);
          if ( !result )
          {
            result = uu_join::Repr<Sep>::print_fields(v18, v19, a2, v20, v28);
            if ( !result )
            {
              LOBYTE(v30[0]) = v21;
              result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v30);
              v20 += 48LL;
              if ( !result )
                continue;
            }
          }
        }
        return result;
      }
      v12 += 48LL;
      v22 = v26;
      if ( v26 == v11 )
        v12 = v26;
      v13 = v24;
      result = 0LL;
    }
    while ( v26 != v11 );
  }
  return result;
}