void __fastcall uu_pr::header_content(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+8h] [rbp-90h] BYREF
  __int128 v5; // [rsp+10h] [rbp-88h] BYREF
  __int64 v6; // [rsp+20h] [rbp-78h]
  __int64 (__fastcall *v7)(); // [rsp+28h] [rbp-70h]
  __int64 *v8; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v9)(); // [rsp+38h] [rbp-60h]
  __int128 v10; // [rsp+48h] [rbp-50h] BYREF
  __int64 v11; // [rsp+58h] [rbp-40h]
  _QWORD v12[7]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  if ( *(_BYTE *)(a2 + 321) )
  {
    *(_QWORD *)&v5 = a2 + 120;
    *((_QWORD *)&v5 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v6 = a2 + 48;
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v8 = &v4;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v12[0] = &unk_269650;
    v12[1] = 3LL;
    v12[4] = 0LL;
    v12[2] = &v5;
    v12[3] = 3LL;
    core::option::Option<T>::map_or_else(&v10, v12);
    v3 = alloc::alloc::Global::alloc_impl(8LL, 120LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    v6 = v11;
    v5 = v10;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 1LL;
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 32) = 1LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_OWORD *)(v3 + 48) = v5;
    *(_QWORD *)(v3 + 64) = v6;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 80) = 1LL;
    *(_OWORD *)(v3 + 88) = 0LL;
    *(_QWORD *)(v3 + 104) = 1LL;
    *(_QWORD *)(v3 + 112) = 0LL;
    *a1 = 5LL;
    a1[1] = v3;
    a1[2] = 5LL;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 8LL;
    a1[2] = 0LL;
  }
}