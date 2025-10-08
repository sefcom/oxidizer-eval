__int64 __fastcall uu_runcon::get_plain_context(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _BYTE v12[56]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]

  if ( (unsigned __int8)uucore::features::selinux::is_selinux_enabled() )
  {
    uu_runcon::os_str_to_c_string(v12, a2, a3);
    v4 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 == 17 )
    {
      v5 = *(_QWORD *)&v12[8];
      v6 = *(_QWORD *)&v12[16];
      selinux::OpaqueSecurityContext::from_c_str(v12, *(_QWORD *)&v12[8], *(_QWORD *)&v12[16]);
      if ( *(_DWORD *)v12 == 10 )
      {
        *(_QWORD *)(a1 + 8) = *(_QWORD *)&v12[8];
        *(_DWORD *)a1 = 17;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = *(_QWORD *)&v12[48];
        v9 = *(_OWORD *)v12;
        v10 = *(_OWORD *)&v12[16];
        *(_OWORD *)(a1 + 32) = *(_OWORD *)&v12[32];
        *(_OWORD *)(a1 + 16) = v10;
        *(_OWORD *)a1 = v9;
        *(_QWORD *)(a1 + 56) = aCreatingNewCon;
        *(_QWORD *)(a1 + 64) = 20LL;
      }
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v5, v6);
    }
    else
    {
      v7 = *(_DWORD *)&v12[4];
      v8 = *(_OWORD *)&v12[8];
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v12[24];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v12[40];
      *(_OWORD *)(a1 + 56) = v13;
      *(_DWORD *)a1 = v4;
      *(_DWORD *)(a1 + 4) = v7;
      *(_OWORD *)(a1 + 8) = v8;
    }
  }
  else
  {
    *(_DWORD *)a1 = 11;
  }
  return a1;
}