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
  __int64 v22; // [rsp+20h] [rbp-98h] BYREF
  __int64 v23; // [rsp+28h] [rbp-90h]
  _QWORD v24[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  _QWORD v27[5]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v28[8]; // [rsp+78h] [rbp-40h] BYREF

  current_key = uu_join::State::get_current_key((__int64)a1);
  v28[0] = current_key;
  v28[1] = v7;
  v8 = a1[1] + 48LL * a1[2];
  v24[0] = a1[1];
  v24[1] = v8;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
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
        v22 = v11;
        v23 = v12;
        while ( 1 )
        {
          v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
          if ( !v13 )
            break;
          v27[0] = v28;
          v27[1] = a1;
          v27[2] = v10;
          v27[3] = a3;
          v27[4] = v13;
          result = uu_join::Repr<Sep>::print_format((_QWORD *)a4, a2, (__int64)v27);
          if ( !result )
          {
            LOBYTE(v27[0]) = v19;
            result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v27);
            if ( !result )
              continue;
          }
          return result;
        }
        v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
        v11 = v21;
        v12 = v20;
      }
      while ( v10 );
    }
    else
    {
      if ( !current_key )
        current_key = *(_QWORD *)(a4 + 288);
      v26 = a1[8];
      v15 = *(_QWORD *)(a4 + 264);
      v16 = *(_QWORD *)(a4 + 272);
      v25 = a3[8];
      do
      {
        v22 = v11;
        v23 = v12;
        while ( 1 )
        {
          v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
          if ( !v17 )
            break;
          v18 = (_QWORD *)v17;
          result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, current_key);
          if ( !result )
          {
            result = uu_join::Repr<Sep>::print_fields(v15, v16, a2, v10, v26);
            if ( !result )
            {
              result = uu_join::Repr<Sep>::print_fields(v15, v16, a2, v18, v25);
              if ( !result )
              {
                LOBYTE(v27[0]) = v19;
                result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v27);
                if ( !result )
                  continue;
              }
            }
          }
          return result;
        }
        v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
        v11 = v21;
        v12 = v20;
      }
      while ( v10 );
    }
  }
  return 0LL;
}
