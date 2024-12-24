void __fastcall uu_pr::header_content(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  __int128 v8; // [rsp+8h] [rbp-80h] BYREF
  __int64 v9; // [rsp+18h] [rbp-70h]
  _QWORD v10[6]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v11[7]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a3;
  if ( *(_BYTE *)(a2 + 321) )
  {
    v10[0] = a2 + 120;
    v10[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v10[2] = a2 + 48;
    v10[3] = <alloc::string::String as core::fmt::Display>::fmt;
    v10[4] = &v7;
    v10[5] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11[0] = &unk_308BD0;
    v11[1] = 3LL;
    v11[4] = 0LL;
    v11[2] = v10;
    v11[3] = 3LL;
    core::option::Option<T>::map_or_else(&v8, v11, a3, a4, a5, a6);
    v6 = alloc::alloc::Global::alloc_impl(8LL, 120LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 1LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 1LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_OWORD *)(v6 + 48) = v8;
    *(_QWORD *)(v6 + 64) = v9;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_QWORD *)(v6 + 80) = 1LL;
    *(_OWORD *)(v6 + 88) = 0LL;
    *(_QWORD *)(v6 + 104) = 1LL;
    *(_QWORD *)(v6 + 112) = 0LL;
    alloc::slice::hack::into_vec(a1, v6, 5LL);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 8LL;
    a1[2] = 0LL;
  }
}
