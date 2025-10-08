__int64 __fastcall alacritty::config::bindings::default_mouse_bindings(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+10h] [rbp-58h]
  _QWORD v4[6]; // [rsp+18h] [rbp-50h] BYREF
  __int16 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int16 v7; // [rsp+50h] [rbp-18h]

  *(_QWORD *)&v2 = 0LL;
  *((_QWORD *)&v2 + 1) = 8LL;
  v3 = 0LL;
  v6 = 0;
  v4[0] = 0x8000000000000007LL;
  v7 = 0;
  v5 = 1;
  alloc::vec::Vec<T,A>::push(&v2, v4, &off_881C30);
  v6 = 32;
  v4[0] = 0x8000000000000007LL;
  v7 = 0;
  v5 = 1;
  alloc::vec::Vec<T,A>::push(&v2, v4, &off_881C30);
  v6 = 0;
  v4[0] = 0x800000000000000BLL;
  v7 = 2048;
  v5 = 2;
  alloc::vec::Vec<T,A>::push(&v2, v4, &off_881C30);
  result = v3;
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  return result;
}