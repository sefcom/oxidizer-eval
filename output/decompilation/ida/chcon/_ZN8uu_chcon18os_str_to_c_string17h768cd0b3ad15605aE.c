__int64 __fastcall uu_chcon::os_str_to_c_string(__int64 a1)
{
  void *v1; // rsi
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  void *v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v5);
  v1 = v6;
  if ( __OFSUB__(-v5, 1LL) )
  {
    v2 = 18;
    v3 = v7;
  }
  else
  {
    core::ptr::drop_in_place<alloc::ffi::c_str::NulError>(v5, v6);
    *(_QWORD *)(a1 + 24) = 0x1400000003LL;
    v2 = 16;
    v3 = 14LL;
    v1 = &unk_1B903;
  }
  *(_QWORD *)(a1 + 8) = v1;
  *(_QWORD *)(a1 + 16) = v3;
  *(_DWORD *)a1 = v2;
  return a1;
}