__int64 __fastcall uu_cp::show_debug(unsigned __int8 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v15[6]; // [rsp+68h] [rbp-30h] BYREF

  v1 = 8 * (unsigned int)*a1;
  v2 = *(__int64 *)((char *)&off_15EF28 + v1);
  v3 = *(_QWORD *)((char *)&unk_24F28 + v1);
  v11[0] = v2;
  v11[1] = v3;
  v4 = 8 * (unsigned int)a1[1];
  v5 = *(__int64 *)((char *)&off_15EF28 + v4);
  v6 = *(_QWORD *)((char *)&unk_24F28 + v4);
  v12[0] = v5;
  v12[1] = v6;
  v7 = a1[2];
  v8 = (char *)dword_24EE0 + dword_24EE0[v7];
  v9 = qword_24EF8[v7];
  v13[0] = v8;
  v13[1] = v9;
  v14[0] = v11;
  v14[1] = <&T as core::fmt::Display>::fmt;
  v14[2] = v12;
  v14[3] = <&T as core::fmt::Display>::fmt;
  v14[4] = v13;
  v14[5] = <&T as core::fmt::Display>::fmt;
  v15[0] = &off_15E858;
  v15[1] = 4LL;
  v15[4] = 0LL;
  v15[2] = v14;
  v15[3] = 3LL;
  return std::io::stdio::_print(v15);
}