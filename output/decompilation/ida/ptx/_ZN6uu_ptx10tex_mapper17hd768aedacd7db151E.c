__int64 __fastcall uu_ptx::tex_mapper(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // [rsp+Ch] [rbp-4Ch] BYREF
  int *v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+18h] [rbp-40h]
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  int **v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v8 = a2;
  if ( a2 - 35 < 4 )
  {
LABEL_4:
    v9 = (int *)&v8;
    v10 = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v11 = &off_251A60;
    *((_QWORD *)&v11 + 1) = 1LL;
LABEL_5:
    v14 = 0LL;
    v12 = &v9;
    v13 = 1LL;
    return core::option::Option<T>::map_or_else(a1, &v11);
  }
  else
  {
    switch ( a2 )
    {
      case '\\':
        result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aBackslash, 12LL, a4);
        break;
      case '_':
        goto LABEL_4;
      case '{':
      case '}':
        v9 = (int *)&v8;
        v10 = <char as core::fmt::Display>::fmt;
        *(_QWORD *)&v11 = &off_251A70;
        *((_QWORD *)&v11 + 1) = 2LL;
        goto LABEL_5;
      default:
        LODWORD(v9) = 0;
        v5 = core::char::methods::encode_utf8_raw(a2, &v9);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, v5, v6, v7);
        result = (__int64)v12;
        *(_QWORD *)(a1 + 16) = v12;
        *(_OWORD *)a1 = v11;
        break;
    }
  }
  return result;
}