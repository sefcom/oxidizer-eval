_QWORD *__fastcall uu_env::EnvAppData::process_all_string_arguments(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int128 v11; // [rsp+10h] [rbp-98h] BYREF
  __int64 v12; // [rsp+20h] [rbp-88h]
  _QWORD *v13; // [rsp+28h] [rbp-80h]
  __int128 v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  _QWORD v17[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v18; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+70h] [rbp-38h]

  v13 = a1;
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 8LL;
  v15 = 0LL;
  v3 = *(_QWORD *)(a3 + 8);
  v16 = a3;
  v4 = v3 + 24LL * *(_QWORD *)(a3 + 16);
  v17[0] = v3;
  v17[1] = v4;
  v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v17);
  if ( v5 )
  {
    v6 = v5;
    while ( 1 )
    {
      uu_env::check_and_handle_string_args(
        (__int64)&v11,
        *(_QWORD *)(v6 + 8),
        *(_QWORD *)(v6 + 16),
        (__int64)&unk_24A2C,
        14LL,
        (__int64)&v14,
        0LL);
      v7 = v11;
      if ( (_QWORD)v11 )
        break;
      if ( BYTE8(v11) )
        goto LABEL_7;
      uu_env::check_and_handle_string_args(
        (__int64)&v11,
        *(_QWORD *)(v6 + 8),
        *(_QWORD *)(v6 + 16),
        (__int64)aS_0,
        2LL,
        (__int64)&v14,
        0LL);
      v7 = v11;
      if ( (_QWORD)v11 )
        break;
      if ( BYTE8(v11) )
      {
LABEL_7:
        *(_BYTE *)(a2 + 1) = 1;
      }
      else
      {
        uu_env::check_and_handle_string_args(
          (__int64)&v11,
          *(_QWORD *)(v6 + 8),
          *(_QWORD *)(v6 + 16),
          (__int64)aVs,
          3LL,
          (__int64)&v14,
          0LL);
        v7 = v11;
        if ( (_QWORD)v11 )
          break;
        if ( BYTE8(v11) )
        {
          *(_WORD *)a2 = 257;
        }
        else
        {
          uu_env::check_and_handle_string_args(
            (__int64)&v11,
            *(_QWORD *)(v6 + 8),
            *(_QWORD *)(v6 + 16),
            (__int64)aVvsauto,
            4LL,
            (__int64)&v14,
            v16);
          v7 = v11;
          if ( (_QWORD)v11 )
            break;
          if ( BYTE8(v11) )
          {
            *(_WORD *)a2 = 257;
            *(_BYTE *)(a2 + 2) = 0;
          }
          else
          {
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v11, v6);
            v19 = v12;
            v18 = v11;
            alloc::vec::Vec<T,A>::push(&v14, &v18);
          }
        }
      }
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v17);
      if ( !v6 )
        goto LABEL_17;
    }
    v9 = *((_QWORD *)&v11 + 1);
    v8 = v13;
    v13[1] = v7;
    v8[2] = v9;
    *v8 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v14);
  }
  else
  {
LABEL_17:
    v8 = v13;
    v13[2] = v15;
    *(_OWORD *)v8 = v14;
  }
  return v8;
}
