__int64 __fastcall uu_join::State::combine(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 current_key; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // r13
  char v19; // [rsp+7h] [rbp-B1h]
  __int64 v20; // [rsp+8h] [rbp-B0h]
  __int64 v21; // [rsp+10h] [rbp-A8h]
  __int64 v22; // [rsp+18h] [rbp-A0h]
  __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  __int64 v24; // [rsp+28h] [rbp-90h]
  _QWORD v25[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v26; // [rsp+40h] [rbp-78h]
  __int64 v27; // [rsp+48h] [rbp-70h]
  _QWORD v28[5]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v29[8]; // [rsp+78h] [rbp-40h] BYREF

  current_key = uu_join::State::get_current_key((__int64)a1);
  v29[0] = current_key;
  v22 = v7;
  v29[1] = v7;
  v8 = a1[1] + 48LL * a1[2];
  v25[0] = a1[1];
  v25[1] = v8;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v25);
  if ( v9 )
  {
    v10 = (_QWORD *)v9;
    v11 = a3[1];
    v12 = v11 + 48LL * a3[2];
    v19 = *(_BYTE *)(a4 + 328);
    v21 = v11;
    v20 = v12;
    if ( *(_QWORD *)(a4 + 320) )
    {
      do
      {
        v23 = v11;
        v24 = v12;
        while ( 1 )
        {
          v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23);
          if ( !v13 )
            break;
          v28[0] = v29;
          v28[1] = a1;
          v28[2] = v10;
          v28[3] = a3;
          v28[4] = v13;
          result = uu_join::Repr<Sep>::print_format((_QWORD *)a4, a2, (__int64)v28);
          if ( !result )
          {
            LOBYTE(v28[0]) = v19;
            result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v28, 1LL);
            if ( !result )
              continue;
          }
          return result;
        }
        v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v25);
        v11 = v21;
        v12 = v20;
      }
      while ( v10 );
    }
    else
    {
      if ( !current_key )
      {
        current_key = *(_QWORD *)(a4 + 288);
        v22 = *(_QWORD *)(a4 + 296);
      }
      v27 = a1[8];
      v15 = *(_QWORD *)(a4 + 264);
      v16 = *(_QWORD *)(a4 + 272);
      v26 = a3[8];
      do
      {
        v23 = v11;
        v24 = v12;
        while ( 1 )
        {
          v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23);
          if ( !v17 )
            break;
          v18 = (_QWORD *)v17;
          result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, current_key, v22);
          if ( !result )
          {
            result = uu_join::Repr<Sep>::print_fields(v15, v16, a2, v10, v27);
            if ( !result )
            {
              result = uu_join::Repr<Sep>::print_fields(v15, v16, a2, v18, v26);
              if ( !result )
              {
                LOBYTE(v28[0]) = v19;
                result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v28, 1LL);
                if ( !result )
                  continue;
              }
            }
          }
          return result;
        }
        v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v25);
        v11 = v21;
        v12 = v20;
      }
      while ( v10 );
    }
  }
  return 0LL;
}
