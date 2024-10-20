__int64 __fastcall uu_env::apply_specified_env_vars(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int128 v4; // xmm0
  _BYTE *v5; // [rsp+0h] [rbp-90h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+8h] [rbp-88h]
  char **v7; // [rsp+10h] [rbp-80h] BYREF
  __int64 v8; // [rsp+18h] [rbp-78h]
  _QWORD *v9; // [rsp+20h] [rbp-70h]
  __int64 v10; // [rsp+28h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-60h]
  _BYTE v12[24]; // [rsp+40h] [rbp-50h] BYREF
  char v13; // [rsp+58h] [rbp-38h]

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v2 = *(_QWORD *)(a1 + 56) + 24LL;
    v3 = 48 * result;
    do
    {
      if ( *(_QWORD *)(v2 - 8) )
      {
        result = std::env::set_var(v2 - 24, v2);
      }
      else
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        *(_OWORD *)v12 = xmmword_112018;
        v5 = v12;
        v6 = <&T as core::fmt::Display>::fmt;
        v7 = (char **)&unk_10C8A0;
        v8 = 2LL;
        v11 = 0LL;
        v9 = &v5;
        v10 = 1LL;
        std::io::stdio::_eprint(&v7);
        v4 = *(_OWORD *)(v2 + 8);
        *(_QWORD *)v12 = 1LL;
        *(_OWORD *)&v12[8] = v4;
        v13 = 1;
        v5 = v12;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v7 = &off_10C8C0;
        v8 = 2LL;
        v11 = 0LL;
        v9 = &v5;
        v10 = 1LL;
        result = std::io::stdio::_eprint(&v7);
      }
      v2 += 48LL;
      v3 -= 48LL;
    }
    while ( v3 );
  }
  return result;
}
