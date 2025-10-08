__int64 __fastcall uu_stty::print_in_save_format(__int128 *a1)
{
  __int128 v1; // xmm0
  char v2; // dl
  int v4; // [rsp+Ch] [rbp-BCh] BYREF
  int v5; // [rsp+10h] [rbp-B8h] BYREF
  int v6; // [rsp+14h] [rbp-B4h] BYREF
  int *v7; // [rsp+18h] [rbp-B0h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+20h] [rbp-A8h]
  int *v9; // [rsp+28h] [rbp-A0h]
  __int128 v10; // [rsp+30h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+40h] [rbp-88h]
  _QWORD *v12; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall *v13)(); // [rsp+50h] [rbp-78h]
  void *v14; // [rsp+58h] [rbp-70h] BYREF
  __int64 v15; // [rsp+60h] [rbp-68h]
  __int128 v16; // [rsp+68h] [rbp-60h]
  __int128 v17; // [rsp+78h] [rbp-50h]
  _QWORD v18[8]; // [rsp+88h] [rbp-40h] BYREF

  v5 = *((_DWORD *)a1 + 26);
  v6 = *((_DWORD *)a1 + 27);
  v4 = *((_DWORD *)a1 + 28);
  LODWORD(v18[0]) = *((_DWORD *)a1 + 29);
  v7 = &v5;
  v8 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
  v9 = &v6;
  *(_QWORD *)&v10 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
  *((_QWORD *)&v10 + 1) = &v4;
  v11 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
  v12 = v18;
  v13 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
  v14 = &unk_E2F68;
  v15 = 4LL;
  *(_QWORD *)&v17 = 0LL;
  *(_QWORD *)&v16 = &v7;
  *((_QWORD *)&v16 + 1) = 4LL;
  std::io::stdio::_print(&v14);
  v1 = *a1;
  v17 = a1[1];
  v16 = v1;
  v14 = 0LL;
  v15 = 32LL;
  while ( (core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v14) & 1) != 0 )
  {
    LOBYTE(v4) = v2;
    v18[0] = &v4;
    v18[1] = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v7 = (int *)&off_E2FA8;
    v8 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v9 = (int *)v18;
    v10 = 1uLL;
    std::io::stdio::_print(&v7);
  }
  v7 = (int *)&off_E2AC0;
  v8 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v9 = (_DWORD *)&byte_8;
  v10 = 0LL;
  return std::io::stdio::_print(&v7);
}