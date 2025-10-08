bool __fastcall ruff_python_formatter::other::parameters::has_trailing_comma(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v8; // edx
  __int64 v9; // r15
  unsigned int v10; // edx
  __int128 v11; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+10h] [rbp-A8h]
  __int128 v13; // [rsp+20h] [rbp-98h]
  __int64 *v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  int v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  int v19; // [rsp+58h] [rbp-60h]
  _QWORD v20[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF
  __int128 v22; // [rsp+80h] [rbp-38h]
  __int128 v23; // [rsp+90h] [rbp-28h]

  if ( a2 == 94 )
    return 0;
  v20[0] = a2;
  v20[1] = a3;
  if ( !a1[2] || a1[5] || a1[10] || a1[8] )
  {
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v20);
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(&v11, v8, a4, a5);
    v23 = v13;
    v22 = v12;
    v21 = v11;
  }
  else
  {
    v9 = a1[11];
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v20);
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(&v11, v10, a4, a5);
    v23 = v13;
    v22 = v12;
    v21 = v11;
    if ( !v9 )
    {
      core::iter::traits::iterator::Iterator::try_fold(&v11, &v21);
      if ( BYTE8(v11) == 90 )
      {
        LOBYTE(v17) = 90;
      }
      else
      {
        v16 = v11;
        v17 = DWORD2(v11);
        if ( BYTE8(v11) == 11 )
        {
          core::iter::traits::iterator::Iterator::try_fold(&v11, &v21);
          if ( BYTE8(v11) == 90 )
          {
            LOBYTE(v19) = 90;
          }
          else
          {
            v18 = v11;
            v19 = DWORD2(v11);
            if ( BYTE8(v11) == 14 )
              goto LABEL_8;
          }
          v14 = &v18;
          v15 = <core::option::Option<T> as core::fmt::Debug>::fmt;
          *(_QWORD *)&v11 = &off_57E570;
          *((_QWORD *)&v11 + 1) = 2LL;
          *(_QWORD *)&v13 = 0LL;
          *(_QWORD *)&v12 = &v14;
          *((_QWORD *)&v12 + 1) = 1LL;
          core::panicking::panic_fmt(&v11, &off_57E590);
        }
      }
      v14 = &v16;
      v15 = <core::option::Option<T> as core::fmt::Debug>::fmt;
      *(_QWORD *)&v11 = &off_57E550;
      *((_QWORD *)&v11 + 1) = 2LL;
      *(_QWORD *)&v13 = 0LL;
      *(_QWORD *)&v12 = &v14;
      *((_QWORD *)&v12 + 1) = 1LL;
      core::panicking::panic_fmt(&v11, &off_57E5A8);
    }
  }
LABEL_8:
  core::iter::traits::iterator::Iterator::try_fold(&v11, &v21);
  if ( BYTE8(v11) == 90 )
    core::option::expect_failed(aThereMustBeATo, 45LL, &off_57E5C0);
  return BYTE8(v11) == 11;
}