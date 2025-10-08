__int64 __fastcall uu_chcon::change_file_context(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 result; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r8
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __m128 v26; // xmm0
  __int64 v27; // rbp
  int v28; // eax
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rbp
  __int64 v32; // r12
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  int v37; // ecx
  __int128 v38; // xmm0
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // [rsp+0h] [rbp-1B8h]
  _BYTE v42[72]; // [rsp+8h] [rbp-1B0h] BYREF
  __m256i v43; // [rsp+50h] [rbp-168h] BYREF
  __int128 v44; // [rsp+70h] [rbp-148h]
  __int64 v45; // [rsp+80h] [rbp-138h]
  __int128 v46; // [rsp+90h] [rbp-128h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-118h]
  unsigned int v48; // [rsp+ACh] [rbp-10Ch]
  __int128 v49; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-F8h]
  __m256i v51; // [rsp+D0h] [rbp-E8h] BYREF
  int v52; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+100h] [rbp-B8h]
  __int64 v54; // [rsp+108h] [rbp-B0h]
  __int128 v55; // [rsp+140h] [rbp-78h]
  int v56; // [rsp+150h] [rbp-68h] BYREF
  __int64 v57; // [rsp+158h] [rbp-60h]

  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 != 0x8000000000000001LL && v7 != 0x8000000000000002LL )
  {
    v48 = *(unsigned __int8 *)(a2 + 122);
    selinux::SecurityContext::of_path(v42, a4, a5);
    if ( *(_DWORD *)v42 != 10 )
    {
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v42[48];
      v11 = *(_OWORD *)v42;
      v12 = *(_OWORD *)&v42[16];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v42[32];
      *(_OWORD *)(a1 + 16) = v12;
      *(_OWORD *)a1 = v11;
      result = (__int64)aGettingSecurit_0;
      *(_QWORD *)(a1 + 56) = aGettingSecurit_0;
      *(_QWORD *)(a1 + 64) = 24LL;
      return result;
    }
    if ( *(_DWORD *)&v42[8] == 2 )
      return uu_chcon::errors::Error::from_io1(a1, aApplyingPartia, 51LL, a4, a5);
    v51 = *(__m256i *)&v42[8];
    selinux::SecurityContext::to_c_string(&v43, &v51);
    if ( v43.m256i_i32[0] != 10 )
    {
      *(_QWORD *)(a1 + 48) = v45;
      v18 = *(_OWORD *)v43.m256i_i8;
      v19 = *(_OWORD *)&v43.m256i_u64[2];
      *(_OWORD *)(a1 + 32) = v44;
      *(_OWORD *)(a1 + 16) = v19;
      *(_OWORD *)a1 = v18;
      *(_QWORD *)(a1 + 56) = aGettingSecurit_0;
      *(_QWORD *)(a1 + 64) = 24LL;
      return core::ptr::drop_in_place<selinux::SecurityContext>(&v51);
    }
    if ( v43.m256i_i32[2] == 2 )
    {
      uu_chcon::errors::Error::from_io1(v42, aApplyingPartia, 51LL, a4, a5);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v42[64];
      v13 = *(_OWORD *)v42;
      v14 = *(_OWORD *)&v42[16];
      v15 = *(_OWORD *)&v42[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v42[48];
      *(_OWORD *)(a1 + 32) = v15;
      *(_OWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      return core::ptr::drop_in_place<selinux::SecurityContext>(&v51);
    }
    v50 = v43.m256i_i64[3];
    v49 = *(_OWORD *)&v43.m256i_u64[1];
    v55 = *(_OWORD *)&v43.m256i_u64[2];
    selinux::OpaqueSecurityContext::from_c_str(&v56);
    if ( v56 == 10 )
    {
      v20 = v57;
    }
    else
    {
      uu_chcon::change_file_context::{{closure}}(v42, a4, a5, &v56);
      v21 = (__m128)*(unsigned __int64 *)v42;
      v20 = *(_QWORD *)&v42[8];
      v43 = *(__m256i *)&v42[16];
      v44 = *(_OWORD *)&v42[48];
      v45 = *(_QWORD *)&v42[64];
      if ( *(_DWORD *)v42 != 18 )
      {
        *(_QWORD *)(a1 + 64) = v45;
        v24 = *(_OWORD *)v43.m256i_i8;
        v25 = *(_OWORD *)&v43.m256i_u64[2];
        *(_OWORD *)(a1 + 48) = v44;
        *(_OWORD *)(a1 + 32) = v25;
        *(_OWORD *)(a1 + 16) = v24;
        _mm_storel_ps((double *)a1, v21);
        *(_QWORD *)(a1 + 8) = v20;
LABEL_53:
        core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v49);
        return core::ptr::drop_in_place<selinux::SecurityContext>(&v51);
      }
    }
    *(_QWORD *)&v46 = v20;
    if ( v7 != 0x8000000000000000LL )
    {
      uu_chcon::os_str_to_c_string(&v52, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      if ( v52 == 18 )
      {
        v22 = v53;
        v23 = v54;
      }
      else
      {
        uu_chcon::change_file_context::{{closure}}(v42, a4, a5, &v52);
        v26 = (__m128)*(unsigned __int64 *)v42;
        v22 = *(_QWORD *)&v42[8];
        v23 = *(_QWORD *)&v42[16];
        v43 = *(__m256i *)&v42[24];
        v44 = *(_OWORD *)&v42[56];
        if ( *(_DWORD *)v42 != 18 )
          goto LABEL_50;
      }
      v41 = v22;
      v27 = v23;
      selinux::OpaqueSecurityContext::set_user(v42, &v46, v22, v23);
      v28 = *(_DWORD *)v42;
      if ( *(_DWORD *)v42 != 10 )
        goto LABEL_49;
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v41, v27);
    }
    if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL )
    {
      uu_chcon::os_str_to_c_string(&v52, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
      if ( v52 == 18 )
      {
        v22 = v53;
        v23 = v54;
      }
      else
      {
        uu_chcon::change_file_context::{{closure}}(v42, a4, a5, &v52);
        v26 = (__m128)*(unsigned __int64 *)v42;
        v22 = *(_QWORD *)&v42[8];
        v23 = *(_QWORD *)&v42[16];
        v43 = *(__m256i *)&v42[24];
        v44 = *(_OWORD *)&v42[56];
        if ( *(_DWORD *)v42 != 18 )
          goto LABEL_50;
      }
      v41 = v22;
      v27 = v23;
      selinux::OpaqueSecurityContext::set_role(v42, &v46, v22, v23);
      v28 = *(_DWORD *)v42;
      if ( *(_DWORD *)v42 != 10 )
        goto LABEL_49;
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v41, v27);
    }
    if ( *(_QWORD *)(a2 + 72) == 0x8000000000000000LL )
    {
LABEL_40:
      if ( *(_QWORD *)(a2 + 96) == 0x8000000000000000LL )
      {
LABEL_46:
        selinux::OpaqueSecurityContext::to_c_string(v42, &v46);
        v29 = *(_DWORD *)v42;
        if ( *(_DWORD *)v42 == 10 )
        {
          v30 = *(_QWORD *)&v42[8];
          v31 = *(_QWORD *)&v42[16];
          v32 = *(_QWORD *)&v42[16] - 1LL;
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                  v55,
                                  *((_QWORD *)&v55 + 1) - 1LL,
                                  *(_QWORD *)&v42[8],
                                  *(_QWORD *)&v42[16] - 1LL) )
          {
            *(_DWORD *)a1 = 18;
          }
          else
          {
            v43.m256i_i64[2] = v30;
            v43.m256i_i64[0] = 1LL;
            v43.m256i_i64[1] = v32;
            v43.m256i_i16[12] = 0;
            selinux::SecurityContext::set_for_path(v42, v30, a4, a5, v48);
            if ( *(_DWORD *)v42 == 10 )
            {
              *(_DWORD *)a1 = 18;
            }
            else
            {
              *(_QWORD *)(a1 + 48) = *(_QWORD *)&v42[48];
              v39 = *(_OWORD *)v42;
              v40 = *(_OWORD *)&v42[16];
              *(_OWORD *)(a1 + 32) = *(_OWORD *)&v42[32];
              *(_OWORD *)(a1 + 16) = v40;
              *(_OWORD *)a1 = v39;
              *(_QWORD *)(a1 + 56) = aSettingSecurit_0;
              *(_QWORD *)(a1 + 64) = 24LL;
            }
            core::ptr::drop_in_place<selinux::SecurityContext>(&v43);
          }
          core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v30, v31);
          core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v46);
          goto LABEL_53;
        }
        v37 = *(_DWORD *)&v42[4];
        v38 = *(_OWORD *)&v42[8];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v42[24];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v42[40];
        *(_DWORD *)a1 = v29;
        *(_DWORD *)(a1 + 4) = v37;
        *(_OWORD *)(a1 + 8) = v38;
        *(_QWORD *)(a1 + 56) = aGettingSecurit_0;
        *(_QWORD *)(a1 + 64) = 24LL;
        goto LABEL_52;
      }
      uu_chcon::os_str_to_c_string(&v52, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 112));
      if ( v52 == 18 )
      {
        v22 = v53;
        v23 = v54;
        goto LABEL_44;
      }
      uu_chcon::change_file_context::{{closure}}(v42, a4, a5, &v52);
      v26 = (__m128)*(unsigned __int64 *)v42;
      v22 = *(_QWORD *)&v42[8];
      v23 = *(_QWORD *)&v42[16];
      v43 = *(__m256i *)&v42[24];
      v44 = *(_OWORD *)&v42[56];
      if ( *(_DWORD *)v42 == 18 )
      {
LABEL_44:
        v41 = v22;
        v27 = v23;
        selinux::OpaqueSecurityContext::set_range(v42, &v46, v22, v23);
        v28 = *(_DWORD *)v42;
        if ( *(_DWORD *)v42 == 10 )
        {
          core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v41, v27);
          goto LABEL_46;
        }
        goto LABEL_49;
      }
LABEL_50:
      v35 = *(_OWORD *)v43.m256i_i8;
      v36 = *(_OWORD *)&v43.m256i_u64[2];
      *(_OWORD *)(a1 + 56) = v44;
      *(_OWORD *)(a1 + 40) = v36;
      *(_OWORD *)(a1 + 24) = v35;
      _mm_storel_ps((double *)a1, v26);
      *(_QWORD *)(a1 + 8) = v22;
      *(_QWORD *)(a1 + 16) = v23;
      goto LABEL_52;
    }
    uu_chcon::os_str_to_c_string(&v52, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v52 == 18 )
    {
      v22 = v53;
      v23 = v54;
    }
    else
    {
      uu_chcon::change_file_context::{{closure}}(v42, a4, a5, &v52);
      v26 = (__m128)*(unsigned __int64 *)v42;
      v22 = *(_QWORD *)&v42[8];
      v23 = *(_QWORD *)&v42[16];
      v43 = *(__m256i *)&v42[24];
      v44 = *(_OWORD *)&v42[56];
      if ( *(_DWORD *)v42 != 18 )
        goto LABEL_50;
    }
    v41 = v22;
    v27 = v23;
    selinux::OpaqueSecurityContext::set_type(v42, &v46, v22, v23);
    v28 = *(_DWORD *)v42;
    if ( *(_DWORD *)v42 == 10 )
    {
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v41, v27);
      goto LABEL_40;
    }
LABEL_49:
    *(_DWORD *)(a1 + 52) = *(_DWORD *)&v42[52];
    v33 = *(_OWORD *)&v42[4];
    v34 = *(_OWORD *)&v42[20];
    *(_OWORD *)(a1 + 36) = *(_OWORD *)&v42[36];
    *(_OWORD *)(a1 + 20) = v34;
    *(_OWORD *)(a1 + 4) = v33;
    *(_DWORD *)a1 = v28;
    *(_QWORD *)(a1 + 56) = aSettingSecurit;
    *(_QWORD *)(a1 + 64) = 29LL;
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v41, v27);
LABEL_52:
    core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v46);
    goto LABEL_53;
  }
  uu_chcon::SELinuxSecurityContext::to_c_string(v42, a3);
  result = *(unsigned int *)v42;
  if ( *(_DWORD *)v42 == 18 )
  {
    *(__int64 *)((char *)&v51.m256i_i64[2] + 4) = *(_QWORD *)&v42[24];
    *(_OWORD *)((char *)v51.m256i_i64 + 4) = *(_OWORD *)&v42[8];
    v46 = *(_OWORD *)&v42[8];
    v47 = *(_QWORD *)&v42[24];
    if ( *(_DWORD *)&v42[8] == 2 )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<core::ffi::c_str::CStr>>>(&v46);
      return uu_chcon::errors::Error::from_io1(a1, aSettingSecurit_0, 24LL, a4, a5);
    }
    else
    {
      v50 = *(__int64 *)((char *)&v51.m256i_i64[2] + 4);
      v49 = *(_OWORD *)((char *)v51.m256i_i64 + 4);
      v43.m256i_i64[2] = *(__int64 *)((char *)&v51.m256i_i64[1] + 4);
      v43.m256i_i64[0] = 1LL;
      v43.m256i_i64[1] = *(__int64 *)((char *)&v51.m256i_i64[2] + 4) - 1;
      v43.m256i_i16[12] = 0;
      selinux::SecurityContext::set_for_path(
        v42,
        *(__int64 *)((char *)&v51.m256i_i64[1] + 4),
        a4,
        a5,
        *(unsigned __int8 *)(a2 + 122));
      if ( *(_DWORD *)v42 == 10 )
      {
        *(_DWORD *)a1 = 18;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = *(_QWORD *)&v42[48];
        v16 = *(_OWORD *)v42;
        v17 = *(_OWORD *)&v42[16];
        *(_OWORD *)(a1 + 32) = *(_OWORD *)&v42[32];
        *(_OWORD *)(a1 + 16) = v17;
        *(_OWORD *)a1 = v16;
        *(_QWORD *)(a1 + 56) = aSettingSecurit_0;
        *(_QWORD *)(a1 + 64) = 24LL;
      }
      core::ptr::drop_in_place<selinux::SecurityContext>(&v43);
      return core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v49);
    }
  }
  else
  {
    v9 = *(_OWORD *)&v42[32];
    v10 = *(_OWORD *)&v42[48];
    *(_OWORD *)((char *)&v51.m256i_u64[1] + 4) = *(_OWORD *)&v42[16];
    *(_OWORD *)v51.m256i_i8 = *(_OWORD *)&v42[4];
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v42[64];
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v51.m256i_u64[1] + 4);
    *(_OWORD *)(a1 + 4) = *(_OWORD *)v51.m256i_i8;
    *(_DWORD *)a1 = result;
  }
  return result;
}