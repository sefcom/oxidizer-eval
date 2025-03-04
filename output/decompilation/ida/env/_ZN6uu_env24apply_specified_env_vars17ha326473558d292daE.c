__int64 __fastcall uu_env::apply_specified_env_vars(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int64 *v6; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+10h] [rbp-98h]
  _QWORD v8[2]; // [rsp+18h] [rbp-90h] BYREF
  char **v9; // [rsp+28h] [rbp-80h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 **v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+58h] [rbp-50h] BYREF
  __int128 v15; // [rsp+60h] [rbp-48h]
  char v16; // [rsp+70h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 56) + 48LL * *(_QWORD *)(a1 + 64);
  v8[0] = *(_QWORD *)(a1 + 56);
  v8[1] = v1;
  for ( result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v8);
        result;
        result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v8) )
  {
    if ( *(_QWORD *)(result + 16) )
    {
      std::env::set_var(result, result + 24);
    }
    else
    {
      v3 = result;
      v14 = uucore::util_name();
      *(_QWORD *)&v15 = v4;
      v6 = &v14;
      v7 = <&T as core::fmt::Display>::fmt;
      v9 = (char **)&unk_148C18;
      v10 = 2LL;
      v13 = 0LL;
      v11 = &v6;
      v12 = 1LL;
      std::io::stdio::_eprint(&v9);
      v5 = *(_OWORD *)(v3 + 32);
      v14 = 1LL;
      v15 = v5;
      v16 = 1;
      v6 = &v14;
      v7 = <os_display::Quoted as core::fmt::Display>::fmt;
      v9 = &off_148C38;
      v10 = 2LL;
      v13 = 0LL;
      v11 = &v6;
      v12 = 1LL;
      std::io::stdio::_eprint(&v9);
    }
  }
  return result;
}
