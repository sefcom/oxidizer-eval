__int64 __fastcall uu_runcon::print_current_context(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v10[56]; // [rsp+8h] [rbp-D0h] BYREF
  __m256i v11; // [rsp+40h] [rbp-98h] BYREF
  int v12; // [rsp+60h] [rbp-78h]
  __m256i v13; // [rsp+70h] [rbp-68h] BYREF
  int v14; // [rsp+90h] [rbp-48h]
  __int128 v15; // [rsp+A0h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+B0h] [rbp-28h] BYREF
  __int128 v17; // [rsp+C0h] [rbp-18h]

  selinux::SecurityContext::current(v10, 0LL);
  v1 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 != 10 )
  {
    v14 = *(_DWORD *)&v10[36];
    v13 = *(__m256i *)&v10[4];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v10[40];
    v3 = *(_OWORD *)v13.m256i_i8;
    v4 = *(_OWORD *)&v13.m256i_u64[2];
    v11 = v13;
    v12 = v14;
    *(_DWORD *)(a1 + 36) = v14;
    *(_OWORD *)(a1 + 20) = v4;
    *(_OWORD *)(a1 + 4) = v3;
    *(_DWORD *)a1 = v1;
    *(_QWORD *)(a1 + 56) = aGettingSecurit;
    *(_QWORD *)(a1 + 64) = 47LL;
    return a1;
  }
  v13 = *(__m256i *)&v10[8];
  selinux::SecurityContext::to_c_string(v10, &v13);
  v2 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 == 10 )
  {
    v17 = *(_OWORD *)&v10[16];
    if ( *(_QWORD *)&v10[8] == 2LL )
    {
      *(_QWORD *)v10 = &off_EBBE8;
      *(_QWORD *)&v10[8] = 1LL;
      *(_QWORD *)&v10[16] = 8LL;
      *(_OWORD *)&v10[24] = 0LL;
      std::io::stdio::_print(v10);
LABEL_10:
      *(_DWORD *)a1 = 17;
      goto LABEL_11;
    }
    v11.m256i_i64[0] = *(_QWORD *)&v10[8];
    *(_OWORD *)&v11.m256i_u64[1] = v17;
    core::ffi::c_str::CStr::to_str(v10, v17, *((_QWORD *)&v17 + 1));
    v8 = *(_QWORD *)&v10[8];
    v9 = *(_QWORD *)&v10[16];
    if ( *(_DWORD *)v10 != 1 )
    {
      v16[0] = *(_QWORD *)&v10[8];
      v16[1] = *(_QWORD *)&v10[16];
      *(_QWORD *)&v15 = v16;
      *((_QWORD *)&v15 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v10 = &unk_EBC08;
      *(_QWORD *)&v10[8] = 2LL;
      *(_QWORD *)&v10[16] = &v15;
      *(_OWORD *)&v10[24] = 1uLL;
      std::io::stdio::_print(v10);
      core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v11);
      goto LABEL_10;
    }
    *(_DWORD *)a1 = 12;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v9;
    core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v11);
  }
  else
  {
    v6 = *(_DWORD *)&v10[4];
    v7 = *(_QWORD *)&v10[8];
    *(_OWORD *)v11.m256i_i8 = *(_OWORD *)&v10[16];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v10[48];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v10[32];
    v15 = *(_OWORD *)v11.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v11.m256i_i8;
    *(_DWORD *)a1 = v2;
    *(_DWORD *)(a1 + 4) = v6;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 56) = aGettingSecurit;
    *(_QWORD *)(a1 + 64) = 47LL;
  }
LABEL_11:
  core::ptr::drop_in_place<selinux::SecurityContext>(&v13);
  return a1;
}