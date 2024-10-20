__int64 __fastcall uu_nl::NumberFormat::format(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // rax
  __int64 *v8; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-98h]
  __int64 v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+20h] [rbp-88h]
  _QWORD v12[6]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v13; // [rsp+58h] [rbp-50h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h]
  __int64 v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+88h] [rbp-20h]
  char v19; // [rsp+90h] [rbp-18h]
  __int64 v20; // [rsp+98h] [rbp-10h] BYREF

  v13 = a3;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v8 = &v13;
      v9 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v10 = a4;
      v11 = 0LL;
      v14 = 2LL;
      v15 = 1LL;
      v16 = 1LL;
      v17 = 0LL;
      v18 = 32LL;
    }
    else
    {
      if ( a3 < 0 )
      {
        a3 = -a3;
        v20 = a3;
        --a4;
        v8 = &v20;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v10 = a4;
        v11 = 0LL;
        v14 = 2LL;
        v15 = 1LL;
        v16 = 1LL;
        v17 = 0LL;
        v18 = 48LL;
        v19 = 1;
        v6 = &off_26E700;
        goto LABEL_9;
      }
      v8 = &v13;
      v9 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v10 = a4;
      v11 = 0LL;
      v14 = 2LL;
      v15 = 1LL;
      v16 = 1LL;
      v17 = 0LL;
      v18 = 48LL;
    }
    v19 = 1;
  }
  else
  {
    v8 = &v13;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
    v10 = a4;
    v11 = 0LL;
    v14 = 2LL;
    v15 = 1LL;
    v16 = 1LL;
    v17 = 0LL;
    v18 = 32LL;
    v19 = 0;
  }
  v6 = &anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
LABEL_9:
  v12[0] = v6;
  v12[1] = 1LL;
  v12[4] = &v14;
  v12[5] = 1LL;
  v12[2] = &v8;
  v12[3] = 2LL;
  alloc::fmt::format::format_inner(a1, v12, a3, a4, a5, a6);
  return a1;
}
