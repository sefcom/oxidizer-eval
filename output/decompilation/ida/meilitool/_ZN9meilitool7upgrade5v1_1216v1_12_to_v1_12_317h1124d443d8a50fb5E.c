__int64 __fastcall meilitool::upgrade::v1_12::v1_12_to_v1_12_3(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-8Ch] BYREF
  int v8; // [rsp+10h] [rbp-88h] BYREF
  int v9; // [rsp+14h] [rbp-84h] BYREF
  char **v10; // [rsp+18h] [rbp-80h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-78h]
  int *v12; // [rsp+28h] [rbp-70h]
  __int128 v13; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-58h]
  _QWORD v15[10]; // [rsp+48h] [rbp-50h] BYREF

  v7 = a3;
  v8 = a4;
  v9 = a5;
  v10 = &off_526318;
  v11 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v12 = (_DWORD *)&byte_8;
  v13 = 0LL;
  std::io::stdio::_print(&v10);
  if ( a4 == 12 )
  {
    result = meilitool::upgrade::v1_12::rebuild_field_distribution(a1, a2);
    if ( result )
      return result;
  }
  else
  {
    v10 = (char **)&v7;
    v11 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v12 = &v8;
    *(_QWORD *)&v13 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    *((_QWORD *)&v13 + 1) = &v9;
    v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v15[0] = &off_526328;
    v15[1] = 4LL;
    v15[4] = 0LL;
    v15[2] = &v10;
    v15[3] = 3LL;
    std::io::stdio::_print(v15);
  }
  return 0LL;
}