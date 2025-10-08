__int64 __fastcall uu_runcon::get_custom_context(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v16; // eax
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r15
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  int v23; // ecx
  __int128 v24; // xmm0
  __int64 v25; // rcx
  const char *v26; // rdx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v30; // [rsp+8h] [rbp-80h] BYREF
  int v31; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v32[68]; // [rsp+14h] [rbp-74h]

  if ( !(unsigned __int8)uucore::features::selinux::is_selinux_enabled() )
  {
    *(_DWORD *)a1 = 11;
    return a1;
  }
  uu_runcon::get_initial_custom_opaque_context((__int64)&v31, a2, a11, a12);
  v16 = v31;
  if ( v31 != 17 )
  {
    v21 = *(_DWORD *)v32;
    v22 = *(_QWORD *)&v32[4];
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v32[60];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v32[44];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v32[28];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v32[12];
    *(_DWORD *)a1 = v16;
    *(_DWORD *)(a1 + 4) = v21;
    *(_QWORD *)(a1 + 8) = v22;
    return a1;
  }
  v30 = *(_QWORD *)&v32[4];
  if ( a3 )
  {
    uu_runcon::os_str_to_c_string(&v31, a3, a4);
    v17 = v31;
    if ( v31 != 17 )
      goto LABEL_22;
    v18 = *(_QWORD *)&v32[12];
    v19 = *(_QWORD *)&v32[4];
    selinux::OpaqueSecurityContext::set_user(&v31, &v30, *(_QWORD *)&v32[4], *(_QWORD *)&v32[12]);
    v20 = v31;
    if ( v31 != 10 )
    {
      v25 = 29LL;
      v26 = aSettingSecurit;
LABEL_27:
      *(_DWORD *)(a1 + 52) = *(_DWORD *)&v32[48];
      v27 = *(_OWORD *)v32;
      v28 = *(_OWORD *)&v32[16];
      *(_OWORD *)(a1 + 36) = *(_OWORD *)&v32[32];
      *(_OWORD *)(a1 + 20) = v28;
      *(_OWORD *)(a1 + 4) = v27;
      *(_DWORD *)a1 = v20;
      *(_QWORD *)(a1 + 56) = v26;
      *(_QWORD *)(a1 + 64) = v25;
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v19, v18);
      goto LABEL_28;
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v19, v18);
  }
  if ( !a5 )
    goto LABEL_11;
  uu_runcon::os_str_to_c_string(&v31, a5, a6);
  v17 = v31;
  if ( v31 != 17 )
    goto LABEL_22;
  v19 = *(_QWORD *)&v32[4];
  v18 = *(_QWORD *)&v32[12];
  selinux::OpaqueSecurityContext::set_role(&v31, &v30, *(_QWORD *)&v32[4], *(_QWORD *)&v32[12]);
  v20 = v31;
  if ( v31 != 10 )
  {
    v25 = 29LL;
    v26 = aSettingSecurit_0;
    goto LABEL_27;
  }
  core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v19, v18);
LABEL_11:
  if ( !a7 )
    goto LABEL_15;
  uu_runcon::os_str_to_c_string(&v31, a7, a8);
  v17 = v31;
  if ( v31 != 17 )
    goto LABEL_22;
  v19 = *(_QWORD *)&v32[4];
  v18 = *(_QWORD *)&v32[12];
  selinux::OpaqueSecurityContext::set_type(&v31, &v30, *(_QWORD *)&v32[4], *(_QWORD *)&v32[12]);
  v20 = v31;
  if ( v31 != 10 )
  {
    v25 = 29LL;
    v26 = aSettingSecurit_1;
    goto LABEL_27;
  }
  core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v19, v18);
LABEL_15:
  if ( a9 )
  {
    uu_runcon::os_str_to_c_string(&v31, a9, a10);
    v17 = v31;
    if ( v31 == 17 )
    {
      v19 = *(_QWORD *)&v32[4];
      v18 = *(_QWORD *)&v32[12];
      selinux::OpaqueSecurityContext::set_range(&v31, &v30, *(_QWORD *)&v32[4], *(_QWORD *)&v32[12]);
      v20 = v31;
      if ( v31 == 10 )
      {
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v19, v18);
        goto LABEL_19;
      }
      v25 = 30LL;
      v26 = aSettingSecurit_2;
      goto LABEL_27;
    }
LABEL_22:
    v23 = *(_DWORD *)v32;
    v24 = *(_OWORD *)&v32[4];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v32[20];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v32[36];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v32[52];
    *(_DWORD *)a1 = v17;
    *(_DWORD *)(a1 + 4) = v23;
    *(_OWORD *)(a1 + 8) = v24;
LABEL_28:
    core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v30);
    return a1;
  }
LABEL_19:
  *(_QWORD *)(a1 + 8) = v30;
  *(_DWORD *)a1 = 17;
  return a1;
}