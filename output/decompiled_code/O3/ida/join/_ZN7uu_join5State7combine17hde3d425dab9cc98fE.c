__int64 __fastcall uu_join::State::combine(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 current_key; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // rbp
  char v18; // [rsp+Fh] [rbp-A9h]
  __int64 v19; // [rsp+10h] [rbp-A8h]
  __int64 v20; // [rsp+18h] [rbp-A0h]
  __int64 v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h] BYREF
  __int64 v23; // [rsp+30h] [rbp-88h]
  _QWORD v24[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h]
  _QWORD v26[5]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v27[8]; // [rsp+78h] [rbp-40h] BYREF

  current_key = uu_join::State::get_current_key((__int64)a1);
  v27[0] = current_key;
  v21 = v7;
  v27[1] = v7;
  v8 = a1[1] + 48LL * a1[2];
  v24[0] = a1[1];
  v24[1] = v8;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
  if ( v9 )
  {
    v10 = (_QWORD *)v9;
    v11 = a3[1];
    v12 = v11 + 48LL * a3[2];
    v18 = *(_BYTE *)(a4 + 40);
    v20 = v11;
    v19 = v12;
    if ( *(_QWORD *)(a4 + 16) )
    {
      do
      {
        v22 = v11;
        v23 = v12;
        while ( 1 )
        {
          v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
          if ( !v13 )
            break;
          v26[0] = v27;
          v26[1] = a1;
          v26[2] = v10;
          v26[3] = a3;
          v26[4] = v13;
          result = uu_join::Repr<Sep>::print_format((_QWORD *)a4, a2, (__int64)v26);
          if ( !result )
          {
            LOBYTE(v26[0]) = v18;
            result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v26, 1LL);
            if ( !result )
              continue;
          }
          return result;
        }
        v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
        v11 = v20;
        v12 = v19;
      }
      while ( v10 );
    }
    else
    {
      if ( !current_key )
      {
        current_key = *(_QWORD *)(a4 + 24);
        v21 = *(_QWORD *)(a4 + 32);
      }
      v15 = a1[8];
      v25 = a3[8];
      do
      {
        v22 = v11;
        v23 = v12;
        while ( 1 )
        {
          v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
          if ( !v16 )
            break;
          v17 = (_QWORD *)v16;
          result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, current_key, v21);
          if ( !result )
          {
            result = uu_join::Repr<Sep>::print_fields(a4, a2, v10, v15);
            if ( !result )
            {
              result = uu_join::Repr<Sep>::print_fields(a4, a2, v17, v25);
              if ( !result )
              {
                LOBYTE(v26[0]) = v18;
                result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v26, 1LL);
                if ( !result )
                  continue;
              }
            }
          }
          return result;
        }
        v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
        v11 = v20;
        v12 = v19;
      }
      while ( v10 );
    }
  }
  return 0LL;
}
