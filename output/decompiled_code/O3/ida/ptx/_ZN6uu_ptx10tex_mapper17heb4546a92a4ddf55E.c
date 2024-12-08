__int64 __fastcall uu_ptx::tex_mapper(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-4Ch] BYREF
  int *v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+18h] [rbp-40h]
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  int **v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v9 = a2;
  if ( a2 - 35 < 4 )
  {
LABEL_4:
    v10 = (int *)&v9;
    v11 = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &off_2EE838;
    *((_QWORD *)&v12 + 1) = 1LL;
LABEL_5:
    v15 = 0LL;
    v13 = &v10;
    v14 = 1LL;
    return core::option::Option<T>::map_or_else(a1, &v12, a3, a4, a5, a6);
  }
  else
  {
    switch ( a2 )
    {
      case '\\':
        result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aBackslash, 12LL);
        break;
      case '_':
        goto LABEL_4;
      case '{':
      case '}':
        v10 = (int *)&v9;
        v11 = <char as core::fmt::Display>::fmt;
        *(_QWORD *)&v12 = &off_2EE848;
        *((_QWORD *)&v12 + 1) = 2LL;
        goto LABEL_5;
      default:
        LODWORD(v10) = 0;
        v7 = core::char::methods::encode_utf8_raw(a2, &v10);
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v12, v7, v8);
        result = (__int64)v13;
        *(_QWORD *)(a1 + 16) = v13;
        *(_OWORD *)a1 = v12;
        break;
    }
  }
  return result;
}
