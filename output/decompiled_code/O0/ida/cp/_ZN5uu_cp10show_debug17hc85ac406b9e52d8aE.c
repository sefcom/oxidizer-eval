__int64 __fastcall uu_cp::show_debug(char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v12[6]; // [rsp+68h] [rbp-30h] BYREF

  v1 = *a1;
  v2 = qword_2EE60[v1];
  v8[0] = (&off_182750)[v1];
  v8[1] = v2;
  v3 = a1[1];
  v4 = qword_2EE60[v3];
  v9[0] = (&off_182750)[v3];
  v9[1] = v4;
  v5 = a1[2];
  v6 = *(_QWORD *)&asc_2EE18[8 * v5];
  v10[0] = (char *)dword_2EE48 + dword_2EE48[v5];
  v10[1] = v6;
  v11[0] = v8;
  v11[1] = <&T as core::fmt::Display>::fmt;
  v11[2] = v9;
  v11[3] = <&T as core::fmt::Display>::fmt;
  v11[4] = v10;
  v11[5] = <&T as core::fmt::Display>::fmt;
  v12[0] = &off_181BB0;
  v12[1] = 4LL;
  v12[4] = 0LL;
  v12[2] = v11;
  v12[3] = 3LL;
  return std::io::stdio::_print(v12);
}
