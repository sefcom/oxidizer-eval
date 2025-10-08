__int64 __fastcall uu_runcon::os_str_to_c_string(__int64 a1)
{
  void *v1; // rsi
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  void *v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]

  <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v4);
  v1 = v5;
  if ( __OFSUB__(-v4, 1LL) )
  {
    result = 17LL;
    v3 = v6;
  }
  else
  {
    core::ptr::drop_in_place<alloc::string::String>(v4, v5);
    *(_QWORD *)(a1 + 24) = 0x1400000003LL;
    result = 15LL;
    v3 = 14LL;
    v1 = &unk_1B408;
  }
  *(_QWORD *)(a1 + 8) = v1;
  *(_QWORD *)(a1 + 16) = v3;
  *(_DWORD *)a1 = result;
  return result;
}