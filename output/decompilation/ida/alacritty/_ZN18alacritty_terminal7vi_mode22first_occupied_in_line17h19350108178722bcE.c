__int64 __fastcall alacritty_terminal::vi_mode::first_occupied_in_line(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v4; // ecx
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  int *v7; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+18h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v6 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  v8[0] = 0LL;
  v8[1] = v3;
  v7 = &v6;
  core::iter::traits::iterator::Iterator::try_fold(&v9, v8, a2, &v7);
  if ( v9 == 1 )
  {
    v4 = v11;
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 16) = v4;
    result = 1LL;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}