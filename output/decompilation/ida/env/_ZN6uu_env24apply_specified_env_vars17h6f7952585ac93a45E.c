__int64 __fastcall uu_env::apply_specified_env_vars(char ***a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // [rsp+0h] [rbp-90h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+8h] [rbp-88h]
  char **v10; // [rsp+10h] [rbp-80h] BYREF
  __int64 v11; // [rsp+18h] [rbp-78h]
  __int64 **v12; // [rsp+20h] [rbp-70h]
  __int64 v13; // [rsp+28h] [rbp-68h]
  __int64 v14; // [rsp+30h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-50h] BYREF
  __int64 v16; // [rsp+48h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-40h]
  char v18; // [rsp+58h] [rbp-38h]

  result = (__int64)a1[8];
  if ( result )
  {
    v3 = (__int64)(a1[7] + 3);
    v4 = 48 * result;
    do
    {
      while ( !*(_QWORD *)(v3 - 8) )
      {
        v15 = uucore::util_name(a1, a2);
        v16 = v5;
        v8 = &v15;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = (char **)&unk_110CA8;
        v11 = 2LL;
        v14 = 0LL;
        v12 = &v8;
        v13 = 1LL;
        std::io::stdio::_eprint(&v10);
        v6 = *(_QWORD *)(v3 + 8);
        v7 = *(_QWORD *)(v3 + 16);
        v15 = 1LL;
        v16 = v6;
        v17 = v7;
        v18 = 1;
        v8 = &v15;
        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
        v10 = &off_110CC8;
        v11 = 2LL;
        v14 = 0LL;
        v12 = &v8;
        v13 = 1LL;
        a1 = &v10;
        result = std::io::stdio::_eprint(&v10);
        v3 += 48LL;
        v4 -= 48LL;
        if ( !v4 )
          return result;
      }
      a1 = (char ***)(v3 - 24);
      a2 = v3;
      result = std::env::set_var(v3 - 24, v3);
      v3 += 48LL;
      v4 -= 48LL;
    }
    while ( v4 );
  }
  return result;
}