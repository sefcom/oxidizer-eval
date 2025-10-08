const char *__fastcall uu_runcon::get_initial_custom_opaque_context(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  const char *result; // rax
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // ecx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __m256i v16; // [rsp+0h] [rbp-D8h] BYREF
  int v17; // [rsp+20h] [rbp-B8h]
  _BYTE v18[56]; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-78h]
  _OWORD v20[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v21; // [rsp+90h] [rbp-48h]
  __m256i v22; // [rsp+A0h] [rbp-38h]
  int v23; // [rsp+C0h] [rbp-18h]

  if ( a2 )
  {
    uu_runcon::get_transition_context((__int64)v18, a3, a4);
    result = (const char *)*(unsigned int *)v18;
    if ( *(_DWORD *)v18 != 17 )
    {
      v17 = *(_DWORD *)&v18[36];
      v16 = *(__m256i *)&v18[4];
      *(_OWORD *)(a1 + 56) = v19;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v18[40];
      *(_DWORD *)(a1 + 36) = v17;
      v5 = *(_OWORD *)v16.m256i_i8;
      *(_OWORD *)(a1 + 20) = *(_OWORD *)&v16.m256i_u64[2];
      *(_OWORD *)(a1 + 4) = v5;
      *(_DWORD *)a1 = (_DWORD)result;
      return result;
    }
  }
  else
  {
    selinux::SecurityContext::current(v18, 0LL);
    v6 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 != 10 )
    {
      v17 = *(_DWORD *)&v18[36];
      v16 = *(__m256i *)&v18[4];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v18[40];
      v10 = *(_OWORD *)v16.m256i_i8;
      v11 = *(_OWORD *)&v16.m256i_u64[2];
      v22 = v16;
      v23 = v17;
      *(_DWORD *)(a1 + 36) = v17;
      *(_OWORD *)(a1 + 20) = v11;
      *(_OWORD *)(a1 + 4) = v10;
      *(_DWORD *)a1 = v6;
      result = aGettingSecurit;
      *(_QWORD *)(a1 + 56) = aGettingSecurit;
      *(_QWORD *)(a1 + 64) = 47LL;
      return result;
    }
  }
  v20[0] = *(_OWORD *)&v18[8];
  v20[1] = *(_OWORD *)&v18[24];
  selinux::SecurityContext::to_c_string(v18, v20);
  v7 = *(_DWORD *)v18;
  if ( *(_DWORD *)v18 == 10 )
  {
    v21 = *(_OWORD *)&v18[16];
    if ( *(_QWORD *)&v18[8] == 2LL )
    {
      v9 = <alloc::ffi::c_str::CString as core::default::Default>::default();
      v16.m256i_i64[1] = v9;
      v16.m256i_i64[2] = v8;
      v16.m256i_i64[0] = 1LL;
    }
    else
    {
      *(_OWORD *)&v16.m256i_u64[1] = v21;
      v16.m256i_i64[0] = *(_QWORD *)&v18[8];
      v8 = *((_QWORD *)&v21 + 1);
      v9 = v21;
    }
    selinux::OpaqueSecurityContext::from_c_str(v18, v9, v8);
    if ( *(_DWORD *)v18 == 10 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)&v18[8];
      *(_DWORD *)a1 = 17;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v18[48];
      v14 = *(_OWORD *)v18;
      v15 = *(_OWORD *)&v18[16];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[32];
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)a1 = v14;
      *(_QWORD *)(a1 + 56) = aCreatingNewCon;
      *(_QWORD *)(a1 + 64) = 20LL;
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v16);
  }
  else
  {
    v12 = *(_DWORD *)&v18[4];
    v13 = *(_QWORD *)&v18[8];
    *(_OWORD *)v22.m256i_i8 = *(_OWORD *)&v18[16];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v18[48];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[32];
    v21 = *(_OWORD *)v22.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v22.m256i_i8;
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v12;
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 56) = aGettingSecurit_1;
    *(_QWORD *)(a1 + 64) = 24LL;
  }
  return (const char *)core::ptr::drop_in_place<selinux::SecurityContext>(v20);
}